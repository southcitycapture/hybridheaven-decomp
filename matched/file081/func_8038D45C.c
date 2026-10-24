#define func_8038D45C func_8038D45C_decl
#include "context.h"
#undef func_8038D45C

struct func_8038D45C_StructObj {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D45C_StructState {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D45C_StructOther {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x396 - 0x34];
    u8 unk396;
};
extern void func_802294BC(void *);
extern s32 func_8022B640(s32);
extern void func_80229CE0(void *, void *, s32);

#define OBJ ((struct func_8038D45C_StructObj *)arg0)

void func_8038D45C(void *arg0, void *arg1, void *arg2) {
    struct func_8038D45C_StructState *state = arg1;
    struct func_8038D45C_StructOther *other = arg2;

    if ((*(f32 *)((u8 *)&D_801BC3D8 + 0x3A8) > 25.0f) && (other->unk396 == 0)) {
        state->unk2D8 = 0x13;
        state->unk2D9 = 6;
    } else if (((u32)(other->unk30 << 11) >> 30) != 0) {
        func_802294BC(state);
        OBJ->unk9A |= 8;
    } else if (func_8022B640(2) == 0) {
        state->unk2D8 = 0;
        func_80229CE0(arg0, state, 1);
    } else {
        state->unk2D8 = 1;
        state->unk2D9 = 0x23;
    }
    OBJ->unkA1 = state->unk2D8;
    OBJ->unkA2 = state->unk2D9;
}

extern void D_8038D45C(void *, void *, void *, void *);
#define func_8038D45C D_8038D45C
