#include "common.h"

extern f32 D_8024AB20;
extern f64 D_8024AAD0;
extern s32 func_801268F4(s32);
extern s32 func_8012A564(void *, s32);
extern s32 func_8012CE9C();
extern s32 func_80133A24(s32);
extern s32 func_80242890();
extern u8 D_801BBFAC[];
extern u8 func_80127014[];
extern void func_800058DC();
extern void func_80010550();
extern void func_80020744(s32, void *, void *);
extern void func_8012A94C(void *, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8013E5C4(s32, s32, s32, s32, s32);
extern void func_801FBB30();
extern void func_80243510();
extern void func_802435AC();
extern void func_80243A4C();
extern void func_80244248();
extern void func_802445F8();
extern void func_80244FDC();
extern void func_80245290();
extern void func_80245BF8();
extern void func_80245FE4();
extern void func_80246510();

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80242890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80242A90.s")


void func_802433E0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802433EC.s")

struct func_80246478_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80246478_Sub {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_80246478_Mid {
    u8 pad0[0x2C];
    struct func_80246478_Sub *unk2C;
};
struct func_80246478_Obj {
    u8 pad0[0x24];
    struct func_80246478_Mid *unk24;
    u8 pad1[0x34];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
};


void func_80243488(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *temp_a1;
    s16 temp_v0;

    temp_a1 = arg0->unk5C;
    arg0->unk24->unk2C->unk8 = (f32) ((f64) arg0->unk24->unk2C->unk8 + D_8024AAD0);
    func_80010550(arg1, temp_a1);
    temp_v0 = arg0->unk94;
    arg0->unk94 = temp_v0 - 1;
    if (temp_v0 == 0) {
        temp_a1->unk78 = 1;
        func_800058DC(arg0, func_80243510);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243510.s")

struct func_80244F98_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80244F98_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_80244F98_Child *unk5C;
};


void func_80243564(struct func_80244F98_Obj *arg0, s32 arg1) {
    struct func_80244F98_Child *child;

    child = arg0->unk5C;
    func_80010550(arg1, child, arg1);
    if (func_80133A24(0x48) != 0) {
        func_800058DC(arg0, func_802435AC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802435AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802436F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243820.s")


struct func_802438E4_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_802438E4_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_802438E4_Child *unk5C;
};
struct func_802438E4_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern struct func_802438E4_Table D_802484DC;

void func_802438E4(struct func_802438E4_Obj *arg0, s32 arg1) {
    struct func_802438E4_Child *temp_s1;

    temp_s1 = arg0->unk5C;
    arg0->unk2C |= 0x80;
    if (func_80242890() == 0 && func_8012CE9C(arg1, temp_s1, D_802484DC, 0xA) == 0) {
        arg0->unk2C |= 0x80;
        func_80010550(arg1, temp_s1);
        if (func_8012A564(arg0, 0x436A0000) == 0) {
            temp_s1->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_802445F8);
            return;
        }
        if (func_8012A564(arg0, 0x42580000) != 0) {
            temp_s1->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80244248);
            return;
        }
        if (func_8012A564(arg0, 0x43220000) != 0) {
            temp_s1->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80243A4C);
            return;
        }
        func_8012A94C(arg0, 0x16);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243A4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243C48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243E38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_8024412C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802445F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_8024476C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802448C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244B3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244CE0.s")




void func_80244F98(struct func_80244F98_Obj *arg0, void *arg1) {
    struct func_80244F98_Child *child;

    child = arg0->unk5C;
    child->unk78 = 1;
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_800058DC(arg0, &func_80244FDC);
}

struct func_80246828_Triple {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct func_80244FDC_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
};
extern struct func_80246828_Triple D_802484B8;

void func_80244FDC(struct func_80244FDC_Obj *arg0, s32 arg1) {
    s32 temp_a1;
    extern void func_80010550();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_802484B8, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245144.s")


struct func_80245244_Child {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80245244_Obj {
    u8 pad0[0x5C];
    struct func_80246478_Child *unk5C;
    u8 pad1[0x34];
    s16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};


void func_80245244(struct func_80245244_Obj *arg0, s32 arg1) {
    struct func_80245244_Child *child;

    child = (struct func_80245244_Child *) arg0->unk5C;
    if (D_801BBFAC[0x78] != 2) {
        child->unk78 = 1;
        arg0->unk94 = arg0->unkA4;
        func_800058DC(arg0, func_80245290);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_8024541C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802455D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245AFC.s")


struct func_80245B2C_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_80245B2C_Mid {
    u8 pad0[0x2C];
    struct func_80245B2C_Sub *unk2C;
};
struct func_80245B2C_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80245B2C_Obj {
    u8 pad0[0x24];
    struct func_80245B2C_Mid *unk24;
    u8 pad1[0x16];
    u8 unk3E;
    u8 pad2[0x1D];
    struct func_80245B2C_Child *unk5C;
    u8 pad3[0x42];
    u16 unkA2;
};


void func_80245B2C(struct func_80245B2C_Obj *arg0, s32 arg1)
{
  struct func_80245B2C_Child *sp24;
  u16 temp_t7;
  s32 temp_v0;
  sp24 = arg0->unk5C;
  temp_v0 = arg0->unkA2;
  temp_t7 = temp_v0 - 1;
 if (0 != 0) { }
  arg0->unkA2 = temp_t7;
  if (temp_v0 == 0)
  {
    arg0->unkA2 = temp_t7;
    arg0->unkA2 = arg0->unkA2 + 1;
    func_80133980(0x4D);
    arg0->unk24->unk2C->unk4 = 204.0f;
    arg0->unk24->unk2C->unk8 = 50.0f;
    arg0->unk24->unk2C->unkC = D_8024AB20;
    arg0->unk24->unk2C->unk12 = 0xDA3;
    arg0->unk3E = 0xA;
    func_801268F4(0);
    sp24->unk78 = 1;
    func_801FBB30();
    func_800058DC(arg0, func_80245BF8);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245E80.s")


struct func_80245F30_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x34];
    u16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};

extern struct func_80246828_Triple D_802484C4;

void func_80245F30(struct func_80245F30_Obj *arg0, s32 arg1) {
    s32 temp_a1;
    extern void func_80010550();
    extern void func_80020744();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_802484C4, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        if (func_80133A24(0x4B) != 0) {
            func_801339D0(0x4B);
            func_801268F4(0);
            func_80020744(0x6B0);
            arg0->unk94 = arg0->unkA4;
            func_801FBB30();
            func_800058DC(arg0, func_80245FE4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245FE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802460F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80246280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802463CC.s")







void func_80246478(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *temp_a1;
    struct func_80246478_Sub *temp_v0;
    s16 temp_v1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1, arg0, arg1);
    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 - 0.5);
    temp_v1 = arg0->unk94;
    arg0->unk94 = (s16) (temp_v1 - 1);
    if (temp_v1 == 0) {
        temp_a1->unk78 = 1;
        func_80020744(0x668, temp_a1, arg0);
        func_800058DC(arg0, &func_80246510);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80246510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_8024664C.s")


struct func_80246828_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x34];
    u16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};

void func_80246828(struct func_80246828_Obj *arg0, s32 arg1) {
    s32 temp_a1;
    extern void func_80010550();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_802484C4, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        func_801268F4(0);
        arg0->unk94 = arg0->unkA4;
        func_801FBB30();
        func_800058DC(arg0, func_80245FE4);
    }
}


struct func_802468BC_Inner {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct func_802468BC_Struct {
    u8 pad0[0x24];
    struct func_802468BC_Inner *unk24;
};


void func_802468BC(struct func_802468BC_Struct *volatile arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = *arg1;
    temp_v0 = arg0->unk24->unk2C;
    func_8013E5C4(temp_a0, 0, temp_v0 + 4, temp_v0 + 8, temp_v0 + 0xC);
    func_800058DC(arg0, func_80127014);
}

