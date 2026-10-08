#include "common.h"

extern void func_800058DC(void *, void *);
extern s8 D_801BCC21;
extern void func_8021BF74(void);

typedef struct func_8021CD9C_Struct {
    u8 pad[0xB0];
    s16 unkB0;
} func_8021CD9C_Struct;

void func_8021CD9C(func_8021CD9C_Struct *arg0, void *arg1) {
    arg0->unkB0 = arg0->unkB0 - 1;
    if (arg0->unkB0 < 0) {
        D_801BCC21 = 5;
        func_800058DC(arg0, func_8021BF74);
    }
}
