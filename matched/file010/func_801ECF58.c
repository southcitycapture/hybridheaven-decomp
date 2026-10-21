#include "context.h"
extern func_801EFD14_Table D_80216B90;

extern u8 D_80216C0C;

void func_801ECF58(func_801E74DC_Arg0 *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, u16 arg3, u8 arg4) {
    func_801E74DC_Sub *s;
    s32 a3 = arg3;
    s32 id;

    id = arg2->unk1C.unk0;
    if (id == 0x1680007) goto l7;
    if (id != 0x1680021) goto lelse;
    goto l21;
l7:
    if (arg4 != 0) {
        D_80216C0C = 1;
    }
    if (a3 != 0) {
        s = &arg2->unk1C;
        if (D_80216C0C != 0) {
            s->unk0 = 0x1680022;
        } else {
            s->unk0 = 0x1680021;
        }
        *(s16 *)((u8 *)s + 4) = 0;
        *(s16 *)((u8 *)s + 6) = 0;
        func_8013A28C(arg1, *s);
        D_80216C0C = 0;
    }
    return;
l21:
    if (a3 != 0) {
        func_80011140(arg1, arg2, D_80216B90, 0xA);
        arg0->unk2C |= 0x80;
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
    } else {
        D_80216C0C = 0;
    }
    return;
lelse:
    s = &arg2->unk1C;
    if (s != NULL) {
    }
    s->unk0 = 0x1680007;
    *(s16 *)((u8 *)s + 4) = 0;
    *(s16 *)((u8 *)s + 6) = 0;
    func_8013A28C(arg1, *s);
    arg0->unk40 = 0.0f;
    arg0->unk2C |= 0x80;
    arg0->unk48 = 0.0f;
    D_80216C0C = 0;
}
