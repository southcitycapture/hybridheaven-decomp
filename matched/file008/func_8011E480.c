#include "common.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern s32 D_801636F8;
extern f64 D_8018ABE8;
extern f64 D_8018ABF0;
extern f64 D_8018ABF8;
typedef struct { u8 pad[0x380]; f32 unk380, unk384, unk388; } func_8011E480_Struct;
extern func_8011E480_Struct D_801BBBF0;

#define A0 ((s16)(arg0+0x1000)&0x1FFF)
#define A1 ((s16)(arg0-0x800)&0x1FFF)
#define A2 ((s16)(arg0+0x800)&0x1FFF)
#define RL if (D_801636F8 != 0) {}
#define SQ(x) ((x) * (x))
#define LEN(x,y,z) func_8002FC20(SQ(x) + SQ(y) + SQ(z))
#define DIST(x,y,z,a,b,c) func_8002FC20(SQ((x)-(a))+SQ((y)-(b))+SQ((z)-(c)))
#define YAW(x,z,a,c) func_8001EF38((c)-(z),(a)-(x))
#define PITCH(x,y,z,a,b,c) (p=(z)-(c), q=(x)-(a), func_8001EF38((b)-(y),func_8002FC20(p*p+q*q)))
#define WRAP(a) (((a)&0x1000) ? ((a)&0x1FFF)-0x2000 : (a)&0x1FFF)
#define DEBUG_ANGLES(x,y,z,a,b,c,R) \
    YAW(x,z,a,c); \
    if ((YAW(x,z,a,c) & 0x1FFF) < 0) { YAW(x,z,a,c); } else { YAW(x,z,a,c); } \
    if (PITCH(x,y,z,a,b,c) & 0x1000) { PITCH(x,y,z,a,b,c); } else { PITCH(x,y,z,a,b,c); } \
    if (PITCH(x,y,z,a,b,c) & 0x1000) { v = (PITCH(x,y,z,a,b,c) & 0x1FFF)-0x2000; } else { v = PITCH(x,y,z,a,b,c)&0x1FFF; } \
    if (v < 0) { \
        if (PITCH(x,y,z,a,b,c)&0x1000) { PITCH(x,y,z,a,b,c); } else { PITCH(x,y,z,a,b,c); } \
    } else { \
        if (PITCH(x,y,z,a,b,c)&0x1000) { PITCH(x,y,z,a,b,c); } else { PITCH(x,y,z,a,b,c); R } \
    }
#define VPITCH(y,h) func_8001EF38(y,func_8002FC20(h))
#define DEBUG_VECTOR(x,y,z) \
    func_8001EF38(z,x); RL \
    if ((func_8001EF38(z,x)&0x1FFF)<0) { func_8001EF38(z,x); } else { func_8001EF38(z,x); } \
    if (VPITCH(y,SQ(x)+SQ(z))&0x1000) { VPITCH(y,SQ(x)+SQ(z)); } else { VPITCH(y,SQ(x)+SQ(z)); } \
    if (VPITCH(y,SQ(x)+SQ(z))&0x1000) { v=(VPITCH(y,SQ(x)+SQ(z))&0x1FFF)-0x2000; } else { v=VPITCH(y,SQ(x)+SQ(z))&0x1FFF; } \
    if (v<0) { if (VPITCH(y,SQ(x)+SQ(z))&0x1000) { VPITCH(y,SQ(x)+SQ(z)); } else { VPITCH(y,SQ(x)+SQ(z)); } } \
    else if (VPITCH(y,SQ(x)+SQ(z))&0x1000) { VPITCH(y,SQ(x)+SQ(z)); } else { VPITCH(y,SQ(x)+SQ(z)); RL }

void func_8011E480(s16 arg0, s32 arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6, f32 *arg7) {
    u8 pad[16];
    s32 sp164, sp160, sp15C, sp158, sp154;
    f32 sp150, sp14C, sp148, sp144, sp140, sp13C;
    f32 sp138, sp134, sp130, sp12C, sp128, sp124;
    f32 sp120, sp11C, sp118, sp114, sp110, h;
    f32 sp108, sp104, sp100, spFC, spF8, spF4;
    f32 spF0, spEC, spE8, spE4, spE0, spDC;
    f32 spD8, spD4, spD0, spCC, spC8, spC4;
    f32 spC0, spBC, spB8, spB4, spB0, spAC;
    f32 spA8, spA4, spA0, sp9C, sp98, sp94;
    f32 d, sp8C;
    register s16 angle0;
    s16 anglepad;
    f32 dy, dz, x, y, z, u, r, p, q;
    s32 v;

    v = D_801636F8;
    if (v != 0) { DEBUG_ANGLES(*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,); }
    if (func_801084C4(*arg5,*arg6,*arg7,*arg2,*arg3,*arg4) != 0) {
        *arg2 = D_801BBBF0.unk380; *arg3 = D_801BBBF0.unk384; *arg4 = D_801BBBF0.unk388;
    }
    if (D_801636F8 != 0) { DEBUG_ANGLES(*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,); }
    sp8C = func_8001EB64(0x800);
    sp150 = *arg2 + 5.0 * sp8C * func_8001EB64(arg0);
    sp14C = *arg3 + 5.0 * func_8001EAD0(0x800);
    sp8C = func_8001EB64(0x800);
    sp148 = *arg4 + 5.0 * sp8C * func_8001EAD0(arg0);
    sp164 = 0;
    spF0 = spEC = spE8 = 0.0f;
    if (func_801084C4(*arg2,*arg3,*arg4,sp150,sp14C,sp148) != 0) {
        sp164 = 1;
        spF0 = D_801BBBF0.unk380 - sp150;
        spEC = D_801BBBF0.unk384 - sp14C;
        spE8 = D_801BBBF0.unk388 - sp148;
        if (D_801636F8 != 0) { LEN(spF0,spEC,spE8); }
        sp8C = func_8001EB64(0x800);
        sp114 = *arg5 + 5.0 * sp8C * func_8001EB64(arg0);
        sp110 = *arg6 + 5.0 * func_8001EAD0(0x800);
        sp8C = func_8001EB64(0x800);
        h = *arg7 + 5.0 * sp8C * func_8001EAD0(arg0);
        if (func_801084C4(sp114,sp110,h,sp150,sp14C,sp148) != 0) {
            spF0 = D_801BBBF0.unk380 - sp150;
            spEC = D_801BBBF0.unk384 - sp14C;
            spE8 = D_801BBBF0.unk388 - sp148;
            if (D_801636F8 != 0) { LEN(spF0,spEC,spE8); }
        }
    }
    sp8C = func_8001EB64(-0x800);
    sp144 = *arg2 + 1.0 * sp8C * func_8001EB64(arg0);
    sp140 = *arg3 + 1.0 * func_8001EAD0(-0x800);
    sp8C = func_8001EB64(-0x800);
    sp13C = *arg4 + 1.0 * sp8C * func_8001EAD0(arg0);
    sp160 = 0;
    spE4 = spE0 = spDC = 0.0f;
    if (func_801084C4(*arg2,*arg3,*arg4,sp144,sp140,sp13C) != 0) {
        spE4 = D_801BBBF0.unk380-sp144;
        sp160 = 1;
        spE0 = D_801BBBF0.unk384-sp140;
        spDC = D_801BBBF0.unk388-sp13C;
        if (D_801636F8 != 0) { LEN(spE4,spE0,spDC); }
    }
    if (sp160 != 0) {
        *arg2 += spE4; *arg3 += spE0; *arg4 += spDC;
    } else if (sp164 != 0) {
        *arg2 += spF0; *arg3 += spEC; *arg4 += spE8;
    }
    angle0 = (s16)(arg0 + 0x1000);
    angle0 &= 0x1FFF;
    sp8C = func_8001EB64(0);
    sp138 = *arg2 + 0.1 * sp8C * func_8001EB64(angle0);
    sp134 = *arg3 + 0.1 * func_8001EAD0(0);
    sp8C = func_8001EB64(0);
    sp130 = *arg4 + 0.1 * sp8C * func_8001EAD0(angle0);
    if (D_801636F8 != 0 && angle0 != 0 && arg0 != 0) {}
    if (D_801636F8 != 0 && angle0 != 0 && arg2 != NULL) {}
    spD8 = spD4 = spD0 = 0.0f;
    sp15C = 0;
    if (func_801084C4(*arg2,*arg3,*arg4,sp138,sp134,sp130) != 0) {
        sp15C = 1;
        spD8 = D_801BBBF0.unk380-sp138;
        spD4 = D_801BBBF0.unk384-sp134;
        spD0 = D_801BBBF0.unk388-sp130;
        if (D_801636F8 != 0) { LEN(spD8,spD4,spD0); }
        if (D_801636F8 != 0) { DIST(*arg2,*arg3,*arg4,D_801BBBF0.unk380,D_801BBBF0.unk384,D_801BBBF0.unk388); }
        if (D_801636F8 != 0) { DIST(*arg5,*arg6,*arg7,D_801BBBF0.unk380,D_801BBBF0.unk384,D_801BBBF0.unk388); }
    }
    sp12C = *arg2 + 5.0 * func_8001EB64(A1);
    sp128 = *arg3;
    sp124 = *arg4 + 5.0 * func_8001EAD0(A1);
    sp158 = 0;
    spCC = spC8 = spC4 = 0.0f;
    if (func_801084C4(*arg2,*arg3,*arg4,sp12C,sp128,sp124) != 0) {
        spCC = D_801BBBF0.unk380-sp12C;
        spC8 = D_801BBBF0.unk384-sp128;
        spC4 = D_801BBBF0.unk388-sp124;
        if (D_801636F8 != 0) { LEN(spCC,spC8,spC4); }
        sp108 = *arg5 + 5.0 * func_8001EB64(A1);
        sp104 = *arg6;
        sp100 = *arg7 + 5.0 * func_8001EAD0(A1);
        if (func_801084C4(*arg5,*arg6,*arg7,sp108,sp104,sp100) != 0) {
            spB4 = DIST(D_801BBBF0.unk380,D_801BBBF0.unk384,D_801BBBF0.unk388,*arg5,*arg6,*arg7);
            sp12C = *arg2+spB4*func_8001EB64(A1);
            sp128 = *arg3;
            sp124 = *arg4+spB4*func_8001EAD0(A1);
            sp108 = *arg5+spB4*func_8001EB64(A1);
            sp104 = *arg6;
            sp100 = *arg7+spB4*func_8001EAD0(A1);
        }
        if (func_801084C4(sp108,sp104,sp100,sp12C,sp128,sp124) != 0) {
            sp158 = 1;
            spCC = D_801BBBF0.unk380-sp12C;
            spC8 = D_801BBBF0.unk384-sp128;
            spC4 = D_801BBBF0.unk388-sp124;
            spA8 = *arg2+spCC;
            spA4 = *arg3+spC8;
            spA0 = *arg4+spC4;
            if (D_801636F8 != 0) { LEN(spCC,spC8,spC4); }
            if (D_801636F8 != 0) { DEBUG_VECTOR(spCC,spC8,spC4); }
            if (D_801636F8 != 0) { DEBUG_ANGLES(spA8,spA4,spA0,*arg5,*arg6,*arg7,); }
            spB0 = LEN(spCC,spC8,spC4);
            spAC = LEN(sp12C-sp108,sp128-sp104,sp124-sp100);
            RL
            if ((f64)(spAC-spB0)<3.0) {
                r = (f64)spAC-3.0;
                spCC = ((sp108-sp12C)*r)/spAC;
                spC8 = ((sp104-sp128)*r)/spAC;
                spC4 = ((sp100-sp124)*r)/spAC;
                spA8 = *arg2+spCC;
                spA4 = *arg3+spC8;
                spA0 = *arg4+spC4;
                if (D_801636F8 != 0) {
                    r = (f64)spAC-3.0;
                    x=((sp108-sp12C)*r)/spAC; y=((sp104-sp128)*r)/spAC; z=((sp100-sp124)*r)/spAC;
                    LEN(x,y,z);
                }
                if (D_801636F8 != 0) {
                    r = (f64)spAC-3.0;
                    z=((sp100-sp124)*r)/spAC; x=((sp108-sp12C)*r)/spAC; y=((sp104-sp128)*r)/spAC;
                    DEBUG_VECTOR(x,y,z);
                }
                if (D_801636F8 != 0) { DEBUG_ANGLES(spA8,spA4,spA0,*arg5,*arg6,*arg7,RL); }
                if (D_801636F8 != 0) {
                    r = (f64)spAC-3.0;
                    x=((sp108-sp12C)*r)/spAC; y=((sp104-sp128)*r)/spAC; z=((sp100-sp124)*r)/spAC;
                    LEN(x,y,z);
                }
            }
        }
        if (func_801084C4(*arg5,*arg6,*arg7,sp108,sp104,sp100) != 0 && D_801636F8 != 0) {
            DIST(D_801BBBF0.unk380,D_801BBBF0.unk384,D_801BBBF0.unk388,*arg5,*arg6,*arg7);
            DIST(sp108,sp104,sp100,*arg5,*arg6,*arg7);
            DIST(D_801BBBF0.unk380,D_801BBBF0.unk384,D_801BBBF0.unk388,*arg5,*arg6,*arg7);
            DIST(sp108,sp104,sp100,*arg5,*arg6,*arg7);
        }
    }
    sp120 = *arg2 + 5.0 * func_8001EB64(A2);
    sp11C = *arg3;
    sp118 = *arg4 + 5.0 * func_8001EAD0(A2);
    sp154 = 0;
    spC0 = spBC = spB8 = 0.0f;
    if (func_801084C4(*arg2,*arg3,*arg4,sp120,sp11C,sp118) != 0) {
        spC0 = D_801BBBF0.unk380-sp120;
        spBC = D_801BBBF0.unk384-sp11C;
        spB8 = D_801BBBF0.unk388-sp118;
        if (D_801636F8 != 0) { LEN(spC0,spBC,spB8); }
        spFC = *arg5 + 5.0 * func_8001EB64(A2);
        spF8 = *arg6;
        spF4 = *arg7 + 5.0 * func_8001EAD0(A2);
        if (func_801084C4(*arg5,*arg6,*arg7,spFC,spF8,spF4) != 0) {
            sp9C = DIST(D_801BBBF0.unk380,D_801BBBF0.unk384,D_801BBBF0.unk388,*arg5,*arg6,*arg7);
            sp120 = *arg2+sp9C*func_8001EB64(A2);
            sp11C = *arg3;
            sp118 = *arg4+sp9C*func_8001EAD0(A2);
            spFC = *arg5+sp9C*func_8001EB64(A2);
            spF8 = *arg6;
            spF4 = *arg7+sp9C*func_8001EAD0(A2);
        }
        if (func_801084C4(spFC,spF8,spF4,sp120,sp11C,sp118) != 0) {
            sp154 = 1;
            spC0 = D_801BBBF0.unk380-sp120;
            spBC = D_801BBBF0.unk384-sp11C;
            spB8 = D_801BBBF0.unk388-sp118;
            if (D_801636F8 != 0) { LEN(spC0,spBC,spB8); }
                        sp98 = LEN(spC0,spBC,spB8);
            sp94 = LEN(sp120-spFC,sp11C-spF8,sp118-spF4);
            RL
            if ((f64)(sp94-sp98)<3.0) {
                r = (f64)sp94-3.0;
                spC0=((spFC-sp120)*r)/sp94; spBC=((spF8-sp11C)*r)/sp94; spB8=((spF4-sp118)*r)/sp94;
                if (D_801636F8 != 0) {
                    r=(f64)sp94-3.0;
                    x=((spFC-sp120)*r)/sp94; y=((spF8-sp11C)*r)/sp94; z=((spF4-sp118)*r)/sp94;
                    LEN(x,y,z);
                }
                if (D_801636F8 != 0) {
                    r=(f64)sp94-3.0;
                    x=((spFC-sp120)*r)/sp94; y=((spF8-sp11C)*r)/sp94; z=((spF4-sp118)*r)/sp94;
                    LEN(x,y,z);
                }
            }
        }
        if (func_801084C4(*arg5,*arg6,*arg7,spFC,spF8,spF4) != 0 && D_801636F8 != 0) {
            DIST(D_801BBBF0.unk380,D_801BBBF0.unk384,D_801BBBF0.unk388,*arg5,*arg6,*arg7);
            DIST(spFC,spF8,spF4,*arg5,*arg6,*arg7);
            DIST(D_801BBBF0.unk380,D_801BBBF0.unk384,D_801BBBF0.unk388,*arg5,*arg6,*arg7);
            DIST(spFC,spF8,spF4,*arg5,*arg6,*arg7);
        }
    }
    RL
    if (sp158 != 0) {
        *arg2 += spCC; *arg3 += spC8; *arg4 += spC4;
    } else if (sp154 != 0) {
        *arg2 += spC0; *arg3 += spBC; *arg4 += spB8;
    } else if (sp15C != 0) {
        *arg2 += spD8; *arg3 += spD4; *arg4 += spD0;
    }
    if (D_801636F8 != 0) {
        DIST(*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
    }
    if (D_801636F8 != 0) { DEBUG_ANGLES(*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,); }
}
