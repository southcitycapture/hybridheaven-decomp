#include "common.h"
extern void func_800058DC(void *arg0, void *arg1);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8, f32 f9, s32 arg15, s32 arg16);
typedef struct func_80240EF8_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
} func_80240EF8_Struct;
extern void func_801C2F0C(s32 arg0, struct func_80240EF8_Struct *arg1);
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


struct func_80242BE0_Struct_Holder;
extern struct func_80242BE0_Struct_Holder *D_801BBCD0;
extern struct func_80242BE0_Struct_Holder *D_801BBCD8;
void func_80241214(s32 arg0, s32 arg1);

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
typedef struct func_80241068_Struct {
    u8 pad[0x74];
    s32 unk74;
} func_80241068_Struct;

extern s32 func_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_801FBB20(void);
extern void func_80133980(s32);
extern u8 D_80246914[];
extern f32 D_80246A60;

typedef struct func_80241068_Struct_Holder {
    u8 pad[0x2C];
    func_80241068_Struct_Cam *unk2C;
} func_80241068_Struct_Holder;

#define P ((*(func_80241068_Struct_Holder **)&D_801BBCD0)->unk2C)
#define Q ((*(func_80241068_Struct_Holder **)&D_801BBCD8)->unk2C)

void func_80241068(func_80241068_Struct *arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(P->unk12);
    if (func_801C3DC8(arg0, (f32) ((f64) P->unk4 - ((f64) sp50 * 40.0)), P->unk8 + 20.0f, (f32) ((f64) P->unkC - ((f64) func_8001EB64(P->unk12) * 40.0)), P->unk4, P->unk8 + 17.0f, P->unkC, D_80246A60, 35.0f) == 0) {
        func_8011AAF4(D_80246914, 0x239, arg0, 2, 1, 0.0f, Q->unk30, Q->unk34, Q->unk38, 0.0f, Q->unk3C, Q->unk40, Q->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk74 = 0;
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_80133980(0x16E);
        func_800058DC(arg0, (void *)func_80241214);
    }
}
