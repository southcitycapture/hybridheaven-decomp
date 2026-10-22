#include "context.h"

struct func_800065EC_Struct {
    u8 pad0[0x20];
    s16 unk20;
    u8 pad22[2];
    s32 unk24;
    u16 unk28;
    u16 unk2A;
};
struct func_800065EC_Struct1 {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    s32 unkC;
};
extern void func_80007BD0(void *, s32);
extern void func_800080D4(void *, s32);
extern void func_800085A0(void *, s32);
extern void func_80008A0C(void *, s32);
extern void func_80008E60(void *, s32);
extern void func_80009190(void *, s32);
extern void func_8000A060(void *, s32);
extern void func_8000A780(void *, s32);
extern void func_8000B960(void *, s32);
extern void func_8000BAD8(void *, s32);
extern void func_8000D100(void *, s32);
extern void func_80011900(void *, s32);
extern void func_80013730(void *, s32);

s32 func_800065EC(void *a0, void *a1) {
    struct func_800065EC_Struct *arg0 = a0;
    struct func_800065EC_Struct1 *arg1 = a1;

    arg0->unk2A = arg1->unkA;
    arg0->unk20 = arg1->unk0;
    arg0->unk24 = arg1->unk4;
    arg0->unk28 = arg1->unk8;
    switch (arg0->unk2A) {
    case 1: func_80007BD0(arg0, arg1->unkC); break;
    case 2: func_800080D4(arg0, arg1->unkC); break;
    case 3: func_800085A0(arg0, arg1->unkC); break;
    case 4: func_80008A0C(arg0, arg1->unkC); break;
    case 5: func_80008E60(arg0, arg1->unkC); break;
    case 6: func_8000B960(arg0, arg1->unkC); break;
    case 12: func_8000BAD8(arg0, arg1->unkC); break;
    case 7: func_8000D100(arg0, arg1->unkC); break;
    case 13: func_80011900(arg0, arg1->unkC); break;
    case 8: func_8000A780(arg0, arg1->unkC); break;
    case 9: func_80009190(arg0, arg1->unkC); break;
    case 10: func_8000A060(arg0, arg1->unkC); break;
    case 11: func_80013730(arg0, arg1->unkC); break;
    }
    return 0;
}
