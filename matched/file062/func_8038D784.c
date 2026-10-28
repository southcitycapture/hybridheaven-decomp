#include "common.h"
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_8038D784[];
extern void func_800058DC(void *, void *);
s32 func_8038D5C4(u8 *arg0, u8 *arg1, u8 *arg2);


struct func_8038D784_StructA {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x81];
    u8 unk91, unk92, unk93;
    u8 pad2[6];
    s16 unk9A;
    u8 pad3[0xC];
    u8 unkA8;
    u8 pad4[3];
    void *unkAC, *unkB0;
};
struct func_8038D784_StructB {
    s16 unk0, unk2;
    u8 pad0[0x2C];
    u32 c29 : 3;
    u32 c25 : 4;
    u32 c21 : 4;
    u32 c19 : 2;
    u32 c16 : 3;
    u32 c0 : 16;
    u8 pad1[4];
    u32 b31 : 1;
    u32 b30 : 2;
    u32 b28 : 1;
    u32 b0 : 28;
};
extern u8 D_801BBBF0[];
extern f64 D_8038DB88;
extern void func_8022B3E0();
extern s32 func_8022AB58(void *, void *, void *);

void func_8038D784(struct func_8038D784_StructA *arg0, s32 arg1) {
    struct func_8038D784_StructB *var_a3;
    struct func_8038D784_StructB *var_a2;
    s32 temp_v1;
    s32 temp_v0;
    s16 flags;

    temp_v1 = arg0->unkC;
    temp_v0 = *(s32 *)(D_801BBBF0 + 0xDC);
    if (temp_v0 == temp_v1) var_a3 = (void *)D_801BC03C;
    else var_a3 = (void *)D_801BC3D8;
    if (temp_v0 == temp_v1) var_a2 = (void *)D_801BC3D8;
    else var_a2 = (void *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)var_a3 + 0x30) & 7) || D_801BBBF0[0x1031] == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0[0x1031] == 7) {
        arg0->unkAC = D_8038D784;
        arg0->unkB0 = D_8038D784;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a3, var_a2)) {
        arg0->unk91 = 0;
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        return;
    }
    if (var_a2->c19 != 0 || var_a2->c25 == 2) {
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        return;
    }
    if (var_a2->c19 == 0 && var_a2->c25 != 2) {
        temp_v0 = arg0->unk9A;
        if (temp_v0 & 8) {
            arg0->unk9A = temp_v0 ^ 8;
            func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
            return;
        }
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) > 25.0f) {
        flags = arg0->unk9A;
        if (flags == 0 && (f64)var_a2->unk0 * D_8038DB88 < (f64)var_a2->unk2) {
            arg0->unk9A = flags | 0x100;
            func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
            return;
        }
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) <= 25.0f) {
        flags = arg0->unk9A;
        if (flags & 0x100) {
            arg0->unk9A = flags ^ 0x100;
            func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
            return;
        }
    }
    if (var_a3->b31 && !var_a3->b28 && !(arg0->unk9A & 2)) {
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        return;
    }
    if (var_a3->b31 && var_a3->b28 && !(arg0->unk9A & 4)) {
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        return;
    }
    if (!var_a3->b31) {
        flags = arg0->unk9A;
        if (flags & 6) {
            arg0->unk92 = arg0->unk93;
            arg0->unk9A = flags & 0xF9;
            func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        }
    }
}
