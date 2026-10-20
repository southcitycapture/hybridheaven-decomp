#include "context.h"

typedef struct func_80241064_StructC {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80241064_StructC;
typedef struct func_80241064_StructB {
    u8 pad[0x30];
    func_80241064_StructC *unk30;
} func_80241064_StructB;
typedef struct func_80241064_StructA {
    u8 pad[0x24];
    func_80241064_StructB *unk24;
} func_80241064_StructA;
typedef struct func_80241064_StructGlobal {
    u8 pad[0x2C];
    func_80241064_StructC *unk2C;
} func_80241064_StructGlobal;

extern s32 D_801BBCD0;
extern u8 D_8024A2A8[];
extern f32 D_8024A344;
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_800058DC(void *, void *);
extern void func_80241144();

void func_80241064(func_80241064_StructA *arg0, s32 arg1) {
    func_80241064_StructC *temp_v0;
    func_80241064_StructC *temp_v1;

    if (func_8011AAF4(D_8024A2A8, 0x103, arg0, 0, 2, 4294967296.0f, ((func_80241064_StructGlobal *)D_801BBCD0)->unk2C->unk4, -544.0f, ((func_80241064_StructGlobal *)D_801BBCD0)->unk2C->unkC, 4.0f, arg0->unk24->unk30->unk4, D_8024A344, arg0->unk24->unk30->unkC, 0.0f, 35.0f, -1, -1) == 0) {
        func_800058DC(arg0, func_80241144);
    }
}
