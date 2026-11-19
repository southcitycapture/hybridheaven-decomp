#include "common.h"
typedef struct func_80379244_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80379244_StructB;
typedef struct func_80379244_StructG {
    u8 pad0[0x2C];
    func_80379244_StructB *unk2C;
} func_80379244_StructG;
extern func_80379244_StructG *D_801BBCD0;
extern u8 D_801BBE22[];
extern void func_800058DC(s32, void *);
extern void func_8014B4A0(u16, f32 *);
extern u8 func_801E5010[];
typedef struct func_803784CC_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    s32 unk5C;
} func_803784CC_Struct;
void func_803784CC(func_803784CC_Struct *arg0, s32 arg1);


typedef struct func_80379244_StructA {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80379244_StructA;
extern s32 func_8014BC78(f32, f32, f32, s32);
extern s32 func_8001EF38(f32, f32);
extern void func_801ED72C(void *, s32, s32, s32);

#define WRAP(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))

void func_80379244(func_80379244_StructA *arg0, s32 arg1) {
    f64 limit;
    f32 sp44[3];
    s32 sp40;
    s32 v;
    u16 h;
    s16 a;
    s16 d;
    s16 r;
    s16 t1;
    func_80379244_StructB *p;

    sp40 = arg0->unk5C;
    p = D_801BBCD0->unk2C;
    v = func_8014BC78(p->unk4, p->unk8, p->unkC, 0x40A00000);
    h = v;
    if (v != 0) {
        *(u16 *)(D_801BBE22 + 0x12) = h;
        func_8014B4A0(h, sp44);
        p = D_801BBCD0->unk2C;
        r = ABS(p->unk8 - sp44[1]);
        limit = 3.0;
        if (r < limit) {
            t1 = (s16)(0x1800 - func_8001EF38(p->unkC - sp44[2], p->unk4 - sp44[0])) & 0x1FFF;
            p = D_801BBCD0->unk2C;
            p->unk12 = p->unk12 & 0x1FFF;
            p = D_801BBCD0->unk2C;
            a = p->unk12 - t1;
            d = ABS(WRAP(a));
            if (d < 0x401) {
                p->unk12 = t1;
                func_800058DC((s32)arg0, func_803784CC);
                return;
            }
            func_801ED72C(arg0, arg1, sp40, 0);
            func_800058DC((s32)arg0, func_801E5010);
            return;
        }
        func_801ED72C(arg0, arg1, sp40, 0);
        func_800058DC((s32)arg0, func_801E5010);
        return;
    }
    func_801ED72C(arg0, arg1, sp40, 0);
    func_800058DC((s32)arg0, func_801E5010);
}
