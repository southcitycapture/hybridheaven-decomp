#include "common.h"
#include "common.h"
typedef struct func_8035F544_Copy { s32 a; s32 b; s32 c; } func_8035F544_Copy;
typedef struct func_8035CDA8_Obj { u8 pad[0x5C]; s32 unk5C; } func_8035CDA8_Obj;
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550(s32, s32);
typedef struct func_80360EF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360EF8_Struct;
extern void func_8013A28C(s32, func_80360EF8_Struct);
extern void func_802256E4(func_80360EF8_Struct *, s32, s32);
typedef struct func_8036104C_Node {
    u8 pad0[6];
    s16 unk6;
    struct func_8036104C_Node *unk8;
} func_8036104C_Node;
typedef struct func_8036104C_Sub {
    u8 pad0[0x7C];
    func_8036104C_Node *unk7C;
    s16 unk80;
    u16 unk82;
} func_8036104C_Sub;
typedef struct func_8036104C_Arg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    func_8036104C_Sub *unk5C;
} func_8036104C_Arg;
void func_8036104C(func_8036104C_Arg *arg0, s32 arg1);


typedef struct func_80360F9C_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360F9C_StructArg;

void func_80360F9C(func_80360F9C_StructArg *arg0, s32 arg1) {
    s32 pad0;
    u8 *state;
    s32 temp_a2;
    func_80360EF8_Struct position;

    temp_a2 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        state = D_801BC03C;
    } else {
        state = D_801BC3D8;
    }
    if (func_80010550(arg1, temp_a2) != 0) {
        func_802256E4(&position, (s32)arg0, 0);
        func_8013A28C(arg1, position);
        func_800058DC(arg0, func_8036104C);
    }
    state[0x392] = 0;
}
