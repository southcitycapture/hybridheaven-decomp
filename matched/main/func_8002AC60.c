#include "context.h"

struct func_8002AC60_Struct {
    s32 unk0;
    void *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
    void *unk14;
    void *unk18;
};

extern struct func_8002AC60_Struct D_8004AB10;
extern s32 D_8004AB40;
extern u8 D_800CC300[];
extern u8 D_800CD4B0[];
extern u8 D_800CD4C8[];
extern u8 D_800CD4D8[];
extern void func_8002AEA0();
extern void func_8002B2B0();
extern void func_80030E10();

extern void func_80028260(void *, s32, void *, void *, void *, s32);
extern void func_8002ADD0();
extern void func_8002FB60(s32, void *, s32);
extern void func_80030610(void *, void *, s32);
extern void func_80030B60(s32, s32);
extern s32 func_80030C40(s32);
extern s32 func_80032660();
extern void func_800326D0(s32);
extern void func_80034C90(void *);

void func_8002AC60(s32 arg0, void *arg1, void *arg2, s32 arg3) {
    s32 sp2C;
    s32 sp28;
    s32 temp_v0;

    if (D_8004AB10.unk0 == 0) {
        func_80030610(arg1, arg2, arg3);
        func_80030610(D_800CD4B0, D_800CD4C8, 1);
        if (D_8004AB40 == 0) {
            func_8002ADD0();
        }
        func_8002FB60(8, D_800CD4B0, 0x22222222);
        sp28 = -1;
        temp_v0 = func_80030C40(0);
        if (temp_v0 < arg0) {
            sp28 = temp_v0;
            func_80030B60(0, arg0);
        }
        sp2C = func_80032660();
        D_8004AB10.unk0 = 1;
        D_8004AB10.unk8 = arg1;
        D_8004AB10.unk4 = D_800CC300;
        D_8004AB10.unkC = &D_800CD4B0[0];
        D_8004AB10.unk10 = D_800CD4D8;
        D_8004AB10.unk14 = func_8002B2B0;
        D_8004AB10.unk18 = func_80030E10;
        func_80028260(D_800CC300, 0, func_8002AEA0, &D_8004AB10, D_800CD4B0, arg0);
        func_80034C90(D_800CC300);
        func_800326D0(sp2C);
        if (sp28 != -1) {
            func_80030B60(0, sp28);
        }
    }
}
