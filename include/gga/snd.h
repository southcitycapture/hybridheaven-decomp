#ifndef GGA_SND_H
#define GGA_SND_H

/* Konami's sound driver (KCE Osaka), shared by Hybrid Heaven and Goemon's Great Adventure.
 * Types from the Goemon's Great Adventure decomp, CC0-1.0,
 * https://github.com/PandaPandel/Goemons-Great-Adventure-Decomp (include/snd.h); the layout is
 * confirmed by matched HH code (main/func_80023174 = GGA trkUpdate and the sndtrack/sndcmd functions).
 * Only types are given here: HH still names its globals by address (queue/gga_names.tsv maps them),
 * e.g. gSndCurTrack = D_800CBDA4 (SndTrack *), gSndCurTrackIndex = D_800CBAB4 (u8),
 * gSndTicks = D_800CBAB2 (u16), gSndParamStepTable = D_80047FD0 (s16[3]). */

#include "common.h"

#define SND_TRACKS 16
#define SND_BANKS 4
#define SND_REQUESTS 8

typedef struct SndTrack {
    /* 0x00 */ u32 id; /* the sound playing (low 15 bits) */
    /* 0x04 */ u8 prio; /* the playing sound's priority */
    /* 0x05 */ u8 startDelay;
    /* 0x06 */ u8 flags;
    /* 0x07 */ u8 unused7;
    /* 0x08 */ u8 *data; /* the channel's commands */
    /* 0x0C */ u8 bank;
    /* 0x0D */ u8 inst;
    /* 0x0E */ u8 voiceOn; /* the voice is on */
    /* 0x0F */ u8 voiceStopTicks;
    /* 0x10 */ u8 fxmix;
    /* 0x11 */ u8 pad11[0x3];
    /* 0x14 */ void *wave; /* ALWaveTable * */
    /* 0x18 */ u16 tempo; /* the tempo, 8.8 */
    /* 0x1A */ u16 tempoAcc;
    /* 0x1C */ u8 tempoSlideTarget; /* a tempo slide's target */
    /* 0x1D */ u8 tempoSlideTicks; /* and ticks left */
    /* 0x1E */ s16 tempoSlideStep; /* and step */
    /* 0x20 */ u8 lastLength; /* the note's length, as last given (trkNextNote) */
    /* 0x21 */ u8 waitTicks; /* and as played */
    /* 0x22 */ u8 gate; /* the gate, in 128ths of the length (0: a tie) */
    /* 0x23 */ u8 lastGate; /* the gate, as last given */
    /* 0x24 */ u8 noteTicks; /* the note's length left (music) */
    /* 0x25 */ u8 key; /* the note's key (0x48 and up: a drum, played at 0x3C) */
    /* 0x26 */ u8 pad26[0x2];
    /* 0x28 */ s32 note; /* in 1/256 semitones: the key plus the five offsets below */
    /* 0x2C */ s16 instTune;
    /* 0x2E */ s16 transpose;
    /* 0x30 */ s16 detune;
    /* 0x32 */ s16 loopDetune;
    /* 0x34 */ s16 loop2Detune;
    /* 0x36 */ s16 vibratoOffset;
    /* 0x38 */ u16 wobbleOffset;
    /* 0x3A */ u16 volume;
    /* 0x3C */ u8 pad3C[0x4];
    /* 0x40 */ s16 loopVelocity;
    /* 0x42 */ s16 loop2Velocity;
    /* 0x44 */ s16 volSlideStep; /* a volume slide's step */
    /* 0x46 */ u8 volSlideTarget; /* and target */
    /* 0x47 */ u8 volSlideTicks; /* and ticks left */
    /* 0x48 */ u8 velocity;
    /* 0x49 */ u8 envState; /* 0 attack, 1 decay, 2 sustain, 3 release */
    /* 0x4A */ u16 envLevel;
    /* 0x4C */ u16 envTicks; /* until the next state */
    /* 0x4E */ u16 envAttack;
    /* 0x50 */ u16 envDecay;
    /* 0x52 */ u16 envSustain;
    /* 0x54 */ u16 envDecayLevel;
    /* 0x56 */ u16 envRelease;
    /* 0x58 */ u16 pan; /* the expression; 0x8000: given by the sound's id */
    /* 0x5A */ u8 panSlideTarget;  /* an expression slide's target */
    /* 0x5B */ u8 panSlideTicks;  /* and ticks left */
    /* 0x5C */ s16 panSlideStep; /* and step */
    /* 0x5E */ u8 loopPass;
    /* 0x5F */ u8 unused5F;
    /* 0x60 */ u8 *loopStart;
    /* 0x64 */ u8 loop2Pass;
    /* 0x65 */ u8 pad65[0x3];
    /* 0x68 */ u8 *loop2Start;
    /* 0x6C */ u8 *mark;
    /* 0x70 */ u8 repeatState;
    /* 0x71 */ u8 pad71[0x3];
    /* 0x74 */ u8 *repeatStart;
    /* 0x78 */ u8 *repeatReturn;
    /* 0x7C */ u8 portaDelay; /* a portamento's delay */
    /* 0x7D */ u8 portaTicks; /* and length (ticks) */
    /* 0x7E */ u8 pad7E[0x2];
    /* 0x80 */ s32 portaTarget; /* and target note */
    /* 0x84 */ s32 portaStep; /* and step per tick (a new note first stores the old note here) */
    /* 0x88 */ u8 bendDelay;
    /* 0x89 */ u8 bendTicks;
    /* 0x8A */ s16 bendAmount;
    /* 0x8C */ u8 glideOn;
    /* 0x8D */ u8 wobbleNoisePos;
    /* 0x8E */ u16 wobbleMask;
    /* 0x90 */ u16 wobblePhase;
    /* 0x92 */ u8 wobbleSpeed;
    /* 0x93 */ u8 vibratoDelay; /* vibrato: its delay */
    /* 0x94 */ u8 vibratoDelayLeft; /* and delay left */
    /* 0x95 */ u8 vibratoSpeed; /* its phase step */
    /* 0x96 */ u16 vibratoPhase; /* its phase */
    /* 0x98 */ u8 vibratoWavePos;
    /* 0x99 */ u8 vibratoWaveStep; /* its phase step's shift (1, 2, 4, 8 or 0x10) */
    /* 0x9A */ u16 vibratoDepth; /* its depth */
    /* 0x9C */ u16 vibratoCurDepth; /* its depth now (rising over unk9E ticks) */
    /* 0x9E */ u8 vibratoRiseTicks; /* the depth's rise, in ticks */
    /* 0x9F */ u8 vibratoRiseLeft; /* and ticks left */
    /* 0xA0 */ u16 vibratoRiseStep; /* and step */
    /* 0xA2 */ s16 param[3]; /* set by parameter changes, by kind */
    /* 0xA8 */ s16 param0[3]; /* the sequence's values, by kind (the third adds to the pan) */
    /* 0xAE */ u8 padAE[0x2];
    /* 0xB0 */ f32 pitch;
    /* 0xB4 */ s16 voiceVol;
    /* 0xB6 */ u16 voiceVolTicks;
    /* 0xB8 */ u8 scale[3]; /* by kind: 0, or tenths */
    /* 0xBB */ s8 base[3];
    /* 0xBE */ u8 stopFadeLevel; /* a volume scale, decaying by unkBF each step */
    /* 0xBF */ u8 stopFadeStep;
    /* 0xC0 */ s16 slideTarget[3]; /* slides, by kind (sndStartSlide) */
    /* 0xC6 */ s16 slide[3];
    /* 0xCC */ s16 slideStep[3];
    /* 0xD2 */ u8 slideTicks[3];
    /* 0xD5 */ u8 stateMuted;
    /* 0xD6 */ u8 noCrossfade;
    /* 0xD7 */ u8 unusedD7;
} SndTrack; /* size 0xD8 in HH (GGA's has a u16 fadeLevel at 0xD8, size 0xDC; HH's loops step 0xD8) */

typedef struct SndFade {
    /* 0x0 */ s16 rate;
    /* 0x2 */ u16 level;
} SndFade;

/* An event from the music to the game (commands 0xFA-0xFE), queued up to 8 at 0x800C36C0. */
typedef struct SndEvent {
    /* 0x0 */ u16 sound; /* the event number's sound (the table at 0x8003A510) */
    /* 0x2 */ u8 kind;   /* 0-4, by command */
    /* 0x3 */ u8 arg;
    /* 0x4 */ s16 value;
} SndEvent; /* size 0x6 */

/* A random variation (gSndVariationTable, 0x80039190: 8 per group): the request's low id, and
 * each parameter's maximum. */
typedef struct SndLimit {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 max[3]; /* the first is in 256ths */
} SndLimit; /* size 0x6 */

/* A random variation to play (command 0xF9), queued up to 4 at 0x800C3638 with the track's
 * slides; audio.c's sndServeMusicChanges serves it. */
typedef struct SndSpawn {
    /* 0x00 */ u16 r;      /* the random number drawn: bits 0-2 the three signs, then the three
                            * parameters, overlapping */
    /* 0x02 */ u8 pad2[0x2];
    /* 0x04 */ SndLimit *lim; /* the variation */
    /* 0x08 */ u16 sound;  /* the track's id >> 16: the request's high id */
    /* 0x0A */ s16 slideTarget[3];
    /* 0x10 */ s16 slide[3];
    /* 0x16 */ s16 slideStep[3];
    /* 0x1C */ u8 slideTicks[3];
    /* 0x1F */ u8 unused1F;
} SndSpawn; /* size 0x20 */

typedef struct SndRamp {
    /* 0x0 */ u16 rate; /* its high byte is a speed: 4 - it scales the envelope's time */
    /* 0x2 */ u16 level;
} SndRamp;

/* The request side's types (GGA src/audio.c). */
typedef struct SndParam {
    /* 0x0 */ u16 id;
    /* 0x2 */ s16 value;
    /* 0x4 */ u8 kind;
} SndParam; /* size 0x6 */

typedef struct SndRange {
    /* 0x0 */ s16 min;
    /* 0x2 */ s16 max;
} SndRange;

typedef struct SndSe {
    /* 0x0 */ u8 prio;  /* low 5 bits: priority */
    /* 0x1 */ u8 flags; /* high nibble: track - 15 */
    /* 0x2 */ u8 pad2[2];
    /* 0x4 */ u8 *data;
} SndSe; /* size 0x8 */

typedef struct SndCmd {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 kind;
    /* 0x3 */ u8 ticks;
    /* 0x4 */ s16 target;
} SndCmd; /* size 0x6 */

typedef struct SndJingle {
    /* 0x0 */ u8 count;
    /* 0x1 */ u8 bank;
    /* 0x2 */ u8 pad2[2];
    /* 0x4 */ u8 **channels;
} SndJingle; /* size 0x8 */

typedef struct SndSeq {
    /* 0x0 */ u8 count; /* channels */
    /* 0x1 */ u8 firstTrack;
    /* 0x2 */ u8 prio;
    /* 0x3 */ u8 bank;
    /* 0x04 */ u8 startDelay;
    /* 0x08 */ u8 **channels;
    /* 0x0C */ s16 param0[3];
    /* 0x12 */ s16 slideTarget[3];
    /* 0x18 */ s16 slide[3];
    /* 0x1E */ s16 slideStep[3];
    /* 0x24 */ u8 slideTicks[3];
} SndSeq;

#endif
