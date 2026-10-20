#include "context.h"
extern s32 D_801DAEE8;
extern s32 D_801DAEEC;
extern u8 D_801E1280;
struct func_801CFE28_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801CFE28_Struct D_801E1290;
extern s32 D_801DAEB4;
extern u8 D_801E12A0;
extern u8 D_801E12B0;
void func_801CFE90(s32 arg0);
struct func_801CFAC8_V { s32 a; s32 b; s32 c; };
struct func_801CFAC8_O { u8 pad[0x5C]; struct func_801CFAC8_V v; };
struct func_801CFAC8_P { u8 pad[0x2C]; struct func_801CFAC8_O *p2C; };
struct func_801CFAC8_S { u8 pad[0x5C]; u8 *p5C; };
struct func_801CFAC8_A { u8 pad[0x4]; struct func_801CFAC8_P *p4; };
extern s32 func_801CC540();
extern void func_8013A28C(u8 *, struct func_801CFAC8_V);
extern void func_8013A334();
extern s32 func_80011140(void *, void *, struct func_801CFAC8_V, u32);
extern s32 func_80010550();
extern u8 D_801BC025[];
extern u8 *D_801DAEE4;
extern u8 D_801CFAC8[];

void func_801CFAC8(struct func_801CFAC8_S *arg0, struct func_801CFAC8_A *arg1) {
    u8 *p;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801CFAC8);
        return;
    }
    if (D_801DAECC != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801CFAC8_V *)D_801DAECC);
        p = arg0->p5C;
        p[0x76] = 1;
        D_801DAECC = 0;
    }
    p = (u8 *)D_801DAED0;
    if (p != 0) {
        if (func_80011140(arg1, arg0->p5C, *(struct func_801CFAC8_V *)p, (u32)*(f32 *)(p + 8)) != 0) {
            D_801DAED0 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->p5C) != 0) {
            D_801DAEF0 = 1;
        } else {
            D_801DAEF0 = 0;
        }
        *(struct func_801CFAC8_V *)&D_801E1290 = arg1->p4->p2C->v;
        *(struct func_801CFAC8_V *)&D_801E1280 = *(struct func_801CFAC8_V *)(D_801BC025 + 3);
        D_801DAEB4 = (s32)arg1;
        func_8013A334(&D_801E12A0, arg1, arg0->p5C, 0xF);
        func_8013A334(&D_801E12B0, arg1, arg0->p5C, 0x12);
    }
    if (D_801DAEE8 != 0) {
        D_801DAEE4[0x22] = D_801DAEEC;
    }
    if (D_801DAEF4 != 0) {
        func_801CFE90((s32)arg0);
    }
}
