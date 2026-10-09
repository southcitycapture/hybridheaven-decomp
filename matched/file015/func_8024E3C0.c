#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
extern void func_8024EF28(void);

typedef struct func_8024E3C0_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_8024E3C0_Struct;

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8024E43C(void);
extern void *D_8025A2F0;

void func_8024E3C0(func_8024E3C0_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        D_8025A2F0 = arg0;
        if (func_80133A24(0x7A) != 0) {
            func_800058DC(arg0, func_8024EF28);
            return;
        }
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024E43C);
    }
}
