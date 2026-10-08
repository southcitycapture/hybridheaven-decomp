#include "context.h"

typedef struct func_802439EC_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
} func_802439EC_Struct;

typedef struct func_802439EC_StackLocals {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s16 sp24;
    u8 pad2[0x12];
} func_802439EC_StackLocals;

extern s32 func_800178E8();
extern s32 func_80133A24(s32);
extern void func_801339D0(s32);
extern void func_80243A78(void);

void func_802439EC(func_802439EC_Struct *arg0, s32 arg1) {
    func_802439EC_StackLocals loc;

    if ((func_800178E8() != 0) && (func_80133A24(0x73) != 0)) {
        func_801339D0(0x73);
        loc.sp18 = 0x1010;
        loc.sp1C = 0x04100028;
        loc.sp24 = 0xA;
        loc.sp20 = 6.0f;
        func_801C2F0C(5, &loc.sp18);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80243A78);
    }
}
