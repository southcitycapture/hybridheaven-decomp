#include "context.h"
typedef struct {
    u8 pad0[4];
    f32 u4;
    f32 u8;
    f32 uC;
    u16 u10;
    u16 u12;
    u16 u14;
    u8 pad16[2];
    f32 u18;
    f32 u1C;
    f32 u20;
    s32 u24;
    u8 pad28[8];
    s32 u30;
    u8 pad34[0x14];
    u8 u48;
    u8 u49;
    u8 u4A;
    u8 u4B;
} func_80207654_StructI;
typedef struct {
    u8 pad0[0x30];
    func_80207654_StructI *u30;
} func_80207654_StructO;
typedef struct {
    u8 pad0[0x94];
    f32 u94;
    f32 u98;
    f32 u9C;
    u16 uA0;
    u16 uA2;
    u16 uA4;
    u8 padA6[2];
    s32 uA8;
} func_80207654_StructA;
extern u8 D_80217B60[];
extern f32 D_8021A820;

void func_80207654(func_80207654_StructA *arg0, func_80207654_StructO **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(struct func_802070F4_Local *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD7, 1);
    k = D_8021A820;
    (*arg1)->u30->u24 |= 0x100;
    (*arg1)->u30->u30 = (s32)D_80217B60 | 0x40000000;
    (*arg1)->u30->u4 = arg0->u94;
    (*arg1)->u30->u8 = arg0->u98;
    (*arg1)->u30->uC = arg0->u9C;
    (*arg1)->u30->u10 = arg0->uA0;
    (*arg1)->u30->u12 = arg0->uA2;
    (*arg1)->u30->u14 = arg0->uA4;
    (*arg1)->u30->u18 = k;
    (*arg1)->u30->u1C = k;
    (*arg1)->u30->u20 = k;
    if (arg0->uA8 == 0) {
        (*arg1)->u30->u48 = 0;
    } else {
        (*arg1)->u30->u48 = 0xFF;
    }
    if (arg0->uA8 == 0) {
        (*arg1)->u30->u49 = 0xFF;
    } else {
        (*arg1)->u30->u49 = 0;
    }
    (*arg1)->u30->u4A = 0;
    (*arg1)->u30->u4B = 0xC0;
}
