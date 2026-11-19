#include "common.h"
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;
typedef struct func_801ED0EC_Sub {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801ED0EC_Sub;
typedef struct func_801ED0EC_Arg2 {
    u8 pad[0x1C];
    func_801ED0EC_Sub unk1C;
} func_801ED0EC_Arg2;

extern u8 D_80216C0C;

void func_801ECF58(func_801E74DC_Arg0 *arg0, s32 arg1, func_801ED0EC_Arg2 *arg2, u16 arg3, u8 arg4) {
    func_801ED0EC_Sub *s;
    func_801ED0EC_Arg2 *data = arg2;
    s32 a3 = arg3;
    s32 id;

    id = data->unk1C.unk0;
    if (id == 0x1680007) goto l7;
    if (id != 0x1680021) {
        s = &data->unk1C;
        goto lelse;
    }
    goto l21;
l7:
    if (arg4 != 0) {
        D_80216C0C = 1;
    }
    if (a3 != 0) {
        s = &data->unk1C;
        if (D_80216C0C != 0) {
            s->unk0 = 0x1680022;
        } else {
            s->unk0 = 0x1680021;
        }
        s->unk4 = 0;
        s->unk6 = 0;
        func_8013A28C(arg1, *(func_801E74DC_Sub *)s);
        D_80216C0C = 0;
    }
    return;
l21:
    if (a3 != 0) {
        func_80011140(arg1, data, *(func_801EFD14_Table *)&D_80216B90, 0xA);
        arg0->unk2C |= 0x80;
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
    } else {
        D_80216C0C = 0;
    }
    return;
lelse:
    s->unk0 = 0x1680007;
    s->unk4 = 0;
    s->unk6 = 0;
    func_8013A28C(arg1, *(func_801E74DC_Sub *)s);
    arg0->unk40 = 0.0f;
    arg0->unk2C |= 0x80;
    arg0->unk48 = 0.0f;
    D_80216C0C = 0;
}
