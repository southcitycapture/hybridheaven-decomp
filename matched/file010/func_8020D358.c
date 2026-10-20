#include "context.h"

struct func_8020D358_Struct_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x4B - 0x24];
    u8 unk4B;
};
struct func_8020D358_Struct_Out {
    u8 pad0[0x30];
    struct func_8020D358_Struct_In *unk30;
};
struct func_8020D358_Struct_A0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x91 - 0x4C];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[8];
    s32 unkA8;
};
extern s16 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern f32 func_801FD780(u8);
extern f64 D_8021AAC0;
extern f64 D_8021AAC8;
extern f32 D_8021AAD0;

s32 func_8020D358(struct func_8020D358_Struct_A0 *arg0, struct func_8020D358_Struct_Out **arg1) {
    u8 pad[4];
    s32 sp38;
    u8 pad2[4];
    s16 sp32;
    f32 t;

    sp38 = arg0->unk3C++;
    t = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40) * D_8021AAC0;
    (*arg1)->unk30->unk18 += t;
    (*arg1)->unk30->unk1C += t;
    (*arg1)->unk30->unk20 += t;
    arg0->unk44 = arg0->unk44 + D_8021AAC8;
    if (sp38 < 4) {
        (*arg1)->unk30->unk4B += 0x30;
    } else if (sp38 >= 0x14) {
        (*arg1)->unk30->unk4B -= 0xC;
        if ((*arg1)->unk30->unk4B < 0x18) {
            return 0;
        }
    }
    if (arg0->unkA8 != 0 && sp38 < 0x14) {
        sp32 = func_8001EF38(arg0->unk40, arg0->unk48);
        if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 0.2f, sp32, 1.5f, D_8021AAD0, (u32)(func_801FD780(arg0->unk91) * (f32)arg0->unkA8)) != 0) {
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 2);
        }
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    return 1;
}
