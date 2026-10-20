#include "context.h"
typedef struct func_8024AC24_Vec {
    s32 a, b, c;
} func_8024AC24_Vec;
typedef struct func_8024AC24_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024AC24_Struct;
extern func_8024AC24_Vec D_802534B8;
extern u8 D_80253738[];
extern u8 func_8024ACB8[];

void func_8024AC24(arg0, arg1)
func_8024AC24_Struct *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            func_8013A1B4(arg1, D_802534B8, 0xFFFFFF);
            func_800179B0(D_80253738);
            func_800058DC(arg0, func_8024ACB8);
        }
    }
}
