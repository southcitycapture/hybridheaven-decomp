#include "context.h"

typedef struct func_800346C0_StructA {
    s32 f0; void *f4; void *f8; void *fC; s32 f10; s32 f14; s32 f18;
} func_800346C0_StructA;
typedef struct func_800346C0_StructB {
    s16 f0; u8 f2; u8 pad3; s32 f4;
} func_800346C0_StructB;

extern void func_80028260();
extern void func_8002FB60();
extern void func_80030610();
extern void func_80030B60();
extern s32 func_80030C40();
extern void func_80031220();
extern void func_80032220();
extern s32 func_80032660();
extern void func_800326D0();
extern void func_80034C90();
extern func_800346C0_StructA D_8004AFF0;
extern s32 D_8004B00C;
extern u8 D_800CD770[];
extern u8 D_800CE920[];
extern u8 D_800CE938[];
extern func_800346C0_StructB D_800CE950;
extern func_800346C0_StructB D_800CE968;
extern void func_80034840();

void func_800346C0(s32 arg0) {
    s32 sp2C;
    s32 sp28;
    s32 temp_v0;

    if (D_8004AFF0.f0 == 0) {
        func_80031220();
        D_8004B00C = 0;
        func_80030610(D_800CE920, D_800CE938, 5);
        D_800CE950.f0 = 0xD;
        D_800CE950.f2 = 0;
        D_800CE950.f4 = 0;
        D_800CE968.f0 = 0xE;
        D_800CE968.f2 = 0;
        D_800CE968.f4 = 0;
        func_8002FB60(7, &D_800CE920[0], &D_800CE950, &D_800CE968);
        func_8002FB60(3, (u8 *)D_800CE920, &D_800CE968);
        sp28 = -1;
        temp_v0 = func_80030C40(0);
        if (temp_v0 < arg0) {
            sp28 = temp_v0;
            func_80030B60(0, arg0);
        }
        sp2C = func_80032660();
        D_8004AFF0.f0 = 1;
        D_8004AFF0.f4 = D_800CD770;
        D_8004AFF0.f8 = D_800CE938 - 0x18;
        D_8004AFF0.fC = D_800CE938 - 0x18;
        D_8004AFF0.f10 = 0;
        D_8004AFF0.f14 = 0;
        D_8004AFF0.f18 = 0;
        func_80028260(D_800CD770, 0, func_80034840, &D_8004AFF0, D_800CE920, arg0);
        func_80032220();
        func_80034C90(D_800CD770);
        func_800326D0(sp2C);
        if (sp28 != -1) {
            func_80030B60(0, sp28);
        }
    }
}
