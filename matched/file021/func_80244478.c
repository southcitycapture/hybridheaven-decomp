#include "context.h"

typedef struct func_80244478_Inner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4B - 0x34];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80244478_Inner;

typedef struct func_80244478_Outer {
    u8 pad0[0x30];
    func_80244478_Inner *unk30;
} func_80244478_Outer;

typedef struct func_80244478_Copy {
    s32 w[4];
} func_80244478_Copy;

typedef struct func_80244478_Arg0 {
    u8 pad0[0x9C];
    f32 unk9C;
} func_80244478_Arg0;

extern u8 D_80250FA0[];
extern f32 D_802570F8;
extern void func_80244720();
extern void func_802445E8();

void func_80244478(func_80244478_Arg0 *arg0, func_80244478_Outer **arg1) {
    func_80244478_Copy sp28;

    if (func_80126CC0((s32) arg0, func_80126EAC) != 0) {
        func_8001F74C(arg0);
        sp28 = *(func_80244478_Copy *) D_80164F40;
        sp28.w[1] = 0x80000600;
        func_80005F6C(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x502, 2);
        func_8012D918(arg0, 0x500, 4, 0, 0);
        (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x4100;
        (*arg1)->unk30->unk30 = (s32) D_80250FA0 | 0x40000000;
        (*arg1)->unk30->unk4B = 0x80;
        (*arg1)->unk30->unk4C = 0;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
        arg0->unk9C = D_802570F8;
        if (func_80133A24(0x1A6) != 0) {
            func_800058DC((s32) arg0, func_80244720);
            return;
        }
        func_800058DC((s32) arg0, func_802445E8);
    }
}
