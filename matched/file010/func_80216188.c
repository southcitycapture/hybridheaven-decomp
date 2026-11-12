#include "common.h"
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801FD5BC(f32, f32, f32);


extern f64 D_8021AF78;

struct func_80216188_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x48 - 0x20];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_80216188_StructOuter {
    u8 pad0[0x30];
    struct func_80216188_StructInner *unk30;
};

struct func_80216188_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

s32 func_80216188(arg0, arg1, incoming, increment)
    struct func_80216188_StructArg0 *arg0;
    struct func_80216188_StructOuter **arg1;
    s32 incoming;
    f64 increment;
{
    s32 count;
    s16 angle;

    incoming = arg0->unk3C++;
    count = incoming;
    incoming = 0;
    if (count < 10) {
        (*arg1)->unk30->unk4B += 20;
    } else if (count >= 18) {
        (*arg1)->unk30->unk4B -= 6;
        if ((*arg1)->unk30->unk4B < 6) {
            return 0;
        }
    }

    angle = (s16)(count * 0x190) & 0x1FFF;
    increment = D_8021AF78;
    (*arg1)->unk30->unk18 += increment;
    (*arg1)->unk30->unk1C += increment;
    (*arg1)->unk30->unk4C = (u32)(func_8001EAD0(angle) * 127.0f + 128.0f);
    (*arg1)->unk30->unk4D = (u32)(func_8001EAD0(angle) * 64.0f + 64.0f);
    (*arg1)->unk30->unk4E = (u32)(func_8001EB64(angle) * 127.0f + 128.0f);
    (*arg1)->unk30->unk48 = ((*arg1)->unk30->unk4C + 255) / 2;
    (*arg1)->unk30->unk49 = ((*arg1)->unk30->unk4D + 255) / 2;
    (*arg1)->unk30->unk4A = ((*arg1)->unk30->unk4E + 255) / 2;
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        return 0;
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    return 1;
}
