#include "context.h"

typedef struct func_8024096C_Vals { s32 a, b, c, d, e; } func_8024096C_Vals;
typedef struct func_8024096C_Obj {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x38 - 0x24];
    u16 *unk38;
    u8 pad3[0x72 - 0x3C];
    u16 unk72;
} func_8024096C_Obj;
typedef struct func_8024096C_Sub {
    u8 pad0[0x63];
    u8 unk63;
} func_8024096C_Sub;
typedef struct func_8024096C_Ent {
    u8 pad0[0x35];
    u8 unk35;
    u8 pad1[0x90 - 0x36];
    u16 unk90;
} func_8024096C_Ent;
typedef struct func_8024096C_Glob {
    u8 pad0[0x40];
    s32 unk40;
    s32 unk44;
    u8 pad1[0xDC - 0x48];
    func_8024096C_Sub *unkDC;
    u8 pad2[0x104 - 0xE0];
    u16 unk104;
    u8 pad3[0x1088 - 0x106];
    void *unk1088;
    u8 pad4[0x10A0 - 0x108C];
    s32 unk10A0;
    u8 pad5[0x10B8 - 0x10A4];
    func_8024096C_Ent *unk10B8;
    u8 pad6[0x1100 - 0x10BC];
    func_8024096C_Ent *unk1100;
    void *unk1104;
} func_8024096C_Glob;

extern s32 func_80126CC0(void *arg0, void *arg1);
extern void func_80127014();
extern void func_8001F74C();
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80203830(s32, void *);
void func_80240AD4(u64 arg0);
extern func_8024096C_Ent *func_80005670(s32, void *);
extern void func_80126968();
extern func_8024096C_Ent *func_8012C4D0(void *, func_8024096C_Vals, s32);
extern u8 D_80248ADC[];
extern u8 D_80248AF0[];
extern u8 D_80248D98[];
extern void func_8012E5B0();
extern void func_8012E6BC();

#define G (*(func_8024096C_Glob *)&D_801BBBF0)

void func_8024096C(func_8024096C_Obj *arg0, s32 arg1) {
    func_8024096C_Ent *e;

    if (G.unkDC->unk63 != 0 && func_80126CC0(arg0, func_80127014) != 0) {
        func_80126968();
        func_8001F74C(arg0);
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38[1], 2, 4, func_80240AD4);
        func_80203830((s32)arg0, D_80248D98);
        G.unk1088 = arg0;
        G.unk10A0 = G.unk40;
        G.unk10B8 = func_8012C4D0(arg0, *(func_8024096C_Vals *)D_80248ADC, 3);
        G.unk10B8->unk90 = arg0->unk72;
        G.unk10B8->unk35 = G.unk104;
        G.unk104 = G.unk104 + 1;
        G.unk1100 = func_80005670(G.unk44, D_80248AF0);
        G.unk1104 = arg0;
        G.unk1100->unk90 = arg0->unk72;
        G.unk1100->unk35 = G.unk104;
        G.unk104 = G.unk104 + 1;
    }
}
