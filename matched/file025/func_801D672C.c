#include "context.h"
typedef struct func_801D672C_V { s32 a; s32 b; f32 c; } func_801D672C_V;
typedef struct func_801D672C_O { u8 pad[0x5C]; struct func_801D672C_P *unk5C; } func_801D672C_O;
typedef struct func_801D672C_P { u8 pad[0x76]; u8 unk76; } func_801D672C_P;
typedef struct func_801D672C_A { u8 pad[4]; struct func_801D672C_B *unk4; } func_801D672C_A;
typedef struct func_801D672C_B { u8 pad[0x2C]; u8 *unk2C; } func_801D672C_B;
typedef struct func_801D672C_W { s32 a; s32 b; s32 c; } func_801D672C_W;
extern s32 func_801CC540();
extern void func_8013A28C(void *, func_801D672C_W);
extern s32 func_80010550(void *, void *);
extern s32 func_80011140(void *, void *, func_801D672C_V, u32);
extern s32 func_80129554(void *, s32, s32);
extern void func_801D6B48(void *);
extern void func_80006214();
void func_801D6B18(s32 arg0);
struct func_801D69D8_Struct;
extern struct func_801D69D8_Struct D_801E1748;
extern u8 D_8008DA88[];
extern u8 D_801D672C[];
extern u8 D_801BC025[];
extern u8 D_801E1748_[];

void func_801D672C(func_801D672C_O *arg0, func_801D672C_A *arg1) {
    func_801D672C_V *v;
    func_801D672C_P *p;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, D_801D672C);
        return;
    }
    if (D_801DB968 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(func_801D672C_W *)D_801DB968);
        p = arg0->unk5C;
        p->unk76 = 1;
        D_801DB968 = 0;
    }
    v = (func_801D672C_V *)D_801DB96C;
    if (v != 0) {
        if (func_80011140(arg1, arg0->unk5C, *v, (u32)v->c) != 0) {
            D_801DB96C = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->unk5C) != 0) {
            D_801DB970 = 1;
        } else {
            D_801DB970 = 0;
        }
        *(func_801D672C_W *)&D_801E1748 = *(func_801D672C_W *)(arg1->unk4->unk2C + 0x5C);
        *(func_801D672C_W *)&D_801E1738 = *(func_801D672C_W *)(D_801BC025 + 3);
    }
    if (D_801DB974 != 0) {
        if (func_80129554(arg0, 0xFF, 0x6E) != 0) {
            D_801DB974 = 0;
        }
    }
    if (D_801DB978 != 0) {
        func_801D6B18((s32)arg0);
    }
    if (D_801DB950 != 0) {
        func_801D6B48(arg0);
    }
}
