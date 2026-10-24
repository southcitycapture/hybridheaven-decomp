#include "context.h"
#if __LINE__ == 2
void func_80000BF0_alignment(void) { D_80037358[0] = 1; }
#endif

extern void func_800266B0(void *a0, void *a1, s32 a2);
extern s32 func_80035050();
extern s32 func_80028F20();
extern void func_80026B0C(void *a0);
extern void func_80026C9C(void *a0);
extern void func_800295D0(s32 a0);

typedef struct func_80000BF0_Msg {
    u8 pad0[8];
    u32 unk8;
    s32 unkC;
    u8 pad10[0x40];
    void *unk50;
    void *unk54;
} func_80000BF0_Msg;

typedef struct func_80000BF0_Obj {
    u8 pad0[0x78];
    u8 unk78[0x70];
    u8 unkE8[0x38];
    u8 unk120[0x38];
    u8 unk158[0x734];
    s32 unk88C;
    s32 unk890;
    s32 unk894;
    u8 pad898[4];
    s32 unk89C;
    s32 unk8A0;
} func_80000BF0_Obj;

void func_80000BF0(func_80000BF0_Obj *arg0) {
    void *sp5C;
    func_80000BF0_Msg *sp58;
    s32 sp50[2];
    u8 pad[8];
    u8 *temp_s0;

    sp5C = NULL;
loop_1:
    func_800266B0((u8 *)arg0 + 0x40, &sp58, 1);
    while (func_80035050() == sp58->unkC || func_80028F20() == sp58->unkC) {
        func_80000934((void *)arg0, (void *)sp50, (s32)(temp_s0 = arg0->unk158));
        func_800266B0(temp_s0, &sp5C, 1);
        func_80000984((u8 *)arg0, sp50);
    }
    if (arg0->unk890 != 0) {
        arg0->unk894 = (s32)sp58;
        func_800266B0(arg0->unk158, &sp5C, 1);
        arg0->unk894 = 0;
    }
    arg0->unk88C = (s32)sp58;
    func_80026B0C((u8 *)sp58 + 0x10);
    func_80026C9C((u8 *)sp58 + 0x10);
    func_800266B0(arg0->unkE8, &sp5C, 1);
    arg0->unk88C = 0;
    func_800266B0(arg0->unk120, &sp5C, 1);
    if (arg0->unk8A0 != 0) {
        func_800295D0(0);
        arg0->unk8A0 = 0;
    }
    if (sp58->unk8 & 0x40) {
        func_80026300(arg0->unk78, sp58, 1);
        arg0->unk89C = arg0->unk89C - 1;
    }
    func_80026300(sp58->unk50, sp58->unk54, 1);
    goto loop_1;
}
