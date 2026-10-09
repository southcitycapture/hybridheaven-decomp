#include "common.h"


extern u8 D_801BBE1A[];

struct func_802237B0_Struct {
    u8 pad0[0x74];
    u8 unk74;
};

struct func_802237B0_Arg {
    u8 pad0[0x5C];
    struct func_802237B0_Struct *unk5C;
};

void func_802237B0(struct func_802237B0_Arg *arg0, u8 arg1) {
    struct func_802237B0_Struct *temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->unk5C;
    temp_v1 = temp_v0->unk74;
    if (temp_v1 == 0 || temp_v1 == 2) {
        D_801BBE1A[6] = arg1;
        return;
    }
    D_801BBE1A[7] = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802237EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_8022397C.s")


extern f32 D_8023EF68;

f32 func_80223AB8(u8 arg0) {
    s32 temp_a0;

    temp_a0 = arg0;
    if ((temp_a0 == 0) || (temp_a0 == 1)) {
        return 1.0f;
    }
    if ((temp_a0 == 4) || (temp_a0 == 5)) {
        return D_8023EF68;
    }
    if ((temp_a0 == 2) || (temp_a0 == 3)) {
        return 0.5f;
    }
    return 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802242D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802243B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_8022474C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80224AC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80224B64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80224BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80224E00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80224F5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_8022518C.s")


struct func_802253B8_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xDC - 0x2E];
    s32 unkDC;
};

extern struct func_802253B8_Struct D_801BBBF0;

s32 func_802253B8(s32 arg0) {
    if ((arg0 == D_801BBBF0.unkDC) && (D_801BBBF0.unk2C != 0xF)) {
        return 0;
    }
    if ((D_801BBBF0.unk2C == 0xA) || (D_801BBBF0.unk2C == 0xB)) {
        return 1;
    }
    return 0x80;
}


s32 func_80151870(s32);

s32 func_80225410(s32 arg0) {
    s32 temp_v0;
    s32 temp_a0;

    temp_v0 = func_802253B8(arg0);
    temp_a0 = temp_v0 & 0xFF;
    if (!(temp_v0 & 0x80)) {
        return func_80151870(temp_a0) & 0xFF;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225450.s")


s32 func_801518D4(s32, u8, u16);                    /* extern */

s32 func_802254F8(s32 arg0, u16 arg1, u8 arg2) {
    s32 temp_v0;

    temp_v0 = func_802253B8(arg0);
    if (!(temp_v0 & 0x80)) {
        return func_801518D4(temp_v0 & 0xFF, arg2, arg1) & 0xFF;
    }
    return 0;
}


extern void func_80225450(s32 a0, s32 a1);

void func_80225540(s32 a0) {
    func_80225450(a0, 0);
}


extern s32 *D_8023C8D0[];

s32 func_80225560(void *arg0, u8 arg1) {
    u8 *var_v1;

    var_v1 = *(u8 **)((u8 *)arg0 + 0x5C);
    arg1 = arg1;
    if (arg1 >= 0x26) {
        arg1 = 0;
    }
    return D_8023C8D0[var_v1[0x75]][arg1];
}



s32 func_8022559C(s32 arg0) {
    s32 *row;
    u16 var_v0;
    u8 var_a0;

    for (var_v0 = 0; var_v0 < 0xA; var_v0++) {
        row = (s32 *) D_8023C8D0[var_v0];
        for (var_a0 = 0; var_a0 < 0x26; var_a0++) {
            if (arg0 == row[var_a0]) {
                return var_a0;
            }
        }
    }
    return 0xFF;
}



s32 func_8022560C(u8 *arg0) {
    s32 *row;
    s32 var_a1;
    s32 val;

    row = (s32 *)D_8023C8D0[arg0[0x75]];
    val = *(s32 *)(arg0 + 0x1C);
    var_a1 = 0;
    do {
        if (val == row[var_a1]) {
            return var_a1;
        }
        var_a1 = (var_a1 + 1) & 0xFF;
    } while (var_a1 < 0x26);
    return 0xFF;
}


typedef struct func_80225664_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x30 - 0x14];
    s32 unk30;
} func_80225664_Struct;

typedef struct func_80225664_Local {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_80225664_Local;

extern s32 D_801BBCCC;
extern func_80225664_Struct D_801BC03C;
extern func_80225664_Struct D_801BC3D8;

void *func_80225664(void *arg0, s32 arg1, s32 arg2) {
    func_80225664_Struct *var_v0;
    func_80225664_Local sp;

    if (arg1 == D_801BBCCC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    sp.unk0 = arg2;
    sp.unk4 = 0;
    sp.unk8 = var_v0->unk10;
    sp.unk6 = 0;
    if (((u32) (var_v0->unk30 << 9) >> 0x1E) == 3) {
        sp.unk6 = 0x10;
    }
    *(func_80225664_Local *) arg0 = sp;
    return arg0;
}


void func_802256E4(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *unused;
  unused = &arg2;
 do { } while (0);
  func_80225664(arg0, arg1, func_80225560(arg1, arg2 ^ 0));
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802257F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225A68.s")


extern f64 D_8023EFF0;

typedef struct func_80225BF0_StructInner {
    u8 pad0[0x68];
    f32 unk68;
    u8 pad6C[0x74 - 0x6C];
    u8 unk74;
} func_80225BF0_StructInner;

typedef struct func_80225BF0_Struct {
    u8 pad0[0x5C];
    func_80225BF0_StructInner *unk5C;
} func_80225BF0_Struct;

s32 func_80225BF0(func_80225BF0_Struct *arg0) {
    func_80225BF0_StructInner *temp_v1;

    temp_v1 = arg0->unk5C;
    if (temp_v1->unk74 == 0) {
        return 3;
    }
    return (u32) ((f64) temp_v1->unk68 + D_8023EFF0) & 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225CB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225F58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80226010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802260C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802261CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802264D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802266CC.s")


typedef struct func_80226710_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_80226710_StructVec;

typedef struct func_80226710_StructC {
    u8 pad0[0x4];
    f32 x;
    f32 y;
    f32 z;
} func_80226710_StructC;

typedef struct func_80226710_StructB {
    u8 pad0[0x2C];
    func_80226710_StructC *unk2C;
} func_80226710_StructB;

typedef struct func_80226710_StructA {
    u8 pad0[0x24];
    func_80226710_StructB *unk24;
} func_80226710_StructA;

extern void func_801DC9C4(func_80226710_StructVec v, u16 w, f32 f);

void func_80226710(func_80226710_StructA *arg0, u16 arg1, f32 arg2) {
    func_80226710_StructC *temp_v0;
    func_80226710_StructVec sp20;

    temp_v0 = arg0->unk24->unk2C;
    sp20.x = temp_v0->x;
    sp20.y = temp_v0->y;
    sp20.z = temp_v0->z;
    func_801DC9C4(sp20, arg1, arg2);
}


typedef struct func_80226780_StructInner {
    u8 pad0[0x6C];
    u16 unk6C;
    u8 pad6E[0x70 - 0x6E];
    void *unk70;
} func_80226780_StructInner;

typedef struct func_80226780_StructTail {
    u8 pad0[0x74];
    u8 unk74;
} func_80226780_StructTail;

typedef struct func_80226780_StructOuter {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80226780_StructTail *unk5C;
} func_80226780_StructOuter;

extern u16 D_801BBC1C;
extern u8 D_8023C8F8[];
void *func_80005670(void *arg0, void *arg1);

void func_80226780(func_80226780_StructOuter *arg0) {
    func_80226780_StructInner *temp_v0;
    func_80226780_StructTail *temp_v1;

    temp_v1 = arg0->unk5C;
    if ((D_801BBC1C != 0xA) && (temp_v1->unk74 == 3) && (arg0->unk36 == 0x11B)) {
        temp_v0 = func_80005670(arg0, D_8023C8F8);
        if (temp_v0 != NULL) {
            temp_v0->unk6C = 0;
            temp_v0->unk70 = arg0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802267E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_8022693C.s")


void func_8022695C(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80226964.s")

void func_8022696C(void) {
}

