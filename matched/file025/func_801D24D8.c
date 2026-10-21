#include "context.h"
extern s32 D_801DB278;
extern s32 D_801DB27C;
extern u8 D_801E1408;
struct func_801D27D8_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801D27D8_Struct D_801E1418;

void func_80006214();
extern s32 func_801CC540();
extern s32 func_80010550(void *, void *);
extern s32 func_80011140(void *, void *, struct func_801D24D8_StructB, u32);
extern void func_8013A28C(void *, struct func_801D24D8_StructA);
extern void func_801D2810(void *);
extern u8 *D_801DB274;
extern u8 D_8008DA88[];
extern u8 D_801D24D8[];
extern u8 D_801BC025[];

void func_801D24D8(struct func_801D24D8_StructT *arg0, struct func_801D24D8_StructR *arg1) {
    struct func_801D24D8_StructB *p;
    struct func_801D24D8_StructQ *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D24D8);
        return;
    }
    if (D_801DB258 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D24D8_StructA *)D_801DB258);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DB258 = 0;
    }
    p = (struct func_801D24D8_StructB *)D_801DB25C;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DB25C = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DB280 = 1;
        } else {
            D_801DB280 = 0;
        }
        *(struct func_801D24D8_StructA *)&D_801E1418 = *(struct func_801D24D8_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D24D8_StructA *)&D_801E1408 = *(struct func_801D24D8_StructA *)&D_801BC025[3];
    }
    if (D_801DB278 != 0) {
        D_801DB274[0x22] = D_801DB27C;
    }
    if (D_801DB240 != 0) {
        func_801D2810(arg0);
    }
}
