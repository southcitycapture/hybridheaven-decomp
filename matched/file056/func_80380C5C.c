#include "context.h"

extern void func_8037EDF4(void *a0);
extern void func_8037EF2C(void *a0);

typedef struct func_80380C5C_Struct {
    u8 pad0[0x4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80380C5C_Struct;

typedef struct func_80380C5C_Obj {
    u8 pad0[0x96];
    s8 unk96;
    u8 pad1[0xD];
    func_80380C5C_Struct *unkA4;
} func_80380C5C_Obj;

extern s32 D_8038A99C;

void func_80380C5C(func_80380C5C_Obj *arg0, s32 arg1) {
    func_80380C5C_Struct *sp24;
    s16 pad;
    s8 sp21;
    u16 f;
    u8 *p;

    sp24 = arg0->unkA4;
    f = sp24->unkC;
    sp21 = arg0->unk96;
    if ((f & 0x800) && arg0->unk96 > 0) {
        arg0->unk96--;
    } else if ((f & 0x400) && arg0->unk96 < 5) {
        arg0->unk96++;
    } else if (f & 0x100) {
        if (D_8038A950[arg0->unk96] == 1) {
            func_80020744(0x300);
        }
        D_8038A950[arg0->unk96] = 2;
    } else if (f & 0x200) {
        if (D_8038A950[arg0->unk96] == 2) {
            func_80020744(0x300);
        }
        D_8038A950[arg0->unk96] = 1;
    }
    if (sp21 != arg0->unk96) {
        func_80020744(0x300);
    }
    func_8037EDF4(arg0);
    func_8037EF2C(arg0);
    func_8037F0C8((void *)arg0);
    func_8037F370((u8 *)arg0);
    if (sp24->unk4 & 0x4000) {
        func_80147DCC(2);
        func_801471DC(D_8038A99C);
        func_80148FC4(arg0, func_801498CC, 5, 0);
    } else if (sp24->unk4 & 0x1000) {
        func_80148E44(arg0);
        func_80148FC4(arg0, func_8014AB48, 5, 1);
    }
}
