#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802408F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802409AC.s")


struct func_80240B84_Struct {
    u8 pad[0x90];
    s16 unk90;
};

extern s32 func_8012A564(void *, s32);
extern void func_801FBB30(void);
extern void func_801268F4(s32);
extern void func_801339D0(s32);
extern void func_80240BE8(void);

void func_80240B84(struct func_80240B84_Struct *arg0, s32 arg1) {
    if (func_8012A564(arg0, 0x41700000) != 0) {
        func_801FBB30();
        arg0->unk90 = 0x46;
        func_801268F4(0);
        func_801339D0(4);
        func_800058DC(arg0, &func_80240BE8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240E7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240F00.s")


struct func_80240F0C_Self {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x8C - 0x30];
    void (*unk8C)(void);
    f32 unk90;
};

struct func_80240F0C_Node {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_80240F0C_Pair {
    struct func_80240F0C_Node *unk0;
    struct func_80240F0C_Node *unk4;
};

extern s8 D_801BBD76;
extern void func_80240F4C(void);

void func_80240F0C(struct func_80240F0C_Self *arg0, struct func_80240F0C_Pair *arg1) {
    D_801BBD76 = 1;
    arg0->unk2C = 0x8000;
    arg1->unk0->unk22 = 0;
    arg1->unk4->unk22 = 0;
    arg0->unk8C = func_80240F4C;
    arg0->unk90 = 5.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240F4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802410F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802411A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241200.s")


extern s32 func_80133A24(s32);
extern void func_802412A8(void);

struct func_80241264_Struct {
    u8 pad[0x90];
    s16 unk90;
};

void func_80241264(struct func_80241264_Struct *arg0, s32 arg1) {
    if (func_80133A24(3) != 0) {
        arg0->unk90 = 0x20;
        func_800058DC(arg0, func_802412A8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802412A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802412FC.s")


extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_802414F8(void);
extern u8 D_80249994[];

void func_80241428(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_80249994, 0x18E, arg0, 0, 2, 1.0f, 600.0f, 52.0f, 195.0f, 1.0f, 640.0f, 33.0f, 253.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_800058DC((void *) arg0, (void *) func_802414F8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802414F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802415D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_8024160C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241948.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802419B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241CC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241D7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241E64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241F88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80242064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802420C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80242164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802421DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_8024224C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802422EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80242364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802423C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802424D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802425F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80242780.s")


struct func_80242840_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x90 - 0x30];
    s16 unk90;
};

extern void func_80005700();
extern s32 func_80150584();

void func_80242840(struct func_80242840_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    if (func_80133A24(4) != 0) {
        arg0->unk2C = 0x800;
    } else {
        arg0->unk2C = 0;
    }
    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg0->unk90 = arg0->unk90 + 1;
        if (func_80150584() != 0) {
            func_80005700(arg0);
        }
    }
}

