#include "common.h"


extern u16 D_801BBE08[];
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_801FC4C0();

void func_801FC490(s32 arg0, s32 arg1) {
    D_801BBE08[2] = 0;
    func_800058DC(arg0, func_801FC4C0);
}


extern void (*D_80217120[])(void);

typedef struct func_801FC4C0_Struct0 {
    u8 pad[0];
} func_801FC4C0_Struct0;

void func_801FC4C0(func_801FC4C0_Struct0 arg0, s32 arg1) {
    void (*temp_v0)(void);

    temp_v0 = D_80217120[*(u16 *)((u8 *)D_801BBE08 + 4)];
    if (temp_v0 != NULL) {
        temp_v0();
    }
}


struct func_801FC504_Struct {
    u8 pad0[0x21C];
    s16 unk21C;
    u8 pad1[6];
    s16 unk224;
    s16 unk226;
    u16 unk228;
};

extern u16 func_80020718(u16);
extern struct func_801FC504_Struct D_801BBBF0;

void func_801FC504(s32 arg0) {
    D_801BBBF0.unk226 = D_801BBBF0.unk226 - 1;
    if (D_801BBBF0.unk226 == 0) {
        func_80020718(D_801BBBF0.unk228);
        D_801BBBF0.unk224 = 0;
        D_801BBBF0.unk21C = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC558.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC6AC.s")


void func_801FC700(void) {
    D_801BBBF0.unk21C = 0;
    *(s32 *)&D_801BBBF0.pad1[2] = 0;
    D_801BBBF0.unk224 = 0;
    D_801BBBF0.unk226 = 0;
    D_801BBBF0.unk228 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC9C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FCA4C.s")


typedef struct func_801FCAE0_Struct2 {
    u8 pad0[0x30];
    f32 unk30;
    u8 pad1[4];
    f32 unk38;
    f32 unk3C;
    u8 pad2[4];
    f32 unk44;
} func_801FCAE0_Struct2;

typedef struct func_801FCAE0_Struct1 {
    u8 pad0[0x2C];
    func_801FCAE0_Struct2 *unk2C;
} func_801FCAE0_Struct1;

f32 func_8001EAD0(s16);
s16 func_8001EF38(f32, f32);
void func_8002096C(u16, s32, s16);
extern func_801FCAE0_Struct1 *D_801BBCD8;

void func_801FCAE0(f32 arg0, f32 arg1, f32 arg2, u16 arg3) {
    func_801FCAE0_Struct2 *temp_v1;
    s16 temp_a0;
    s16 sp18;

    temp_v1 = D_801BBCD8->unk2C;
    sp18 = func_8001EF38(temp_v1->unk3C - temp_v1->unk30, temp_v1->unk44 - temp_v1->unk38);
    temp_v1 = D_801BBCD8->unk2C;
    temp_a0 = (s16) (sp18 - func_8001EF38(arg0 - temp_v1->unk30, arg2 - temp_v1->unk38)) & 0x1FFF;
    func_8002096C(arg3, 2, (s16) (s32) (func_8001EAD0(temp_a0) * 127.0f));
}


void func_800208C4(u16);
s32 func_80020DAC(u16);

void func_801FCBA8(u16 arg0) {
    if (func_80020DAC(arg0) == 0) {
        func_800208C4(arg0);
    }
}

