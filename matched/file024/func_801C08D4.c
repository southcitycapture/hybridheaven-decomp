#define func_801C08D4 func_801C08D4_decl
#include "context.h"
#undef func_801C08D4

extern f32 D_801CEACC;
extern s32 func_8012AAE8(void *, f32, f32, f32, f32);
void func_801C09E4();

typedef struct func_801C08D4_Inner {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0x4C - 0x14];
    s8 unk4C;
    s8 unk4D;
    s8 unk4E;
    s8 unk4F;
} func_801C08D4_Inner;

typedef struct func_801C08D4_Mid {
    u8 pad[0x2C];
    func_801C08D4_Inner *unk2C;
} func_801C08D4_Mid;

typedef struct func_801C08D4_Arg0 {
    u8 pad[0x24];
    func_801C08D4_Mid *unk24;
    u8 pad28[0x90 - 0x28];
    f32 unk90;
} func_801C08D4_Arg0;

void func_801C08D4(void *arg0, void **arg1) {
    func_801C08D4_Inner *inner;
    s16 v;

    inner = ((func_801C08D4_Arg0 *) arg0)->unk24->unk2C;
    v = inner->unk12;
    if ((v & 0x1FFF) != 0x1000) {
        inner->unk12 = v + 0x10;
    }
    ((func_801C08D4_Mid *) (*arg1))->unk2C->unk4C =
        (s8) ((s32) ((func_801C08D4_Arg0 *) arg0)->unk90 % 128);
    ((func_801C08D4_Mid *) (*arg1))->unk2C->unk4D = 0;
    ((func_801C08D4_Mid *) (*arg1))->unk2C->unk4E =
        (s8) ((s32) ((func_801C08D4_Arg0 *) arg0)->unk90 % 128);
    ((func_801C08D4_Mid *) (*arg1))->unk2C->unk4F = 0;
    ((func_801C08D4_Arg0 *) arg0)->unk90 =
        (f32) ((f64) ((func_801C08D4_Arg0 *) arg0)->unk90 + 0.5);
    if (func_8012AAE8(arg0, 0.0f, 3.0f, -20.0f, D_801CEACC) == 0) {
        func_800058DC((s32) arg0, (void *) func_801C09E4);
    }
}
