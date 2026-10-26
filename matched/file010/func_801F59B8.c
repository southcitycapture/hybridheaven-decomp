#include "common.h"
extern void (*D_80216D10[])(void *, s32);
extern s32 D_8012A94C(void *, s32);
extern s16 D_8021B0C0;
void func_800058DC(void *, s32);                    /* extern */
f32 func_8001EAD0(s16);
extern s32 func_8012C6B4(s32);
extern void func_80147370(void *, s32, s32, s32, s32);
struct func_801F5BAC_Node { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801F5BAC_Mid { u8 pad0[0x2C]; struct func_801F5BAC_Node *unk2C; };
struct func_801F5BAC_In { u8 pad0[0x24]; struct func_801F5BAC_Mid *unk24; };
struct func_801F5BAC_Struct { u8 pad0[0xC]; struct func_801F5BAC_In *unkC; u8 pad1[0x3C - 0x10]; u16 unk3C; };
void func_801F5BAC(struct func_801F5BAC_Struct *arg0, s32 arg1);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_801FCAE0(f32, f32, f32, s32);


extern f64 D_80218CA8;
extern s16 B_8021B0C0;

void func_801F59B8(struct func_801F5BAC_Struct *arg0, s32 arg1) {
    s32 sp3C;
    s16 pad;
    u8 sp39;
    u8 sp38;
    u8 sp37;
    f32 fa0, fa1, fv0;
    struct func_801F5BAC_Node *p;
    f64 temp_ft4;
    s32 t;

    sp3C = *(s32 *)((u8 *)arg0->unkC + 0xA8);
    sp39 = func_8012C6B4(0xA0);
    sp38 = func_8012C6B4(0xA0);
    sp37 = func_8012C6B4(0xA0);
    temp_ft4 = (f64)(func_8001EAD0(D_8021B0C0) + 1.0f) * 0.5;
    *((u8 *)arg0->unkC->unk24 + 0x22) = 1;
    func_80147370(arg0->unkC, sp39, sp38, sp37, (u32)(temp_ft4 * D_80218CA8));
    B_8021B0C0 = D_8021B0C0 + 0x44;
    D_8012A94C(arg0->unkC, 0x100);
    fv0 = arg0->unkC->unk24->unk2C->unkC;
    fa0 = arg0->unkC->unk24->unk2C->unk4;
    fa1 = arg0->unkC->unk24->unk2C->unk8;
    func_801FCA4C(fa0, fa1, fv0, 300.0f, 0x1D8);
    func_801FCAE0(fa0, fa1, fv0, 0x1D8);
    if ((t = (u16)--arg0->unk3C) == 0x2A) {
        func_801FA51C(sp3C);
        return;
    }
    if (t == 0) {
        arg0->unk3C = 0x14;
        func_800058DC(arg0, (s32)func_801F5BAC);
    }
}
