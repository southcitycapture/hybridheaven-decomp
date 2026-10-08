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

extern s32 func_80242890();
extern s32 func_8012CE9C(s32, void *, struct func_802438E4_Table, s32);
extern s32 func_8012A564(void *, s32);
extern void func_8012A94C(void *, s32);
extern void func_802445F8();
extern void func_80244248();
extern void func_80243A4C();
extern struct func_802438E4_Table D_802484DC;

void func_802438E4(struct func_802438E4_Obj *arg0, s32 arg1) {
    struct func_802438E4_Child *temp_s1;
    extern void func_80010550();

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

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80246478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80246510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_8024664C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80246828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_802468BC.s")

