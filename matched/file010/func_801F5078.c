#include "common.h"

typedef struct func_801F5078_Struct {
    s32 w[5];
} func_801F5078_Struct;

extern func_801F5078_Struct D_80217000;
extern void func_801F8A44();

void *func_8012C4D0(void *a0, func_801F5078_Struct a1, s32 a2);

void func_801F5078(void *arg0, s32 arg1) {
    void *v;
    u8 *p;

    p = *(u8 **) ((u8 *) arg0 + 0x5C);
    *(s16 *) (p + 0x78) = 1;
    v = func_8012C4D0(arg0, D_80217000, 1);
    *(u16 *) ((u8 *) v + 0x72) = *(u16 *) ((u8 *) arg0 + 0x72);
    *(void **) ((u8 *) arg0 + 0xB0) = func_801F8A44;
}
