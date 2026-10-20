#include "context.h"
typedef struct func_80015D9C_Struct {
    u8 pad0[8];
    s32 unk8;
    u8 pad0C[0x18];
    void (*unk24)(struct func_80015D9C_Struct *, s32, s32, s32);
    s32 (*unk28)(struct func_80015D9C_Struct *, s32, s32);
} func_80015D9C_Struct;
void func_80015D9C(func_80015D9C_Struct *arg0);
extern s32 D_8008DFAC;
typedef struct func_80016A9C_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0xC];
    s32 unk14;
    u8 pad18[0x10];
    s32 (*unk28)(struct func_80016A9C_Struct *, s32, s32);
} func_80016A9C_Struct;
void func_80016A9C(func_80016A9C_Struct *arg0);

typedef struct func_8001559C_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0xC];
    s32 unk14;
    u8 pad18[4];
    s32 unk1C;
} func_8001559C_Struct;

s32 func_8001559C(s32 arg0, s32 arg1, func_8001559C_Struct *arg2) {
    s32 i;
    s32 count;

    D_8008DFAC = arg1;
    arg2->unk1C = arg1;
    count = arg2->unk0 * arg2->unk4;
    for (i = 0; i < count; i++) {
        ((s16 *)D_8008DFAC)[i] = 0;
    }
    func_80015D9C((void *)arg2);
    if (arg2->unk14 != 0x80000000) {
        func_80016A9C((void *)arg2);
    }
    return arg1;
}
