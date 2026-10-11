#include "context.h"

extern s32 func_80010550(s32, s32);
extern s32 func_800178E8(void);
extern void func_800179B0(void *);
extern void func_800058DC(void *, void *);
extern void func_80249FC4(void);
extern func_8024AA38_Struct D_802530A0;
extern u8 D_80253410[];

void func_80249F30(void *arg0, s32 arg1) {
    s32 field;

    field = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550(arg1, field) != 0) {
        if (func_800178E8() != 0) {
            func_800179B0(D_80253410);
            func_8013A1B4(arg1, D_802530A0, 0xFFFFFF);
            func_800058DC(arg0, func_80249FC4);
        }
    }
}
