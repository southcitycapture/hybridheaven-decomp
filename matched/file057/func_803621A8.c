#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC();
typedef struct func_80361BCC_State {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x10];
    u32 pad30a : 9;
    u32 mode : 2;
    u32 pad30c : 21;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA;
    u8 unk2DB;
    u8 pad2DC[0x2E8 - 0x2DC];
    u8 unk2E8;
    u8 pad2E9[0x300 - 0x2E9];
    u16 unk300;
    u8 pad302[0x314 - 0x302];
    u8 unk314[0xC];
    u8 unk320;
    u8 pad321[0x32C - 0x321];
    u8 unk32C;
    u8 pad32D[0x392 - 0x32D];
    u8 unk392;
} func_80361BCC_State;
typedef struct func_80362234_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80362234_StructArg;
void func_80362234(func_80362234_StructArg *arg0, s32 arg1);

extern s32 func_80010550(s32, s32);
extern void func_800112B0(s32, s32, s32, void *);

void func_803621A8(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 sp24;
    func_80361BCC_State *state;

    temp_a2 = *(s32 *)(arg0 + 0x5C);
    if ((s32)arg0 == D_801BBCCC) {
        state = (func_80361BCC_State *)D_801BC03C;
    } else {
        state = (func_80361BCC_State *)D_801BC3D8;
    }
    sp24 = temp_a2;
    func_800112B0(arg1, temp_a2 + 0x22, temp_a2, arg0);
    if (func_80010550(arg1, sp24) != 0) {
        func_800058DC(arg0, func_80362234);
    }
    state->unk392 = 0;
}
