#include "context.h"
extern func_8024EF6C_Vec D_80254AD0;
extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern s32 func_80133A24(s32);
extern void func_8013A1B4(void **, func_8024EF6C_Vec, s32);
void func_8024FA7C(void *arg0, void *arg1);

extern void func_801339D0(s32);
extern u8 D_80254FE0[];

void func_8024F9F0(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_800179B0(D_80254FE0);
        func_8013A1B4((void **) arg1, D_80254AD0, 0xFFFFFF);
        func_800058DC((void *) arg0, (void *) func_8024FA7C);
    }
}
