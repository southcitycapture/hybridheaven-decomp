#define func_801F2EB0 func_801F2EB0_ctx
#include "context.h"
#undef func_801F2EB0
extern void func_801F3610();
extern void func_801F2FF0();
struct func_801F2EB0_Struct2 { u8 pad0[8]; s16 unk8; u8 padA[6]; u32 unk10; u32 unk14; };
struct func_801F2EB0_Struct1 { u8 pad0[0x24]; struct func_801F38B8_Hi *unk24; u8 pad28[0x10]; struct func_801F2EB0_Struct2 *unk38; };
struct func_801F2EB0_StructD { u8 pad0[4]; u16 unk4; u8 pad6[0x1E]; void *unk24; u8 unk28; };
#define B ((struct func_801F2EB0_StructD *)&D_801BBBF0)
void func_801F2EB0(struct func_801F2EB0_Struct1 *arg0, s32 arg1) {
    f64 t;
    B->unk28 &= ~(u8)(((u32)arg0->unk38->unk14 >> 16) >> 12);
    t = arg0->unk24->unk30->unk8;
    if (t == (f64)(f32)arg0->unk38->unk8 / 10.0 + 0.5) {
        if (B->unk4 != 0xD) {
            func_80020718(0x1FA);
        }
        func_800058DC((s32)arg0, func_801F3610);
        return;
    }
    if (t == (f64)(f32)(s16)(arg0->unk38->unk10 >> 16) + 0.5 && (void *)arg0 == B->unk24) {
        func_80020718(0x1FA);
        func_801518D4(0, 7, 6);
        func_800058DC((s32)arg0, func_801F2FF0);
    }
}
