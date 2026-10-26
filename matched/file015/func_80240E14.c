#include "common.h"
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80242F38_StructGlobal LP(SG, __LINE__)
#define SG_348 struct SGT
#define SG_407 SGT
#define SG_411 SGtd
#define SG_412 struct SGT
#define SG_413 struct SGT
#define SG_584 struct SGT
extern s32 D_801BBCD0;
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C2F0C(s32, s16 *);
void func_80241130(void * volatile arg0, s32 volatile arg1);
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;

#undef func_80242F38_StructGlobal

typedef struct func_80240E14_Loc {
    union { f32 f; s16 s; } a;
    union { f32 f; s32 i; } b;
    f32 c;
    s16 d;
    s16 pad;
    s32 e;
    f32 f;
    s16 g;
    s16 h;
    s32 i;
} func_80240E14_Loc;
typedef struct func_80240E14_In { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_80240E14_In;
typedef struct func_80240E14_Nd { u8 pad0[0x2C]; func_80240E14_In *unk2C; } func_80240E14_Nd;
typedef struct func_80240E14_Nd2 { u8 pad0[0x30]; func_80240E14_In *unk30; } func_80240E14_Nd2;
typedef struct func_80240E14_Arg { u8 pad0[0x3C]; u16 unk3C; } func_80240E14_Arg;
extern s32 func_801C2FF8();
extern s32 D_801C3B5C(void);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 D_802580C8[];
extern u8 D_80258104[];
extern f32 D_80258218;
extern f64 D_80258220;
extern f32 D_80258228;
extern f32 D_8025822C;
extern f32 D_80258230;
extern f32 D_80258234;
extern f32 D_80258238;
extern f32 D_8025823C;
extern f32 D_80258240;
extern f32 D_80258244;
extern f32 D_80258248;
extern f32 D_8025824C;

void func_80240E14(func_80240E14_Arg *arg0, func_80240E14_Nd2 **arg1) {
    func_80240E14_Loc l;
    s32 t;

    if (func_801C2FF8() != 0) {
        t = arg0->unk3C++;
        if (t >= 0x16) {
            if (t == 0x16) {
                l.a.f = ((func_80240E14_Nd *)D_801BBCD0)->unk2C->unk4 - func_8001EAD0(((func_80240E14_Nd *)D_801BBCD0)->unk2C->unk12) * 8.0f;
                l.b.f = ((func_80240E14_Nd *)D_801BBCD0)->unk2C->unkC - func_8001EB64(((func_80240E14_Nd *)D_801BBCD0)->unk2C->unk12) * 8.0f;
                l.d = 0x1102;
                l.e = 0x01680003;
                l.g = 0x1000;
                l.h = 0;
                l.c = D_80258218;
                l.f = 1.0f;
                func_801C2F0C(2, (s16 *)&l);
            }
            if (D_801C3B5C() == 4) {
                l.a.s = 0;
                l.b.i = 0x01680041;
                l.d = 0x14;
                l.c = 1.0f;
                func_801C2F0C(3, (s16 *)&l);
            }
        }
        if (t >= 0xF) {
            if (t == 0xF) {
                func_80020718(0x14B);
            }
            arg1[0]->unk30->unk12 -= 0x16;
            arg1[1]->unk30->unk12 += 0x16;
            if (D_80258220 == (f64)t) {
                func_8011AAF4(D_802580C8, 0x135, arg0, 0, 1, 0.0f, D_80258228, 30.0f, D_8025822C, 0.0f, D_80258230, 28.5f, 450.0f, 0.0f, 35.0f, -1, -1);
            }
            if (46.0 == (f64)t) {
                func_8011AAF4(D_80258104, 0x13B, arg0, 0, 2, D_80258234, D_80258238, D_8025823C, D_80258240, D_80258244, D_80258248, D_8025824C, 450.0f, 0.0f, 35.0f, -1, -1);
            }
            if (t >= 0x69) {
                arg0->unk3C = 0;
                func_800058DC(arg0, func_80241130);
            }
        }
    }
}
