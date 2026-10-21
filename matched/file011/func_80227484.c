#include "context.h"

struct func_80227484_Struct2 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    u8 pad[0x2E];
    f32 unk34;
};
struct func_80227484_Struct1 {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_80227484_Struct2 *unk30;
};
struct func_80227484_Struct3 {
    u8 pad[8];
    s16 unk8;
    s16 unkA;
    u8 pad2[0x36];
    s16 unk42;
    u8 pad3[6];
    s16 unk4A;
};
struct func_80227484_List {
    struct func_80227484_Struct1 *e[1];
};

extern void func_801451C0();
extern void func_80145310(void *, s32, s32);
extern void func_801453CC(void *, s32, s32, s32, s32, s32, s32);
extern u8 D_801BCC21;

void func_80227484(struct func_80227484_List *arg0, struct func_80227484_Struct3 *arg1, s8 arg2) {
    u8 idx;
    u8 sp4E;
    s16 c;
    s16 a;
    s16 b;
    u8 r;
    struct func_80227484_Struct1 **s0;
    struct func_80227484_Struct1 **v1;

    a = arg1->unkA;
    b = arg1->unk4A;
    if (arg2 == 0) {
        idx = ((u8 *)&D_801BEC68)[4];
        sp4E = ((u8 *)&D_801BEC68)[5];
    } else {
        idx = ((u8 *)&D_801BEC68)[0x11];
        sp4E = ((u8 *)&D_801BEC68)[0x12];
    }
    if (a < b && arg1->unk42 > 0) {
        arg1->unk4A = a;
    }
    if (D_801BCC21 != 5 && a < b) {
        s0 = &arg0->e[idx];
        func_801453CC(*s0, 0x100, (arg2 + 2) & 0xFF, 0x14, 0xE, 0x14, 0xE);
    } else if (a < b) {
        s0 = &arg0->e[idx];
        func_80145310(*s0, 0x14, 0x14);
    } else {
        s0 = &arg0->e[idx];
        func_801451C0(*s0, 0x14);
        func_801453CC(*s0, 0x100, (arg2 + 2) & 0xFF, 0x22, 0x22, 0x14, 3);
    }
    if (arg2 == 0) {
        v1 = &arg0->e[sp4E];
        (*v1)->unk22 = 1;
        (*s0)->unk22 = (*v1)->unk22;
    } else {
        r = func_802269CC();
        v1 = &arg0->e[sp4E];
        (*v1)->unk22 = r;
        (*s0)->unk22 = r;
    }
    c = (s32)(((f32)arg1->unkA / (f32)arg1->unk8) * 80.0f);
    (*s0)->unk30->unk34 = (f32)c / 32;
    a = (s32)(((f32)arg1->unk4A / (f32)arg1->unk8) * 80.0f);
    (*v1)->unk30->unk4 = a - c;
    (*v1)->unk30->unk0 = c + 0x40;
    func_801451C0(*v1, 0x15, c);
    if (arg2 == 1) {
        (*s0)->unk30->unk0 = 0x100 - c;
        (*v1)->unk30->unk0 = (*s0)->unk30->unk0 - (*v1)->unk30->unk4;
    }
}
