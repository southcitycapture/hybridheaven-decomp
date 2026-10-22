#include "context.h"

typedef struct func_80366D28_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b31 : 1;
    u32 f1 : 2;
    u32 f2 : 4;
    u32 b24 : 1;
    u32 b16 : 8;
    u32 g : 3;
    u32 b5 : 8;
    u32 h : 2;
    u32 b0 : 3;
    u8 pad34[0x2DE - 0x34];
    u8 unk2DE;
    u8 pad2DF[0x2EC - 0x2DF];
    f32 unk2EC;
    u8 pad2F0[0x320 - 0x2F0];
    u8 unk320;
    u8 pad321[0x390 - 0x321];
    u8 unk390;
} func_80366D28_Struct;

typedef struct func_80366D28_Struct2 {
    u8 pad0[0x5C];
    void *unk5C;
} func_80366D28_Struct2;

typedef struct func_80366D28_Struct3 {
    u8 pad0[0x7C];
    void *unk7C;
    s16 unk80;
    s16 unk82;
} func_80366D28_Struct3;

extern void func_80366F88(s32 arg0, s32 arg1);
extern void func_8013B808(void *, s32, s32);
void func_80366EC0(s32 arg0, s32 arg1);
extern u8 D_80386878[];
extern u8 D_80386888[];
extern u8 D_803868A8[];

void func_80366D28(s32 arg0, s32 arg1, u8 arg2) {
    func_80366D28_Struct *a;
    func_80366D28_Struct *b;
    func_80366D28_Struct3 *p;

    if (arg0 == D_801BBCCC) {
        a = (func_80366D28_Struct *)&D_801BC03C;
    } else {
        a = (func_80366D28_Struct *)&D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        b = (func_80366D28_Struct *)&D_801BC03C;
    } else {
        b = (func_80366D28_Struct *)&D_801BC3D8;
    }
    p = ((func_80366D28_Struct2 *)arg0)->unk5C;
    func_802237B0(arg0, 1);
    a->unk320 = arg2;
    a->b24 = 1;
    a->g = 0;
    b->unk2DE = 0;
    b->unk2EC = 1.0f;
    if (a->unk2 <= 0) {
        a->f1 = 1;
    }
    func_80011198(arg1, p);
    if (a->f1 != 0) {
        func_80366F88(arg0, arg1);
    } else {
        if (a->h != 0 && a->unk390 == 2) {
            p->unk7C = D_803868A8;
        } else if (arg2 < 2) {
            p->unk7C = D_80386878;
        } else {
            p->unk7C = D_80386888;
        }
        p->unk82 = 5;
        p->unk80 = 3;
        func_8013B808((void *)arg0, arg1, 2);
        func_800058DC(arg0, (void *)func_80366EC0);
    }
}
