#include "common.h"

typedef struct func_8024C87C_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024C87C_Struct;

extern s32 func_800178E8(void);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_800058DC(void *, void *);
extern s16 D_80089354;
extern void func_8024C8F0(void);

void func_8024C87C(func_8024C87C_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 0x14, 0, 1, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024C8F0);
    }
}
