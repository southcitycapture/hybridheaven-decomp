#include "context.h"
extern void func_800317D0(void *, void *, s32);
typedef struct func_8002BA34_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8[4];
    u16 unk18;
    u8 unk1A;
    u8 unk1B;
    u16 unk1C;
    u16 unk1E;
} func_8002BA34_Struct;
typedef struct func_8002BA34_Arg {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 unkC[0x20];
    u8 unk2C[0x20];
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    u8 unk64;
    u8 unk65;
} func_8002BA34_Arg;
#define func_8002B580_Struct func_8002BA34_Struct
#define func_8002B580(a, b, c) func_8002B580((void *)(a), (void *)(b), (void *)(c))

s32 func_8002BA34(func_8002BA34_Arg *arg0) {
    u16 sp6E;
    u16 sp6C;
    func_8002B580_Struct sp4C;
    func_8002B580_Struct *s1;
    func_8002B580_Struct sp28;
    s32 r;
    s32 t;

    if (arg0->unk65 != 0) {
        r = func_80032D40(arg0, 0);
        if (r != 0) {
            return r;
        }
    }
    r = func_80034060(arg0->unk4, arg0->unk8, 1, &sp4C);
    if (r != 0) {
        return r;
    }
    func_8002B484((u16 *)&sp4C, &sp6E, &sp6C);
    s1 = &sp4C;
    if (sp4C.unk1C != sp6E) goto L;
    if (sp4C.unk1E != sp6C) {
L:
        r = func_8002B8D0(arg0, (u16 *)&sp4C);
        if (r == 0xA) {
            r = func_8002B580(arg0, &sp4C, &sp28);
            if (r != 0) {
                return r;
            }
            s1 = &sp28;
        } else if (r != 0) {
            return r;
        }
    }
    if (!(s1->unk18 & 1)) {
        r = func_8002B580(arg0, s1, &sp28);
        if (r != 0) {
            return r;
        }
        s1 = &sp28;
        if (!(sp28.unk18 & 1)) {
            return 0xB;
        }
    }
    func_800317D0(s1, arg0->unkC, 0x20);
    arg0->unk4C = s1->unk1B;
    arg0->unk64 = s1->unk1A;
    arg0->unk60 = arg0->unk64 * 2 + 3;
    arg0->unk50 = 0x10;
    arg0->unk54 = 8;
    arg0->unk58 = arg0->unk64 * 8 + 8;
    arg0->unk5C = arg0->unk58 + arg0->unk64 * 8;
    r = func_80034060(arg0->unk4, arg0->unk8, 7, arg0->unk2C);
    if (r != 0) {
        return r;
    }
    return 0;
}
