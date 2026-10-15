#include "context.h"

typedef struct func_802113B4_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x91 - 0x4C];
    u8 unk91;
    u8 pad92[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[0xA8 - 0xA6];
    s32 unkA8;
} func_802113B4_Struct;

struct func_80212A28_Struct;
void func_80212A28(struct func_80212A28_Struct *arg0);
u8 func_80212A48(struct func_80212A28_Struct *arg0);
extern s32 func_801FD5BC(f32, f32, f32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern f32 func_801FD780(u8);
extern u16 D_80217C70[];
extern f64 D_8021ACC0;

s32 func_802113B4(func_802113B4_Struct *arg0, func_8020FB98_Outer **arg1) {
    arg0->unk44 = arg0->unk44 - D_8021ACC0;
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        return 0;
    }
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 0.6f, arg0->unkA2, 0.5f, 1.0f, func_801FD780(arg0->unk91) * arg0->unkA8) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0);
        func_80212A28((struct func_80212A28_Struct *)arg0);
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217C70[func_80212A48((struct func_80212A28_Struct *)arg0) % 3]);
        return 0;
    }
    if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unk40 + arg0->unk94, arg0->unk44 + arg0->unk98, arg0->unk48 + arg0->unk9C) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0);
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217C70[func_80212A48((struct func_80212A28_Struct *)arg0) % 3]);
        func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 8.0f, arg0->unkA2, 0.5f, 1.0f, func_801FD780(arg0->unk91) * arg0->unkA8);
        return 0;
    }
    arg0->unkA2 = (s16)(arg0->unkA2 + 0x5B) & 0x1FFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
    return 1;
}
