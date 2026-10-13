#include "context.h"
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern s32 func_80244AB0();
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
extern func_80246E60_StructGlobal D_80258F18;
extern s32 func_8012C6B4(s32);

extern void func_80245C58();

typedef struct func_80245B90_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245B90_StructInner;

typedef struct func_80245B90_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x28];
    func_80245B90_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
    u8 pad96[0x6];
    s32 unk9C;
} func_80245B90_Struct;

void func_80245B90(func_80245B90_Struct *arg0, s32 arg1) {
    func_80245B90_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80244AB0(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258F18, 0xA) == 0) && (func_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x40) + 0x40);
        arg0->unk9C = arg0->unk30;
        func_800058DC(arg0, func_80245C58);
    }
}
