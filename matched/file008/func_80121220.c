#include "common.h"
/* context.h gives func_8002FC20 two f32 parameters; the function takes one (the target never sets $f14) */
void func_80121140(f32 arg0, f32 *arg1);

extern f32 func_8002FC20(f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern void func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80108508(f32, f32, f32, f32, f32, f32);
extern s32 func_801085D4(s32, f32, f32, f32, f32, f32, f32);
extern void func_80119F9C(s16 *, s16 *);
extern s32 D_801636FC;
extern u8 D_80164E10;
/* One s16 counter (total yaw turned), at 0x80164E20. The target reloads its address for every access and keeps
   two back-to-back stores of the same value, so each access goes through its own name for that address. */
extern s16 D_80164E20;
extern s16 B_80164E20;
extern s16 func_80164E20;
extern s16 B_80164E1C[];
extern s16 B_80164E18[];
extern s16 B_80164E14[];

typedef struct func_80121220_StructPos {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[0x30 - 0x10];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80121220_StructPos;
typedef struct func_80121220_StructObj {
    u8 pad[0x2C];
    func_80121220_StructPos *unk2C;
} func_80121220_StructObj;
typedef struct func_80121220_StructAnim {
    u8 pad[0x1C];
    s32 unk1C;
} func_80121220_StructAnim;
typedef struct func_80121220_StructDC {
    u8 pad[0x5C];
    func_80121220_StructAnim *unk5C;
} func_80121220_StructDC;
typedef struct func_80121220_StructGlobal {
    u8 pad0[0x7E];
    u16 unk7E;
    u16 unk80;
    u8 pad82[0xDC - 0x82];
    func_80121220_StructDC *unkDC;
    func_80121220_StructObj *unkE0;
    u8 padE4[4];
    func_80121220_StructObj *unkE8;
    u8 padEC[0x2AC - 0xEC];
    u8 unk2AC;
    u8 pad2AD[0x320 - 0x2AD];
    f32 unk320;
    u8 pad324[0x35C - 0x324];
    f32 unk35C, unk360, unk364;
    u8 pad368[0x380 - 0x368];
    f32 unk380, unk384, unk388;
} func_80121220_StructGlobal;
extern func_80121220_StructGlobal D_801BBBF0;

#define G D_801BBBF0
#define E0 (D_801BBBF0.unkE0->unk2C)
#define E8 (D_801BBBF0.unkE8->unk2C)
#define WRAP(a) (((a) & 0x1000) ? (((a) & 0x1FFF) - 0x2000) : ((a) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))
#define SQ(x) ((x) * (x))
/* The debug prints (format strings are still in this file's rodata) are compiled out: their arguments are
   evaluated and discarded, which leaves the ternary skeletons and the locals that only the prints used. */
#define DPRINT(args) ((void)(args))
#define SGN(a) ((WRAP(a) < 0) ? '-' : ' ')
#define MAG(a) ABS(WRAP(a))
#define COS func_8001EB64
#define SIN func_8001EAD0

void func_80121220(f32 arg0, f32 arg1) {
    f32 dx;
    f32 dy;
    f32 dz;
    f32 sp250;
    f32 sp24C;
    f32 vAx, vAy, vAz;
    f32 sp23C;
    f32 sp238;
    f32 p2z;
    f32 vBx, vBy, vBz;
    f32 sp224;
    f32 sp220;
    f32 p4z;
    f32 vCx, vCy, vCz;
    f32 sp20C;
    f32 sp208;
    f32 p3z;
    f32 vDx, vDy, vDz;
    f32 sp1F4;
    f32 sp1F0;
    f32 sp1EC;
    f32 sp1E8;
    f32 sp1E4;
    f32 sp1E0;
    f32 vEx, vEy, vEz;
    f32 sp1D0;
    f32 sp1CC;
    f32 sp1C8;
    f32 vFx, vFy, vFz;
    f32 sp1B8;
    f32 sp1B4;
    f32 sp1B0;
    f32 vGx, vGy, vGz;
    f32 sp1A0;
    f32 sp19C;
    f32 sp198;
    f32 vHx, vHy, vHz;
    f32 x;
    f32 sp184;
    f32 z;
    s32 v;
    s32 k;
    s32 s3;
    s16 b;
    s16 d;
    f32 sp16C;
    s16 yaw0;
    s16 s4;
    s16 pitch0;
    s16 s1;
    s32 cnt;
    s32 r1;
    s32 sp158;
    s32 r2;
    s32 r3;
    s32 sp14C;
    s32 r4;
    s32 s1_5;
    s32 sp140;
    s16 pitch1;
    s16 yaw1;
    s32 sp138;
    f32 t;
    f32 dist0;
    s32 sp12C;
    s32 sign;
    f32 rate12;
    s32 sp120;
    f32 vecCPx;
    f32 vecCPy;
    f32 vecCPz;
    f32 vecPCx;
    f32 vecPCy;
    f32 vecPCz;
    f32 rateL1;
    f32 rateL2;
    f32 rateR1;
    f32 rateR2;
    f32 oldDist;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 rate;
    f32 spD4;
    f32 hDist0;
    f32 spCC;
    f32 spC8;
    s16 spC6;
    s16 spC4;
    s16 cp;
    s16 s0;
    s16 spBE;
    s16 a;
    s8 spBB;
    f64 dd;

    spBB = 0;
    s3 = (s32) G.unkDC->unk5C;
    if ((G.unk7E & 0x200) && (G.unk80 & 2)) {
        D_80164E10 ^= 1;
    }
    if (D_801636FC != 0) {
        DPRINT((D_80164E10));
    }
    func_80119F9C(&spC6, &spC4);
    dx = E0->unk4 - E8->unk30;
    dy = (E0->unk8 + 15.0) - E8->unk34;
    dz = E0->unkC - E8->unk38;
    sp250 = func_8002FC20(SQ(dx) + SQ(dz));
    sp24C = func_8002FC20(SQ(dx) + SQ(dy) + SQ(dz));
    s4 = yaw0 = func_8001EF38(dz, dx) & 0x1FFF;
    s1 = pitch0 = WRAP(func_8001EF38(dy, sp250));
    spC8 = func_8002FC20(SQ(E8->unk30 - E8->unk3C) + SQ(E8->unk34 - E8->unk40) + SQ(E8->unk38 - E8->unk44));
    dist0 = sp24C;
    cp = s1;
    s0 = WRAP((s16) (cp + 0x800));
    sp1E8 = (3.0f * COS(s0)) * COS(s4) + E0->unk4;
    sp1E4 = SIN(s0) * 3.0f + (E0->unk8 + 15.0);
    sp1E0 = (3.0f * COS(s0)) * SIN(s4) + E0->unkC;
    vAx = COS(s0) * COS(s4);
    vAy = SIN(s0);
    vAz = COS(s0) * SIN(s4);
    vBx = COS(s0) * COS(s4);
    vBy = SIN(s0);
    vBz = COS(s0) * SIN(s4);
    DPRINT((vAx, vAy, vAz, vBx, vBy, vBz));
    sp23C = (4.5f * COS(s0)) * COS(s4) + E8->unk30;
    sp238 = SIN(s0) * 4.5f + E8->unk34;
    p2z = (4.5f * COS(s0)) * SIN(s4) + E8->unk38;
    s0 = WRAP((s16) (cp - 0x800));
    sp1D0 = (3.0f * COS(s0)) * COS(s4) + E0->unk4;
    sp1CC = SIN(s0) * 3.0f + (E0->unk8 + 15.0);
    sp1C8 = (3.0f * COS(s0)) * SIN(s4) + E0->unkC;
    vCx = COS(s0) * COS(s4);
    vCy = SIN(s0);
    vCz = COS(s0) * SIN(s4);
    vDx = COS(s0) * COS(s4);
    vDy = SIN(s0);
    vDz = COS(s0) * SIN(s4);
    DPRINT((vCx, vCy, vCz, vDx, vDy, vDz));
    sp224 = (4.5f * COS(s0)) * COS(s4) + E8->unk30;
    sp220 = SIN(s0) * 4.5f + E8->unk34;
    p4z = (4.5f * COS(s0)) * SIN(s4) + E8->unk38;
    func_801085D4(0x11, E8->unk30, E8->unk34, E8->unk38, E0->unk4, E0->unk8 + 15.0, E0->unkC);
    sp140 = 0;
    sp14C = func_801085D4(0x11, sp23C, sp238, p2z, sp1E8, sp1E4, sp1E0);
    if (sp14C != 0) {
        sp140 = func_801085D4(1, E8->unk30, E8->unk34, E8->unk38, sp23C, sp238, p2z);
        func_801085D4(1, E0->unk4, E0->unk8 + 15.0, E0->unkC, sp1E8, sp1E4, sp1E0);
    }
    sp12C = 0;
    sp138 = func_801085D4(0x11, sp224, sp220, p4z, sp1D0, sp1CC, sp1C8);
    if (sp138 != 0) {
        sp12C = func_801085D4(1, E8->unk30, E8->unk34, E8->unk38, sp224, sp220, p4z);
        func_801085D4(1, E0->unk4, E0->unk8 + 15.0, E0->unkC, sp1D0, sp1CC, sp1C8);
    }
    if (D_801636FC != 0) {
        DPRINT((sp140, sp14C, sp138, sp12C, dist0));
    }
    if ((sp138 != 0) && (((func_80121220_StructAnim *) s3)->unk1C == 0x01680053)) {
        G.unk35C = G.unk360 = G.unk364 = 0.0f;
        func_8010843C(sp224, sp220, p4z, sp1D0, sp1CC, sp1C8);
        vecCPx = G.unk35C;
        vecCPy = G.unk360;
        vecCPz = G.unk364;
        if (D_801636FC != 0) {
            DPRINT((vecCPx, vecCPy, vecCPz));
        }
        G.unk35C = G.unk360 = G.unk364 = 0.0;
        func_8010843C(sp1D0, sp1CC, sp1C8, sp224, sp220, p4z);
        vecPCx = G.unk35C;
        vecPCy = G.unk360;
        vecPCz = G.unk364;
        if (D_801636FC != 0) {
            DPRINT((vecPCx, vecPCy, vecPCz));
        }
        if (D_801636FC != 0) {
            DPRINT(((func_8001EF38(G.unk364, G.unk35C) + 0x1000) & 0x1FFF));
        }
        spBE = ((s16) func_8001EF38(G.unk364, G.unk35C) + 0x1000) & 0x1FFF;
        spBB = 1;
        s3 = 0;
    } else if ((sp14C != 0) && (sp140 == 0) && (sp138 == 0)) {
        s3 = 1;
        sp16C = 1.0f;
    } else if ((sp138 != 0) && (sp12C == 0) && (sp14C == 0)) {
        s3 = 1;
        sp16C = -1.0f;
    } else {
        s3 = 0;
    }
    if (D_801636FC != 0) {
        DPRINT((dx, dy, dz, SGN(s1), MAG(s1)));
    }
    k = (s16) (ABS(arg1) * 16.0f + 1.0f);
    cnt = 0;
    DPRINT((k));
    if (s3 != 0) {
        do {
            s1 = WRAP((s16) ((f32) s1 + (f32) k * sp16C));
            if (ABS(s1) >= 0x800) {
                sign = (s1 < 0) ? -1 : 1;
                s1 = sign * 0x7FF;
            }
            x = E0->unk4 - (sp24C * COS(s1)) * COS(s4);
            sp184 = (E0->unk8 + 15.0) - SIN(s1) * sp24C;
            z = E0->unkC - (sp24C * COS(s1)) * SIN(s4);
            if ((sp14C != 0) && (sp140 == 0) && (sp138 == 0)) {
                if (D_801636FC != 0) {
                    DPRINT((s1));
                }
                s0 = WRAP((s16) (s1 + 0x800));
                sp1E8 = (3.0f * COS(s0)) * COS(s4) + E0->unk4;
                sp1E4 = SIN(s0) * 3.0f + E0->unk8 + 15.0;
                sp1E0 = (3.0f * COS(s0)) * SIN(s4) + E0->unkC;
                sp23C = (4.5f * COS(s0)) * COS(s4) + x;
                sp238 = SIN(s0) * 4.5f + sp184;
                p2z = (4.5f * COS(s0)) * SIN(s4) + z;
                s3 = func_801085D4(0x11, sp23C, sp238, p2z, sp1E8, sp1E4, sp1E0);
            } else if ((sp138 != 0) && (sp12C == 0) && (sp14C == 0)) {
                if (D_801636FC != 0) {
                    DPRINT((s1));
                }
                s0 = WRAP((s16) (s1 - 0x800));
                sp1D0 = (3.0f * COS(s0)) * COS(s4) + E0->unk4;
                sp1CC = SIN(s0) * 3.0f + E0->unk8 + 15.0;
                sp1C8 = (3.0f * COS(s0)) * SIN(s4) + E0->unkC;
                sp224 = (4.5f * COS(s0)) * COS(s4) + x;
                sp220 = SIN(s0) * 4.5f + sp184;
                s3 = func_801085D4(0x11, sp224, sp220, (4.5f * COS(s0)) * SIN(s4) + z, sp1D0, sp1CC, sp1C8);
            }
            cnt++;
            G.unk2AC = 2;
            if (cnt >= 51) {
                break;
            }
        } while (s3 != 0);
    }
    v = (cnt != 0);
    cnt = 0;
    if (v) {
        if (D_801636FC != 0) {
            DPRINT((cnt, SGN(pitch0), MAG(pitch0), SGN(s1), MAG(s1)));
        }
        pitch1 = WRAP(func_8001EF38(E8->unk40 - sp184, func_8002FC20(SQ(E8->unk3C - x) + SQ(E8->unk44 - z))));
        if (ABS(pitch1) >= 0x800) {
            sign = (pitch1 < 0) ? -1 : 1;
            pitch1 = sign * 0x7FF;
        }
        E8->unk30 = E8->unk3C - (spC8 * COS(pitch1)) * COS(s4);
        E8->unk34 = E8->unk40 - SIN(pitch1) * spC8;
        E8->unk38 = E8->unk44 - (spC8 * COS(pitch1)) * SIN(s4);
        if (D_801636FC != 0) {
            DPRINT((cnt, SGN(spC4), MAG(spC4), SGN(pitch1), MAG(pitch1)));
        }
    }
    dx = E0->unk4 - E8->unk30;
    sp250 = func_8002FC20(SQ(dx) + SQ(E0->unkC - E8->unk38));
    spCC = func_8002FC20(SQ(E8->unk30 - E8->unk3C) + SQ(E8->unk38 - E8->unk44));
    hDist0 = sp250;
    a = (s16) (s4 - 0x800) & 0x1FFF;
    sp1B8 = COS(a) * 3.0f + E0->unk4;
    sp1B4 = E0->unk8 + 15.0;
    sp1B0 = SIN(a) * 3.0f + E0->unkC;
    vEx = COS(a);
    vEy = 0.0f;
    vEz = SIN(a);
    vFx = COS(a);
    vFy = 0.0f;
    vFz = SIN(a);
    DPRINT((vEx, vEy, vEz, vFx, vFy, vFz));
    sp20C = COS(a) * 4.5f + E8->unk30;
    sp208 = E8->unk34;
    p3z = SIN(a) * 4.5f + E8->unk38;
    b = (s16) (s4 + 0x800) & 0x1FFF;
    sp1A0 = COS(b) * 3.0f + E0->unk4;
    sp19C = E0->unk8 + 15.0;
    sp198 = SIN(b) * 3.0f + E0->unkC;
    vGx = COS(b);
    vGy = 0.0f;
    vGz = SIN(b);
    vHx = COS(b);
    vHy = 0.0f;
    vHz = SIN(b);
    DPRINT((vGx, vGy, vGz, vHx, vHy, vHz));
    sp1F4 = COS(b) * 4.5f + E8->unk30;
    sp1F0 = E8->unk34;
    sp1EC = SIN(b) * 4.5f + E8->unk38;
    sp158 = func_801085D4(0x11, E8->unk30, E8->unk34, E8->unk38, E0->unk4, E0->unk8 + 15.0, E0->unkC);
    sp120 = 0;
    spF0 = func_8002FC20(SQ(sp1B8 - sp20C) + SQ(sp1B4 - sp208) + SQ(sp1B0 - p3z));
    r1 = func_80108508(sp20C, sp208, p3z, sp1B8, sp1B4, sp1B0);
    if (r1 != 0) {
        spE8 = func_8002FC20(SQ(G.unk380 - sp20C) + SQ(G.unk384 - sp208) + SQ(G.unk388 - p3z));
    } else {
        spE8 = spF0;
    }
    r2 = func_80108508(sp1B8, sp1B4, sp1B0, sp20C, sp208, p3z);
    if (r2 != 0) {
        spE0 = func_8002FC20(SQ(G.unk380 - sp20C) + SQ(G.unk384 - sp208) + SQ(G.unk388 - p3z));
    } else {
        spE0 = spF0;
    }
    if ((r1 | r2) != 0) {
        func_801085D4(1, E8->unk30, E8->unk34, E8->unk38, sp20C, sp208, p3z);
        sp120 = func_801085D4(1, E0->unk4, E0->unk8 + 15.0, E0->unkC, sp1B8, sp1B4, sp1B0);
    }
    s1_5 = 0;
    spEC = func_8002FC20(SQ(sp1A0 - sp1F4) + SQ(sp19C - sp1F0) + SQ(sp198 - sp1EC));
    r3 = func_80108508(sp1F4, sp1F0, sp1EC, sp1A0, sp19C, sp198);
    if (r3 != 0) {
        spE4 = func_8002FC20(SQ(G.unk380 - sp1F4) + SQ(G.unk384 - sp1F0) + SQ(G.unk388 - sp1EC));
    } else {
        spE4 = spEC;
    }
    r4 = func_80108508(sp1A0, sp19C, sp198, sp1F4, sp1F0, sp1EC);
    if (r4 != 0) {
        spDC = func_8002FC20(SQ(G.unk380 - sp1F4) + SQ(G.unk384 - sp1F0) + SQ(G.unk388 - sp1EC));
    } else {
        spDC = spEC;
    }
    if ((r3 | r4) != 0) {
        func_801085D4(1, E8->unk30, E8->unk34, E8->unk38, sp1F4, sp1F0, sp1EC);
        s1_5 = func_801085D4(1, E0->unk4, E0->unk8 + 15.0, E0->unkC, sp1A0, sp19C, sp198);
    }
    if (D_801636FC != 0) {
        DPRINT((sp120, sp158, s1_5, hDist0));
    }
    if (spBB != 0) {
        s3 = 1;
        sp16C = -1.0f;
    } else if (((r1 | r2) != 0) && ((r3 | r4) != 0)) {
        spBB = 1;
        s3 = 1;
        spBE = 0x400;
        sp16C = -1.0f;
    } else if ((((r1 | r2) != 0) && (sp120 == 0)) || ((sp158 != 0) && (sp120 != 0))) {
        s3 = 1;
        sp16C = -1.0f;
    } else if ((((r3 | r4) != 0) && (s1_5 == 0)) || ((sp158 != 0) && (s1_5 != 0))) {
        s3 = 1;
        sp16C = 1.0f;
    } else {
        s3 = 0;
        x = E8->unk30;
        sp184 = E8->unk34;
        z = E8->unk38;
    }
    if ((r1 | r2) != 0) {
        func_80121140(spE8 / spF0, &spD4);
        rateL1 = spD4;
        DPRINT((spE8, spF0, rateL1));
        func_80121140(spE0 / spF0, &spD4);
        rateL2 = spD4;
        DPRINT((spE0, spF0, rateL2));
        func_80121140((spE8 + spE0) * 0.5 / spF0, &spD4);
        if (D_801636FC != 0) {
            rate12 = (spE8 + spE0) * 0.5 / spF0;
            DPRINT((rate12, spD4));
        }
    } else if ((r3 | r4) != 0) {
        func_80121140(spE4 / spEC, &spD4);
        rateR1 = spD4;
        DPRINT((spE4, spEC, rateR1));
        func_80121140(spDC / spEC, &spD4);
        rateR2 = spD4;
        DPRINT((spDC, spEC, rateR2));
        func_80121140((spE4 + spDC) * 0.5 / spEC, &spD4);
        if (D_801636FC != 0) {
            rate12 = (spE4 + spDC) * 0.5 / spEC;
            DPRINT((rate12, spD4));
        }
    } else {
        spD4 = 1.0f;
    }
    if (spBB != 0) {
        s4 = spBE;
        G.unk2AC = 2;
        spBE = 0x400;
        x = E0->unk4 - COS(s4) * sp250;
        sp184 = E8->unk34 + (((E0->unk8 + 25.0 + G.unk320) - E8->unk34) * 0.125);
        z = E0->unkC - SIN(s4) * sp250;
        s3 = func_801085D4(0x11, x, sp184, z, E0->unk4, E0->unk8 + 15.0, E0->unkC);
    } else if (ABS(arg1) < arg0) {
        spBE = 16.0f * spD4 * arg0 + 1.0f;
    } else {
        spBE = ABS(arg1) * (16.0f * spD4) + 1.0f;
    }
    rate = spD4;
    if (D_801636FC != 0) {
        DPRINT((spBE, rate));
    }
    D_80164E20 = 0;
    yaw1 = s4;
    if (s3 != 0) {
        B_80164E14[6] = 0;
        do {
            d = B_80164E20;
            d = (f32) d + (f32) spBE * sp16C;
            if (D_801636FC != 0) {
                DPRINT((cnt, d));
            }
            /* the absolute value is taken before the store, the compare after it */
            if (ABS(d) > (func_80164E20 = d, 0x2000)) {
                t = 8192.0f * sp16C;
                if (D_801636FC != 0) {
                    DPRINT((cnt));
                }
                oldDist = sp250;
                dd = sp250 * 0.9;
                d = (f32) d - t;
                B_80164E1C[2] = d;
                if (D_801636FC != 0) {
                    B_80164E18[4] = d;
                }
                if (dd > 20.0) {
                    sp250 = sp250 * 0.9;
                }
                DPRINT((oldDist, sp250));
            }
            s4 = (s16) ((f32) s4 + (f32) spBE * sp16C) & 0x1FFF;
            x = E0->unk4 - COS(s4) * sp250;
            sp184 = E8->unk34 + (((E0->unk8 + 25.0 + G.unk320) - E8->unk34) * 0.125);
            z = E0->unkC - SIN(s4) * sp250;
            if ((spBB != 0) || (((sp120 | s1_5) != 0) && (sp158 != 0))) {
                s3 = func_801085D4(0x11, x, sp184, z, E0->unk4, E0->unk8 + 15.0, E0->unkC);
                if (D_801636FC != 0) {
                    DPRINT(((sp16C > 0.0) ? 'R' : 'L'));
                }
            } else if (((r1 | r2) != 0) && (sp120 == 0)) {
                if (D_801636FC != 0) {
                    DPRINT((s1));
                }
                a = (s16) (s4 - 0x800) & 0x1FFF;
                sp20C = COS(a) * 4.5f + x;
                p3z = SIN(a) * 4.5f + z;
                sp1B8 = COS(a) * 3.0f + E0->unk4;
                sp1B4 = E0->unk8 + 15.0;
                sp1B0 = SIN(a) * 3.0f + E0->unkC;
                s3 = func_801085D4(1, sp20C, sp184, p3z, sp1B8, sp1B4, sp1B0);
            } else if (((r3 | r4) != 0) && (s1_5 == 0)) {
                if (D_801636FC != 0) {
                    DPRINT((s1));
                }
                b = (s16) (s4 + 0x800) & 0x1FFF;
                sp1F4 = COS(b) * 4.5f + x;
                sp1EC = SIN(b) * 4.5f + z;
                sp1A0 = COS(b) * 3.0f + E0->unk4;
                sp19C = E0->unk8 + 15.0;
                sp198 = SIN(b) * 3.0f + E0->unkC;
                s3 = func_801085D4(1, sp1F4, sp184, sp1EC, sp1A0, sp19C, sp198);
            }
            cnt++;
            G.unk2AC = 2;
            if ((D_801636FC != 0) && (s3 != 0)) {
                DPRINT((cnt, s3));
            }
        } while ((cnt < 51) && (s3 != 0));
    }
    if (D_801636FC != 0) {
        DPRINT((cnt, yaw0, yaw1, s4, SGN((s16) (s4 - yaw0)), MAG((s16) (s4 - yaw0))));
    }
    s1 = func_8001EF38(E8->unk44 - z, E8->unk3C - x) & 0x1FFF;
    if (spBB == 0) {
        s1 = WRAP((s16) (s1 - spC6)) * 0.6666666666666666 + spC6;
    }
    if ((spBB != 0) || (cnt > 0)) {
        E8->unk30 = E8->unk3C - COS(s1) * spCC;
        E8->unk34 = sp184;
        E8->unk38 = E8->unk44 - SIN(s1) * spCC;
    }
    if (D_801636FC != 0) {
        DPRINT((cnt, spC6, s1, SGN((s16) (s1 - spC6)), MAG((s16) (s1 - spC6))));
    }
}
