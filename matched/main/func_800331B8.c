#include "context.h"

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
