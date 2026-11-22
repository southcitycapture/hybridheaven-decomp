#include "common.h"
extern u8 D_80163870;
extern u8 D_80163874;
extern u8 D_80163878;
extern u8 D_8016387C;
extern u8 D_80163880;
extern f32 D_80163884;
extern u8 D_801BBAE8[];
extern u8 D_801BBAEA[];
extern void func_80005E44();
typedef struct func_8010F6E0_StructC {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    u8 pad2C[0x4];
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
} func_8010F6E0_StructC;
typedef struct func_8010F6E0_StructE {
    u8 pad0[0x2C];
    func_8010F6E0_StructC *f2C;
} func_8010F6E0_StructE;
typedef struct func_8010F6E0_StructA {
    u8 pad0[0x24];
    func_8010F6E0_StructE *f24;
    u8 pad28[0x68];
    f32 f90;
    f32 f94;
    f32 f98;
    f32 f9C;
    f32 fA0;
    f32 fA4;
} func_8010F6E0_StructA;
typedef struct func_8010F6E0_StructD {
    u8 pad0[0x4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[0x8];
    f32 f18;
    f32 f1C;
    f32 f20;
} func_8010F6E0_StructD;
typedef struct func_8010F6E0_StructB {
    u8 pad0[0x22];
    u8 f22;
    u8 pad23[0xD];
    func_8010F6E0_StructD *f30;
} func_8010F6E0_StructB;
typedef struct func_8010F6E0_StructArg1 {
    u8 pad0[4];
    func_8010F6E0_StructB *f4;
    func_8010F6E0_StructB *f8;
} func_8010F6E0_StructArg1;
void func_8010F6E0(func_8010F6E0_StructA *arg0, func_8010F6E0_StructArg1 *arg1);
void func_8010FA10(void *arg0, s32 arg1);
extern void func_8011A724();
extern void func_8011A7FC();
extern void func_8011AA0C();


typedef struct func_8010FABC_StructX {
    u8 pad0[4];
    f32 unk4; f32 unk8; f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[8];
    s32 unk1C;
    u8 pad20[2];
    u8 unk22;
    u8 pad23;
    f32 unk24;
    f32 unk28;
    struct func_8010FABC_StructX *unk2C;
    f32 unk30; f32 unk34; f32 unk38; f32 unk3C; f32 unk40; f32 unk44;
    f32 unk48; f32 unk4C; f32 unk50;
    u8 pad54[8];
    struct func_8010FABC_StructX *unk5C;
    u8 pad60[0x30];
    f32 unk90; f32 unk94; f32 unk98; f32 unk9C; f32 unkA0; f32 unkA4;
} X;

typedef struct func_8010FABC_StructG {
    u8 pad0[0x40];
    struct { u8 pad[0x24]; s32 unk24; } *unk40;
    u8 pad44[0x3A];
    u16 unk7E;
    u8 pad80[0x1E];
    u16 unk9E;
    u16 unkA0;
    s16 unkA2;
    s16 unkA4;
    u8 padA6[0x36];
    X *unkDC;
    X *unkE0;
    u8 padE4[4];
    X *unkE8;
    u8 padEC[9];
    u8 unkF5;
    u8 padF6[0x13A];
    u8 unk230;
    u8 pad231;
    s16 unk232;
    u8 unk234;
    u8 pad235[0x67];
    f32 unk29C;
    f32 unk2A0;
    u8 pad2A4[8];
    u8 unk2AC;
    u8 unk2AD;
    u8 pad2AE[7];
    u8 unk2B5;
    u8 pad2B6[0x6A];
    f32 unk320;
    u8 pad324[0x5C];
    f32 unk380; f32 unk384; f32 unk388;
} func_8010FABC_G;
extern func_8010FABC_G D_801BBBF0;
#define GG (&D_801BBBF0)
#define PL (GG->unkE0->unk2C)
#define CAM (GG->unkE8->unk2C)
#define SQ(x) ((x) * (x))
#define WRAP(d) (((d) & 0x1000) ? (((d) & 0x1FFF) - 0x2000) : ((d) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))
#define DPRINT(args) ((void)(args))
#define DP(args) if (D_801636F4 != 0) { (void)(args); }
/* Prints 55-57 (d_hight / d_cp_y / prev-P) are guarded by the function static D_80163978, which the
   target never references anywhere else: with the common flag D_801636F4 the flag value stays a CSE
   candidate across the D_80163874 double test and uopt needs a sixth 4-byte temp slot (frame 0x1E0). */
#define DQ(args) if (D_80163978 != 0) { (void)(args); }
#define DPX(args) if (D_801636F4 != 0) (void)(args)
#define SGN(a) ((WRAP(a) < 0) ? '-' : ' ')
#define MAG(a) ABS(WRAP(a))
#define TY ((f64) PL->unk8 + 25.0 + (f64) GG->unk320)
#define HB ((f64) GG->unk320 + 25.0)
#define ABSD(x) (((x) < 0) ? -(x) : (x))
#define ABSF(x) (((x) < 0.0f) ? -(x) : (x))
#define ABSI(x) (((x) < 0) ? -(x) : (x))
#define DIS3(x1, y1, z1, x2, y2, z2) func_8002FC20(SQ((x2) - (x1)) + SQ((y2) - (y1)) + SQ((z2) - (z1)))
#define PDIS DIS3(PL->unk4, PL->unk8 + 15.0, PL->unkC, CAM->unk30, CAM->unk34, CAM->unk38)
#define DIS2(x1, z1, x2, z2) func_8002FC20(SQ((x1) - (x2)) + SQ((z1) - (z2)))
#define CDIS DIS2(CAM->unk30, CAM->unk38, CAM->unk3C, CAM->unk44)
#define DABS(a, b) (((a) < (b)) ? -((a) - (b)) : ((a) - (b)))
extern void func_8001DFFC(s32, s32, s32, void *, s32, s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern void func_801130D0(void);
extern void func_80117650(f32, f32, f32, f32, f32, f32);
extern void func_80119F9C(void *, void *);
extern void func_8011A0F0(s16 *);
extern void func_8011A148(s16, s16, s16, f32 *, f32 *, f32 *);
extern void func_8011B474(s16, f32, f32, f32 *, f32 *);
extern void func_8011BC20(f32, f32, f32, s16, s32, s32, s32);
extern void func_8011CF90(f32, f32, f32, s16, s32);
extern void func_8011E480(s16, s16, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern void func_80121220(f32, f32);
extern s32 D_801636F4;
extern s32 D_801636F8[];
#define DBG D_801636F4
extern u8 D_80089474[];
extern s16 D_80163888;
extern u8 D_8016388C;
extern u8 D_80163890;
extern u8 D_80163894;
extern u8 D_80163898;
extern u8 D_8016389C;
extern s16 D_801BBAE0;
extern f32 D_801BBAE4;
extern s16 D_801BBAEC;
extern s16 D_801BBAEE;
extern s16 D_801BBE22;


/* The unit's .data ahead of this function's statics (0x801638A0-0x8016390B): the camera mode descriptor that
   names func_8010F6E0, the parameter block it points to, and the two descriptors func_8010F6E0 hands to
   func_80005E44. Raw words as in the generated data units (tools/hh/data_to_c.py); pointers stay relocations. */
extern u8 D_80000000[];
extern u8 D_80164EF0[];
u32 D_801638A0[5] = {
    0x00000000, (u32)D_80000000, 0x00000000, (u32)func_8010F6E0,
    0x00000000,
};
u32 D_801638B4[14] = {
    0x420C0000, 0x3FAAAAAB, 0x40A00000, 0x44FA0000,
    0x3F800000, 0x00000000, 0x41C80000, 0xC25C0000,
    0x00000000, 0x41700000, 0x00000000, 0x00000000,
    0x3F800000, 0x00000000,
};
u32 D_801638EC[4] = {
    0x00000000, 0xFFFFFFFE, 0x10000001, (u32)D_801638B4,
};
u32 D_801638FC[4] = {
    0x00000000, 0x80000900, 0x1000000C, (u32)D_80164EF0,
};

void func_8010FABC(X *arg0, func_8010F6E0_StructArg1 *arg1) {
    static f32 D_8016390C = 0.0f;
    static f32 D_80163910 = 0.0f;
    static f32 D_80163914 = 0.0f;
    static f32 D_80163918 = 0.0f;
    static f32 D_8016391C = 0.0f;
    static f32 D_80163920 = 0.0f;
    static s32 D_80163924 = 0;
    static s32 D_80163928 = 0;
    static f32 D_8016392C = 0.0f;
    static f32 D_80163930 = 0;
    static struct func_8010FABC_StructDoorState { unsigned int active:8; } door = { 0 };
#define D_80163934 door.active
    static u8 D_80163938 = 0;
    static f32 D_8016393C = 1.7f;
    static f32 D_80163940 = 0.3f;
    static s32 D_80163944 = 0;
    static f32 D_80163948 = 8.0f;
    static f32 D_8016394C = 8.0f;
    static s32 D_80163950 = 0;
    static s32 D_80163954 = 0;
    static struct func_8010FABC_StructCount { s32 value; } vibration = { 0 };
#define D_80163958 vibration.value
    static s32 D_8016395C = 0;
    static s32 D_80163960 = 0;
    static s32 D_80163964 = 0;
    static s32 D_80163968 = 0;
    static s32 D_8016396C = 0;
    static s32 D_80163970 = 0;
    static s32 D_80163974 = 0;
    static s32 D_80163978 = 0;
    static s32 D_8016397C = 0;
    s16 sp1D6;
    s16 sp1D4;
    s16 sp1D2;
    s16 sp1D0;
    s16 sp1CE;
    f32 sp1C8;
    f32 sp1C4;
    f32 sp1C0;
    f32 sp1BC;
    f32 sp1B8;
    f32 sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    f32 sp19C;
    f64 d0, d1, d2, distance;
    s32 i0, i1, i2;
    s16 bnrad, dnrad;
    X *pl;
    X *cam;
    s16 hh;
    s16 h0;
    f32 sp158;
    u8 sp154[4];
#define sp157 sp154[3]
    f32 f2;
    X *sp14C;
    f32 f0;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    X *temp_v1_45, *ptr0, *ptr1, *ptr2;
    f32 sp124;
    f32 f1;
    f32 sp11C;
    f32 f3;
    f32 sp114;
    f32 f4;
    s16 h1;
    s8 var_v0;
    s32 c1, c2;
    f32 sp100;
    f32 df, mv, lim, ratio;
    f32 spEC;
    s16 step16;
    f32 spE4;
    f32 spE0;
    f32 dcap, mvcap, ox, oz;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 sn, dh;
#define cs spA0
    f32 spA0;
    /* Nonoverlapping m2c temporaries share IDO local slots. */
#define var_ft5_2 sp19C
#define temp_v0 ptr0
#define temp_v0_2 ptr0
#define temp_v1 ptr0
#define temp_v1_2 ptr0
#define temp_t0 ptr1
#define var_v1_4 ptr1
#define temp_v0_14 ptr0
#define temp_v1_22 ptr0
#define temp_v1_24 ptr0
#define temp_v1_25 ptr0
#define temp_v1_26 ptr0
#define temp_v1_27 ptr0
#define temp_v1_28 ptr0
#define temp_v1_29 ptr0
#define temp_v1_30 ptr0
#define temp_v1_31 ptr0
#define temp_v1_32 ptr0
#define temp_v1_33 ptr0
#define temp_v1_34 ptr0
#define temp_v1_35 ptr1
#define temp_v1_36 ptr1
#define temp_v1_37 ptr0
#define temp_v0_18 ptr0
#define temp_v1_40 ptr0
#define temp_v1_41 ptr0
#define temp_v1_42 ptr0
#define temp_v1_44 ptr0
#define temp_v0_22 ptr1
#define temp_v0_4 ptr1
#define temp_v0_9 ptr1
#define temp_v1_5 ptr1
#define temp_v1_6 ptr1
#define temp_v1_7 ptr1
#define temp_v1_8 ptr1
#define temp_v1_9 ptr1
#define temp_v1_10 ptr1
#define temp_v1_11 ptr1
#define temp_v1_12 ptr1
#define temp_v1_13 ptr1
#define temp_v1_14 ptr1
#define temp_v1_15 ptr2
#define temp_v1_16 ptr2
#define var_v1_3 ptr1
#define temp_v1_17 ptr1
#define temp_v1_18 ptr1
#define temp_v0_10 ptr1
#define temp_v1_19 ptr1
#define temp_v1_20 ptr1
#define temp_v1_21 ptr1
#define temp_v0_15 ptr1
#define temp_v0_16 ptr1
#define temp_v0_17 ptr1
#define temp_v1_38 ptr1
#define temp_v1_39 ptr1
#define temp_v1_4 ptr1
#define temp_v0_12 ptr2
#define temp_fv1 f1
#define temp_fa1 sp1B8
#define temp_fv1_3 f1
#define temp_fa0 f4
#define temp_ft4 f1
#define temp_fv1_7 f1
#define temp_ft1_2 f1
#define temp_fv0_10 f1
#define temp_fv1_9 f1
#define temp_fv1_10 f1
#define temp_fv0_16 f1
#define var_ft4_3 f1
#define temp_ft4_4 f0
#define var_fa1 f1
#define temp_fa0_8 f1
#define var_fv0_2 f4
#define var_fa0 f4
#define temp_ft5_5 sp1B8
#define temp_fv0_25 f1
#define temp_ft4_9 f0
#define temp_fv0_29 f1
#define temp_ft4_10 f2
#define temp_fv0_30 f1
#define temp_ft1_3 f2
#define temp_fv1_26 f1
#define temp_fa1_11 f1
#define temp_fa1_12 f1
#define temp_fa1_13 f1
#define temp_fa1_14 f1
#define temp_fa1_15 f1
#define temp_fa1_16 f1
#define temp_fv1_35 f1
#define var_ft4 f2
#define temp_ft5 f1
#define temp_fa1_3 f2
#define temp_fa1_4 f2
#define temp_fv0_14 f2
#define temp_fv0_17 f2
#define temp_fa0_7 f0
#define temp_fv1_21 f2
#define var_fv1_5 f0
#define var_ft5 sp1B8
#define temp_ft3 f2
#define temp_fv1_25 f2
#define temp_ft0_3 f2
#define temp_fv1_36 f2
#define var_fv1 f3
#define var_ft4_5 f0
#define temp_fv0_24 f3
#define temp_fa1_8 sp1C0
#define temp_ft5_6 sp1B8
#define temp_fv1_4 d0
#define temp_fv0_5 d0
#define temp_fv0_7 d0
#define temp_fv1_8 d0
#define temp_ft4_3 d0
#define temp_fv0_12 d0
#define temp_fv1_11 d0
#define temp_fv1_12 d0
#define temp_fv1_13 d0
#define temp_fv1_14 d0
#define temp_fv0_15 d2
#define temp_fv1_15 d0
#define temp_fv1_16 d0
#define temp_ft0 d0
#define temp_fv0_19 d0
#define temp_fv0_20 d0
#define temp_fv1_18 d0
#define temp_fv0_21 d0
#define temp_ft5_3 distance
#define temp_fv0_23 d0
#define var_ft4_8 d0
#define temp_fv0_32 d0
#define temp_fv0_33 d0
#define temp_fv0_34 d2
#define temp_fv1_5 d1
#define temp_fv0_9 d1
#define temp_ft1 d1
#define var_fv1_3 d1
#define temp_ft5_2 d1
#define temp_fv1_19 d1
#define var_fv1_4 d1
#define temp_fv1_20 d1
#define temp_ft4_5 d1
#define temp_fv0_26 d1
#define temp_fv1_24 d1
#define temp_fa1_2 d2
#define temp_ft4_2 d2
#define var_fv0 distance
#define temp_v0_3 h0
#define temp_v0_6 h1
#define temp_v0_7 h1
#define temp_v0_8 hh
#define var_a1_2 h1
#define temp_v1_23 h0
#define temp_a0_2 h0
#define temp_a0_3 h0
#define temp_a0_4 h0
#define temp_a0_5 h0
#define temp_v0_20 h0
#define temp_v0_21 h0
#define temp_v1_43 h1
#define var_t1 i0
#define temp_v1_3 i2
#define var_v0_2 i0
#define temp_v0_13 i0
#define var_a1_6 i3
#define var_a1_7 i3
#define var_v0_3 i0
#define var_a1_8 i2
#define var_t1_2 i0
#define var_a1_9 i0
#define var_a1_10 i0
#define var_a1_11 i0
#define var_a1_12 i0
#define var_a1_13 i0
#define var_a1_14 i0
#define var_a1_15 i0
#define var_v1_5 i0
#define var_a1_16 i0
#define var_a1_17 i0
#define var_a1_18 i0
#define var_a1_19 i0
#define temp_a2_3 i0
#define temp_v0_19 i0
#define temp_a2_4 i0
#define temp_a2_5 i0
#define var_v1_7 i0
#define var_a0_2 i2
#define temp_ft3_2 i0
#define temp_v0_5 i1
#define temp_a2 i1
#define temp_a2_2 i1
#define var_v1_2 i1
#define var_a0 i1
#define var_a3 i1
#define var_a1_4 i1
#define temp_v0_11 i1
#define var_a1_5 i1
#define var_t1_3 sp1CE
#define temp_a0_6 i1
#define temp_a0_7 i1
#define temp_a0 i2
#define var_a1_3 i2
#define var_v1_6 i2
#define var_a1_20 i2
#define var_v1 i3
#define var_a1 i3


#define temp_fv0 sp1C8
#define temp_fv0_2 sp1C4
#define temp_fv1_2 sp1C0
#define temp_fv0_3 sp1AC
#define temp_fv0_4 sp1BC
#define temp_fv0_6 sp1BC
#define temp_fv1_6 sp1BC
#define temp_fv0_8 sp1BC
#define var_fv1_2 sp1BC
#define temp_fv0_11 sp1BC
#define temp_fv0_13 sp1BC
#define temp_fv1_17 sp1AC
#define var_ft4_2 sp1BC
#define temp_fv0_18 f0
#define temp_fa1_5 f1
#define var_ft4_4 f3
#define temp_fv0_22 f0
#define var_ft4_6 f1
#define temp_ft5_4 sp1BC
#define temp_fv1_22 spEC
#define temp_fa1_6 sp1AC
#define var_ft4_7 sp1A8
#define temp_fv1_23 sp1A4
#define temp_fa1_7 sp1A0
#define temp_ft4_6 sp19C
#define var_fa1_2 sp1C0
#define temp_ft4_7 f2
#define temp_fv0_27 sp1C0
#define temp_ft4_8 f2
#define temp_fv0_28 sp1C0
#define temp_ft0_2 sp1BC
#define temp_fa1_9 sp1B8
#define var_ft4_9 sp1B4
#define var_ft5_3 sp144
#define temp_fa1_10 f0
#define temp_fv1_27 f0
#define temp_fv1_28 sp1C0
#define temp_fv0_31 sp1BC
#define temp_fv1_29 f0
#define temp_fv1_30 sp1B8
#define temp_fv1_31 f1
#define temp_fv1_32 f0
#define temp_fv1_33 f0
#define temp_fv1_34 sp1C0
#define temp_fv0_35 f0
    sp157 = 0;
    sp14C = GG->unkDC->unk5C;
    DP((0)); /* "------------S------------------S------------ process(cam_danjon)\n" */
    if (DBG != 0) {
        func_801130D0();
    }
    CAM->unk24 = GG->unk29C;
    CAM->unk28 = GG->unk2A0;
    if (GG->unk2AD != 0) {
        DP((GG->unk2B5)); /* 201 */
        if (GG->unk2B5 == 1) {
            DP((0)); /* 202 */
            func_8011A724(1);
            func_8011A7FC();
        } else if (GG->unk2B5 == 2) {
            DP((0)); /* 203 */
            func_8011AA0C(arg0, func_8010FA10, func_8010FABC);
            return;
        } else {
            DP((GG->unk2B5)); /* 204 */
            GG->unk2AD = 0;
            GG->unk2B5 = 0;
        }
    }
    if (GG->unk2B5 == 2) {
        DP((0)); /* 205 */
        DP((0)); /* 206 */
    }
    if (GG->unk40->unk24 == 0) {
        DP((D_80163944++)); /* 207 */
        return;
    }
    if (GG->unkF5 == 0) {
        DP((D_80163944++)); /* 208 */
        return;
    }
    {
        D_80163944 = 0;
        if ((D_8016387C != 0) && ((f64) func_8002FC20((f32) (f64) SQ(PL->unk8 - D_8016391C)) > 0.03)) {
            DP((D_8016391C, PL->unk8, D_8016391C - PL->unk8)); /* 209 */
            D_80163918 = PL->unk4;
            D_8016391C = PL->unk8;
            D_80163920 = PL->unkC;
            arg0->unkA0 = CAM->unk40;
            D_801BBAE0 = PL->unk12;
            DP((0)); /* 210 */
            return;
        } else {
            D_8016387C = 0;
            sp1D6 = 0;
            sp1D0 = (s16) (0x800 - PL->unk12) & 0x1FFF;
            sp1C8 = func_8002FC20(SQ(PL->unk4 - D_80163918) + SQ(PL->unkC - D_80163920));
            sp1C4 = D_8016391C - PL->unk8;
            sp1C0 = CAM->unk3C - CAM->unk30;
            sp1BC = CAM->unk40 - CAM->unk34;
            sp1B8 = CAM->unk44 - CAM->unk38;
            sp1B4 = func_8002FC20(SQ(sp1C0) + SQ(sp1B8));
            sp1D6 = func_8001EF38(sp1B8, sp1C0) & 0x1FFF;
            sp1D4 = WRAP(func_8001EF38(sp1BC, sp1B4));
            sp1CE = WRAP((s16) ((sp1D0 - sp1D6) - D_80163888));
            DP((0)); /* 211 */
            f2 = 0;
            func_8002FC20(SQ(CAM->unk3C - PL->unk4) + SQ(f2) + SQ(CAM->unk44 - PL->unkC));
            func_8011A0F0(&sp1D2);
            /* Vanished conditional print: leaves the dead 2.0 load, and its `!a & !b` test (same idiom as
               the door-flag test below) is what makes cfe create a second int temp before the first f32
               one (call-result temp at 0x94). The operands are not recoverable; these are a guess. */
            if ((2.0 <= (f64) GG->unk320) && (!sp1D6 & !sp1D4)) {
                DPRINT((GG->unk320)); /* 13 */
            }
            if (GG->unkA0 & 8) {
                var_v0 = (D_80163890 + D_80163890) - D_8016388C;
                if (var_v0 >= 3) {
                    var_v0 = 1;
                } else if (var_v0 < 0) {
                    var_v0 = 1;
                }
                D_8016388C = D_80163890;
                D_80163890 = (u8) var_v0;
                D_80163938 = 1;
            }
            switch (D_80163890) {                   /* irregular */
            default:
                GG->unk320 = 0.0f;
                break;
            case 0:
                GG->unk320 = -10.0f;
                break;
            case 1:
                GG->unk320 = 0.0f;
                break;
            case 2:
                GG->unk320 = 15.0f;
                break;
            }
            temp_v1_3 = GG->unk9E & 0x10;
            if ((temp_v1_3 != 0) && ((sp14C->unk1C == 0x01680048) || (sp14C->unk1C == 0x01680049) || (sp14C->unk1C == 0x0168004A) || (sp14C->unk1C == 0x0168004B)) && (D_80163934 == 0)) {
                D_80163888 = WRAP((s16) (D_80163888 + 0x40));
                D_80163934 ^= 1;
                D_801BBAE4 = 37.5f;
                D_80163870 = D_80163878 = D_80163874 = 0;
                GG->unk2AC = 0;
            }
            if ((temp_v1_3 == 0) && (D_80163934 != 0)) {
                D_80163888 = WRAP((s16) (D_80163888 - 0x40));
                D_80163934 ^= 1;
                D_801BBAE4 = 75.0f;
                GG->unkE0->unk22 = 1;
            }
            if ((GG->unk230 == 0) || (var_v0_2 = sp14C->unk1C, (var_v0_2 == 0x01680048)) || (var_v0_2 == 0x01680049) || (var_v0_2 == 0x0168004A) || (var_v0_2 == 0x0168004B)) {
                if (D_80163938 != 0) {
                    CAM->unk34 = (f32) (((((f64) PL->unk8 + 25.0 + (f64) GG->unk320) - ((f64) arg0->unk94)) * 0.125) + ((f64) arg0->unk94));
                    if ((f64) DABS(CAM->unk34, arg0->unk94) < 0.1) {
                        D_80163938 = 0;
                    }
                }
                DP((D_801BBAE0, PL->unk12, SGN((s16) (D_801BBAE0 - PL->unk12)), MAG((s16) (D_801BBAE0 - PL->unk12)))); /* 120 */
                if (ABS(WRAP((s16) (D_801BBAE0 - PL->unk12))) >= 0x11) {
                    DP((0)); /* 212 */
                    GG->unk2AC = 0;
                }
                if ((D_80163870 != 0) || (GG->unk2AC == 2)) {
                    D_80163928 = 0xC;
                }
                if (D_80163928 != 0) {
                    D_80163928--;
                }
                if (D_80163928 < 0xB) {
                    sp158 = SQ((f64) (f32) (0xA - D_80163928) / 10.0);
                    DP((sp158)); /* 213 */
                    if ((D_80163934 != 0) && (GG->unkE0->unk22 == 0)) {
                        sp144 = CAM->unk3C - PL->unk4;
                        sp140 = (f64) CAM->unk40 - ((f64) PL->unk8 + 15.0);
                        sp13C = CAM->unk44 - PL->unkC;
                    } else {
                        sp144 = CAM->unk3C - PL->unk4;
                        sp140 = (f64) CAM->unk40 - ((f64) PL->unk8 + 15.0);
                        sp13C = CAM->unk44 - PL->unkC;
                    }
                    sp138 = func_8002FC20(SQ(sp144) + SQ(sp140) + SQ(sp13C));
                    DP((sp138)); /* 214 */
                    if ((f64) sp138 > 0.3) {
                        if (D_80163934 != 0) {
                            sp124 = func_8002FC20((f32) (SQ((f64) sp144 / 2.0) + SQ((f64) sp140 / 2.0) + SQ((f64) sp13C / 2.0)));
                            if (func_801084C4(CAM->unk3C - sp144, CAM->unk40 - sp140, CAM->unk44 - sp13C, CAM->unk3C, CAM->unk40, CAM->unk44) != 0) {
                                DP((0)); /* 127 */
                                var_fv1 = func_8002FC20(SQ((GG->unk380 - (sp144 / sp138)) - CAM->unk3C) + SQ((GG->unk384 - (sp140 / sp138)) - CAM->unk40) + SQ((GG->unk388 - (sp13C / sp138)) - CAM->unk44));
                            } else {
                                var_fv1 = 0.0f;
                            }
                            DP((sp124, var_fv1)); /* 128 */
                            if (var_fv1 < sp124) {
                                DP((0)); /* 215 */
                                CAM->unk3C -= (f64) sp144 / 2.0;
                                CAM->unk40 -= (f64) sp140 / 2.0;
                                CAM->unk44 -= (f64) sp13C / 2.0;
                            } else {
                                DP((0)); /* 216 */
                                CAM->unk3C = GG->unk380 - (sp144 / sp138);
                                CAM->unk40 = GG->unk384 - (sp140 / sp138);
                                CAM->unk44 = GG->unk388 - (sp13C / sp138);
                            }
                        } else {
                            CAM->unk3C -= (f64) sp144 * 0.0625;
                            CAM->unk40 -= (f64) sp140 * 0.0625;
                            CAM->unk44 -= (f64) sp13C * 0.0625;
                        }
                    }
                    DP((sp1B4)); /* 131 dr(0) */
                    sp1B0 = sp1B4;
                    distance = sp158;
                    d0 = 0.5 * distance;
                    if ((f64) sp1B4 < (75.0 - d0)) {
                        DP((0)); /* 217 */
                        sp1B4 = (f32) ((f64) sp1B4 - (((f64) sp1B4 - 75.0) * 0.125));
                    } else if ((75.0 + d0) < (f64) sp1B4) {
                        DP((0)); /* 218 */
                        sp1B4 = (f32) ((f64) sp1B4 - (((f64) sp1B4 - 75.0) * 0.125));
                    } else {
                        sp1B4 = 75.0f;
                    }
                    DP((sp1B4)); /* 134 dr(1) */
                    if (D_80163934 != 0) {
                        sp1D6 = (f32) sp1D6 + ((f32) sp1CE * sp158);
                        DP((0)); /* MODOSU 1 */
                        CAM->unk30 = CAM->unk3C - (func_8001EB64(sp1D6) * D_801BBAE4);
                        CAM->unk38 = CAM->unk44 - (func_8001EAD0(sp1D6) * D_801BBAE4);
                    } else {
                        DP((sp1D6, sp1CE, sp158)); /* 136 */
                        if (((f64) ABS(sp1CE) * 0.125 * (f64) sp158) > 128.0) {
                            DP((0)); /* MODOSU 2 */
                            sp1D6 += ((-sp1CE > 0) ? -1 : 1) << 7;
                        } else {
                            DP((((sp1D6 + (s16) ((f64) sp1CE * 0.125 * (f64) sp158)) < 0) ? '-' : ' ', ABS((sp1D6 + (s32) ((f64) sp1CE * 0.125 * (f64) sp158))))); /* MODOSU 3 */
                            sp1D6 = (f64) sp1D6 + ((f64) sp1CE * 0.125 * (f64) sp158);
                        }
                        CAM->unk30 = CAM->unk3C - (func_8001EB64(sp1D6) * sp1B4);
                        CAM->unk38 = CAM->unk44 - (func_8001EAD0(sp1D6) * sp1B4);
                    }
                    if (D_80163934 == 0) {
                        sp11C = (f64) CAM->unk3C - ((f64) func_8001EB64(sp1D6) * ((f64) sp1B4 + 5.0));
                        sp114 = (f64) CAM->unk44 - ((f64) func_8001EAD0(sp1D6) * ((f64) sp1B4 + 5.0));
                        if (D_801636F4 != 0) {
                            func_8002FC20(SQ(sp11C - CAM->unk3C) + SQ(sp114 - CAM->unk44));
                        }

                        if (func_801084C4(CAM->unk3C, CAM->unk40, CAM->unk44, sp11C, CAM->unk34, sp114) != 0) {
                            f3 = func_8002FC20(SQ(sp11C - GG->unk380) + SQ(sp114 - GG->unk388));
                            if ((f64) f3 < 5.0) {
                                sp1B4 = (((f64) f3 * ((f64) sp1B0 + 0.5)) + ((5.0 - (f64) f3) * (f64) sp1B4)) / 5.0;
                            } else if (DABS(75.0, (f64) sp1B0) > 0.5) {
                                sp1B4 = ((f64) ((75.0 < (f64) sp1B0) ? -1 : 1) * 0.5) + (f64) sp1B0;
                            } else {
                                sp1B4 = 75.0f;
                            }
                            CAM->unk30 = CAM->unk3C - (func_8001EB64(sp1D6) * sp1B4);
                            CAM->unk38 = CAM->unk44 - (func_8001EAD0(sp1D6) * sp1B4);
                        }
                    }
                    if (D_80163934 != 0) {
                        f0 = func_8002FC20(SQ(arg0->unk98 - PL->unkC) + SQ(arg0->unk90 - PL->unk4));
                        if (sp14C->unk1C == 0x0168004A) {
                            if ((f64) f0 < 20.0) {
                                CAM->unk34 = (((((f64) PL->unk8 + 25.0) - (f64) (f32) (((20.0 - (f64) f0) * (f64) D_80163948) + 20.0)) - (f64) arg0->unk94) * 0.125) + (f64) arg0->unk94;
                            } else {
                                CAM->unk34 = (((((f64) PL->unk8 + 25.0) - 20.0) - (f64) arg0->unk94) * 0.25) + (f64) arg0->unk94;
                            }
                        } else if ((sp14C->unk1C == 0x01680048) || (sp14C->unk1C == 0x01680049)) {
                            CAM->unk34 = ((((f64) PL->unk8 + 25.0) - (f64) arg0->unk94) * 0.25) + (f64) arg0->unk94;
                        } else if (sp14C->unk1C == 0x0168004B) {
                            if ((f64) f0 < 20.0) {
                                CAM->unk34 = ((((f64) PL->unk8 + 25.0 + (f64) (f32) (((20.0 - (f64) f0) * (f64) D_8016394C) + 10.0)) - (f64) arg0->unk94) * 0.125) + (f64) arg0->unk94;
                            } else {
                                CAM->unk34 = ((((f64) PL->unk8 + 25.0 + 10.0) - (f64) arg0->unk94) * 0.25) + (f64) arg0->unk94;
                            }
                        }
                        func_8001DFFC(8, 0x14, 0x6E, "HIGH %d LOW %d", (s32) D_80163948, (s32) D_8016394C);
                    } else if (D_80163870 == 0) {
                        sp100 = (f64) CAM->unk34 - ((f64) PL->unk8 + 25.0 + (f64) GG->unk320);
                        if ((f64) sp100 > 1.0) {
                            CAM->unk34 = (f64) CAM->unk34 - (f64) sp158;
                        } else if ((f64) sp100 < -1.0) {
                            CAM->unk34 = (f64) CAM->unk34 + (f64) sp158;
                        } else {
                            CAM->unk34 = (f64) PL->unk8 + 25.0 + (f64) GG->unk320;
                        }
                    }
                    f4 = CAM->unk3C - PL->unk4;
                    f0 = CAM->unk44 - PL->unkC;
                    D_80163930 = f0;
                    D_8016392C = f4;
                    f2 = func_8002FC20(SQ(f4) + SQ(f0));
                    D_80163884 = (f32) ((-sp1CE < 0) ? -1 : 1) * f2;
                }
                GG->unk234 = 0;
                GG->unk232 = sp1D6;
                D_801BBAE0 = PL->unk12;
            } else {
                if (((f64) sp1C8 > 0.0001) || ((f64) ABS(sp1C4) > 0.0001)) {
                    DP((0)); /* 144 moving */
                    if ((GG->unk2AC == 2) && ((var_v0_2 == 0x0168003F) || (var_v0_2 == 0x01680040) || (var_v0_2 == 0x0168003E))) {
                        GG->unk2AC = 0;
                        var_v0_2 = sp14C->unk1C;
                    }
                    if ((var_v0_2 == 0x0168003F) || (var_v0_2 == 0x01680040) || (var_v0_2 == 0x0168003E)) {
                        if ((f64) DABS(PL->unk8, D_8016391C) >= 2.0) {
                            DP((0)); /* 145 */
                            D_80163880 = 1;
                        }
                    }
                    if ((D_80163880 != 0) && (((((f64) PL->unk8 + 15.0) - (f64) arg0->unkA0) / 2) > 0.5)) {
                        CAM->unk40 = (f64) arg0->unkA0 + 0.5;
                    } else {
                        D_80163880 = 0;
                        CAM->unk40 = ((((f64) PL->unk8 + 15.0) - (f64) arg0->unkA0) / 2) + (f64) arg0->unkA0;
                        D_80163878 = 0;
                    }
                    if (((sp14C->unk1C) == 0x01680011) || ((sp14C->unk1C) == 0x01680025) || ((sp14C->unk1C) == 0x01680026)) {
                        CAM->unk34 = (f32) (((((f64) PL->unk8 + 25.0 + (f64) GG->unk320) - ((f64) arg0->unk94)) * 0.125) + ((f64) arg0->unk94));
                        D_80163874 = 0;
                    } else {
                        dh = HB - 17.0;
                        sp100 = (f64) CAM->unk34 - TY;
                        if (D_80163870 != 0) {
                            var_fa1 = ABSD((f64) (sp1C8 * dh) * 0.00875);
                        } else {
                            var_fa1 = ABSD((f64) (sp1C8 * dh) * 0.0375);
                        }
                        DQ((sp1C8, var_fa1)); /* 146 */
                        DQ((sp100, var_fa1)); /* 147 */
                        DQ((D_8016391C, PL->unk8)); /* 148 */
                        if ((D_80163874 != 0) && ((((f64) CAM->unk34 - ((f64) D_8016391C + 25.0 + (f64) GG->unk320)) * (f64) sp100) < 0.0)) {
                            DP((0)); /* 149 */
                            CAM->unk34 = TY;
                            D_80163874 = 0;
                        } else if ((D_80163874 != 0) && ((f64) ABSF(sp100) > DABS(HB, 15.0))) {
                            DP((0)); /* 150 */
                            D_80163874 = 0;
                        } else {
                            if (D_80163938 != 0) {
                                DP((0)); /* 151 */
                                CAM->unk34 = ((TY - (f64) arg0->unk94) * 0.125) + (f64) arg0->unk94;
                                if ((f64) DABS(CAM->unk34, arg0->unk94) < 0.1) {
                                    D_80163874 = 0;
                                    D_80163938 = 0;
                                }
                            } else {
                                DP((0)); /* 152 */
                                if (var_fa1 < ABSF(sp100)) {
                                    CAM->unk34 -= var_fa1 * (f32) ((sp100 < 0.0f) ? -1 : 1);
                                } else {
                                    CAM->unk34 = TY;
                                    D_80163874 = 0;
                                }
                            }
                        }
                    }
                    dcap = (f64) CAM->unk40 - ((f64) PL->unk8 + 15.0);
                    mvcap = (f64) sp1C8 * 0.2;
                    DP((dcap, mvcap)); /* 53 d_cap_y, mv_cap_y */
                    if (mvcap < dcap) {
                        DPRINT((0)); /* 54 */
                        CAM->unk40 = CAM->unk40 - mvcap;
                    } else if (dcap < -mvcap) {
                        DPRINT((0)); /* 55 */
                        CAM->unk40 = CAM->unk40 + mvcap;
                    } else {
                        DPRINT((0)); /* 56 */
                        CAM->unk40 = (f64) PL->unk8 + 15.0;
                        D_80163878 = 0;
                    }
                    if (!D_80163874 & !D_80163878) {
                        D_80163870 = 0;
                    }
                    DPRINT((D_80163874, D_80163878, D_80163870)); /* 57 */
                    arg1->f8->f30->f4 = CAM->unk3C;
                    arg1->f8->f30->f8 = CAM->unk40;
                    arg1->f8->f30->fC = CAM->unk44;
                    spEC = (f64) func_8001EB64((s16) ((sp1D0 - sp1D6) + 0x800)) * (18.0 * ((f64) sp1B4 / 75.0));
                    func_8011B474((s16) (0x800 - sp1D6), spEC, 0.0f, &spE4, &spE0);
                    ox = PL->unk4 + spE4;
                    oz = PL->unkC + spE0;
                    arg1->f8->f30->f4 = ox;
                    arg1->f8->f30->f8 = CAM->unk40;
                    arg1->f8->f30->fC = oz;
                    df = spEC - D_80163884;
                    if (((df < 0.0f) ? -1 : 1) != D_80163954) {
                        if (df < 0.0f) {
                            D_80163954 = -1;
                        } else {
                            D_80163954 = 1;
                        }
                        D_80163950 = 0;
                    } else {
                        D_80163950++;
                    }
                    if (df > 0.0f) DPX((D_80163950)); /* 58 */
                    else DPX((D_80163950)); /* 59 */
                    if (!(GG->unk7E & 0x8000)) {
                        if (D_80163950 < 0x14) {
                            lim = (f64) sp1C8 * 0.2 * ((f64) D_80163950 / 10.0);
                        } else {
                            lim = (f64) sp1C8 * 0.4;
                        }
                        mv = (f32) ((df < 0.0f) ? -1 : 1) * lim;
                    } else {
                        mv = (f64) ((df < 0.0f) ? -1 : 1) * 0.1;
                    }
                    lim = (f64) df / 2.0;
                    DPRINT((mv, lim)); /* 60 offset_1, offset_2 */
                    if (ABSF(mv) < ABSI(lim)) {
                        DPRINT((0)); /* 61 */
                        D_80163884 += mv;
                    } else {
                        DPRINT((0)); /* 62 */
                        D_80163884 += lim;
                    }
                    D_8016392C = func_8001EB64((s16) (sp1D6 - 0x800)) * D_80163884;
                    D_80163930 = func_8001EAD0((s16) (sp1D6 - 0x800)) * D_80163884;
                    CAM->unk3C = ((f64) ((PL->unk4 + D_8016392C) - arg0->unk9C) * 0.25) + (f64) arg0->unk9C;
                    CAM->unk44 = ((f64) ((PL->unkC + D_80163930) - arg0->unkA4) * 0.25) + (f64) arg0->unkA4;
                    sp1C0 = CAM->unk3C - CAM->unk30;
                    sp1B8 = CAM->unk44 - CAM->unk38;
                    sp1B4 = func_8002FC20(SQ(sp1C0) + SQ(sp1B8));
                    sp1D6 = func_8001EF38(sp1B8, sp1C0) & 0x1FFF;
                    sp1CE = WRAP((s16) (sp1D0 - sp1D6));
                    DPRINT((sp1B4)); /* 63 dr(1) */
                    if ((f64) sp1B4 > 97.5) {
                        DPRINT((0)); /* 64 */
                        sp157 = 1;
                    }
                    if ((f64) sp1B4 > 75.0) {
                        ratio = (f32) ((f64) sp1B4 - (((f64) sp1B4 - 75.0) * 0.25)) / sp1B4;
                        sp1C0 *= ratio;
                        sp1B8 *= ratio;
                        sp1B4 = func_8002FC20(SQ(sp1C0) + SQ(sp1B8));
                        CAM->unk30 = CAM->unk3C - sp1C0;
                        CAM->unk38 = CAM->unk44 - sp1B8;
                    }
                    DPRINT((sp1B4)); /* 66 dr(2) */
                    d2 = sp1C8;
                    if (d2 < 1.0) {
                        if (ABS(sp1CE) >= 0x801) {
                            d1 = -40.0 * d2;
                            d1 = 75.0 + d1;
                            if ((f64) sp1B4 < d1) {
                                DPRINT((0)); /* 67 */
                                CAM->unk30 = (f64) CAM->unk30 - (((f64) CAM->unk30 - ((f64) CAM->unk3C - ((f64) (sp1C0 / sp1B4) * d1))) * 0.25);
                                CAM->unk38 = (f64) CAM->unk38 - (((f64) CAM->unk38 - ((f64) CAM->unk44 - ((f64) (sp1B8 / sp1B4) * d1))) * 0.25);
                            }
                        }
                    }
                    if ((GG->unk234 == 0) && ((f64) sp1B4 < 35.0)) {
                        D_80163914 = 0.0f;
                        D_80163910 = 0.0f;
                        D_8016390C = 0.0f;
                    }
                    if ((f64) sp1B4 < 35.0) {
                        if (ABS(sp1CE) >= 0x801) {
                            if (sp1CE > 0) {
                                DPRINT((0)); /* 68 YOKERU 1 */
                                cs = func_8001EB64(sp1D0 + 0x800);
                                sp1A0 = ((f32) (ABS(sp1CE) - 0x800) / 2048) * cs * sp1C8 * D_8016393C;
                                sn = func_8001EAD0(sp1D0 + 0x800);
                                sp19C = ((f32) (ABS(sp1CE) - 0x800) / 2048) * sn * sp1C8 * D_8016393C;
                            } else {
                                DPRINT((0)); /* 69 YOKERU 2 */
                                cs = func_8001EB64(sp1D0 - 0x800);
                                sp1A0 = ((f32) (ABS(sp1CE) - 0x800) / 2048) * cs * sp1C8 * D_8016393C;
                                sn = func_8001EAD0(sp1D0 - 0x800);
                                sp19C = ((f32) (ABS(sp1CE) - 0x800) / 2048) * sn * sp1C8 * D_8016393C;
                            }
                            CAM->unk30 += sp1A0;
                            CAM->unk38 += sp19C;
                            D_8016390C += sp1A0;
                            D_80163910 += sp19C;
                            D_80163914 = func_8002FC20(SQ(D_8016390C) + SQ(D_80163910));
                            df = CAM->unk3C - CAM->unk30;
                            func_8002FC20(SQ(df) + SQ(CAM->unk44 - CAM->unk38));
                            if (!((f64) ABSF(sp1C8) < 1e-06)) {
                                GG->unk234 = (u8) (u32) (24.0f / sp1C8);
                            }
                        }
                    }
                    if ((GG->unk234 != 0) && ((f64) D_80163914 > 1.0)) {
                        if ((ABS(sp1CE) >= 0x11) && (ABS(sp1CE) < 0x800)) {
                            {
                                if (sp1CE >= 0x11) {
                                    DPRINT((0)); /* 70 MODOSU 1 */
                                    cs = func_8001EB64(sp1D0 + 0x800);
                                    sp1A0 = (f32) ((0x800 - ABS(sp1CE)) / 2048) * cs * sp1C8 * D_8016393C;
                                    sn = func_8001EAD0(sp1D0 + 0x800);
                                    sp19C = (f32) ((0x800 - ABS(sp1CE)) / 2048) * sn * sp1C8 * D_8016393C;
                                } else if (sp1CE < -0x10) {
                                    DPRINT((0)); /* 71 MODOSU 2 */
                                    cs = func_8001EB64(sp1D0 - 0x800);
                                    sp1A0 = (f32) ((0x800 - ABS(sp1CE)) / 2048) * cs * sp1C8 * D_8016393C;
                                    sn = func_8001EAD0(sp1D0 - 0x800);
                                    sp19C = (f32) ((0x800 - ABS(sp1CE)) / 2048) * sn * sp1C8 * D_8016393C;
                                }
                                CAM->unk30 -= sp1A0;
                                CAM->unk38 -= sp19C;
                                D_8016390C -= sp1A0;
                                D_80163910 -= sp19C;
                                D_80163914 = func_8002FC20(SQ(D_8016390C) + SQ(D_80163910));
                                df = CAM->unk3C - CAM->unk30;
                                func_8002FC20(SQ(df) + SQ(CAM->unk44 - CAM->unk38));
                            }
                        }
                    }
                    D_80163928 = 0xA;
                }
            }
            if (((D_80163898 == 0) || (D_8016389C != 0)) && (D_80163934 == 0)) {
                DP((*(s16 *)D_801BBAE8, SGN(*(s16 *)D_801BBAEA), MAG(*(s16 *)D_801BBAEA))); /* 173 */
                if (D_80163894 != 0) {
                    DP((0)); /* 76 */
                    if (sp157 == 0) {
                        func_8011CF90(arg0->unk90, arg0->unk94, arg0->unk98, (*(s16 *)D_801BBAE8), (s32) (*(s16 *)D_801BBAEA));
                    }
                } else {
                    DP((0)); /* 77 */
                    if (sp157 == 0) {
                        func_8011BC20(arg0->unk90, arg0->unk94, arg0->unk98, sp1D6, (s32) sp1D4, (s32) (*(s16 *)D_801BBAE8), (s32) (*(s16 *)D_801BBAEA));
                    }
                }
            } else if (D_80163934 != 0) {
                spCC = CAM->unk30;
                spC8 = CAM->unk34;
                spC4 = CAM->unk38;
                spC0 = CAM->unk3C;
                spBC = CAM->unk40;
                spB8 = CAM->unk44;
                func_8011E480(sp1D6, sp1D4, &spCC, &spC8, &spC4, &spC0, &spBC, &spB8);
                spB4 = (f32) ((6.5 * (f64) func_8001EB64(sp1D4) * (f64) func_8001EB64(sp1D6)) + (f64) spCC);
                spB0 = (f32) (((f64) func_8001EAD0(sp1D4) * 6.5) + (f64) spC8);
                temp_fv1_27 = (f32) ((6.5 * (f64) func_8001EB64(sp1D4) * (f64) func_8001EAD0(sp1D6)) + (f64) spC4);
                spAC = temp_fv1_27;
                if (func_801084C4(spCC, spC8, spC4, spB4, spB0, temp_fv1_27) != 0) {
                    spCC += GG->unk380 - spB4;
                    spC8 += GG->unk384 - spB0;
                    spC4 += GG->unk388 - spAC;
                }
                CAM->unk30 = (f32) (((f64) (spCC - (arg0->unk90)) / 2.0) + (f64) (arg0->unk90));
                CAM->unk34 = spC8;
                CAM->unk38 = (f32) (((f64) (spC4 - (arg0->unk98)) / 2.0) + (f64) (arg0->unk98));
                func_80117650(CAM->unk30, CAM->unk34, CAM->unk38, CAM->unk3C, CAM->unk40, CAM->unk44);
                DP((PDIS)); /* 80 */
                if ((f64) PDIS < 8.6) {
                    DPRINT((0)); /* 81 */
                    GG->unkE0->unk22 = 0;
                } else if ((f64) PDIS > 12.0) {
                    DPRINT((0)); /* 82 */
                    GG->unkE0->unk22 = 1;
                }
            }
            if ((D_80163898 != 0) && (D_80163934 == 0)) {
                if (D_8016389C != 0) {
                    sp1AC = CAM->unk30;
                    sp1A8 = CAM->unk34;
                    sp1A4 = CAM->unk38;
                    func_80119F9C(D_801BBAE8, D_801BBAEA);
                }
                f3 = CDIS;
                if (D_80163934 == 0) {
                    if (((sp14C->unk1C) != 0x01680049) && ((sp14C->unk1C) != 0x0168004A) && ((sp14C->unk1C) != 0x0168004B)) {
                        func_80121220(sp1C8, sp1C4);
                    }
                }
                DP((f3, CDIS, CDIS - f3)); /* 84 */
                if (D_8016389C != 0) {
                    if (D_80163894 != 0) {
                        DP((0)); /* 85 */
                        if (sp157 == 0) {
                            func_8011CF90(sp1AC, sp1A8, sp1A4, (*(s16 *)D_801BBAE8), (s32) (*(s16 *)D_801BBAEA));
                        }
                    } else {
                        DP((0)); /* 86 */
                        if (sp157 == 0) {
                            func_8011BC20(sp1AC, sp1A8, sp1A4, sp1D6, (s32) sp1D4, (s32) (*(s16 *)D_801BBAE8), (s32) (*(s16 *)D_801BBAEA));
                        }
                    }
                } else if (D_80163894 != 0) {
                    DP((0)); /* 87 */
                    if (sp157 == 0) {
                        func_8011CF90(arg0->unk90, arg0->unk94, arg0->unk98, (*(s16 *)D_801BBAE8), (s32) (*(s16 *)D_801BBAEA));
                    }
                } else {
                    DP((0)); /* 88 */
                    if (sp157 == 0) {
                        func_8011BC20(arg0->unk90, arg0->unk94, arg0->unk98, sp1D6, (s32) sp1D4, (s32) (*(s16 *)D_801BBAE8), (s32) (*(s16 *)D_801BBAEA));
                    }
                }
            }
            temp_v0_20 = func_8001EF38(CAM->unk38 - arg0->unk98, CAM->unk30 - arg0->unk90);
            DP((temp_v0_20, SGN((s16) (temp_v0_20 - D_801BBAEC)), MAG((s16) (temp_v0_20 - D_801BBAEC)))); /* 189 */
            if (ABS(WRAP((s16) (temp_v0_20 - D_801BBAEC))) >= 0x801) {
                D_80163958 += 1;
                D_80163970 = D_8016396C;
                D_8016396C = D_80163968;
                D_80163968 = D_80163964;
                D_80163964 = D_80163960;
                D_80163960 = D_8016395C;
                D_8016395C = 0;
                if (GG->unk230 == 1) {
                    D_80163958 = 0;
                }
            }
            if (*(const s32 *)&vibration >= 6) {
                if ((D_80163960 + D_80163964 + D_80163968 + D_8016396C + D_80163970) < 0x32) {
                    GG->unk2AC = 2;
                }
                D_80163958 -= 1;
            }
            D_8016395C += 1;
            DP((0)); /* 222 */
            ((s16 *)D_801BBAE8)[2] = temp_v0_20;
            sp1C0 = arg0->unk98 - arg0->unkA4;
            sp1B8 = arg0->unk90 - arg0->unk9C;
            D_801BBAEE = temp_v0_20;
            spA0 = func_8002FC20(SQ(sp1C0) + SQ(sp1B8));
            f0 = func_8002FC20(SQ(CAM->unk30 - CAM->unk3C) + SQ(CAM->unk38 - CAM->unk44));
            DP((spA0, f0)); /* 99 */
            if (spA0 == f0) DPX((0)); /* 100 */
            else if (f0 < spA0) DPX((0)); /* 101 */
            else DPX((0)); /* 102 */
            if (((f64) func_8002FC20((f32) ((GG->unkA2 * GG->unkA2) + (GG->unkA4 * GG->unkA4))) < 40.0) || ((f64) sp1C8 < 0.2)) {
                GG->unk234 = 0;
                GG->unk232 = sp1D6;
                D_80163924 = 0;
            } else if (GG->unk234 != 0) {
                GG->unk234 -= 1;
                D_80163924 = 0;
            } else {
                if (*(u16 *)(D_80089474 + 4) & 0x10) {
                    if (D_80163974 != 0) {
                        D_80163974 = 0;
                    } else {
                        D_80163974 = 1;
                    }
                }
                bnrad = GG->unk232;
                dnrad = WRAP((s16) (sp1D6 - bnrad));
                if ((D_80163924 < 0xA) && (D_80163974 != 0)) {
                    D_80163924++;
                } else {
                    step16 = 16.0f * sp1C8;
                    if (step16 < dnrad) {
                        D_801BBE22 = bnrad + step16;
                    } else if (dnrad < -step16) {
                        D_801BBE22 = bnrad - step16;
                    } else {
                        GG->unk232 = sp1D6;
                    }
                }
            }
            arg1->f4->f30->f4 = (f32) CAM->unk3C;
            arg1->f4->f30->f8 = (f32) CAM->unk40;
            arg1->f4->f30->fC = (f32) CAM->unk44;
            arg0->unk9C = CAM->unk3C;
            arg0->unkA0 = CAM->unk40;
            arg0->unkA4 = CAM->unk44;
            arg0->unk90 = CAM->unk30;
            arg0->unk94 = CAM->unk34;
            arg0->unk98 = CAM->unk38;
            func_80119F9C(D_801BBAE8, D_801BBAEA);
            D_80163918 = PL->unk4;
            D_8016391C = PL->unk8;
            D_80163920 = PL->unkC;
            func_80119F9C(&sp1D6, &sp1D4);
            func_8011A148(sp1D6, sp1D4, sp1D2, &CAM->unk48, &CAM->unk4C, &CAM->unk50);
        }
    }
}
