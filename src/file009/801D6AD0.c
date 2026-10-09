#include "common.h"


typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x74 - 0x38];
    s32 unk74;
    u8 pad2[0x90 - 0x78];
    u8 unk90;
    u8 pad3[0x94 - 0x91];
    f32 unk94;
} func_801D6AD0_Struct;

s32 func_8012C97C(u16, u16);
s32 func_80133A24(s32);
void func_80150314(void *, s32);
extern u8 D_8018295A[];
extern u8 D_8018295C[];

void func_801D6AD0(func_801D6AD0_Struct *arg0, s32 arg1) {
    if (((func_80133A24(5) != 0) && (func_80133A24(3) == 0)) || (func_80133A24(6) != 0)) {
        arg0->unk74 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295C + arg0->unk90 * 0x14));
    } else {
        arg0->unk74 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295A + arg0->unk90 * 0x14));
    }
    if (func_80133A24(0xA) != 0) {
        arg0->unk94 = 0.0f;
        arg0->unk74 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295C + arg0->unk90 * 0x14));
        func_80150314(arg0, 2);
    }
}


struct func_801D6BC4_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x74 - 0x38];
    s32 unk74;
    u8 pad2[0x90 - 0x78];
    u8 unk90;
    u8 pad3[0x94 - 0x91];
    f32 unk94;
};


void func_801D6BC4(struct func_801D6BC4_Struct *arg0, s32 arg1) {
    if (func_80133A24(3) != 0) {
        arg0->unk74 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295C + arg0->unk90 * 0x14));
    } else {
        arg0->unk74 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295A + arg0->unk90 * 0x14));
    }
    if (func_80133A24(0xA) != 0) {
        arg0->unk94 = 0.0f;
        arg0->unk74 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295C + arg0->unk90 * 0x14));
        func_80150314(arg0, 2);
    }
}


struct func_801D6C98_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x3C];
    s32 unk74;
    u8 pad2[0x18];
    u8 unk90;
};

void func_8012D844(void *, s32, s32);

void func_801D6C98(void *arg0, s32 arg1) {
    struct func_801D6C98_Struct *s = arg0;

    if (func_80133A24(3) != 0) {
        s->unk74 = func_8012C97C(s->unk36, *(u16 *)(D_8018295A + s->unk90 * 0x14));
        func_8012D844(arg0, 0x78, 1);
        return;
    }
    s->unk74 = func_8012C97C(s->unk36, *(u16 *)(D_8018295C + s->unk90 * 0x14));
    func_8012D844(arg0, 0x78, 0);
}


void func_801D6D48(void *arg0, s32 arg1) {
    func_8012D844(arg0, 0x78, 1);
}


struct func_801D6D70_Struct {
    u8 pad0[0x91];
    u8 unk91;
};

void func_801D6D70(struct func_801D6D70_Struct *arg0, s32 arg1) {
    if (arg0->unk91 & 0x40) {
        if (func_80133A24(0x11C) != 0) {
            arg0->unk91 = arg0->unk91 & 0xFFBF;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D6DC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D6E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D6E6C.s")


struct func_801D6EC0_Inner {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_801D6EC0_Outer {
    u8 pad[0x2C];
    struct func_801D6EC0_Inner *unk2C;
};

struct func_801D6EC0_Obj {
    u8 pad[0x93];
    u8 unk93;
    f32 unk94;
};

extern struct func_801D6EC0_Outer *D_801BBCD8;
extern u8 D_801E37B0[];

extern void func_8011AAF4(void *a0, s32 a1, void *a2, s32 a3, s32 a4, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8, f32 f9, f32 f10, s32 a16, s32 a17);

s32 func_801D6EC0(struct func_801D6EC0_Obj *arg0, s32 arg1) {
    struct func_801D6EC0_Inner *temp_v0;
    f32 zero;

    zero = 0.0f;
    temp_v0 = D_801BBCD8->unk2C;
    func_8011AAF4(D_801E37B0, 0xC0, arg0, 0, 1, zero, D_801BBCD8->unk2C->unk30, temp_v0->unk34, temp_v0->unk38, zero, temp_v0->unk3C, temp_v0->unk40, temp_v0->unk44, zero, 35.0f, -1, -1);
    arg0->unk93 = 1;
    arg0->unk94 = zero;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D6F80.s")


extern void func_801FC720();

void func_801D7040(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 1) {
        func_801FC720(0x69C, 1, 0);
    }
}


extern void func_80020718(s32 arg0);

void func_801D7078(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 2) {
        func_80020718(0x1F7);
        func_801FC720(0x69D, 2, 1);
    }
}


extern void func_800208C4(s32);

void func_801D70BC(void *arg0, s32 arg1) {
    if (((u8 *)arg0)[0x92] == 1) {
        func_800208C4(0x1B);
        func_80020718(0x69C);
        return;
    }
    func_800208C4(0x1A);
}



void func_801D7108(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 1) {
        func_800208C4(0x1B);
        return;
    }
    func_800208C4(0x1A);
}


extern void func_80133980(s32 arg0);

void func_801D714C(s32 arg0, s32 arg1) {
    func_80133980(7);
}


s32 func_801505AC(s32);

void func_801D7174(s32 arg0, s32 arg1) {
    func_80150314(func_801505AC(0), 0xD);
    func_80150314(func_801505AC(1), 0xB);
    func_80150314(func_801505AC(2), 0xA);
    func_80150314(func_801505AC(3), 0xC);
}



typedef struct {
    u8 pad0[0x92];
    u8 unk92;
} func_801D71E4_Struct;

void func_801D71E4(func_801D71E4_Struct *arg0, s32 arg1) {
    if (arg0->unk92 == 1) {
        func_80020718(0x20);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D725C.s")



void func_801D7294(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 2) {
        func_801FC720(0x1F9, 3, 0);
        func_800208C4(0x23);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D72D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7398.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D73DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D74B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D74C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D750C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7558.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D758C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D75D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7614.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7658.s")


struct func_801D769C_Struct {
    u8 pad0[0x92];
    u8 unk92;
};

s32 func_8012FF58();

void func_801D769C(struct func_801D769C_Struct *arg0, s32 arg1) {
    if (arg0->unk92 == 1) {
        func_800208C4(0x27);
        func_800208C4(0x2C);
        return;
    }
    if (func_8012FF58() < 0x46) {
        func_800208C4(0x2D);
        return;
    }
    func_800208C4(0x34);
}


void func_801D770C(u8 *arg0, s32 arg1) {
    if (arg0[0x92] != 1) {
        func_800208C4(0x2E);
    }
}


void func_801D7740(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 1) {
        func_800208C4(0x30);
        return;
    }
    func_800208C4(0x27);
    func_800208C4(0x28);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D778C.s")


void func_801D77D0(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 1) {
        func_800208C4(0x27);
        func_800208C4(0x28);
        func_800208C4(0x29);
        return;
    }
    func_800208C4(0x33);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D784C.s")



struct func_801D78A0_Struct {
    u8 pad0[0x92];
    u8 unk92;
};

void func_801D78A0(struct func_801D78A0_Struct *arg0, s32 arg1) {
    func_80133980(0x79);
    if (arg0->unk92 == 1) {
        func_800208C4(0x30);
        return;
    }
    func_800208C4(0x35);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D78F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D791C.s")


struct func_801D7960_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad1[0x9C - 0x93];
    u8 unk9C;
};

extern void func_801FCBA8(s32 arg0);

void func_801D7960(struct func_801D7960_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0->unk92 == 1) {
        temp_v0 = arg0->unk9C;
        if ((temp_v0 == 0) || (temp_v0 == 7)) {
            func_801FCBA8(0x39);
        }
    } else {
        temp_v0 = arg0->unk9C;
        if ((temp_v0 == 0) || (temp_v0 == 7)) {
            func_801FCBA8(0x38);
        }
        func_80020718(0x17B);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D79DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7A64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7ADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7B64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7BA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7CEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7D7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7DB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7DE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7E28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7E6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D7F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D8250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D84F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D8948.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D8D8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D91D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D95C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D996C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801D9F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA7C8.s")



void func_801DA800(s32 arg0, s32 arg1) {
    if (func_80133A24(5) == 0) {
        func_80133980(5);
        return;
    }
    if (func_80133A24(6) == 0) {
        func_80133980(6);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA858.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA8C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA8F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA92C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA954.s")



void func_801DA988(s32 arg0, s32 arg1) {
    if (func_80133A24(0x72) == 0) {
        func_80133980(0x71);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA9C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DA9E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DAA10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DAA44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DAA78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DAAA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DAAC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DAAF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DAB18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DAB4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DAB80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/func_801DABB4.s")



void func_801DABDC(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 1) {
        func_80133980(0x287);
        func_80020718(0x649);
        func_80020718(0x6C0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D6AD0/_pad_16.s")

