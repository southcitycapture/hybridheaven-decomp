#include "context.h"
extern s32 D_801DB1B8;
extern s32 D_801DB1BC;
extern u8 D_801E13C8;
struct func_801D2108_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801D2108_Struct D_801E13D8;
struct func_801D24D8_StructA { s32 a, b, c; };
struct func_801D24D8_StructB { s32 a, b; f32 c; };
extern s32 func_80011140(void *, void *, struct func_801D24D8_StructB, u32);
extern void func_8013A28C(void *, struct func_801D24D8_StructA);

struct func_801D1E08_StructA { s32 a, b, c; };
struct func_801D1E08_StructB { s32 a, b; f32 c; };
struct func_801D1E08_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D1E08_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D1E08_StructR { u8 pad[4]; struct func_801D1E08_StructS *u4; };
struct func_801D1E08_StructS { u8 pad[0x2C]; struct func_801D1E08_StructP *u2C; };
struct func_801D1E08_StructT { u8 pad[0x5C]; struct func_801D1E08_StructQ *u5C; };
void func_80006214();
extern s32 func_801CC540();
extern s32 func_80010550(void *, void *);
extern void func_801D2140(void *);
extern u8 *D_801DB1B4;
extern u8 D_8008DA88[];
extern u8 D_801D1E08[];
extern u8 D_801BC025[];

void func_801D1E08(struct func_801D1E08_StructT *arg0, struct func_801D1E08_StructR *arg1) {
    struct func_801D24D8_StructB *p;
    struct func_801D1E08_StructQ *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D1E08);
        return;
    }
    if (D_801DB198 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D24D8_StructA *)D_801DB198);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DB198 = 0;
    }
    p = (struct func_801D24D8_StructB *)D_801DB19C;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DB19C = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DB1C0 = 1;
        } else {
            D_801DB1C0 = 0;
        }
        *(struct func_801D1E08_StructA *)&D_801E13D8 = *(struct func_801D1E08_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D1E08_StructA *)&D_801E13C8 = *(struct func_801D1E08_StructA *)&D_801BC025[3];
    }
    if (D_801DB1B8 != 0) {
        D_801DB1B4[0x22] = D_801DB1BC;
    }
    if (D_801DB180 != 0) {
        func_801D2140(arg0);
    }
}
