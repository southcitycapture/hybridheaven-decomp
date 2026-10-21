"""The swarm's Claude usage caps for right now, shaped around Zach's work week (queue/loop/schedule.json).

    python3 tools/swarm/weekly_cap.py weekly FALLBACK   print the weekly-meter cap now (min of FALLBACK and the schedule)
    python3 tools/swarm/weekly_cap.py five FALLBACK     print the 5-hour-window cap now (min of FALLBACK and the schedule)
    python3 tools/swarm/weekly_cap.py show              print the schedule, hour by hour over one week

Zach's weekly meter resets Mon 19:00 ET, just after his workday, and he needs the Claude budget for real work
Mon-Fri (2026-10-21: "be careful with our limits on weeks with... actually work"). So the weekly cap is a ramp over
the week instead of one fixed number: slow Mon-Fri, opening up Fri evening, near the top before the Monday reset
(budget left at the reset is lost). Points are (hours since the reset, max weekly %), linear between them. The
5-hour cap is lower in work hours so Zach's own session always has room; Opus runs in flight carry it 20-30 points
past the cap (2026-10-21: 16 Opus workers took a cap of 90 to 100 %).

Before `start` (UTC) the schedule is off and FALLBACK is printed unchanged. Run by run_batch3.sh, resume.sh, loop.py.
"""
import datetime as dt, json, os, sys
from zoneinfo import ZoneInfo

HERE = os.path.dirname(os.path.abspath(__file__))
SCHEDULE = os.path.join(HERE, "../../queue/loop/schedule.json")
DEFAULT = {
    "start": "2026-10-26T23:00:00Z",          # Mon 2026-10-26 19:00 ET: the first standard week
    "tz": "America/New_York",
    "reset": [0, 19],                         # weekday (Mon=0), hour: when the weekly meter resets, local time
    # Mon 19:00 -> Fri 18:00 (95 h): up to 35 %; Fri 18:00 -> Mon 09:00 (158 h): up to 88 %; Mon 18:30: 96 %
    "weekly": [[0, 0], [95, 35], [158, 88], [167.5, 96]],
    "work_hours": [0, 4, 9, 19],              # Mon-Fri 09:00-19:00 local
    "five_work": 40, "five_other": 85,
}


def schedule():
    try: return dict(DEFAULT, **json.load(open(SCHEDULE)))
    except (OSError, ValueError): return DEFAULT


def active(s, now):
    return now >= dt.datetime.fromisoformat(s["start"].replace("Z", "+00:00"))


def meter_reset(now):
    """The weekly reset time the usage meter last reported (usage-gate's cache, no extra API call), or None. Preferred
    over the local-time rule: whether the reset follows US daylight saving is not known."""
    try:
        d = json.load(open(os.path.expanduser("~/.cache/usage-gate.json")))["data"]["seven_day"]["resets_at"]
        r = dt.datetime.fromisoformat(d.replace("Z", "+00:00"))
    except (OSError, ValueError, KeyError, TypeError):
        return None
    return r if now < r <= now + dt.timedelta(days=7) else None


def hours_since_reset(s, now):
    r = meter_reset(now) if now.tzinfo and abs((now - dt.datetime.now(dt.timezone.utc)).total_seconds()) < 60 else None
    if r: return 168 - (r - now).total_seconds() / 3600
    local = now.astimezone(ZoneInfo(s["tz"]))
    day, hour = s["reset"]
    last = (local - dt.timedelta(days=(local.weekday() - day) % 7)).replace(hour=hour, minute=0, second=0, microsecond=0)
    if last > local: last -= dt.timedelta(days=7)
    return (local - last).total_seconds() / 3600


def weekly_cap(s, now):
    h, pts = hours_since_reset(s, now), s["weekly"]
    for (h0, c0), (h1, c1) in zip(pts, pts[1:]):
        if h <= h1: return c0 + (c1 - c0) * (h - h0) / (h1 - h0)
    return pts[-1][1]


def five_cap(s, now):
    local = now.astimezone(ZoneInfo(s["tz"]))
    d0, d1, h0, h1 = s["work_hours"]
    work = d0 <= local.weekday() <= d1 and h0 <= local.hour < h1
    return s["five_work"] if work else s["five_other"]


def cap(kind, fallback, now=None):
    """The cap for `kind` ("weekly" or "five") now: min(fallback, schedule) once the schedule is active."""
    s, now = schedule(), now or dt.datetime.now(dt.timezone.utc)
    if not active(s, now): return fallback
    return min(fallback, int(weekly_cap(s, now) if kind == "weekly" else five_cap(s, now)))


if __name__ == "__main__":
    if sys.argv[1] == "show":
        s = schedule(); t = dt.datetime.fromisoformat(s["start"].replace("Z", "+00:00"))
        print("schedule starts %s (%s)" % (s["start"], t.astimezone(ZoneInfo(s["tz"])).strftime("%a %Y-%m-%d %H:%M %Z")))
        for k in range(0, 169, 6):
            u = t + dt.timedelta(hours=k)
            print("  %s  weekly cap %3d%%  5-hour cap %d%%" % (u.astimezone(ZoneInfo(s["tz"])).strftime("%a %H:%M"),
                                                          int(weekly_cap(s, u)), five_cap(s, u)))
    else:
        print(cap(sys.argv[1], int(float(sys.argv[2]))))
