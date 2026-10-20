#include "context.h"
extern s32 func_80224F5C(s32, s32);
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
extern void func_8022C0A0(s32 arg0);

extern void func_80360D0C();

void func_80360BDC(void *arg0, void *arg1) {
    u8 *var_a3;
    u8 *var_a2;
    s32 var_v1;

    if (arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
        var_a3 = D_801BC03C;
    } else {
        var_a3 = D_801BC3D8;
    }
    if (arg0 != *(void **)(D_801BBBF0 + 0xDC)) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    var_a3[0x392] = 0;
    if (*(u16 *)((u8 *)arg0 + 0x36) == 0x11D) {
        var_v1 = 0;
    } else {
        var_v1 = func_80224F5C((s32)arg0, (s32)arg1) & 0xFFFF;
    }
    if (!(var_a2[0x30] & 1) && (var_v1 == 0)) {
        if (arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
            D_801BBBF0[0x1030] = 0;
        } else {
            D_801BBBF0[0x1030] = 1;
        }
        var_a3[0x2DD] = 0;
        if (var_a2[0x393] != 0) {
            var_a2[0x393] = 0;
            func_8022C0A0((s32)arg0);
        }
        if (var_a3[0x391] != 0) {
            func_800058DC(arg0, func_80360D0C);
        } else {
            func_800058DC(arg0, func_8036104C);
        }
    }
    var_a3[0x392] = 0;
}
