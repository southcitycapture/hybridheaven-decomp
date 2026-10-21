#include "common.h"

#define func_800331B8 func_800331B8__func_80032FB0
#define func_800331B8_Struct func_800331B8_Struct__func_80032FB0
typedef struct func_800331B8_Struct {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
} func_800331B8_Struct;
extern s32 func_800331B8(func_800331B8_Struct *arg0);

typedef struct func_80032FB0_Buf {
    u8 pad0[0x18];
    u16 f18;
    u8 b1A;
    u8 b1B;
    u16 f1C;
    u16 f1E;
} func_80032FB0_Buf;

typedef struct func_80032FB0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0x20];
    u8 pad2C[0x20];
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    u8 unk64;
} func_80032FB0_Struct;

extern void func_80027EB0();
extern void func_80027EF4();
extern s32 func_80029B00(s32, s32);
extern void func_8002B484(func_80032FB0_Buf *, u16 *, u16 *);
extern s32 func_8002B580(func_80032FB0_Struct *, func_80032FB0_Buf *, func_80032FB0_Buf *);
extern s32 func_8002B8D0(func_80032FB0_Struct *, func_80032FB0_Buf *);
extern void func_800317D0(func_80032FB0_Buf *, u8 *, s32);
extern s32 func_800332C0(func_80032FB0_Struct *);

s32 func_80032FB0(s32 arg0, func_80032FB0_Struct *arg1, s32 arg2) {
    s32 sp6C;
    u16 sp6A;
    u16 sp68;
    func_80032FB0_Buf sp48;
    func_80032FB0_Buf *sp44;
    s32 t;
    func_80032FB0_Buf sp20;

    func_80027EB0();
    sp6C = func_80029B00(arg0, arg2);
    func_80027EF4();
    if (sp6C != 0) {
        return sp6C;
    }
    arg1->unk4 = arg0;
    arg1->unk8 = arg2;
    arg1->unk0 = 0;
    sp6C = func_800331B8((void *)arg1);
    if (sp6C != 0) {
        return sp6C;
    }
    sp6C = func_80032D40((void *)arg1, 0);
    if (sp6C != 0) {
        return sp6C;
    }
    sp6C = func_80034060(arg1->unk4, arg1->unk8, 1, (u8 *)&sp48);
    if (sp6C != 0) {
        return sp6C;
    }
    func_8002B484(&sp48, &sp6A, &sp68);
    sp44 = &sp48;
    if (sp48.f1C != sp6A || sp48.f1E != sp68) {
        sp6C = func_8002B8D0(arg1, &sp48);
        if (sp6C != 0) {
            arg1->unk0 |= 4;
            return sp6C;
        }
    }
    if (!(sp48.f18 & 1)) {
        sp6C = func_8002B580(arg1, &sp48, &sp20);
        if (sp6C != 0) {
            if (sp6C == 0xA) {
                arg1->unk0 |= 4;
            }
            return sp6C;
        }
        sp44 = &sp20;
        if (!(sp20.f18 & 1)) {
            return 0xB;
        }
    }
    func_800317D0(sp44, arg1->padC, 0x20);
    arg1->unk4C = sp44->b1B;
    arg1->unk64 = sp44->b1A;
    t = arg1->unk64;
    arg1->unk60 = t * 2 + 3;
    arg1->unk50 = 0x10;
    arg1->unk54 = 8;
    arg1->unk58 = t * 8 + 8;
    arg1->unk5C = arg1->unk58 + t * 8;
    sp6C = func_80034060(arg1->unk4, arg1->unk8, 7, arg1->pad2C);
    if (sp6C != 0) {
        return sp6C;
    }
    sp6C = func_800332C0(arg1);
    arg1->unk0 |= 1;
    return sp6C;
}
#undef func_800331B8
#undef func_800331B8_Struct


typedef struct func_800331B8_Struct {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
} func_800331B8_Struct;

extern s32 func_80031070(u8 *, u8 *, s32);
extern s32 func_80032D40(func_800331B8_Struct *, s32);
extern s32 func_80033E10(s32, s32, s32, u8 *, s32);
extern s32 func_80034060(s32, s32, s32, u8 *);

s32 func_800331B8(func_800331B8_Struct *arg0) {
    s32 r;
    s32 i;
    u8 c[0x20];
    u8 b[0x20];
    u8 a[0x20];

    r = func_80032D40(arg0, 0);
    if (r != 0) {
        return r;
    }
    r = func_80034060(arg0->unk4, arg0->unk8, 0, a);
    if (r != 0) {
        return r;
    }
    for (i = 0; i < 0x20; i++) {
        c[i] = i;
    }
    r = func_80033E10(arg0->unk4, arg0->unk8, 0, c, 0);
    if (r != 0) {
        return r;
    }
    r = func_80034060(arg0->unk4, arg0->unk8, 0, b);
    if (r != 0) {
        return r;
    }
    if (func_80031070(c, b, 0x20) != 0) {
        return 0xB;
    }
    return func_80033E10(arg0->unk4, arg0->unk8, 0, a, 0);
}

