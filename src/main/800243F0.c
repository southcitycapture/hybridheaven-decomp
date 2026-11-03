#define func_80026140 func_80026140__merge_frozen
#include "common.h"


struct func_800243F0_Struct {
    u8 pad[0x18];
    s16 unk18;
    u8 pad2[0x1D - 0x1A];
    u8 unk1D;
};

extern u8 *D_800CBDA0;
extern struct func_800243F0_Struct *D_800CBDA4;

/* GGA: sndCmdTempo */
void func_800243F0(void) {
    D_800CBDA4->unk18 = (s16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
    D_800CBDA4->unk1D = 0;
}


struct func_8002442C_Struct {
    u8 pad0[0x18];
    u16 unk18;
    u8 pad1[0x2];
    u8 unk1C;
    u8 unk1D;
    s16 unk1E;
};

/* GGA: sndCmdTempoSlide */
void func_8002442C(void) {
    struct func_8002442C_Struct *s;
    s32 q;

    ((struct func_8002442C_Struct *) D_800CBDA4)->unk1D = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((struct func_8002442C_Struct *) D_800CBDA4)->unk1C = *D_800CBDA0;
    D_800CBDA0 += 1;
    s = (struct func_8002442C_Struct *) D_800CBDA4;
    q = (s32) ((s->unk1C << 8) & 0xFFFF) - (s32) s->unk18;
    s->unk1E = (s16) (q / (s32) s->unk1D);
}


struct func_800244C8_Struct {
    u8 pad[0x18];
    u16 unk18;
    u8 unk1A[2];
    u8 unk1C;
    u8 unk1D;
    s16 unk1E;
};

/* GGA: sndCmdTempoSlideTick */
void func_800244C8(void) {
    s32 var_v1;

    ((struct func_800244C8_Struct *) D_800CBDA4)->unk1D = (u8) (((struct func_800244C8_Struct *) D_800CBDA4)->unk1D - 1);
    if (((struct func_800244C8_Struct *) D_800CBDA4)->unk1D != 0) {
        var_v1 = ((struct func_800244C8_Struct *) D_800CBDA4)->unk18;
        var_v1 += ((struct func_800244C8_Struct *) D_800CBDA4)->unk1E;
        if (var_v1 < 0x100) {
            var_v1 = 0x100;
        } else if (var_v1 >= 0xFF01) {
            var_v1 = 0xFF00;
        }
        ((struct func_800244C8_Struct *) D_800CBDA4)->unk18 = (u16) var_v1;
        return;
    }
    ((struct func_800244C8_Struct *) D_800CBDA4)->unk18 = (u16) (((struct func_800244C8_Struct *) D_800CBDA4)->unk1C << 8);
}


struct func_80024540_Struct {
    u32 unk0;
    u8 pad4[8];
    u8 unkC;
    u8 unkD;
    u8 padE[0x58 - 0xE];
    u16 unk58;
    u8 unk5A;
    u8 unk5B;
};
extern s8 *D_800482A0[];
extern s8 D_80048894[];
extern void func_80024614(s8 *);

/* GGA: sndCmdInstrument */
void func_80024540(void) {
    s8 *var_a0;
    u32 var_v0;
    u8 temp_a1;

    var_v0 = ((struct func_80024540_Struct *)D_800CBDA4)->unk0 & 0x7F0000;
    if (var_v0 != 0) {
        var_v0 >>= 8;
        if (var_v0 < 0xA00U) {
            var_v0 = 0xA00;
        } else if (var_v0 >= 0x7501U) {
            var_v0 = 0x7500;
        }
        ((struct func_80024540_Struct *)D_800CBDA4)->unk5B = 0;
        ((struct func_80024540_Struct *)D_800CBDA4)->unk58 = var_v0 | 0x8000;
    }
    ((struct func_80024540_Struct *)D_800CBDA4)->unkD = *D_800CBDA0;
    D_800CBDA0 += 1;
    temp_a1 = ((struct func_80024540_Struct *)D_800CBDA4)->unkC;
    if ((s32)temp_a1 < 2) {
        var_a0 = D_800482A0[temp_a1];
        var_a0 += ((struct func_80024540_Struct *)D_800CBDA4)->unkD * 7;
    } else {
        var_a0 = D_80048894;
    }
    func_80024614(var_a0);
}

#define D_80048100 D_80048100__func_80024614
#define D_80096A98 D_80096A98__func_80024614
#define D_800CBAB4 D_800CBAB4__func_80024614
#define D_800CBDA4 D_800CBDA4__func_80024614
#define func_80022A84 func_80022A84__func_80024614
#define func_800243F0_Struct func_800243F0_Struct__func_80024614
extern u8 D_800CBAB4;
struct func_800243F0_Struct {
    u8 pad[0x18];
    s16 unk18;
    u8 pad2[0x1D - 0x1A];
    u8 unk1D;
};
extern struct func_800243F0_Struct *D_800CBDA4;
extern void func_80022A84(u8);

/* types from include/gga/snd.h (GGA, CC0) */
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

/* libultra's bank structures (only the fields used) */
typedef struct GgaALSound { void *envelope; void *keyMap; void *wavetable; } GgaALSound;
typedef struct GgaALInstrument { u8 pad0[0xE]; s16 soundCount; GgaALSound *soundArray[1]; } GgaALInstrument;
typedef struct GgaALBank { s16 instCount; u8 flags; u8 pad; s32 sampleRate; GgaALInstrument *percussion; GgaALInstrument *instArray[1]; } GgaALBank;
typedef struct GgaALBankFile { s16 revision; s16 bankCount; GgaALBank *bankArray[1]; } GgaALBankFile;

extern GgaALBankFile *D_80096A98[];
extern u16 D_80048100[]; /* GGA gSndEnvelopeTimes (HH's asm names its +0xFE, +0x7A, +0xFA) */

/* GGA: sndCmdInstrumentSetup */
void func_80024614(s8 *inst) {
#define TRK ((SndTrack *)D_800CBDA4)
    s32 decay;
    s32 sustain;
    GgaALBank *bank;
    GgaALInstrument *in;
    GgaALSound *snd;

    bank = D_80096A98[TRK->bank]->bankArray[0];
    in = bank->instArray[TRK->inst];
    snd = in->soundArray[0];
    TRK->wave = snd->wavetable;
    TRK->instTune = *inst++ << 8;
    TRK->instTune += *inst++ * 4;
    TRK->envAttack = D_80048100[0x7F - *inst++];
    decay = *(u8 *) inst++;
    TRK->envDecay = D_80048100[0x3D - ((decay & 0xF0) >> 2)];
    TRK->envDecayLevel = (decay & 0xF) * 4;
    sustain = *(u8 *) inst++;
    sustain &= 0xFF;
    if (sustain == 0) {
        TRK->envSustain = 0;
    } else {
        TRK->envSustain = D_80048100[0x7F - sustain] + 1;
    }
    TRK->envRelease = D_80048100[0x7D - *inst++ * 4];
    if (TRK->pan < 0x8000) {
        TRK->pan = *inst << 8;
        TRK->panSlideTicks = 0;
    }
    func_80022A84(D_800CBAB4);
#undef TRK
}
#undef D_80048100
#undef D_80096A98
#undef D_800CBAB4
#undef D_800CBDA4
#undef func_80022A84
#undef func_800243F0_Struct


struct func_80024780_Struct {
    u8 pad0[0xD];
    u8 unkD;
    u8 pad1[0x25 - 0xE];
    u8 unk25;
};

extern s8 D_8004889C[];
extern void func_80024614(s8 *);

/* GGA: sndCmdDrumInstrument */
void func_80024780(void)
{
  int new_var;
  struct func_80024780_Struct *temp_v0;
  s8 *temp_a0;
  temp_v0 = D_800CBDA4;
  new_var = 8;
  temp_a0 = (s8 *) (D_8004889C + ((temp_v0->unk25 * new_var) - 0x240));
  temp_v0->unkD = temp_a0[0];
  temp_a0 = temp_a0 + 1;
  func_80024614(temp_a0);
}


extern void func_80024540(void);
extern void func_80024820(void);

/* GGA: sndCmdVolInstrument */
void func_800247C8(void) {
    func_80024820();
    func_80024540();
}


extern void func_80024CF8(void);

/* GGA: sndCmdVolInstrumentPan */
void func_800247F0(void) {
    func_80024820();
    func_80024540();
    func_80024CF8();
}


struct func_80024820_Struct {
    u32 unk0;
    u8 pad4[0x3A - 4];
    s16 unk3A;
    u8 pad3C[0x47 - 0x3C];
    u8 unk47;
};

/* GGA: sndCmdVolume */
void func_80024820(void) {
    struct func_80024820_Struct *ptr;
    u32 temp_a1;
    u8 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ptr = (struct func_80024820_Struct *) D_800CBDA4;
    temp_a1 = ptr->unk0;
    if ((temp_a1 / 0x1000000) != 0) {
        ptr->unk3A = (s16) (temp_v0 * (temp_a1 >> 24));
    } else {
        ptr->unk3A = (s16) (temp_v0 << 8);
    }
    ((struct func_80024820_Struct *) D_800CBDA4)->unk47 = 0;
}


struct func_8002487C_Struct {
    u8 pad0[0x3A];
    u16 unk3A;
    u8 pad1[0x44 - 0x3C];
    s16 unk44;
    u8 unk46;
    u8 unk47;
};

/* GGA: sndCmdVolumeSlide */
void func_8002487C(void)
{
  s32 new_var;
  ((struct func_8002487C_Struct *) D_800CBDA4)->unk47 = D_800CBDA0[0];
  ((struct func_8002487C_Struct *) D_800CBDA4)->unk46 = (D_800CBDA0 += 1)[0];
  D_800CBDA0 += 1;
  new_var = (s32) (((((struct func_8002487C_Struct *) D_800CBDA4)->unk46 << 8) & 0xFFFF) - ((struct func_8002487C_Struct *) D_800CBDA4)->unk3A);
  ((struct func_8002487C_Struct *) D_800CBDA4)->unk44 = (s16) (new_var / ((s32) ((struct func_8002487C_Struct *) D_800CBDA4)->unk47));
}


/* GGA: sndCmdVolumeSlideTick */
void func_80024918(void) {
    s32 var_v1;

    *((u8 *) D_800CBDA4 + 0x6) = (u8) (*((u8 *) D_800CBDA4 + 0x6) | 1);
    *((u8 *) D_800CBDA4 + 0x47) = (u8) (*((u8 *) D_800CBDA4 + 0x47) - 1);
    if (*((u8 *) D_800CBDA4 + 0x47) != 0) {
        var_v1 = *((u16 *) ((u8 *) D_800CBDA4 + 0x3A));
        var_v1 += *((s16 *) ((u8 *) D_800CBDA4 + 0x44));
        if (var_v1 < 0) {
            var_v1 = 0;
        } else if (var_v1 >= 0xFF01) {
            var_v1 = 0xFF00;
        }
        *((u16 *) ((u8 *) D_800CBDA4 + 0x3A)) = (u16) var_v1;
        return;
    }
    *((u16 *) ((u8 *) D_800CBDA4 + 0x3A)) = (u16) (*((u8 *) D_800CBDA4 + 0x46) << 8);
}


struct func_80024998_Struct {
    u8 pad[0x4E];
    u16 f4E;
    u16 f50;
    u8 pad3[0x2];
    s16 f54;
};

extern u8 D_800481FE[];
extern u8 D_8004817A[];

/* GGA: sndCmdEnvAttackDecay */
void func_80024998(void) {
    u8 temp;

    ((struct func_80024998_Struct *) D_800CBDA4)->f4E = *(u16 *) &D_800481FE[-(*D_800CBDA0 * 2)];
    D_800CBDA0 = D_800CBDA0 + 1;
    temp = *D_800CBDA0;
    D_800CBDA0 = D_800CBDA0 + 1;
    ((struct func_80024998_Struct *) D_800CBDA4)->f50 = *(u16 *) &D_8004817A[-(((s32) (temp & 0xF0) >> 2) * 2)];
    ((struct func_80024998_Struct *) D_800CBDA4)->f54 = (s16) ((temp & 0xF) * 4);
}


struct func_80024A1C_Struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x49 - 0x23];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[4];
    u16 unk52;
};

#define OBJ ((struct func_80024A1C_Struct *)D_800CBDA4)

/* GGA: sndCmdEnvSustain */
void func_80024A1C(void) {
    u16 temp_a0;
    s32 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    if (temp_v0 == 0) {
        OBJ->unk52 = 0;
        if ((OBJ->unk22 == 0) && (OBJ->unk49 == 2)) {
            OBJ->unk4C = 0x7FFF;
        }
    } else {
        temp_a0 = OBJ->unk52;
        OBJ->unk52 = *(u16 *)(D_800481FE + -(temp_v0 * 2)) + 1;
        if ((OBJ->unk22 == 0) && (OBJ->unk49 == 2)) {
            OBJ->unk4C = OBJ->unk52;
            if (temp_a0 == 0) {
                OBJ->unk4A = 0;
            }
        }
    }
}

#define D_800CBDA4 D_800CBDA4__func_80024ADC

struct func_80024ADC_Struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x49 - 0x23];
    u8 unk49;
    u8 pad4A[0x4C - 0x4A];
    u16 unk4C;
    u8 pad4E[0x56 - 0x4E];
    u16 unk56;
};

extern u8 D_800481FA[];
extern struct func_80024ADC_Struct *D_800CBDA4;

/* GGA: sndCmdEnvRelease */
void func_80024ADC(void)
{
  D_800CBDA4->unk56 = *((u16 *) (&D_800481FA[-(((*D_800CBDA0) << 1) << 2)]));
  D_800CBDA0 += 1;
  if ((D_800CBDA4->unk22 == 0) && (D_800CBDA4->unk49 == 3))
  {
    D_800CBDA4->unk4C = D_800CBDA4->unk56;
  }
}
#undef D_800CBDA4


extern void func_80028EE0(s32, s32, s32, s32 *);
extern void func_80030770(s32, void *, u8);
extern s32 D_800479CC;
extern s32 D_800479D0;
extern s32 D_800498F0;
extern u8 D_800CBAB4;
extern u8 D_800CBBE0[];
extern s32 D_800CBE08;

/* GGA: sndCmdFxParams */
void func_80024B4C(void) {
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_a2;
    s32 sp20;

    if (((u8 *)D_800CBDA4)[0x10] != 0) {
        func_80030770(D_800498F0, (D_800CBAB4 * 0x1C) + D_800CBBE0, 0);
    }
    temp_v1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    sp20 = temp_v1 * 0x28;
    if (sp20 == 0) {
        sp20 = D_800479CC;
    }
    func_80028EE0(D_800498F0, D_800CBE08, 3, &sp20);
    temp_v1_2 = *D_800CBDA0;
    D_800CBDA0 += 1;
    sp20 = temp_v1_2 << 7;
    if (sp20 == 0) {
        sp20 = D_800479D0;
    }
    func_80028EE0(D_800498F0, D_800CBE08, 4, &sp20);
    temp_a2 = ((u8 *)D_800CBDA4)[0x10];
    if (temp_a2 != 0) {
        func_80030770(D_800498F0, (D_800CBAB4 * 0x1C) + D_800CBBE0, temp_a2);
    }
}

extern u8 D_800CBDA8[];
extern u8 D_800CBDAF[];

void func_80024C84(void) {
    s32 a;
    s32 b;
    u8 c;
    u8 *p;
    s32 i;

    a = *D_800CBDA0++;
    b = *D_800CBDA0++;
    if (a != 0) {
        i = a;
        p = D_800CBDA8 + a;
        a = a * 1;
        c = p[-1];
        if (c != 0) {
            if (b != 0) {
                D_800CBDAF[a] = a + 0xF0;
                return;
            }
            D_800CBDAF[i] = c;
            p[-1] = 0;
        }
    }
}



struct func_80024CF8_Struct {
    u8 pad[0x58];
    s16 unk58;
    u8 unk5A;
    u8 unk5B;
};

extern void func_80022A84(u8);

/* GGA: sndCmdPan */
void func_80024CF8(void) {
    u8 temp_v1;

    ((struct func_80024CF8_Struct *) D_800CBDA4)->unk5B = 0;
    temp_v1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((struct func_80024CF8_Struct *) D_800CBDA4)->unk58 = (s16) (temp_v1 << 8);
    func_80022A84(D_800CBAB4);
}


struct func_80024D50_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x58 - 7];
    u16 unk58;
    u8 unk5A;
    u8 unk5B;
    s16 unk5C;
};

/* GGA: sndCmdPanSlide */
void func_80024D50(void) {
    s32 diff;
    ((struct func_80024D50_Struct *) D_800CBDA4)->unk5B = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_80024D50_Struct *) D_800CBDA4)->unk5A = *D_800CBDA0;
    D_800CBDA0++;
    if ((((struct func_80024D50_Struct *) D_800CBDA4)->unk58 >= 0x8000) || !(((struct func_80024D50_Struct *) D_800CBDA4)->unk6 & 4)) {
        diff = ((((struct func_80024D50_Struct *) D_800CBDA4)->unk5A << 8) & 0xFFFF) - (((struct func_80024D50_Struct *) D_800CBDA4)->unk58 & 0x7FFF);
        ((struct func_80024D50_Struct *) D_800CBDA4)->unk5C = diff / ((struct func_80024D50_Struct *) D_800CBDA4)->unk5B;
    }
}

#define func_80022A84 func_80022A84__func_80024E0C

struct func_80024E0C_Struct {
    u8 pad[0x58];
    u16 unk58;
    u8 unk5A;
    u8 unk5B;
    s16 unk5C;
};

extern void func_80022A84(u8, s32, void **);

/* GGA: sndCmdPanSlideTick */
void func_80024E0C(void) {
    s32 temp_a1;
    s32 var_v1;

    temp_a1 = ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58;
    ((struct func_80024E0C_Struct *) D_800CBDA4)->unk5B = (u8) (((struct func_80024E0C_Struct *) D_800CBDA4)->unk5B - 1);
    temp_a1 &= 0x8000;
    temp_a1 &= 0xFFFF;
    if (((struct func_80024E0C_Struct *) D_800CBDA4)->unk5B != 0) {
        var_v1 = ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 & 0x7FFF;
        var_v1 += ((struct func_80024E0C_Struct *) D_800CBDA4)->unk5C;
        if (var_v1 < 0) {
            var_v1 = 0;
        } else if (var_v1 >= 0x8000) {
            var_v1 = 0x7F00;
        }
        ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 = (u16) var_v1;
    } else {
        ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 = (u16) (((struct func_80024E0C_Struct *) D_800CBDA4)->unk5A << 8);
    }
    ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 = (u16) (temp_a1 | ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58);
    func_80022A84(D_800CBAB4, temp_a1, (void **) &D_800CBDA4);
}
#undef func_80022A84


/* GGA: sndCmdTranspose */
void func_80024EB8(void) {
    *(s16 *)((u8 *)D_800CBDA4 + 0x2E) = (s16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
}


struct func_80024EE8_Struct {
    u8 pad[0x30];
    s16 unk30;
};

/* GGA: sndCmdDetune */
void func_80024EE8(void) {
    ((struct func_80024EE8_Struct *) D_800CBDA4)->unk30 = *((s8 *) D_800CBDA0) * 4;
    D_800CBDA0++;
}


struct func_80024F18_Struct {
    u8 pad0[0x93];
    u8 unk93;
    u8 pad94;
    u8 unk95;
    u8 pad96[3];
    u8 unk99;
    u16 unk9A;
    u8 pad9C[2];
    u8 unk9E;
    u8 pad9F;
    s16 unkA0;
};
#define P ((struct func_80024F18_Struct *)D_800CBDA4)

/* GGA: sndCmdVibrato */
void func_80024F18(void) {
    s32 a;
    u8 v;

    v = *D_800CBDA0;
    D_800CBDA0 += 1;
    if ((s32) v < 0x64) {
        P->unk93 = v;
    } else {
        P->unk93 = 0U;
        P->unk9E = (u8) (v - 0x64);
    }
    v = *D_800CBDA0;
    D_800CBDA0 += 1;
    if (v < 0x40) {
        if (v < 0x20) {
            P->unk99 = 1;
            v = v * 8;
        } else {
            P->unk99 = 2;
            v = v * 4;
        }
    } else if (v < 0x80) {
        v = v * 2;
        P->unk99 = 4;
    } else if (v == 0xFF) {
        P->unk99 = 0x10;
    } else {
        P->unk99 = 8;
    }
    P->unk95 = v;
    P->unk9A = (u16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
    a = P->unk9E;
    if (a != 0) {
        P->unkA0 = (s16) ((s32) P->unk9A / a);
    }
}
#undef P


struct func_8002507C_Struct {
    u8 pad0[0x93];
    u8 unk93;
    u8 unk94;
    u8 pad1[0x01];
    u16 unk96;
    u8 unk98;
    u8 pad3[0x01];
    u16 unk9A;
    u16 unk9C;
    u8 unk9E;
    u8 unk9F;
};

/* GGA: sndCmdVibratoReset */
void func_8002507C(void) {
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk94 = ((struct func_8002507C_Struct *) D_800CBDA4)->unk93;
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk9F = ((struct func_8002507C_Struct *) D_800CBDA4)->unk9E;
    if (((struct func_8002507C_Struct *) D_800CBDA4)->unk9E == 0) {
        ((struct func_8002507C_Struct *) D_800CBDA4)->unk9C = ((struct func_8002507C_Struct *) D_800CBDA4)->unk9A;
    } else {
        ((struct func_8002507C_Struct *) D_800CBDA4)->unk9C = 0;
    }
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk96 = 0;
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk98 = (u8) ((struct func_8002507C_Struct *) D_800CBDA4)->unk96;
}


struct func_800250D4_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad1[0x5];
    u16 unk9A;
    u16 unk9C;
    u8 unk9E;
    u8 unk9F;
    u16 unkA0;
};

extern void func_80025150(void *);

/* GGA: sndCmdVibratoTick */
void func_800250D4(void)
{
  u8 temp_v1;
  u8 temp_v1_2;
  temp_v1 = ((struct func_800250D4_Struct *) D_800CBDA4)->unk94;
  if (temp_v1)
  {
    ((struct func_800250D4_Struct *) D_800CBDA4)->unk94 = (u8) (temp_v1 - 1);
    return;
  }
  temp_v1_2 = ((struct func_800250D4_Struct *) D_800CBDA4)->unk9F;
  if (temp_v1_2)
  {
    ((struct func_800250D4_Struct *) D_800CBDA4)->unk9F = (u8) (temp_v1_2 - 1);
    if (((struct func_800250D4_Struct *) D_800CBDA4)->unk9F != 0)
    {
      ((struct func_800250D4_Struct *) D_800CBDA4)->unk9C = (u16) (((struct func_800250D4_Struct *) D_800CBDA4)->unk9C + ((struct func_800250D4_Struct *) D_800CBDA4)->unkA0);
    }
    else
    {
      ((struct func_800250D4_Struct *) D_800CBDA4)->unk9C = (u16) ((struct func_800250D4_Struct *) D_800CBDA4)->unk9A;
    }
  }
  func_80025150(&D_800CBDA4);
}


struct func_80025150_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad1[0x36 - 7];
    s16 unk36;
    u8 pad2[0x94 - 0x38];
    u8 unk94;
    u8 unk95;
    u16 unk96;
    u8 unk98;
    u8 unk99;
    u8 pad3[2];
    u16 unk9C;
};
extern u8 D_80048200[];
#define P ((struct func_80025150_Struct *)D_800CBDA4)

/* GGA: sndCmdVibratoStep */
void func_80025150(void *arg0) {
    if (arg0) {}
    if (P->unk94 == 0) {
        P->unk96 = P->unk96 + P->unk95;
        if (P->unk96 >= 0x100) {
            P->unk96 = P->unk96 & 0xFF;
            P->unk6 = P->unk6 | 2;
            P->unk98 = P->unk98 + P->unk99;
            P->unk98 = P->unk98 & 0x3F;
            if (P->unk9C < 0x8000) {
                P->unk36 = P->unk9C >> 7;
                P->unk36 = (D_80048200[P->unk98 & 0x1F] * P->unk36) >> 8;
            } else {
                P->unk36 = (P->unk9C >> 8) & 0x7F;
                P->unk36 = P->unk36 + 2;
                P->unk36 = (D_80048200[P->unk98 & 0x1F] * P->unk36) >> 1;
            }
            if (P->unk98 >= 0x20) {
                P->unk36 = -P->unk36;
            }
        }
    }
}


struct func_80025280_Struct {
    u8 pad0[0x9A];
    u16 unk9A;
    u8 pad9C[0x2];
    u8 unk9E;
    u8 pad9F;
    s16 unkA0;
};

/* GGA: sndCmdVibratoRise */
void func_80025280(void) {
    u8 temp_v0;
    struct func_80025280_Struct *s;

    temp_v0 = *D_800CBDA0;
    ((struct func_80025280_Struct *) D_800CBDA4)->unk9E = temp_v0;
    D_800CBDA0 += 1;
    if (temp_v0 != 0) {
        s = (struct func_80025280_Struct *) D_800CBDA4;
        s->unkA0 = (s16) ((s32) s->unk9A / (s32) s->unk9E);
    }
}


struct func_800252F4_Struct {
    u8 pad0[0x8D];
    u8 unk8D;
    u16 unk8E;
    s16 unk90;
    u8 unk92;
};

/* GGA: sndCmdWobble */
void func_800252F4(void) {
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk92 = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk8E = (u16) (*D_800CBDA0 << 8);
    D_800CBDA0++;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk8E += *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk8D = 0;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk90 = (s16) ((struct func_800252F4_Struct *) D_800CBDA4)->unk8D;
    if (((struct func_800252F4_Struct *) D_800CBDA4)->unk92 == 0) {
        *(s16 *) ((u8 *) D_800CBDA4 + 0x38) = 0;
    }
}


struct func_8002538C_Struct {
    u8 pad0[0x6];
    u8 unk6;
    u8 pad7[0x30];
    u16 unk38;
    u8 pad3a[0x53];
    u8 unk8D;
    u16 unk8E;
    u16 unk90;
    u8 unk92;
};

extern u8 D_80048220[];

/* GGA: sndCmdWobbleTick */
void func_8002538C(void) {
    s32 temp_v1;

    ((struct func_8002538C_Struct *) D_800CBDA4)->unk90 = ((struct func_8002538C_Struct *) D_800CBDA4)->unk90 + ((struct func_8002538C_Struct *) D_800CBDA4)->unk92;
    temp_v1 = ((struct func_8002538C_Struct *) D_800CBDA4)->unk90;
    if (temp_v1 >= 0x100) {
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk90 = temp_v1 & 0xFF;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk6 |= 2;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk38 = D_80048220[((struct func_8002538C_Struct *) D_800CBDA4)->unk8D];
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk8D++;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk8D &= 0x7F;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk38 += D_80048220[((struct func_8002538C_Struct *) D_800CBDA4)->unk8D] << 8;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk38 &= ((struct func_8002538C_Struct *) D_800CBDA4)->unk8E;
    }
}



void func_80025448(void) {
    D_800CBDA0 += 3;
}


struct func_80025460_Struct {
    u8 pad0[0x18];
    u16 unk18;
    u8 pad1[0x28 - 0x1A];
    s32 unk28;
    u8 pad2[0x7D - 0x2C];
    u8 unk7D;
    u8 pad3[0x80 - 0x7E];
    s32 unk80;
    s32 unk84;
};

/* GGA: sndCmdPortamentoCalc */
void func_80025460(void)
{
  struct func_80025460_Struct *p;
  s32 divisor;
  s32 temp_a0;
  s32 temp_a1;
  p = (struct func_80025460_Struct *) D_800CBDA4;
  divisor = (s32) (((((u32) (((struct func_80025460_Struct *) D_800CBDA4)->unk7D << 0x10)) / ((struct func_80025460_Struct *) D_800CBDA4)->unk18) + 1) & 0xFFFF);
  temp_a0 = ((struct func_80025460_Struct *) D_800CBDA4)->unk80 - ((struct func_80025460_Struct *) D_800CBDA4)->unk28;
  ((struct func_80025460_Struct *) D_800CBDA4)->unk84 = temp_a0 / divisor;
  p = (struct func_80025460_Struct *) D_800CBDA4;
  ;
  if (((struct func_80025460_Struct *) D_800CBDA4)->unk84 == 0)
  {
    if (temp_a0 < 0)
    {
      ((struct func_80025460_Struct *) D_800CBDA4)->unk84 = ((struct func_80025460_Struct *) D_800CBDA4)->unk84 - 1;
      return;
    }
    ((struct func_80025460_Struct *) D_800CBDA4)->unk84 = ((struct func_80025460_Struct *) D_800CBDA4)->unk84 + 1;
  }
}



struct func_80025500_Struct {
    u8 pad0[8];
    u8 *unk8;
    u8 padC[0x25 - 0xC];
    u8 unk25;
    u8 pad26[2];
    s32 unk28;
    u8 pad2C[0x7C - 0x2C];
    u8 unk7C;
    u8 unk7D;
    u8 pad7E[2];
    s32 unk80;
    u8 pad84[6];
    s16 unk8A;
    u8 unk8C;
};

#define OBJ ((struct func_80025500_Struct *)D_800CBDA4)

/* GGA: sndCmdPortamentoCheck */
void func_80025500(void) {
    s32 valid;
    s32 value;

    valid = *D_800CBDA0++ == 0xE4;
    if (valid) {
        if (D_800CBAB4 < 0x10 && OBJ->unk8A == 0) {
            OBJ->unk8C = 0;
            OBJ->unk7C = *D_800CBDA0;
            D_800CBDA0++;
            OBJ->unk7D = *D_800CBDA0;
            D_800CBDA0++;
            value = *D_800CBDA0++;
            value = (value - OBJ->unk25) << 8;
            OBJ->unk80 = OBJ->unk28 + value;
            func_80025460();
        } else {
            D_800CBDA0 += 3;
        }
        OBJ->unk8 = D_800CBDA0;
    }
}


struct func_800255FC_Struct {
    u8 pad_0[6];
    u8 unk6;
    u8 pad_7[0x21];
    s32 unk28;
    u8 pad_2C[0x50];
    u8 unk7C;
    u8 unk7D;
    u8 pad_7E[2];
    s32 unk80;
    s32 unk84;
    u8 pad_88[4];
    u8 unk8C;
};

extern void func_80025834(void **);

/* GGA: sndCmdPortamentoTick */
void func_800255FC(void)
{
  long temp_v1;
  if (((struct func_800255FC_Struct *) D_800CBDA4)->unk8C == 0)
  {
    temp_v1 = ((struct func_800255FC_Struct *) D_800CBDA4)->unk7C;
    if (temp_v1 != 0)
    {
      ((struct func_800255FC_Struct *) D_800CBDA4)->unk7C = (u8) (temp_v1 - 1);
      return;
    }
    ((struct func_800255FC_Struct *) D_800CBDA4)->unk6 = (u8) (((struct func_800255FC_Struct *) D_800CBDA4)->unk6 | 2);
    ((struct func_800255FC_Struct *) D_800CBDA4)->unk7D = (u8) (((struct func_800255FC_Struct *) D_800CBDA4)->unk7D - 1);
    if (((struct func_800255FC_Struct *) D_800CBDA4)->unk7D != 0)
    {
      ((struct func_800255FC_Struct *) D_800CBDA4)->unk28 = ((struct func_800255FC_Struct *) D_800CBDA4)->unk28 + ((struct func_800255FC_Struct *) D_800CBDA4)->unk84;
      return;
    }
    ((struct func_800255FC_Struct *) D_800CBDA4)->unk28 = ((struct func_800255FC_Struct *) D_800CBDA4)->unk80;
    return;
  }
  func_80025834((void **) &D_800CBDA4);
}


struct func_80025694_Struct {
    u8 pad0[0x6];
    u8 unk6;
    u8 pad1[0x28 - 0x7];
    s32 unk28;
    u8 pad2[0x7C - 0x2C];
    u8 unk7C;
    u8 pad3[0x84 - 0x7D];
    s32 unk84;
    u8 pad4[0x8C - 0x88];
    u8 unk8C;
};

/* GGA: sndCmdPortamentoTickSe */
void func_80025694(void) {
    extern void func_80025834();

    if (((struct func_80025694_Struct *) D_800CBDA4)->unk8C == 0) {
        if (((struct func_80025694_Struct *) D_800CBDA4)->unk7C == 0) {
            ((struct func_80025694_Struct *) D_800CBDA4)->unk6 = (u8) (((struct func_80025694_Struct *) D_800CBDA4)->unk6 | 2);
            ((struct func_80025694_Struct *) D_800CBDA4)->unk28 = (s32) (((struct func_80025694_Struct *) D_800CBDA4)->unk28 + ((struct func_80025694_Struct *) D_800CBDA4)->unk84);
        }
    } else {
        func_80025834();
    }
}


struct func_800256FC_Struct {
    u8 pad0[0x88];
    u8 unk88;
    u8 unk89;
    s16 unk8A;
    u8 unk8C;
};

/* GGA: sndCmdPitchBend */
void func_800256FC(void) {
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk8C = 0;
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk88 = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk89 = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk8A = (s16) ((s8) *D_800CBDA0 << 8);
    D_800CBDA0++;
}


typedef struct func_80025768_Struct {
    u8 pad0[0x28];
    s32 unk28;
    u8 pad2C[0x7C - 0x2C];
    u8 unk7C;
    u8 unk7D;
    u8 pad7E[0x80 - 0x7E];
    s32 unk80;
    s32 unk84;
    u8 unk88;
    u8 unk89;
    s16 unk8A;
    u8 unk8C;
} func_80025768_Struct;


/* GGA: sndCmdPitchBendNote */
void func_80025768(void) {
    if (((func_80025768_Struct *) D_800CBDA4)->unk8C == 0) {
        ((func_80025768_Struct *) D_800CBDA4)->unk7C = ((func_80025768_Struct *) D_800CBDA4)->unk88;
        ((func_80025768_Struct *) D_800CBDA4)->unk7D = ((func_80025768_Struct *) D_800CBDA4)->unk89;
        ((func_80025768_Struct *) D_800CBDA4)->unk80 = ((func_80025768_Struct *) D_800CBDA4)->unk28;
        ((func_80025768_Struct *) D_800CBDA4)->unk28 = ((func_80025768_Struct *) D_800CBDA4)->unk28 - ((func_80025768_Struct *) D_800CBDA4)->unk8A;
        func_80025460();
        return;
    }
    ((func_80025768_Struct *) D_800CBDA4)->unk80 = ((func_80025768_Struct *) D_800CBDA4)->unk28;
    ((func_80025768_Struct *) D_800CBDA4)->unk28 = ((func_80025768_Struct *) D_800CBDA4)->unk84;
    ((func_80025768_Struct *) D_800CBDA4)->unk7D = 1;
}



/* GGA: sndCmdGlide */
void func_800257F8(void) {
    ((u8 *) D_800CBDA4)[0x8C] = 1;
    *(s16 *) ((u8 *) D_800CBDA4 + 0x8A) = *D_800CBDA0;
    D_800CBDA0 += 1;
}


struct func_80025834_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x28 - 7];
    s32 unk28;
    u8 pad2C[0x7D - 0x2C];
    u8 unk7D;
    u8 pad7E[2];
    s32 unk80;
    u8 pad84[6];
    s16 unk8A;
};

#define S ((struct func_80025834_Struct *)D_800CBDA4)

/* GGA: sndCmdGlideTick */
void func_80025834(void **arg0) {
    s32 diff;
    u32 step;

    if (arg0) {}
    S->unk6 |= 2;
    diff = S->unk80 - S->unk28;
    step = diff;
    if (diff < 0) {
        step = -diff;
    }
    step = (s32)(S->unk8A * step) >> 8;
    if (step == 0) {
        step = 1;
    }
    if (diff < 0) {
        S->unk28 -= step;
        if (S->unk28 < S->unk80) {
            S->unk28 = S->unk80;
        }
    } else {
        S->unk28 += step;
        if (S->unk80 < S->unk28) {
            S->unk28 = S->unk80;
        }
    }
    if (S->unk28 == S->unk80) {
        S->unk7D = 0;
    }
}


/* GGA: sndCmdLoopStart */
void func_80025908(void) {
    ((u8 *) D_800CBDA4)[0x5E] = 0;
    *(s32 *)((u8 *) D_800CBDA4 + 0x60) = (s32) D_800CBDA0;
    *(s16 *)((u8 *) D_800CBDA4 + 0x40) = 0;
    *(s16 *)((u8 *) D_800CBDA4 + 0x32) = *(s16 *)((u8 *) D_800CBDA4 + 0x40);
}


struct func_80025940_Struct {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0x40 - 0x34];
    s16 unk40;
    u8 pad42[0x5E - 0x42];
    u8 unk5E;
    u8 pad5F;
    u8 *unk60;
};
#define O ((struct func_80025940_Struct *)D_800CBDA4)

/* GGA: sndCmdLoopEnd */
void func_80025940(void) {
    s32 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    O->unk5E++;
    if ((temp_v0 == 0) || (temp_v0 * 1 != O->unk5E)) {
        O->unk40 += (s8)*D_800CBDA0;
        D_800CBDA0 += 1;
        O->unk32 += (s8)*D_800CBDA0 * 8;
        D_800CBDA0 += 1;
        D_800CBDA0 = O->unk60;
        return;
    }
    O->unk40 = 0;
    O->unk32 = O->unk40;
    D_800CBDA0 += 2;
}


struct func_80025A00_Struct {
    u8 pad0[0x34];
    s16 unk34;
    u8 pad1[0x42 - 0x36];
    s16 unk42;
    u8 pad2[0x64 - 0x44];
    u8 unk64;
    u8 pad3[0x68 - 0x65];
    s32 unk68;
};

/* GGA: sndCmdLoop2Start */
void func_80025A00(void) {
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk64 = 0;
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk68 = (s32) D_800CBDA0;
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk42 = 0;
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk34 = ((struct func_80025A00_Struct *) D_800CBDA4)->unk42;
}


struct func_80025A38_Struct {
    u8 pad0[0x34];
    s16 unk34;
    u8 pad1[0x42 - 0x36];
    s16 unk42;
    u8 pad2[0x64 - 0x44];
    u8 unk64;
    u8 pad3[3];
    u8 *unk68;
};

#define THIS ((struct func_80025A38_Struct *)D_800CBDA4)

/* GGA: sndCmdLoop2End */
void func_80025A38(void)
{
  u32 temp_v0;
  temp_v0 = *D_800CBDA0;
 D_800CBDA0 += 1; ((struct func_80025A38_Struct *) D_800CBDA4)->unk64++; if ((temp_v0 == 0) || ((temp_v0 ^ 0) != ((struct func_80025A38_Struct *) D_800CBDA4)->unk64)) {
    ((struct func_80025A38_Struct *) D_800CBDA4)->unk42 += *((s8 *) D_800CBDA0);
    D_800CBDA0 += 1;
    ((struct func_80025A38_Struct *) D_800CBDA4)->unk34 += (*((s8 *) D_800CBDA0)) * 8;
    D_800CBDA0 += 1;
    D_800CBDA0 = ((struct func_80025A38_Struct *) D_800CBDA4)->unk68;
    return;
  }
  ((struct func_80025A38_Struct *) D_800CBDA4)->unk42 = 0;
  ((struct func_80025A38_Struct *) D_800CBDA4)->unk34 = ((struct func_80025A38_Struct *) D_800CBDA4)->unk42;
  D_800CBDA0 += 2;
}
#undef THIS


/* GGA: sndCmdMark */
void func_80025AF8(void) {
    *(s32 *) ((u8 *) D_800CBDA4 + 0x6C) = (s32) D_800CBDA0;
}


void func_80025B10(void) {
    D_800CBDA0 = *(u8 **)((u8 *)D_800CBDA4 + 0x6C);
}



/* GGA: sndCmdRepeatStart */
void func_80025B28(void) {
    ((u8 *) D_800CBDA4)[0x70] = 0;
    ((s32 *) D_800CBDA4)[0x74 / 4] = D_800CBDA0;
}


struct func_80025B4C_Struct {
    u8 pad[0x70];
    u8 unk70;
    u8 pad71[0x74 - 0x71];
    s32 unk74;
    s32 unk78;
};

/* GGA: sndCmdRepeat */
void func_80025B4C(void)
{
  u8 temp_a0;
  ;
  switch ((s32) ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70)
  {
    case 0:
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 = (u8) (((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 + 1);
      return;

    case 1:
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 = (u8) (((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 + 1);
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk78 = (s32) D_800CBDA0;
      D_800CBDA0 = (u8 *) ((struct func_80025B4C_Struct *) D_800CBDA4)->unk74;
      return;

    case 2:
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 = (u8) (((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 - 1);
      D_800CBDA0 = (u8 *) ((struct func_80025B4C_Struct *) D_800CBDA4)->unk78;
      return;

  }

}


struct func_80025BD8_Struct {
    u32 unk0;
    u8 pad4[0xC];
    u8 unk10;
};
extern u8 D_800CBAD0[];

/* GGA: sndCmdFxMix */
void func_80025BD8(void) {
    s32 var_a0;
    u8 var_a2;
    s32 var_v1;
    u8 temp_a2;
    struct func_80025BD8_Struct *ptr;

    ptr = (struct func_80025BD8_Struct *) D_800CBDA4;
    if ((u32) (ptr->unk0 & 0x7FFF) < 0x100U) {
        var_a0 = 0;
    } else {
        var_a0 = 1;
    }
    var_a2 = *D_800CBDA0;
    D_800CBDA0 += 1;
    var_a2 += D_800CBAD0[var_a0];
    if (var_a2 >= 0x80) {
        var_a2 = 0x7F;
    }
    if (var_a2 != ptr->unk10) {
        ptr->unk10 = (u8) var_a2;
        func_80030770(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, (u8) var_a2);
    }
}



/* GGA: sndCmdBank */
void func_80025C90(void) {
    *((u8 *)D_800CBDA4 + 0xC) = *D_800CBDA0;
    D_800CBDA0 += 1;
}


extern s8 D_800CBBD8;

void func_80025CBC(void) {
    if (D_800CBAB4 == 0xF) {
        D_800CBBD8 = 0;
    }
}


struct func_80025CDC_Struct {
    u8 pad0[0xE];
    u8 unkE;
    u8 unkF;
    u8 pad10[0x11];
    u8 unk21;
    u8 unk22;
};

extern void func_80026950(s32, void *, s32, s32);

/* GGA: sndCmdRest */
void func_80025CDC(void) {
    if (((struct func_80025CDC_Struct *) D_800CBDA4)->unkE != 0) {
        ((struct func_80025CDC_Struct *) D_800CBDA4)->unkF = 1;
        func_80026950(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, 0, 0x1388);
    }
    ((struct func_80025CDC_Struct *) D_800CBDA4)->unk21 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((struct func_80025CDC_Struct *) D_800CBDA4)->unk22 = 1;
}


typedef struct func_80025D78_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x1A];
    u8 unk21;
    u8 unk22;
    u8 pad23;
    u8 unk24;
    u8 pad25[0x27];
    u16 unk4C;
} func_80025D78_Struct;

extern void func_80023D04();
extern void func_80024358(void *);

/* GGA: sndCmdTie */
void func_80025D78(void) {
    s32 temp_v1;

    ((func_80025D78_Struct *) D_800CBDA4)->unk21 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((func_80025D78_Struct *) D_800CBDA4)->unk22 = *D_800CBDA0;
    D_800CBDA0 += 1;
    if ((s32) D_800CBAB4 < 0x10) {
        temp_v1 = ((func_80025D78_Struct *) D_800CBDA4)->unk22;
        if (temp_v1 == 0) {
            ((func_80025D78_Struct *) D_800CBDA4)->unk24 = 0;
        } else {
            ((func_80025D78_Struct *) D_800CBDA4)->unk24 = (u8) ((s32) (((func_80025D78_Struct *) D_800CBDA4)->unk21 * temp_v1) >> 7);
            if (((func_80025D78_Struct *) D_800CBDA4)->unk24 == 0) {
                ((func_80025D78_Struct *) D_800CBDA4)->unk24 = 1;
            }
        }
        ((func_80025D78_Struct *) D_800CBDA4)->unk6 = (u8) (((func_80025D78_Struct *) D_800CBDA4)->unk6 | 1);
        if (((func_80025D78_Struct *) D_800CBDA4)->unk4C != 0) {
            func_80024358(&D_800CBDA4);
        }
        if (((func_80025D78_Struct *) D_800CBDA4)->unk6 & 1) {
            func_80023D04();
        }
    }
}


/* GGA: sndCmdScaleBase */
void func_80025E78(void) {
    u8 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    *((u8 *) D_800CBDA4 + temp_v0 + 0xB8) = *D_800CBDA0;
    D_800CBDA0 += 1;
    *((u8 *) D_800CBDA4 + temp_v0 + 0xBB) = *D_800CBDA0;
    D_800CBDA0 += 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025ED4.s")


extern void func_80026140(s32, u8, s32, s32);

/* GGA: sndCmdEvent */
void func_80026058(void) {
    u8 temp_a1;

    temp_a1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    func_80026140(0, temp_a1, 0, 0);
}



/* GGA: sndCmdEventArg */
void func_80026098(void) {
    u8 temp_a1;
    u8 temp_a2;

    temp_a1 = *D_800CBDA0++;
    temp_a2 = *D_800CBDA0++;
    func_80026140(1, temp_a1, temp_a2, 0);
}


extern void func_800261C4(s32);

/* GGA: sndCmdEventKind2 */
void func_800260E0(void) {
    func_800261C4(2);
}



/* GGA: sndCmdEventKind3 */
void func_80026100(void) {
    func_800261C4(3);
}



/* GGA: sndCmdEventKind4 */
void func_80026120(void) {
    func_800261C4(4);
}

#undef func_80026140
#define D_800497A4 D_800497A4__func_80026140
#define D_800CBDD0 D_800CBDD0__func_80026140
#define D_800CBDD8 D_800CBDD8__func_80026140


extern u16 D_800497A4[];
extern u8 D_800CBDD0;
extern u8 D_800CBDD8[];

/* GGA: sndCmdQueueEvent */
void func_80026140(u8 arg0, u8 arg1, u8 arg2, s16 arg3) {
    u16 v;
    u8 *p;
    s32 n;

    v = D_800497A4[arg1];
    if (v != 0 && (n = D_800CBDD0) < 8) {
        p = D_800CBDD8 + n * 6;
        *(u16 *)p = v;
        p[3] = arg2;
        *(s16 *)(p + 4) = arg3;
        p[2] = arg0;
        D_800CBDD0 = n + 1;
    }
}
#undef D_800497A4
#undef D_800CBDD0
#undef D_800CBDD8
#define func_80026140 func_80026140__merge_frozen


/* GGA: sndCmdEventValue */
void func_800261C4(s32 arg0)
{
  u8 temp_a1;
  u8 temp_a2;
  u8 temp_a3;
  s16 temp_s16;
  temp_a1 = D_800CBDA0[0];
  D_800CBDA0 = D_800CBDA0 + 1;
  temp_a2 = D_800CBDA0[0];
  D_800CBDA0 = D_800CBDA0 + 1;
  temp_a3 = D_800CBDA0[(arg0 & 0xFF) * 0];
  temp_s16 = (s16) (((s8) (temp_a3 & 0xFF)) << 8);
  D_800CBDA0 = D_800CBDA0 + 1;
  func_80026140(arg0 & 0xFF, temp_a1, temp_a2, temp_s16);
}


struct func_8002622C_Struct {
    s32 unk0;
    u8 unk4;
    u8 pad5[9];
    u8 unkE;
    u8 unkF;
};


/* GGA: sndCmdEnd */
void func_8002622C(void) {
    if (((struct func_8002622C_Struct *) D_800CBDA4)->unkE != 0) {
        ((struct func_8002622C_Struct *) D_800CBDA4)->unkF = 1;
        func_80026950(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, 0, 0x1388);
    }
    ((struct func_8002622C_Struct *) D_800CBDA4)->unk0 = 0;
    ((struct func_8002622C_Struct *) D_800CBDA4)->unk4 = ((struct func_8002622C_Struct *) D_800CBDA4)->unk0;
}



/* GGA: sndCmdSkip1 */
void func_800262AC(void) {
    D_800CBDA0 += 1;
}



void func_800262C4(void) {
    D_800CBDA0 += 2;
}



void func_800262DC(void) {
    D_800CBDA0 += 3;
}


#undef func_80026140
