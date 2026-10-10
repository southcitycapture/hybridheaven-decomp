#include "context.h"
extern u8 D_8008DA88[];
extern u8 D_801BBBF0[];
extern u8 D_801E4070[];
extern func_80358964_StructA *D_8038CC10;
void func_800058DC(void *arg0, void *arg1);
extern void func_80006214(void *);
extern void func_801DB6B8(void *, s32, s32);
void func_80359F08(void *arg0, s32 arg1);

typedef struct func_80359DAC_Base {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0xEC - 0xE0];
    void *unkEC;
} func_80359DAC_Base;

typedef struct func_80359DAC_Obj {
    u8 pad0[0x20];
    u16 unk20;
    u8 pad1[0x5C - 0x22];
    void *unk5C;
    u8 pad2[0x7C - 0x60];
    s32 unk7C;
    u16 unk80;
} func_80359DAC_Obj;

typedef struct func_80359DAC_Hw {
    u8 pad0[0x4C];
    u16 unk4C;
} func_80359DAC_Hw;

extern u8 D_80385590[];
extern u16 func_80011590(s32);
extern void func_8013B808(void *, void *, s32);
extern void func_80359698(void *, void *);

void func_80359DAC(void *arg0, s32 arg1) {
    void *sp20;
    void *temp_v1;
    void *var_s0;

    if (arg0 != ((func_80359DAC_Base *)D_801BBBF0)->unkDC) {
        var_s0 = ((func_80359DAC_Base *)D_801BBBF0)->unkDC;
    } else {
        var_s0 = ((func_80359DAC_Base *)D_801BBBF0)->unkEC;
    }
    temp_v1 = ((func_80359DAC_Obj *)var_s0)->unk5C;
    sp20 = temp_v1;
    func_80006214(var_s0);
    if (((func_80359DAC_Obj *)temp_v1)->unk80 == 0) {
        if (((func_80359DAC_Obj *)temp_v1)->unk20 == 0) {
            sp20 = temp_v1;
            func_8013B808(var_s0, D_8008DA88, 0);
        } else if (((func_80359DAC_Obj *)temp_v1)->unk7C == (s32)D_80385590) {
            sp20 = temp_v1;
            if (((func_80359DAC_Obj *)temp_v1)->unk20 == func_80011590(3)) {
                ((func_80359DAC_Hw *)D_8038CC10)->unk4C++;
            }
        } else {
            sp20 = temp_v1;
            if (((func_80359DAC_Obj *)temp_v1)->unk20 == func_80011590(0x27)) {
                ((func_80359DAC_Hw *)D_8038CC10)->unk4C++;
            }
        }
    }
    sp20 = temp_v1;
    func_801DB6B8(var_s0, (s32)D_8008DA88, 0);
    if (((func_80359DAC_Obj *)temp_v1)->unk7C == (s32)D_801E4070 && ((func_80359DAC_Obj *)temp_v1)->unk80 == 0) {
        func_80359698(var_s0, D_8008DA88);
        func_800058DC(arg0, func_80359F08);
    }
    func_80006214(arg0);
}
