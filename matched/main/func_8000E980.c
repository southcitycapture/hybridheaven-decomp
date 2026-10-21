#include "context.h"

typedef struct func_8000E980_Struct6 {
    s16 v[3];
} func_8000E980_Struct6;

extern u8 D_800631ED;
typedef struct func_8000E980_StructC {
    func_8000E980_Struct6 *unk0;
    u8 pad4[8];
    u8 unkC;
} func_8000E980_StructC;
extern func_8000E980_StructC D_800631E0;
extern func_8000E980_Struct6 D_80062D30[];

typedef struct func_8000E980_StructB {
    func_8000E980_Struct6 unk0;
    u8 pad[2];
    f32 f8;
    f32 fC;
    f32 f10;
} func_8000E980_StructB;

typedef struct func_8000E980_Key {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_8000E980_Key;

struct func_80010884_Key;
extern void func_8000DDB0(u32, void *, s32);
extern void func_8000E748(struct func_80010884_Key *, f32 *, s32 *, u16 *, u16 *);

void func_8000E980(func_8000E980_Key arg0, u16 arg3, func_8000E980_StructB *arg4) {
    u8 pad[8];
    s64 sp38;
    u8 sp37;
    u16 sp34;
    u16 sp32;
    f32 sp2C;
    s32 sp28;
    u32 var;

    sp38 = func_8000E58C(arg0.unk0);
    func_8000E5D4(arg0.unk0);
    sp37 = D_800631ED;
    func_8000E748((struct func_80010884_Key *)&arg0,&sp2C, &sp28, &sp34, &sp32);
    var = (u32) sp2C;
    func_8000DDB0(((u64)(u32) &D_800631E0.unk0[(((var & 0xFFFF) * D_800631E0.unkC) + arg3) * sp37] & 0xFFFFFF) + sp38, D_80062D30, sp37 * 6);
    arg4->unk0 = D_80062D30[0];
    if (sp37 == 2) {
        arg4->f8 = D_80062D30[1].v[0] * 0.00390625;
        arg4->fC = D_80062D30[1].v[1] * 0.00390625;
        arg4->f10 = D_80062D30[1].v[2] * 0.00390625;
        return;
    }
    arg4->f10 = 1.0f;
    arg4->fC = 1.0f;
    arg4->f8 = 1.0f;
}
