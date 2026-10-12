#include "context.h"

extern void func_80005E44(s32 a0, void *a1);
extern void func_80006214(s32 a0);
extern void func_8012C89C(s32 a0, s32 a1, s32 a2, s32 a3);
extern u8 D_8017AE98[];
extern u8 D_8038D840[];
extern s32 D_8038D850;
extern struct func_801E2EE0_Obj **D_8038D854;

struct func_801E2EE0_Obj {
    u8 pad0[0x2C];
    struct func_801E2EE0_Data *unk2C;
};
struct func_801E2EE0_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    u8 *unk30;
};

s32 func_801E2EE0(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D850, D_8038D840);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x443, 0);
    (*D_8038D854)->unk2C->unk4 = 0.0f;
    (*D_8038D854)->unk2C->unk8 = 0.0f;
    (*D_8038D854)->unk2C->unkC = 0.0f;
    (*D_8038D854)->unk2C->unk18 = 1.0f;
    (*D_8038D854)->unk2C->unk1C = 1.0f;
    (*D_8038D854)->unk2C->unk20 = 1.0f;
    (*D_8038D854)->unk2C->unk12 = 0;
    (*D_8038D854)->unk2C->unk30 = D_8017AE98;
    return 2;
}
