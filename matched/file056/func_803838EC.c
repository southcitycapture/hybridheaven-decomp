#include "context.h"

extern f32 func_8001EB64(s16);
extern s32 func_80133A24(s32);

struct func_803838EC_StructIn {
    u8 pad0[0x30];
    struct func_803813A8_StructIn *unk30;
    u8 pad1[0x8];
    u16 unk3C;
    u8 pad2[0x6A];
    u8 unkA8;
};

void func_803838EC(struct func_803838EC_StructIn *arg0, struct func_803813A8_StructOut **arg1) {
    s32 t;
    u8 state;

    t = arg0->unk3C++;
    (*arg1)->unk30->unk4C = func_8001EB64((s16)(t * 100 % 8192)) * 127.0f + 128.0f;
    (*arg1)->unk30->unk4D = func_8001EB64((s16)(t * 120 % 8192)) * 127.0f + 128.0f;
    (*arg1)->unk30->unk4E = func_8001EB64((s16)(t * 140 % 8192)) * 127.0f + 128.0f;
    state = arg0->unkA8;
    if (state == 0) goto case0;
    if (state != 1) goto end;
    goto case1;
case0:
    (*arg1)->unk30->unk4B += 8;
    if ((*arg1)->unk30->unk4B >= 0xF8) {
        (*arg1)->unk30->unk4B = 0xFF;
        arg0->unkA8 = 1;
    }
    goto end;
case1:
    if (func_80133A24(0x13B) != 0) {
        (*arg1)->unk30->unk4B -= 2;
        if ((*arg1)->unk30->unk4B < 2) {
            func_80005700(arg0);
        }
    }
end:;
}
