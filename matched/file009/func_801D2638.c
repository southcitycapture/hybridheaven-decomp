#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;
typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;
void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1);


extern f64 D_801E3628;
extern f64 D_801E3630;

typedef struct func_801D2638_StructVec {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[8];
    f32 sx, sy, sz;
} func_801D2638_StructVec;
typedef struct func_801D2638_StructEntry {
    u8 pad0[0x30];
    func_801D2638_StructVec *unk30;
} func_801D2638_StructEntry;
typedef struct func_801D2638_StructNode {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[9];
    func_801D2638_StructVec *unk2C;
} func_801D2638_StructNode;
typedef struct func_801D2638_StructLink {
    u8 pad0[0x24];
    func_801D2638_StructNode *unk24;
} func_801D2638_StructLink;
typedef struct func_801D2638_StructInner {
    u8 pad0[0xC];
    func_801D2638_StructLink *unkC;
    u8 pad10[0x3C];
    u16 unk4C;
} func_801D2638_StructInner;
typedef struct func_801D2638_Struct {
    u8 pad0[0xC];
    func_801D2638_StructInner *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[0x1A];
    u16 unk92;
    u8 unk94;
} func_801D2638_Struct;

void func_801D2638(func_801D2638_Struct *arg0, func_801D2638_StructEntry **arg1) {
    f32 scale;
    f32 value;
    u16 i;
    func_801D2638_StructVec *vec;

    scale = 1.0 - (f32)(u32)arg0->unk92 / 20.0;
    for (i = 0; i < arg0->unk94 && (value = scale * D_801E3628, 1);) {
        do {
        vec = arg1[i]->unk30;
        vec->x = arg0->unk6C;
        vec->z = arg0->unk74;
        vec->sx = value;
        vec->sy = value;
        vec->sz = value;
        i++;
        } while (i < arg0->unk94);
        break;
    }
    value = scale * D_801E3630;
    vec = arg0->unkC->unkC->unk24->unk2C;
    vec->sx = vec->sz = value;
    if ((arg0->unkC->unk4C & 0x8000) || arg0->unk92++ >= 21) {
        arg0->unkC->unkC->unk24->unk22 = 0;
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
