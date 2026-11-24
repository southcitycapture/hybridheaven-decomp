#include "common.h"
typedef struct func_801C39E0_StructGfx {
    u32 w0;
    u32 w1;
} func_801C39E0_StructGfx;
extern func_801C39E0_StructGfx *D_801DA2AC;
extern func_801C39E0_StructGfx D_801DEF90[];
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
typedef struct func_801C2A1C_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801C2A1C_Struct3;
typedef struct func_801C2A1C_Struct2 {
    u8 pad0[0x30];
    func_801C2A1C_Struct3 *unk30;
} func_801C2A1C_Struct2;
typedef struct func_801C3940_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    u16 unk98;
    u8 pad9A[2];
    u16 unk9C;
} func_801C3940_Struct;
void func_801C3940(func_801C3940_Struct *arg0, s32 arg1);


extern u8 D_801DA2D0[];

void func_801C38BC(s32 arg0, func_801C2A1C_Struct2 **arg1) {
    s32 tagged;
    func_801C39E0_StructGfx *start, *g;
    func_80005E44((void *)arg0, D_801DA2D0);
    func_80006214((void *)arg0);
    D_801DA2AC = D_801DEF90;
    start = D_801DA2AC;
    g = D_801DA2AC++;
    start->w0 = 0xDF000000;
    g->w1 = 0;
    tagged = 0x40000000 | (s32)D_801DEF90;
    (*arg1)->unk30->unk30 = tagged;
    func_800058DC((void *)arg0, func_801C3940);
}
