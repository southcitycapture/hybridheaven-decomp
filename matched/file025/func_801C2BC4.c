#include "common.h"

extern s32 D_801DA250[];
extern void func_80005700();
extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
typedef struct func_801C2980_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    s32 unk98;
    u16 unk9C;
    u8 pad9E[2];
    u16 unkA0;
} func_801C2980_Struct;
struct func_801C2E9C_Struct {
    u8 pad0[0x30];
    u8 *unk30;
};
void func_801C2BC4(func_801C2980_Struct *arg0, struct func_801C2E9C_Struct **arg1) {
    s32 index;

    index = (s32)(((f32)(u32)arg0->unk9C / (f32)(u32)arg0->unkA0) * 7.99900007f);
    func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0xA8, D_801DA250[index]);
    arg0->unk9C++;
    if (arg0->unkA0 < arg0->unk9C) {
        func_80005700(arg0);
    }
}
