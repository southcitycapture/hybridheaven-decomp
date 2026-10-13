#include "context.h"
void func_8021D36C(void *arg0, s32 arg1);

extern void func_800023EC();
extern void func_80146B04();
extern void func_801271E4(void *);
extern s16 D_80089356;
extern u32 D_8023C268[];

typedef struct func_8021D264_Struct {
    u8 pad[0xB0];
    s16 unkB0;
} func_8021D264_Struct;

typedef struct func_8021D264_Args {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
} func_8021D264_Args;

func_8021D264_Struct *func_8012C4D0(void *, func_8021D264_Args, s32);

void func_8021D264(func_8021D264_Struct *arg0, s32 arg1) {
    D_801BBBF0[0x1031] = 0xE;
    arg0->unkB0 = arg0->unkB0 - 1;
    if (arg0->unkB0 < 0) {
        if (*(u16 *)(D_801BBBF0 + 0x2C) == 5 || *(u16 *)(D_801BBBF0 + 0x2C) == 0xA ||
            *(u16 *)(D_801BBBF0 + 0x2C) == 0xB || *(u16 *)(D_801BBBF0 + 0x2C) == 0xF) {
            func_80146B04();
            D_80089356 = 0;
            func_800023EC();
            arg0->unkB0 = 0;
            func_800058DC(arg0, func_8021D36C);
            return;
        }
        func_801271E4(arg0);
        func_80005700(arg0);
        func_8012C4D0(arg0, *(func_8021D264_Args *)D_8023C268, 3)->unkB0 = 0;
    }
}
