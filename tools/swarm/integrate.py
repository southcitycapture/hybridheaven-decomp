"""Integrate a batch's verified matches: srcbuild adds those that work in their file context to the
registry, then one full build confirms the ROM still matches. Serialized with a lock."""
import fcntl, os, subprocess, sys
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
lock = open("build/.integrate.lock", "w"); fcntl.flock(lock, fcntl.LOCK_EX)
r = subprocess.run([sys.executable, "tools/hh/srcbuild.py", "add"] + sys.argv[1:], capture_output=True, text=True)
print(r.stdout.strip()); print(r.stderr.strip()[-2000:]) if r.returncode else None
b = subprocess.run("make -j6 2>&1 | tail -2", shell=True, capture_output=True, text=True, executable="/bin/bash")
ok = "hybridheaven.z64: OK" in b.stdout
print("ROM matches" if ok else "ROM DOES NOT MATCH:\n" + b.stdout)
sys.exit(0 if ok and r.returncode == 0 else 1)   # the loop checks this (a crashed srcbuild used to pass as "ROM matches")
