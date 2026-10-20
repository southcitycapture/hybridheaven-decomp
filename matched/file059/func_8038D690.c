#include "context.h"
struct func_8038D690_Struct2 {
    u8 pad0[0x30];
    u32 pad30 : 11;
    u32 f30 : 2;
    u32 rest : 19;
    u8 pad34[0x385 - 0x34];
    u8 u385;
};
struct func_8038D690_Struct1 {
    u8 pad0[0x92];
    u8 u92;
    u8 u93;
    u8 pad94[6];
    s16 u9A;
    u8 pad9C[5];
    u8 uA1;
    u8 uA2;
};
struct func_8038D690_Struct3 {
    u8 pad0[0x2D8];
    u8 u2D8;
    u8 u2D9;
};
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D690(void *arg0, void *arg1, void *arg2) {
    struct func_8038D690_Struct1 *a0 = arg0;
    struct func_8038D690_Struct3 *a1 = arg1;
    struct func_8038D690_Struct2 *a2 = arg2;
    if (a2->f30 != 0) {
        func_802294BC(a1);
        a0->u9A = 8;
    } else if (a2->u385 < 8) {
        a1->u2D8 = 0;
        func_80229CE0(a0, a1, func_8022B640(2) & 0xFF);
    } else {
        a1->u2D8 = 0;
        func_80229CE0(a0, a1, func_8022B640(2) & 0xFF);
        a0->u93 = a0->u92 = 0;
    }
    a0->uA1 = a1->u2D8;
    a0->uA2 = a1->u2D9;
}
