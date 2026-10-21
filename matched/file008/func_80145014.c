#include "context.h"

typedef struct func_80145014_StructA { s16 b[0x4F]; } func_80145014_StructA;
typedef struct func_80145014_StructB { u8 a; u8 pad; u16 b; u8 c; } func_80145014_StructB;
typedef struct func_80145014_StructC { u8 b[7]; } func_80145014_StructC;

extern u8 D_8017DCDE[];
extern u8 D_8017DD7C[];
extern func_80145014_StructC D_8017DF2C[];
extern u8 D_80183CE0[];
extern u8 D_801BBBF0[];

void func_80145014(u8 **arg0) {
    u8 i;
    func_80145014_StructB *p;

    *(func_80145014_StructA *)D_8017DCDE = *(func_80145014_StructA *)*arg0;
    *arg0 += 0x9E;
    for (i = 0; i < 0x56; i++) {
        p = (func_80145014_StructB *)(D_80183CE0 + 0x204) + i;
        p->a = *(*arg0)++;
        p->b = *(*arg0)++;
        p->c = *(*arg0)++;
    }
    for (i = 0; i < 0x2D; i++) {
        (D_801BBBF0 + 0xB20)[i] = *(*arg0)++;
    }
    for (i = 0; i < 3; i++) {
        D_8017DF2C[i] = *(func_80145014_StructC *)*arg0;
        *arg0 += 7;
    }
    for (i = 0; i < 6; i++) {
        (D_8017DD7C + 8)[i] = *(*arg0)++;
    }
}
