#include "context.h"

typedef struct func_802450F8_StructInner {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x68];
    s16 unk78;
} func_802450F8_StructInner;

typedef struct func_802450F8_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_802450F8_StructInner *unk5C;
} func_802450F8_Struct;

extern s32 func_80126CC0(void *, void (*)());
extern void func_8001F74C();
extern s32 func_8013B570(void *, s32, s32, s32, void (*)());
extern void func_802451EC();
extern void func_802488D0();
extern u8 D_801BBC0D;
extern u32 D_8025C708;
extern s32 D_8025C7E0;
extern s32 D_8025C7E4;

void func_802450F8(func_802450F8_Struct *arg0, s32 arg1) {
    func_802450F8_StructInner *temp_v1;

    if (func_80126CC0(arg0, func_802488D0) != 0) {
        D_8025C708 = 0;
        func_8001F74C(arg0);
        arg0->unk2C |= 0x80;
        func_8013B570(arg0, 0xF8, 2, 4, func_802451EC);
        temp_v1 = arg0->unk5C;
        temp_v1->unkE |= 0x8000;
        temp_v1->unk78 = 1;
        if (D_801BBC0D == 0) {
            D_8025C7E0 = 100;
            D_8025C7E4 = 150;
        } else if (D_801BBC0D == 1U) {
            D_8025C7E0 = 200;
            D_8025C7E4 = 300;
        } else {
            D_8025C7E0 = 400;
            D_8025C7E4 = 600;
        }
    }
}
