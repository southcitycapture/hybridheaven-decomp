#include "context.h"

#if __LINE__ == 3
#define func_801D182C_StructA func_801D24D8_StructA
#define func_801D182C_StructB func_801D24D8_StructB
#else
struct func_801D182C_StructA { s32 a, b, c; };
struct func_801D182C_StructB { s32 a, b; f32 c; };
extern s32 func_80011140();
extern void func_8013A28C();
extern void func_801D1BA0();
extern void func_80006214();
extern struct func_801D1AC0_Struct D_801E13A8;
#endif

struct func_801D182C_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D182C_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D182C_StructS { u8 pad[0x2C]; struct func_801D182C_StructP *u2C; };
struct func_801D182C_StructR { u8 pad[4]; struct func_801D182C_StructS *u4; };
struct func_801D182C_StructT { u8 pad[0x5C]; struct func_801D182C_StructQ *u5C; };

extern u8 D_801D182C[];
extern s32 func_80129554(void *, s32, s32);

void func_801D182C(struct func_801D182C_StructT *arg0, struct func_801D182C_StructR *arg1) {
    struct func_801D182C_StructB *p;
    struct func_801D182C_StructQ *q;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D182C);
        return;
    }
    if (D_801DB164 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D182C_StructA *)D_801DB164);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DB164 = 0;
    }
    p = (struct func_801D182C_StructB *)D_801DB168;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DB168 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DB16C = 1;
        } else {
            D_801DB16C = 0;
        }
        *(struct func_801D182C_StructA *)&D_801E13A8 = *(struct func_801D182C_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D182C_StructA *)&D_801E1398 = *(struct func_801D182C_StructA *)(D_801BC025 + 3);
    }
    if (D_801DB170 != 0 && func_80129554(arg0, 0xFF, 0x6E) != 0) {
        D_801DB170 = 0;
    }
    if (D_801DB174 != 0) {
        func_801D1BA0((s32)arg0);
    }
}
