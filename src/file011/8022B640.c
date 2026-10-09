#include "common.h"


s32 func_8012C6B4(s32, s32);                        /* extern */

s32 func_8022B640(u16 arg0) {
    s32 temp_a1;

    temp_a1 = arg0;
    return func_8012C6B4(temp_a1, temp_a1) & 0xFFFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022B66C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022B8C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022BA44.s")


extern void func_80232E94(void);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC20;

s32 func_8022BB28(void) {
    u8 *var_v0;
    u8 temp_v1;

    temp_v1 = D_801BCC20;
    if (temp_v1 == 0) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    temp_v1 = var_v0[0x2D8];
    if (((temp_v1 == 0xC) || (temp_v1 == 0x13)) && (var_v0[0x2FA] != 0)) {
        var_v0[0x2FA] = 0;
        if (var_v0[0x2DA] != 0) {
            var_v0[0x304] = var_v0[0x304] + 1;
            func_80232E94();
        }
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022BBB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022BD28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022BECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C0A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C1B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C7A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022CABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022CAFC.s")


f32 func_8001EAD0(s16);
extern u8 D_801BBBF0[];
extern f32 D_8023FA28;
extern f32 D_8023FA2C;

s32 func_8022D954(s32 arg0) {
    s32 var_v0;
    s16 var_a0;

    var_v0 = (s32) D_801BBBF0;
    if (arg0 == var_v0 + 0x44C) {
        var_a0 = *(u16 *) (var_v0 + 0x30) << 7;
        return (s16) (s32) (func_8001EAD0(var_a0) * D_8023FA28);
    } else {
        var_a0 = (*(u16 *) (var_v0 + 0x30) << 7) + 0x1000;
        return (s16) (s32) (func_8001EAD0(var_a0) * D_8023FA2C);
    }
}


extern f32 D_8023FA30;
extern f32 D_8023FA34;

void func_8022D9EC(u8 *arg0) {
    if (arg0 == D_801BBBF0 + 0x44C) {
        arg0[0x2D] = (s32) (func_8001EAD0(*(s16 *) (D_801BBBF0 + 0x30)) * D_8023FA30);
        return;
    }
    arg0[0x2D] = (s32) (func_8001EAD0((s16) (*(u16 *) (D_801BBBF0 + 0x30) + 0x1000)) * D_8023FA34);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022DA7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022DB40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022EE7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F0E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F424.s")


struct func_8022F558_Struct {
    u8 pad0[0x8];
    s16 unk8;
    s16 unkA;
    u8 pad1[0x2D8 - 0xC];
    u8 unk2D8;
    u8 pad2[0x2DB - 0x2D9];
    u8 unk2DB;
    u8 pad3[0x2F8 - 0x2DC];
    u8 unk2F8;
    u8 pad4[0x312 - 0x2F9];
    s16 unk312;
};

void func_8022F558(struct func_8022F558_Struct *arg0) {
    u8 *var_v0;
    s32 temp_v1;

    if (arg0 == (struct func_8022F558_Struct *) (D_801BBBF0 + 0x44C)) {
        var_v0 = D_801BC3D8;
    } else {
        var_v0 = D_801BC03C;
    }
    temp_v1 = var_v0[0x2D8];
    if ((temp_v1 >= 4 && temp_v1 < 8) || temp_v1 == 8 || arg0->unk2DB != 0) {
        arg0->unk312 = 0;
        return;
    }
    if (temp_v1 == 2 || arg0->unk2F8 == 3 || arg0->unk2F8 == 4) {
        arg0->unk312 = (s16) ((s32) ((arg0->unk8 - arg0->unkA) * 0x64) / arg0->unk8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F99C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022FC38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022FFFC.s")


void func_802300F0(u8 *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0[0x396];
    if (temp_v0 != 0) {
        temp_t6 = temp_v0 - 1;
        arg0[0x396] = temp_t6;
        if (!(temp_t6 & 0xFF)) {
            arg0[0x30] = (u8) (arg0[0x30] & 0xFFE1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8023011C.s")


extern u8 D_801842A0[];

struct func_802302D0_Inner {
    u8 pad0[0x1A];
    u8 unk1A;
};

struct func_802302D0_Struct {
    u8 pad0[0x2D4];
    struct func_802302D0_Inner *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
};

void func_802302D0(struct func_802302D0_Struct *arg0, struct func_802302D0_Struct *arg1) {
    u8 flag;

    flag = 1;
    if (arg0->unk2D4 == NULL) {
        arg0->unk2D4 = (struct func_802302D0_Inner *) D_801842A0;
    }
    if (arg1->unk2D4 == NULL) {
        arg1->unk2D4 = (struct func_802302D0_Inner *) D_801842A0;
    }
    arg1->unk2DA = flag;
    arg0->unk2DA = flag;
    arg0->unk2D9 = arg1->unk2D4->unk1A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230318.s")


void func_80230484(u8 *arg0) {
    arg0[0x2DB] = 1;
    arg0[0x2D9] = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230494.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230B58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80231B28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80231CE4.s")


void func_80231CEC(void) {
    if (D_801BBBF0[0x1030] == 0) {
        if ((s32) D_801BBBF0[0x748] < 0xFF && D_801BBBF0[0x724] != 0xB) {
            D_801BBBF0[0x748] = (u8) (D_801BBBF0[0x748] + 1);
        }
    } else if ((s32) D_801BBBF0[0xAE4] < 0xFF && D_801BBBF0[0xAC0] != 0xB) {
        D_801BBBF0[0xAE4] = (u8) (D_801BBBF0[0xAE4] + 1);
    }
    if ((s32) D_801BBBF0[0x747] < 0xFF) {
        D_801BBBF0[0x747] = (u8) (D_801BBBF0[0x747] + 1);
    }
    if ((s32) D_801BBBF0[0xAE3] < 0xFF) {
        D_801BBBF0[0xAE3] = (u8) (D_801BBBF0[0xAE3] + 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80231D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_802320DC.s")



u8 func_802320E8(u8 *arg0) {
    if (arg0 == D_801BBBF0 + 0x7E8) {
        if ((*(u8 **)(D_801BBBF0 + 0x448))[0x74] == 3) {
            return (*(u8 **)(arg0 + 0x334))[0x56];
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232128.s")


struct func_802321FC_Inner {
    u8 pad0[0xA];
    u8 unkA;
};

struct func_802321FC_Struct {
    u8 pad0[0x2D4];
    struct func_802321FC_Inner *unk2D4;
    u8 unk2D8;
    u8 pad1[0x374 - 0x2D9];
    s8 unk374;
};

void func_802321FC(struct func_802321FC_Struct *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk2D8;
    if ((temp_v0 == 2) || ((temp_v0 >= 4) && (temp_v0 < 9))) {
        temp_v0 = *(s16 *) ((u8 *) arg0 + arg0->unk2D4->unkA * 6 + 0xAA);
        if (temp_v0 < 0) {
            var_v1 = -temp_v0;
        } else {
            var_v1 = temp_v0;
        }
        arg0->unk374 = (s8) (var_v1 / 50);
        return;
    }
    if (temp_v0 == 0x13) {
        arg0->unk374 = 0;
    }
}


struct func_80232278_Struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad1[0x48 - 0x10];
    u16 unk48;
};

extern struct func_80232278_Struct D_8017DC40;

void func_80232278(void) {
    if ((s32) D_8017DC40.unk48 < 8) {
        D_8017DC40.unkE = 1;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x10) {
        D_8017DC40.unkE = 2;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x18) {
        D_8017DC40.unkE = 3;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x20) {
        D_8017DC40.unkE = 4;
        return;
    }
    D_8017DC40.unkE = 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_802322E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_802329F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232D08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232FEC.s")


typedef struct func_80233288_Struct {
    u8 pad[4];
    u8 count;
    u8 pad2;
} func_80233288_Struct;

extern s32 func_80378CF0(s32);
extern func_80233288_Struct D_80183CE0[];

void func_80233288(u8 arg0) {
    func_80233288_Struct *temp_v0;
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = arg0;
    temp_v0 = &D_80183CE0[temp_a0];
    temp_v1 = temp_v0->count;
    if (temp_v1 < 0xFF) {
        temp_v0->count = temp_v1 + 1;
        func_80378CF0(temp_a0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_802332D8.s")


s32 func_802333FC(s16 *arg0, u8 arg1) {
    if ((arg0 + (0x2B8 / 2))[arg1] < 0) {
        return 0;
    }
    return 1;
}

