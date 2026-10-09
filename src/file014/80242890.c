#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80242890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80242A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802433E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802433EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802435AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802436F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80243820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802438E4.s")

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

extern void func_80244FDC();
extern void func_800058DC();

void func_80244F98(struct func_80244F98_Obj *arg0, void *arg1) {
    struct func_80244F98_Child *child;

    child = arg0->unk5C;
    child->unk78 = 1;
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_800058DC(arg0, &func_80244FDC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_8024541C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802455D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245AFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245E80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245F30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80245FE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802460F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80246280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802463CC.s")


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

extern void func_80010550(s32, void *, void *, s32);
extern void func_80020744(s32, void *, void *);
extern void func_80246510();

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

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80246828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802468BC.s")

