#include "common.h"
extern s16 D_80089354;
typedef struct func_80242BE0_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
    u8 pad2[0x30 - 0x10];
    f32 unk30;
    f32 unk34;
    f32 unk38;
} func_80242BE0_Struct_Cam;
typedef struct func_80242BE0_Struct_Holder {
    u8 pad0[0x2C];
    func_80242BE0_Struct_Cam *unk2C;
} func_80242BE0_Struct_Holder;
extern struct func_80242BE0_Struct_Holder *D_801BBCD0;
typedef struct func_80241068_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x1C];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80241068_Struct_Cam;
typedef struct func_80241068_Struct_Holder {
    u8 pad[0x2C];
    func_80241068_Struct_Cam *unk2C;
} func_80241068_Struct_Holder;
#define P ((*(func_80241068_Struct_Holder **)&D_801BBCD0)->unk2C)
extern void func_80002A04();
extern void func_800058DC(void *arg0, void *arg1);
extern void func_8001E978(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8, f32 f9, s32 arg15, s32 arg16);
extern void func_80133980(s32);
struct func_80241DB4_Struct {
    u8 pad[0x93];
    u8 unk93;
    f32 unk94;
    u8 pad2[0xA0 - 0x98];
    u16 unkA0;
};
extern struct func_80241DB4_Struct *func_801505AC(s32);
typedef struct func_80240EF8_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
} func_80240EF8_Struct;
extern void func_801C2F0C(s32 arg0, struct func_80240EF8_Struct *arg1);
extern void func_801FBB20(void);
void func_802418D4(s32 arg0, s32 arg1);
struct func_80241DB4_A { u8 pad[0x3C]; u16 unk3C; };


extern u8 D_8024697C[];

void func_802416EC(struct func_80241DB4_A *arg0, s32 arg1) {
    struct func_80241DB4_Struct *o;
    s32 v;
    f32 t;
    f32 s;

    v = arg0->unk3C++;
    if (v == 0x1E) {
        o = func_801505AC(5);
        o->unk93 = 1;
        o->unk94 = 0.0f;
    }
    if (v == 0x78) {
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 1, 0);
    }
    if (v >= 0x96) {
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 2, 0);
        s = func_8001EAD0(P->unk12);
        t = func_8001EB64(P->unk12);
        func_8011AAF4(D_8024697C, 0x30E, arg0, 2, 1, 0.0f,
                      P->unk4 - s * 40.0f, P->unk8 + 20.0f,
                      P->unkC - t * 40.0f,
                      0.0f, P->unk4, P->unk8 + 15.0f, P->unkC, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_80002A04();
        func_801FBB20();
        func_80133980(0x171);
        func_800058DC(arg0, func_802418D4);
    }
}
