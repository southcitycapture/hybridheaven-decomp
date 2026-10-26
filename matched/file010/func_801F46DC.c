#include "common.h"
typedef struct func_801F45E4_Struct2C {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F45E4_Struct2C;
typedef struct func_801F45E4_Struct24 {
    u8 pad0[0x2C];
    func_801F45E4_Struct2C *unk2C;
} func_801F45E4_Struct24;
typedef struct func_801F45E4_StructA0 {
    u8 pad0[0x24];
    func_801F45E4_Struct24 *unk24;
} func_801F45E4_StructA0;
typedef struct func_801F45E4_StructA1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F45E4_StructA1;
extern void (*D_80216D10[])(void *, s32);
void func_801F45E4(func_801F45E4_StructA0 *arg0, func_801F45E4_StructA1 *arg1, f32 arg2, f32 arg3);
typedef struct func_801F4658_Struct {
    f32 unk0;
    u8 pad4[4];
    f32 unk8;
} func_801F4658_Struct;


typedef struct func_801F46DC_Struct2C {
    u8 pad0[0x12];
    s16 unk12;
} func_801F46DC_Struct2C;
typedef struct func_801F46DC_Struct24 {
    u8 pad0[0x2C];
    func_801F46DC_Struct2C *unk2C;
} func_801F46DC_Struct24;
typedef struct func_801F46DC_Struct0 {
    u8 pad0[0x24];
    func_801F46DC_Struct24 *unk24;
} func_801F46DC_Struct0;
extern s32 D_801F4658(void *);

s32 func_801F46DC(s32 a0, s16 *a1, s16 *a2, f32 a3, f32 a4) {
    func_801F4658_Struct sp1C;
    s16 v;
    func_801F45E4((func_801F45E4_StructA0 *)a0, (func_801F45E4_StructA1 *)&sp1C, a3, a4);
    v = D_801F4658(&sp1C) & 0xFFFF;
    *a1 = ((func_801F46DC_Struct0 *)a0)->unk24->unk2C->unk12 & 0x1FFF;
    *a2 = (s16)(v - *a1) & 0x1FFF;
}
