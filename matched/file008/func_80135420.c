#include "context.h"

typedef struct func_80135420_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80135420_Sub;

typedef struct func_80135420_Mid {
    u8 pad0[0x30];
    func_80135420_Sub *unk30;
} func_80135420_Mid;

typedef struct func_80135420_Inner {
    u8 pad0[0x10];
    u32 unk10;
} func_80135420_Inner;

typedef struct func_80135420_Obj {
    u8 pad0[0x24];
    func_80135420_Mid *unk24;
    u8 pad28[0x38 - 0x28];
    func_80135420_Inner *unk38;
} func_80135420_Obj;

extern u8 D_801BBBF0[];

void func_80135420(func_80135420_Obj *arg0, s32 arg1) {
    arg0->unk24->unk30->unk4 = (f32) *(s16 *) (D_801BBBF0 + ((((u32) arg0->unk38->unk10 >> 0x10) & 0xFF) * 2) + 0x11E);
    arg0->unk24->unk30->unk8 = (f32) *(s16 *) (D_801BBBF0 + ((((u32) arg0->unk38->unk10 >> 0x10) & 0xFF) * 2) + 0x130);
    arg0->unk24->unk30->unkC = (f32) *(s16 *) (D_801BBBF0 + ((((u32) arg0->unk38->unk10 >> 0x10) & 0xFF) * 2) + 0x142);
}
