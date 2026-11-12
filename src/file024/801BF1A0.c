#include "common.h"

#define func_801BF1DC func_801BF1DC__func_801BF1A0

extern void func_800058DC(s32, void *);
extern s32 D_801CFCF4;
extern void func_801BF1DC();

void func_801BF1A0(void) {
    func_800058DC(D_801CFCF4, func_801BF1DC);
}
#undef func_801BF1DC



void func_801BF1CC(s32 arg0, s32 arg1) {
    D_801CFCF4 = arg0;
}

#define func_801BF248 func_801BF248__func_801BF1DC
extern u16 *D_801CFCF0;
void func_801BF248(s32 arg0, s32 arg1);
extern u8 D_80044090[];
extern s32 func_80005670(s32, void *);

extern void func_80002364(s32, s32, s32, s32);

void func_801BF1DC(void *arg0, s32 arg1) {
    func_80005670(arg0, D_80044090);
    D_801CFCF0 = (u16 *)((u8 *)arg0 + 0x90);
    *D_801CFCF0 = 0;
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC((s32)arg0, (void *)func_801BF248);
}
#undef func_801BF248

#define func_800058DC func_800058DC__func_801BF248
#define func_801BF288 func_801BF288__func_801BF248

extern void func_800058DC();
extern void func_80152238();
extern void func_801BF288();

void func_801BF248(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801BF288);
    *D_801CFCF0 += 1;
    func_80152238();
}
#undef func_800058DC
#undef func_801BF288

#define func_801BF2DC func_801BF2DC__func_801BF288

extern void func_801170DC(s32);
extern void func_801C12B0(void);
extern void func_801BF2DC();

typedef struct func_801BF288_Struct {
    u8 pad[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801BF288_Struct;

extern func_801BF288_Struct D_800892B0;

void func_801BF288(s32 arg0, s32 arg1) {
    func_801170DC(0x80);
    D_800892B0.unk92 = 0;
    D_800892B0.unk94 = 0;
    D_800892B0.unk96 = 0;
    D_800892B0.unk98 = 0;
    func_801C12B0();
    func_800058DC(arg0, func_801BF2DC);
}
#undef func_801BF2DC


extern u8 D_8008D5AC[];
extern u8 D_801CE700[];
extern u8 D_801CE70C[];
extern u8 D_801CE728[];
extern u8 D_801CE744[];
extern u8 D_801CE760[];
extern u8 D_801CE77C[];
extern u8 D_801CE798[];
extern u8 D_801CE7B4[];
extern u8 D_801CE7D4[];
extern u8 D_801CE7E4[];
extern u8 D_801CE7F4[];
extern u8 D_801CE800[];
extern u8 D_801CE80C[];
extern u8 D_801CE818[];
extern u8 D_801CE824[];
extern u8 D_801CE830[];
extern u8 D_801CE83C[];
extern u8 D_801CE848[];
extern u8 D_801CE854[];
extern u8 D_801CE860[];
extern u8 D_801CE86C[];
extern u8 D_801CE878[];
extern u8 D_801CE884[];
extern u8 D_801CE890[];
extern u8 D_801CE89C[];
extern void func_801BF630();
extern void func_8001B204();

void func_801BF2DC(s32 arg0, s32 arg1) {
    D_801CFCF0 = (u16 *)(arg0 + 0x90);
    if (D_8008D5AC[2] == 1) {
        func_8001B204(0, 0x8C, 0x50, D_801CE700);
        func_8001B204(2, 0x80, 0x60, D_801CE70C, 3, 2);
        func_8001B204(4, 0x80, 0x6C, D_801CE728, 3, 2);
        func_8001B204(6, 0x80, 0x78, D_801CE744, 3, 2);
        func_8001B204(8, 0x80, 0x84, D_801CE760, 3, 2);
        func_8001B204(0xA, 0x80, 0x90, D_801CE77C, 3, 2);
        func_8001B204(0xC, 0x80, 0x9C, D_801CE798, 3, 2);
        func_8001B204(0xD, 0x80, 0xA8, D_801CE7B4, 3, 2);
    } else {
        func_8001B204(0, 0x7D0, 0x19, D_801CE7D4, 2);
        func_8001B204(2, 0x74, 0x2C, D_801CE7E4);
        func_8001B204(3, 0x74, 0x3E, D_801CE7F4);
        func_8001B204(4, 0x74, 0x46, D_801CE800);
        func_8001B204(5, 0x74, 0x4E, D_801CE80C);
        func_8001B204(6, 0x74, 0x56, D_801CE818);
        func_8001B204(7, 0x74, 0x5E, D_801CE824);
        func_8001B204(8, 0x74, 0x66, D_801CE830);
        func_8001B204(9, 0x74, 0x6E, D_801CE83C);
        func_8001B204(0xA, 0x74, 0x76, D_801CE848);
        func_8001B204(0xB, 0x74, 0x7E, D_801CE854);
        func_8001B204(0xC, 0x74, 0x86, D_801CE860);
        func_8001B204(0xD, 0x74, 0x8E, D_801CE86C);
        func_8001B204(0xE, 0x74, 0x9E, D_801CE878);
        func_8001B204(0xF, 0x74, 0xA6, D_801CE884);
        func_8001B204(0x10, 0x74, 0xAE, D_801CE890);
        func_8001B204(0x11, 0x74, 0xBE, D_801CE89C);
    }
    D_801CFCF0[0] = 0;
    D_801CFCF0[1] = 0;
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC(arg0, func_801BF630);
}

#define D_800892B0 D_800892B0__func_801BF630
#define D_801BBBF0 D_801BBBF0__func_801BF630
#define D_801CE8A8 D_801CE8A8__func_801BF630
#define D_801CE8B0 D_801CE8B0__func_801BF630
#define D_801CE8B8 D_801CE8B8__func_801BF630
#define D_801CE8C0 D_801CE8C0__func_801BF630
#define D_801CE8C8 D_801CE8C8__func_801BF630
#define D_801CE8D0 D_801CE8D0__func_801BF630
#define D_801CE8D8 D_801CE8D8__func_801BF630
#define D_801CE8E0 D_801CE8E0__func_801BF630
#define D_801CE8E8 D_801CE8E8__func_801BF630
#define D_801CE8F0 D_801CE8F0__func_801BF630
#define D_801CE8F8 D_801CE8F8__func_801BF630
#define D_801CE900 D_801CE900__func_801BF630
#define D_801CE908 D_801CE908__func_801BF630
#define D_801CE910 D_801CE910__func_801BF630
#define D_801CE918 D_801CE918__func_801BF630
#define D_801CE920 D_801CE920__func_801BF630
#define D_801CE928 D_801CE928__func_801BF630
#define func_8012FE50 func_8012FE50__func_801BF630
#define func_80152230 func_80152230__func_801BF630
#define func_801BF288_Struct func_801BF288_Struct__func_801BF630
typedef struct func_801BF288_Struct {
    u8 pad[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801BF288_Struct;
extern func_801BF288_Struct D_800892B0;


typedef struct func_801BF630_StructInput {
    u8 pad[0x1C8];
    u16 buttons;
    u8 pad2[6];
    u16 repeat;
    u8 pad3[0x42FE - 0x1D2];
    u8 mode;
} func_801BF630_StructInput;
typedef struct func_801BF630_StructState {
    u8 pad[4];
    u16 selection;
    u8 pad2[0xF6 - 6];
    u8 flag;
} func_801BF630_StructState;
extern func_801BF630_StructState D_801BBBF0;
extern void func_8012FE50(s32, u16, s32, s32, s32);
extern void func_80152230(s32, s32);
extern u8 D_801CE8A8[];
extern u8 D_801CE8B0[];
extern u8 D_801CE8B8[];
extern u8 D_801CE8C0[];
extern u8 D_801CE8C8[];
extern u8 D_801CE8D0[];
extern u8 D_801CE8D8[];
extern u8 D_801CE8E0[];
extern u8 D_801CE8E8[];
extern u8 D_801CE8F0[];
extern u8 D_801CE8F8[];
extern u8 D_801CE900[];
extern u8 D_801CE908[];
extern u8 D_801CE910[];
extern u8 D_801CE918[];
extern u8 D_801CE920[];
extern u8 D_801CE928[];
typedef struct func_801BF630_Menu {
    u16 count;
    u16 selection;
} func_801BF630_Menu;
#define MENU (*(func_801BF630_Menu *)D_801CFCF0)
#define INPUT (*(func_801BF630_StructInput *)&D_800892B0)

void func_801BF630(s32 arg0, s32 arg1) {
    if ((INPUT.buttons & 0x808) || (INPUT.repeat & 0x800)) {
        if (INPUT.mode == 1) {
            if (MENU.selection == 0) MENU.selection = 6;
            else MENU.selection--;
        } else {
            if (MENU.selection == 0) MENU.selection = 16;
            else MENU.selection--;
        }
        MENU.count = 0;
    }
    if ((INPUT.buttons & 0x404) || (INPUT.repeat & 0x400)) {
        if (INPUT.mode == 1) {
            if (MENU.selection == 6) MENU.selection = 0;
            else MENU.selection++;
        } else {
            if (MENU.selection == 16) MENU.selection = 0;
            else MENU.selection++;
        }
        MENU.count = 0;
    }
    if (INPUT.mode == 1) {
        func_8001B204(1U, 100, (s16)(MENU.selection * 12 + 96), D_801CE8A8, 1);
    } else {
    switch (MENU.selection) {
    case 0: func_8001B204(1U,106,0x2C,D_801CE8B0,5,2); break;
    case 1: func_8001B204(1U,106,0x3E,D_801CE8B8,5,2); break;
    case 2: func_8001B204(1U,106,0x46,D_801CE8C0,5,2); break;
    case 3: func_8001B204(1U,106,0x4E,D_801CE8C8,5,2); break;
    case 4: func_8001B204(1U,106,0x56,D_801CE8D0,5,2); break;
    case 5: func_8001B204(1U,106,0x5E,D_801CE8D8,5,2); break;
    case 6: func_8001B204(1U,106,0x66,D_801CE8E0,5,2); break;
    case 7: func_8001B204(1U,106,0x6E,D_801CE8E8,5,2); break;
    case 8: func_8001B204(1U,106,0x76,D_801CE8F0,5,2); break;
    case 9: func_8001B204(1U,106,0x7E,D_801CE8F8,5,2); break;
    case 10: func_8001B204(1U,106,0x86,D_801CE900,5,2); break;
    case 11: func_8001B204(1U,106,0x8E,D_801CE908,5,2); break;
    case 12: func_8001B204(1U,106,0x9E,D_801CE910,5,2); break;
    case 13: func_8001B204(1U,106,0xA6,D_801CE918,5,2); break;
    case 14: func_8001B204(1U,106,0xAE,D_801CE920,5,2); break;
    case 15: func_8001B204(1U,106,0xBE,D_801CE928,5,2); break;
    }
    }
    if (INPUT.buttons & 0xF000) {
        if (INPUT.mode == 1) {
            if (MENU.selection != 6) {
                if (MENU.selection == 0) func_8012FE50(7,D_801BBBF0.selection,0,0,2);
                else func_8012FE50(7,D_801BBBF0.selection,0,0,0);
            } else func_8012FE50(20,190,0,0,0);
        } else if (MENU.selection == 0) {
            func_8012FE50(15,D_801BBBF0.selection,0,0,2);
        } else if (MENU.selection != 15) {
            func_80152230(MENU.selection,INPUT.mode);
            func_8012FE50(15,D_801BBBF0.selection,0,0,0);
        } else {
            func_8012FE50(20,190,0,0,0);
        }
    }
    if (INPUT.mode == 1) {
        switch (MENU.selection) {
        case 0: D_801BBBF0.selection = 0; break;
        case 1: D_801BBBF0.selection = 0x104; break;
        case 2: D_801BBBF0.selection = 0x8C; break;
        case 3: D_801BBBF0.selection = 0x6E; break;
        case 4: D_801BBBF0.selection = 0x82; break;
        case 5: D_801BBBF0.selection = 0x78; break;
        case 6: D_801BBBF0.selection = 0xC2; break;
        }
    } else {
        switch (MENU.selection) {
        case 0: D_801BBBF0.selection = 0x104; D_801BBBF0.flag = 0; break;
        case 1: D_801BBBF0.selection = 0; D_801BBBF0.flag = 0; break;
        case 2: D_801BBBF0.selection = 10; D_801BBBF0.flag = 0; break;
        case 3: D_801BBBF0.selection = 20; D_801BBBF0.flag = 0; break;
        case 4: D_801BBBF0.selection = 30; D_801BBBF0.flag = 0; break;
        case 5: D_801BBBF0.selection = 40; D_801BBBF0.flag = 0; break;
        case 6: D_801BBBF0.selection = 50; D_801BBBF0.flag = 0; break;
        case 7: D_801BBBF0.selection = 60; D_801BBBF0.flag = 0; break;
        case 8: D_801BBBF0.selection = 75; D_801BBBF0.flag = 0; break;
        case 9: D_801BBBF0.selection = 80; D_801BBBF0.flag = 0; break;
        case 10: D_801BBBF0.selection = 90; D_801BBBF0.flag = 0; break;
        case 11: D_801BBBF0.selection = 100; D_801BBBF0.flag = 0; break;
        case 12: D_801BBBF0.selection = 140; D_801BBBF0.flag = 0; break;
        case 13: D_801BBBF0.selection = 150; D_801BBBF0.flag = 0; break;
        case 14: D_801BBBF0.selection = 154; D_801BBBF0.flag = 0; break;
        case 15: D_801BBBF0.selection = 190; D_801BBBF0.flag = 0; break;
        }
    }
    MENU.count += 1;
}
#undef MENU
#undef INPUT
#undef D_800892B0
#undef D_801BBBF0
#undef D_801CE8A8
#undef D_801CE8B0
#undef D_801CE8B8
#undef D_801CE8C0
#undef D_801CE8C8
#undef D_801CE8D0
#undef D_801CE8D8
#undef D_801CE8E0
#undef D_801CE8E8
#undef D_801CE8F0
#undef D_801CE8F8
#undef D_801CE900
#undef D_801CE908
#undef D_801CE910
#undef D_801CE918
#undef D_801CE920
#undef D_801CE928
#undef func_8012FE50
#undef func_80152230
#undef func_801BF288_Struct

/* hh-block asm/nonmatchings/file024/801BF1A0/_mrg_keep_tail_ad469bd57a77a0fd.s {"functions":["func_801BFFBC"],"rodata":[],"rodata_bytes":[2149378692,7017636,92]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/_mrg_keep_tail_ad469bd57a77a0fd.s")


typedef struct func_801C01AC_S2 {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad2[0x32];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C01AC_S2;
typedef struct func_801C01AC_S1 {
    u8 pad[0x2C];
    func_801C01AC_S2 *unk2C;
} func_801C01AC_S1;
typedef struct func_801C01AC_S0 {
    u8 pad[0x24];
    func_801C01AC_S1 *unk24;
} func_801C01AC_S0;

extern f32 func_8001518C(f32);
extern f32 func_80029280(f32);
extern f64 D_801CEA90;
extern f64 D_801CEA98;
extern f64 D_801CEAA0;
extern f64 D_801CEAA8;
extern f64 D_801CEAB0;
extern f64 D_801CEAB8;

void func_801C01AC(func_801C01AC_S0 *arg0, func_801C01AC_S1 **arg1) {
    (*arg1)->unk2C->unk4A = (u32)((func_80029280(func_8001518C((f32)((f64)arg0->unk24->unk2C->unk12 * D_801CEA90 * D_801CEA98))) * 40.0f) + 180.0f);
    (*arg1)->unk2C->unk49 = (u32)((func_80029280(func_8001518C((f32)((f64)arg0->unk24->unk2C->unk10 * D_801CEAA0 * D_801CEAA8 + 120.0))) * 40.0f) + 180.0f);
    (*arg1)->unk2C->unk48 = (u32)((func_80029280(func_8001518C((f32)((f64)arg0->unk24->unk2C->unk14 * D_801CEAB0 * D_801CEAB8 + 240.0))) * 25.0f) + 50.0f);
    arg0->unk24->unk2C->unk12 += 2;
    arg0->unk24->unk2C->unk10 += 1;
    arg0->unk24->unk2C->unk14 += 4;
}

#define func_801C0608 func_801C0608__func_801C0500

extern void func_801C0608();

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_8012C784(void *, s32, s32);
extern u8 D_80164F30[];
extern u8 D_8017BA00[];
extern f32 D_801CEAC0;

typedef struct func_801C0500_Cam {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
} func_801C0500_Cam;

typedef struct func_801C0500_Props {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad2[0x8];
    void *unk30;
} func_801C0500_Props;

typedef struct func_801C0500_Holder {
    u8 pad[0x2C];
    func_801C0500_Props *unk2C;
} func_801C0500_Holder;

typedef struct func_801C0500_Owner {
    u8 pad[0x2C];
    func_801C0500_Cam *unk2C;
} func_801C0500_Owner;

typedef struct func_801C0500_Arg0 {
    u8 pad[0x24];
    func_801C0500_Owner *unk24;
} func_801C0500_Arg0;

void func_801C0500(void *arg0, void **arg1) {
    func_801C0500_Props *temp_v0;
    f32 temp_f0;

    func_80005E44(arg0, D_80164F30);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    temp_f0 = D_801CEAC0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk18 = temp_f0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk1C = temp_f0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk20 = temp_f0;
    func_8012C784(arg0, 0, 2);
    func_800058DC((s32) arg0, (void *) func_801C0608);
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk4 = 0.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk8 = 15.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unkC = -40.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk10 = 0x800;
    temp_v0 = ((func_801C0500_Holder *) *arg1)->unk2C;
    temp_v0->unk24 = temp_v0->unk24 | 0x4000;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk30 = (void *) D_8017BA00;
}
#undef func_801C0608


typedef struct func_801C0608_StructInner {
    u8 pad[0x4C];
    s8 unk4C;
} func_801C0608_StructInner;

typedef struct func_801C0608_StructOuter {
    u8 pad[0x2C];
    func_801C0608_StructInner *unk2C;
} func_801C0608_StructOuter;

typedef struct func_801C0608_StructArg0 {
    u8 pad[0x90];
    f32 unk90;
} func_801C0608_StructArg0;

extern u8 D_801CE930[];

void func_801C0608(func_801C0608_StructArg0 *arg0, func_801C0608_StructOuter **arg1) {
    func_8001B204(0, 0x80, 0x78, D_801CE930);
    arg0->unk90 = (f32) ((f64) arg0->unk90 + 0.5);
    (*arg1)->unk2C->unk4C = (s8) ((s32) arg0->unk90 % 128);
}

#define func_801C0B24 func_801C0B24__func_801C0694

typedef struct func_801C0694_Props {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
} func_801C0694_Props;
typedef struct func_801C0694_Holder {
    u8 pad[0x2C];
    func_801C0694_Props *unk2C;
} func_801C0694_Holder;
typedef struct func_801C0694_Info {
    u8 pad[0x10];
    s32 unk10;
} func_801C0694_Info;
typedef struct func_801C0694_Struct {
    u8 pad0[0x24];
    func_801C0694_Holder *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[8];
    func_801C0694_Info *unk38;
} func_801C0694_Struct;

extern u8 D_8017B1F8[];
extern u8 D_8017B0A8[];
extern f32 D_801CEAC4;
extern f32 D_801CEAC8;
#define func_801C08D4 func_801C08D4__decl316
extern u8 func_801C08D4[];
#define func_801C0A88 func_801C0A88__decl318
extern u8 func_801C0A88[];
void func_801C0B24(s32 arg0, s32 arg1);

void func_801C0694(func_801C0694_Struct *arg0, func_801C0694_Holder **arg1) {
    s32 t;
    f32 k;
    func_80005E44(arg0, D_80164F30);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    k = D_801CEAC4;
    arg0->unk2C |= 0x20;
    (*arg1)->unk2C->unk18 = k;
    (*arg1)->unk2C->unk1C = k;
    (*arg1)->unk2C->unk20 = k;
    t = arg0->unk38->unk10;
    if (t == 0) goto c0;
    if (t == 1) goto c1;
    if (t != 2) return;
    goto c2;
c0:
    (*arg1)->unk2C->unk30 = (u32)D_8017B1F8 | 0x40000000;
    (*arg1)->unk2C->unk24 |= 0x5000;
    func_800058DC((s32)arg0, func_801C08D4);
    arg0->unk24->unk2C->unk4 = 0.0f;
    arg0->unk24->unk2C->unk8 = 13.0f;
    arg0->unk24->unk2C->unkC = -37.0f;
    arg0->unk24->unk2C->unk12 = 0x800;
    return;
c1:
    func_800058DC((s32)arg0, func_801C0A88);
    arg0->unk24->unk2C->unk4 = 0.0f;
    arg0->unk24->unk2C->unk8 = -13.0f;
    arg0->unk24->unk2C->unkC = -37.0f;
    arg0->unk24->unk2C->unk12 = -0x800;
    return;
c2:
    k = D_801CEAC8;
    (*arg1)->unk2C->unk18 = k;
    (*arg1)->unk2C->unk1C = k;
    (*arg1)->unk2C->unk20 = k;
    (*arg1)->unk2C->unk30 = (u32)D_8017B0A8 | 0x40000000;
    func_800058DC((s32)arg0, func_801C0B24);
    arg0->unk24->unk2C->unk4 = 10.0f;
    arg0->unk24->unk2C->unk8 = -30.0f;
    arg0->unk24->unk2C->unkC = 470.0f;
    arg0->unk24->unk2C->unk12 = 0x1000;
}
#undef func_801C0A88
#undef func_801C08D4
#undef func_801C0B24

#define D_801CEACC D_801CEACC__func_801C08D4
#define func_8012AAE8 func_8012AAE8__func_801C08D4
#define func_801C09E4 func_801C09E4__func_801C08D4


extern f32 D_801CEACC;
extern s32 func_8012AAE8(void *, f32, f32, f32, f32);
void func_801C09E4();

typedef struct func_801C08D4_Inner {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0x4C - 0x14];
    s8 unk4C;
    s8 unk4D;
    s8 unk4E;
    s8 unk4F;
} func_801C08D4_Inner;

typedef struct func_801C08D4_Mid {
    u8 pad[0x2C];
    func_801C08D4_Inner *unk2C;
} func_801C08D4_Mid;

typedef struct func_801C08D4_Arg0 {
    u8 pad[0x24];
    func_801C08D4_Mid *unk24;
    u8 pad28[0x90 - 0x28];
    f32 unk90;
} func_801C08D4_Arg0;

void func_801C08D4(void *arg0, void **arg1) {
    func_801C08D4_Inner *inner;
    s16 v;

    inner = ((func_801C08D4_Arg0 *) arg0)->unk24->unk2C;
    v = inner->unk12;
    if ((v & 0x1FFF) != 0x1000) {
        inner->unk12 = v + 0x10;
    }
    ((func_801C08D4_Mid *) (*arg1))->unk2C->unk4C =
        (s8) ((s32) ((func_801C08D4_Arg0 *) arg0)->unk90 % 128);
    ((func_801C08D4_Mid *) (*arg1))->unk2C->unk4D = 0;
    ((func_801C08D4_Mid *) (*arg1))->unk2C->unk4E =
        (s8) ((s32) ((func_801C08D4_Arg0 *) arg0)->unk90 % 128);
    ((func_801C08D4_Mid *) (*arg1))->unk2C->unk4F = 0;
    ((func_801C08D4_Arg0 *) arg0)->unk90 =
        (f32) ((f64) ((func_801C08D4_Arg0 *) arg0)->unk90 + 0.5);
    if (func_8012AAE8(arg0, 0.0f, 3.0f, -20.0f, D_801CEACC) == 0) {
        func_800058DC((s32) arg0, (void *) func_801C09E4);
    }
}
#undef D_801CEACC
#undef func_8012AAE8
#undef func_801C09E4


void func_801C09E4(u8 *arg0, u8 **arg1) {
    u8 *temp_v0;
    s16 temp_v1;

    temp_v0 = *(u8 **)(*(u8 **)(arg0 + 0x24) + 0x2C);
    temp_v1 = *(s16 *)(temp_v0 + 0x12);
    if ((temp_v1 & 0x1FFF) != 0x1000) {
        *(s16 *)(temp_v0 + 0x12) = temp_v1 + 0x10;
    }
    *(s8 *)(*(u8 **)(*arg1 + 0x2C) + 0x4C) = (s8) ((s32) *(f32 *)(arg0 + 0x90) % 128);
    *(s8 *)(*(u8 **)(*arg1 + 0x2C) + 0x4E) = (s8) ((s32) *(f32 *)(arg0 + 0x90) % 128);
    *(f32 *)(arg0 + 0x90) = (f32) ((f64) *(f32 *)(arg0 + 0x90) + 0.5);
}

#define D_801C0AF8 D_801C0AF8__func_801C0A88
#define D_801CEAD0 D_801CEAD0__func_801C0A88
#define func_8012AAE8 func_8012AAE8__func_801C0A88

typedef struct func_801C0A88_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_801C0A88_StructInner;
typedef struct func_801C0A88_StructMid {
    u8 pad[0x2C];
    func_801C0A88_StructInner *unk2C;
} func_801C0A88_StructMid;
typedef struct func_801C0A88_StructArg0 {
    u8 pad[0x24];
    func_801C0A88_StructMid *unk24;
} func_801C0A88_StructArg0;
extern s32 func_8012AAE8(void *, f32, f32, f32, f32);
extern f32 D_801CEAD0;
extern u8 D_801C0AF8[];

void func_801C0A88(func_801C0A88_StructArg0 *arg0, s32 arg1) {
    func_801C0A88_StructInner *p = arg0->unk24->unk2C;
    if ((p->unk12 & 0x1FFF) != 0x1000) {
        p->unk12 -= 0x10;
    }
    if (func_8012AAE8(arg0, 0.0f, -3.0f, -20.0f, D_801CEAD0) == 0) {
        func_800058DC((s32)arg0, D_801C0AF8);
    }
}
#undef D_801C0AF8
#undef D_801CEAD0
#undef func_8012AAE8


typedef struct func_801C0AF8_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_801C0AF8_StructInner;

typedef struct func_801C0AF8_StructMid {
    u8 pad[0x2C];
    func_801C0AF8_StructInner *unk2C;
} func_801C0AF8_StructMid;

typedef struct func_801C0AF8_StructArg0 {
    u8 pad[0x24];
    func_801C0AF8_StructMid *unk24;
} func_801C0AF8_StructArg0;

void func_801C0AF8(func_801C0AF8_StructArg0 *arg0, s32 arg1) {
    func_801C0AF8_StructInner *temp_v0;
    s16 temp_v1;

    temp_v0 = arg0->unk24->unk2C;
    temp_v1 = temp_v0->unk12;
    if ((temp_v1 & 0x1FFF) != 0x1000) {
        temp_v0->unk12 = temp_v1 - 0x10;
    }
}


void func_801C0B24(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


/* Original readonly objects; named loads retain their original addresses. */

static const unsigned char rodata_801BF1A0[] = {
    0x6C, 0x65, 0x72, 0x2E, 0x20, 0x00, 0x00, 0x00,
};
/* hh-owned-pool func_801BF630 801CE9E8 801CEA84 */
