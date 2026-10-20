#include "context.h"

struct func_801F2B44_Struct1 {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[4];
    s32 unkC;
};
struct func_801F2B44_Struct2 {
    u8 pad0[8];
    f32 unk8;
};
struct func_801F2B44_Struct3 {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
    u8 pad14[4];
    u32 unk18;
};
struct func_801F2B44_Struct4 {
    u8 pad0[0x30];
    void *unk30;
};
struct func_801F2B44_Struct0 {
    u8 pad0[0x24];
    struct func_801F2B44_Struct4 *unk24;
    u8 pad28[0x10];
    struct func_801F2B44_Struct3 *unk38;
};
extern s32 func_8012AAE8(void *, s32, f32, s32, f32);
extern u8 func_801F1D74[];

void func_801F2B44(struct func_801F2B44_Struct0 *arg0, void *arg1) {
    struct func_801F2B44_Struct1 *v = (struct func_801F2B44_Struct1 *)arg0->unk24->unk30;
    if (func_8012AAE8(arg0, v->unk4, (f32)(((f64)(f32)arg0->unk38->unk8 / 10.0) + 0.5), v->unkC, (f32)(arg0->unk38->unk10 & 0xFFFF)) == 0) {
        ((struct func_801F2B44_Struct2 *)arg0->unk24->unk30)->unk8 = (f32)(((f64)(f32)arg0->unk38->unk8 / 10.0) + 0.5);
        func_800058DC((s32)arg0, func_801F1D74);
    }
    if ((arg0->unk38->unk18 >> 8) & 0xFF) {
        void **p = (void **)arg1;
        ((struct func_801F2B44_Struct2 *)((struct func_801F2B44_Struct4 *)p[1])->unk30)->unk8 = ((struct func_801F2B44_Struct2 *)((struct func_801F2B44_Struct4 *)p[0])->unk30)->unk8;
    }
}
