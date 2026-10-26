#include "common.h"
#define ABSV(x) (((x) < 0) ? -(x) : (x))
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
#define S13(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
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

extern s32 func_801F4658();
extern void func_801477C4(void *, s32);
struct func_801F47EC_Struct { u8 pad[0x12]; s16 unk12; };
s32 func_801F47EC(s32 arg0) {
    s16 a;
    s16 b;
    s32 t;
    func_801F45E4_StructA1 sp34;
    func_801F45E4((func_801F45E4_StructA0 *)arg0, &sp34, ((func_801F45E4_Struct2C *)D_801BBCD0->unk2C)->unk4, ((func_801F45E4_Struct2C *)D_801BBCD0->unk2C)->unkC);
    func_801477C4(&sp34, 0xBF800000);
    t = func_801F4658(&sp34);
    b = ((struct func_801F47EC_Struct *)D_801BBCD0->unk2C)->unk12 * 1;
    a = t - b;
    a = a & 0x1FFF;
    t = ABSV(S13(a));
    if (t < 0x9C7) {
        return 1;
    }
    return 0;
}
