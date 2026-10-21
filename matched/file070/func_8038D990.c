#include "context.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC3D8[];
extern u8 D_801BC03C;
extern s32 func_8022AB58();
extern void func_8022B3E0();
struct func_8038D990_Struct {
    u8 pad0[0x91];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad1[0x9A - 0x94];
    s16 unk9A;
    u8 pad2[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad3[0xB0 - 0xA9];
    void *unkB0;
};

void func_8038D990(struct func_8038D990_Struct *arg0, s32 arg1) {
    struct func_8038D7E8_StructC *a3;
    struct func_8038D7E8_StructB *a2;
    s32 v0;
    u32 v1;
    u32 f;

    a3 = (*(s32 *)(D_801BBBF0 + 0xDC) == *(s32 *)((u8 *)arg0 + 0xC)) ? (struct func_8038D7E8_StructC *)&D_801BC03C : (struct func_8038D7E8_StructC *)D_801BC3D8;
    a2 = (*(s32 *)(D_801BBBF0 + 0xDC) == *(s32 *)((u8 *)arg0 + 0xC)) ? (struct func_8038D7E8_StructB *)D_801BC3D8 : (struct func_8038D7E8_StructB *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D7E8((void *)arg0, a3, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)a3 + 0x30) & 7) || (D_801BBBF0[0x1031] == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0[0x1031] == 7) {
        arg0->unkB0 = (void *)func_8038D990;
        func_800058DC((s32)arg0, (void *)func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) > 30.0f && !(arg0->unk9A & 0x100) && !(a3->unkA6 & 0x10)) {
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) < 30.0f && (arg0->unk9A & 0x100)) {
        arg0->unk9A = 0;
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    v0 = a2->unk30;
    v1 = ((u32)v0 << 11) >> 30;
    f = ((u32)v0 << 3) >> 28;
    if (v1 != 0 || f * 1 == 2) {
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (v1 == 0 && f * 1 != 2 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    v0 = a3->unk38;
    v1 = (u32)v0 >> 31;
    if (v1 != 0 && !(((u32)v0 << 3) >> 31) && !(arg0->unk9A & 2)) {
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (v1 != 0 && (((u32)v0 << 3) >> 31) &&!(arg0->unk9A & 4)) {
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (v1 == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D7E8((void *)arg0, a3, a2);
    }
}
