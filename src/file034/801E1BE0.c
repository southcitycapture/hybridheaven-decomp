#include "common.h"

void func_8038BD50(f32, f32, f32);
void D_8038BD88(f32, f32, f32);
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);

extern f32 D_801E93C0;
extern f32 D_801E93C4;
extern f32 D_801E93C8;
extern f32 D_801E93CC;
extern void func_8038C53C(s32);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BD50(D_801E93C0, D_801E93C4, 256.1f);
        D_8038BD88(D_801E93C8, D_801E93CC, 281.9f);
        func_8038C53C(1);
        return 1;
    }
    return 0;
}


extern f32 D_801E93D0;
extern f32 D_801E93D4;
extern f32 D_801E93D8;
extern f32 D_801E93DC;


s32 func_801E1C5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        func_8038BD50(D_801E93D0, D_801E93D4, 275.0f);
        D_8038BD88(D_801E93D8, D_801E93DC, 287.3f);
        return 2;
    }
    return 1;
}


extern f32 D_801E93E0;
extern f32 D_801E93E4;
extern f32 D_801E93E8;
extern f32 D_801E93EC;

s32 func_801E1CD4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_8038BD50(D_801E93E0, D_801E93E4, 271.1f);
        D_8038BD88(D_801E93E8, D_801E93EC, 287.3f);
        return 3;
    }
    return 2;
}


extern f32 D_801E93F0;
extern f32 D_801E93F4;
extern f32 D_801E93F8;
extern f32 D_801E93FC;

s32 func_801E1D4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        func_8038BD50(D_801E93F0, D_801E93F4, 256.1f);
        D_8038BD88(D_801E93F8, D_801E93FC, 281.9f);
        return 4;
    }
    return 3;
}


s32 func_801E1DC4(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E1DD4(s32 arg0, s32 arg1) {
    return 6;
}


extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C(void);

s32 func_801E1DE4(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}


extern f32 D_801E9400;
extern f32 D_801E9404;
extern f32 D_801E9408;

s32 func_801E1E38(s32 arg0, s32 arg1) {
    func_8038BD50(-72.5f, D_801E9400, 294.3f);
    D_8038BD88(D_801E9404, D_801E9408, 318.7f);
    return 8;
}


typedef struct func_801E1E94_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E1E94_Struct;

s32 func_801E1E94(s32 arg0, s32 arg1) {
    if (((func_801E1E94_Struct *)func_801BF6B0(7))->unkC < 8 || func_801C1B1C() == 0) {
        return 8;
    }
    return 9;
}



s32 func_801E1EE8(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


s32 func_801E1F3C(s32 arg0, s32 arg1) {
    return 11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E1F4C.s")


typedef struct func_801E1FA0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E1FA0_Struct;

s32 func_801E1FA0(s32 arg0, s32 arg1) {
    func_801E1FA0_Struct *temp;

    temp = func_801BF6B0(7);
    if (temp->unkC < 0x23 || func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E1FF4.s")

extern u8 func_801DAAF0[];

extern void *func_801CF40C(void);
extern void func_8038BDC0(f32, f32, s32);
extern void D_8038BE10(f32, f32, s32);

struct func_801E20A0_StructC {
    u8 pad0[4];
    f32 unk4;
};

struct func_801E20A0_StructB {
    u8 pad0[0x2C];
    struct func_801E20A0_StructC *unk2C;
};

struct func_801E20A0_StructA {
    u8 pad0[8];
    struct func_801E20A0_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E20A0_StructB *unk24;
};

struct func_801E20A0_Struct {
    f32 unk0;
    f32 unk4;
    s32 unk8;
};

s32 func_801E20A0(s32 arg0, s32 arg1) {
    struct func_801E20A0_Struct sp1C;
    struct func_801E20A0_Struct *temp_v0;

    if (((struct func_801E20A0_StructA *) *(struct func_801E20A0_StructA **)(func_801DAAF0 + 0x24))->unk8->unk8->unk24->unk2C->unk4 < -230.0f) {
        return 0xF;
    }
    temp_v0 = func_801CF40C();
    sp1C = *temp_v0;
    func_8038BDC0(sp1C.unk0, sp1C.unk4, sp1C.unk8);
    D_8038BE10(sp1C.unk0, sp1C.unk4, sp1C.unk8);
    return 0xE;
}


typedef struct func_801E2144_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2144_Struct;

s32 func_801E2144(s32 arg0, s32 arg1) {
    if ((((func_801E2144_Struct *)func_801BF6B0(7))->unkC < 0x28) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}


s32 func_801E2198(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 0x2B) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}


extern f32 D_801E942C;
extern f32 D_801E9430;
extern f32 D_801E9434;
extern f32 D_801E9438;

s32 func_801E21EC(s32 arg0, s32 arg1) {
    func_8038BD50(D_801E942C, D_801E9430, 473.6f);
    D_8038BD88(D_801E9434, D_801E9438, 499.6f);
    return 0x12;
}



typedef struct func_801E2248_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2248_Struct;

s32 func_801E2248(s32 arg0, s32 arg1) {
    if (((func_801E2248_Struct *)func_801BF6B0(7))->unkC < 0x30 || func_801C1B1C() == 0) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801E229C(s32 arg0, s32 arg1) {
    return 20;
}


s32 func_801E22AC(s32 arg0, s32 arg1) {
    return 21;
}


extern void func_8038BED4(void);
extern f32 D_801E943C;
extern f32 D_801E9440;
extern f32 D_801E9444;
extern f32 D_801E9448;

s32 func_801E22BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x16E360) != 0) {
        func_8038BD50(D_801E943C, D_801E9440, 281.4f);
        D_8038BD88(D_801E9444, D_801E9448, 295.2f);
        func_8038BED4();
        return 0x16;
    }
    return 0x15;
}


extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E944C;
extern f32 D_801E9450;
extern f32 D_801E9454;
extern f32 D_801E9458;
extern f32 D_801E945C;
extern f32 D_801E9460;
extern f32 D_801E9464;
extern f32 D_801E9468;
extern f32 D_801E946C;

s32 func_801E233C(s32 arg0, s32 arg1) {
    f32 fa;
    f32 fb;

    fa = D_801E944C;
    fb = D_801E9450;
    if (func_8038BEF8(0.0f, 1.5f, -65.8f, fa, D_801E9454, D_801E9458, fa, D_801E945C, D_801E9460, fb, D_801E9464, D_801E9468, fb, D_801E946C) != 0) {
        return 0x17;
    }
    return 0x16;
}



s32 func_801E23F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_8038BED4();
        return 0x18;
    }
    return 0x17;
}


extern f32 D_801E9470;
extern f32 D_801E9474;
extern f32 D_801E9478;
extern f32 D_801E947C;
extern f32 D_801E9480;
extern f32 D_801E9484;
extern f32 D_801E9488;
extern f32 D_801E948C;

s32 func_801E2440(s32 arg0, s32 arg1) {
    f32 temp;
    f32 temp2;

    temp = D_801E9470;
    temp2 = D_801E9474;
    if (func_8038BEF8(0.0f, 1.5f, -71.2f, temp, D_801E9478, -73.0f, temp, D_801E947C, D_801E9480, temp2, D_801E9484, D_801E9488, temp2, D_801E948C) != 0) {
        return 0x19;
    }
    return 0x18;
}



s32 func_801E24F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7270E0) != 0) {
        func_8038BED4();
        return 0x1A;
    }
    return 0x19;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E2544.s")


extern f32 D_801E94C4;
extern f32 D_801E94C8;
extern f32 D_801E94CC;
extern f32 D_801E94D0;

s32 func_801E2634(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xCF8500) != 0) {
        func_8038BD50(D_801E94C4, D_801E94C8, 294.1f);
        D_8038BD88(D_801E94CC, D_801E94D0, 303.2f);
        return 0x1C;
    }
    return 0x1B;
}


extern f32 D_801E94D4;
extern f32 D_801E94D8;
extern f32 D_801E94DC;

s32 func_801E26AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x11BD040) != 0) {
        func_8038BD50(D_801E94D4, -466.0f, 364.0f);
        D_8038BD88(D_801E94D8, D_801E94DC, 295.8f);
        return 0x1D;
    }
    return 0x1C;
}


s32 func_801E2720(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x13A54C0) != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E275C(s32 arg0, s32 arg1) {
    return 31;
}


s32 func_801E276C(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E277C(s32 arg0, s32 arg1) {
    return 32;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E278C(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E27C8(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0x82, 0x64, 0x56);
    func_801CCEC8(0, 0x20, 0x40, 0x20);
    func_801CCE88(1, 0xC8, 0x8B, 0x64);
    func_801CCEC8(1, -0x20, -0x40, -0x20);
    func_801CCE50(0x64, 0x5A, 0x28);
    return 2;
}


s32 func_801E2854(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2864(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2874(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2884(s32 arg0, s32 arg1) {
    return 5;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E2894(s32 arg0, s32 arg1) {
    func_801C2420(0x288, func_8038DD54 + 0x14);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E28C8.s")


s32 func_801E2A18(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2A28(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2A38(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2A48(s32 arg0, s32 arg1) {
    return 5;
}


extern void D_8038BA70(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];

s32 func_801E2A58(s32 arg0, s32 arg1) {
    func_801C2420(0x294, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x298, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x295, D_8038DDC0);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E2AC4.s")


s32 func_801E33F4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3404(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3414(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3424(s32 arg0, s32 arg1) {
    return 5;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E3434(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

void func_801C0D04(s32 arg0, s32 arg1);


s32 func_801E3478(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801C0D04(3, 1);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E34C4.s")


s32 func_801E35AC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E35BC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E35CC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E35DC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E35EC(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E35FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_801C0D04(3, 1);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E3648.s")


s32 func_801E3750(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E3760(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



s32 func_801E37A4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801C0D04(3, 2);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E37F0.s")


s32 func_801E38D8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E38E8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E38F8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3908(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3918(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3928(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_801C0D04(3, 2);
        func_8038D28C(0x1B0);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E397C.s")


s32 func_801E3A90(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E3AA0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3AE4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801C0D04(3, 3);
        func_8038D28C(0x1AC);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E3B38.s")


s32 func_801E3C1C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3C2C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3C3C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3C4C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3C5C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3C6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xBEBC20) != 0) {
        func_801C0D04(3, 3);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E3CB8.s")


s32 func_801E3DD4(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E3DE4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



s32 func_801E3E28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801C0D04(3, 4);
        return 0x2;
    }
    return 0x1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E3E74.s")


s32 func_801E3F58(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3F68(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3F78(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3F88(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3F98(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3FA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xBEBC20) != 0) {
        func_801C0D04(3, 4);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E3FF4.s")


s32 func_801E4110(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E4120(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4164(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4174(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4184(s32 arg0, s32 arg1) {
    return 4;
}


extern s32 func_8038D28C(s32 arg0);

s32 func_801E4194(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801C0D04(3, 5);
        func_8038D28C(0x221);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E41E4.s")


s32 func_801E42B4(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E42C4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E42D4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E42E4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E42F4(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E4304(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4348(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4358(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4368(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4378(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4388(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4398(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E43A8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E43B8(s32 arg0, s32 arg1) {
    return 8;
}


extern u8 D_801E0A48[];
extern u8 D_801DADFC[];
extern u8 D_801DAE00[];
extern u8 func_801DAC30[];
extern u8 func_801DAEE8[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801E43C8(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x30, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DADFC);
    func_801CC4C0(1, D_801DAE00);
    func_801C2420(0x57, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, func_801DAEE8 + 0x30);
    func_801CC4C0(2, func_801DAEE8 + 0x34);
    return 1;
}


extern void func_80005670(void *arg0, void *arg1);
extern void func_801D048C(s32 arg0);
extern void func_801D03E0(s32 arg0);
extern void func_801D03EC(s32 arg0);
extern void func_801CC530(void);
extern u8 D_801DADE8[];

s32 func_801E4494(s32 arg0, s32 arg1) {
    func_80005670(*(u8 **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_80005670(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DADE8);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}

extern struct func_801E58F0_StructA *D_801DAB14;
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

struct func_801E4520_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E4520_StructB {
    u8 pad0[0x2C];
    struct func_801E4520_StructC *unk2C;
};

struct func_801E4520_StructA {
    u8 pad0[8];
    struct func_801E4520_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E4520_StructB *unk24;
};

extern f32 D_801E9604;

s32 func_801E4520(s32 arg0, s32 arg1) {
    struct func_801E4520_StructB *temp_v0;

    temp_v0 = ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -40.5f;
        ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk8 = -470.0f;
        ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801E9604;
        ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x160F;
        func_801CC470(0, 0x02A80028, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801E45EC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E45FC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E460C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E4648(s32 arg0, s32 arg1) {
    return 7;
}


extern s32 D_801E8D50;

s32 func_801E4658(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        D_801E8D50 = 0;
        return 8;
    }
    return 7;
}


extern s32 func_801CE284();

s32 func_801E46A0(s32 arg0, s32 arg1) {
    if (D_801E8D50 == 0) {
        goto case0;
    }
    if (D_801E8D50 == 1) {
        goto case1;
    }
    return 8;
case0:
    func_801CC470(0, 0x02A80028, 9, 0, 3.0f);
    func_8038D28C(0x1AF);
    D_801E8D50 = 1;
    goto ret8;
case1:
    if (func_801CE284() != 0) {
        return 9;
    }
    goto ret8;
ret8:
    return 8;
}



s32 func_801E4738(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_801CC470(0, 0x01B80022, 0, 0x100, 3.0f);
        return 0xA;
    }
    return 9;
}


s32 func_801E479C(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E47AC(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E47BC(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E47CC(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E47DC(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E47EC(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E47FC(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E480C(s32 arg0, s32 arg1) {
    return 18;
}


extern f32 D_801E9608;

struct func_801E481C_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E481C_StructB {
    u8 pad0[0x2C];
    struct func_801E481C_StructC *unk2C;
};

struct func_801E481C_StructA {
    u8 pad0[8];
    struct func_801E481C_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E481C_StructB *unk24;
};

s32 func_801E481C(s32 arg0, s32 arg1) {
    struct func_801E481C_StructA **pp;
    s32 addr;

    if (func_801C0B8C(0x16E360) != 0) {
        addr = (s32) (func_801DAAF0 + 0x24);
        pp = (struct func_801E481C_StructA **) addr;
        ((*pp)->unk8->unk24->unk2C)->unk4 = -51.5f;
        ((*pp)->unk8->unk24->unk2C)->unk8 = -470.0f;
        ((*pp)->unk8->unk24->unk2C)->unkC = D_801E9608;
        ((*pp)->unk8->unk24->unk2C)->unk12 = 0x1C61;
        func_801CC470(0, 0x02A80023, 0, 0x1000, 5.0f);
        func_801C1000(4, 0);
        return 0x13;
    }
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E4900.s")


s32 func_801E4A58(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(0, 0x02A80023, 0, 0x1000, 5.0f);
        func_801C1000(4, 0);
        return 0x15;
    }
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E4AC8.s")


s32 func_801E4C20(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_801CC470(0, 0x02A80023, 0, 0x1000, 5.0f);
        func_801C1000(4, 0);
        return 0x17;
    }
    return 0x16;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E4C90.s")


s32 func_801E4DE8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_801CC470(0, 0x02A80023, 0, 0x1100, 5.0f);
        func_801C1000(4, 0);
        return 0x19;
    }
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E4E58.s")

s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

extern s32 func_801CE274();

s32 func_801E4FB0(s32 arg0, s32 arg1) {
    if (D_801E8D50 == 0) {
        goto block_a;
    }
    if (D_801E8D50 == 1) {
        goto block_b;
    }
    return 0x1A;
block_a:
    func_801CC4D8(0, 0x02A80025, 0, 0x1000, 12.0f);
    D_801E8D50 = 1;
    goto done;
block_b:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x02A80025, 0, 0x1000, 1.5f);
        return 0x1B;
    }
done:
    return 0x1A;
}



s32 func_801E5060(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E5090(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDEC740) != 0) {
        func_801CC470(0, 0x02A80025, 0, 0x1000, 1.5f);
        return 0x1D;
    }
    return 0x1C;
}



s32 func_801E50F4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E5124(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x00EE0980) != 0) {
        func_801CC470(0, 0x02A80025, 0, 0x1000, 1.5f);
        D_801E8D50 = 0;
        return 0x1F;
    }
    return 0x1E;
}


s32 func_801E5190(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E8D50;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x1F;

case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x01B80019, 0, 0, 6.0f);
        D_801E8D50 = 1;
    }
    goto ret1F;

case1:
    if (func_801CE274() != 0) {
        goto ret1F;
    }
    return 0x20;

ret1F:
    return 0x1F;
}


s32 func_801E522C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFD4BC0) != 0) {
        func_801CC470(0, 0x01B80019, 0, 0, 1.5f);
        func_8038D28C(0x1B4);
        return 0x21;
    }
    return 0x20;
}



s32 func_801E5298(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x12) = 0xC61;
        func_801CC470(0, 0x01900035, 0, 0x1000, 1.0f);
        return 0x22;
    }
    return 0x21;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E530C.s")


s32 func_801E5444(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x011BD040) != 0) {
        func_801CC470(0, 0x0190002B, 0, 0, 1.0f);
        return 0x24;
    }
    return 0x23;
}


extern void func_8038D33C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5);
extern s32 func_801CE2D0(s32 arg0, s32 arg1);
extern f32 D_801E9660;

s32 func_801E54A8(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    if (func_801CE284() != 0) {
        func_801CC470(0, 0x01900027, 0, 0, 1.0f);
        return 0x25;
    }
    if ((func_801CE2D0(0x0190002B, 5) != 0) || (func_801CE2D0(0x0190002B, 9) != 0)) {
        temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(temp_v0 + 0x4), *(f32 *)(temp_v0 + 0x8), *(s32 *)(temp_v0 + 0xC), 0x680, D_801E9660, 1.0f);
    }
    return 0x24;
}


extern f32 D_801E9664;

struct func_801E5568_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801E5568_StructB {
    u8 pad0[0x2C];
    struct func_801E5568_StructC *unk2C;
};
struct func_801E5568_StructA {
    u8 pad0[8];
    struct func_801E5568_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E5568_StructB *unk24;
};

s32 func_801E5568(s32 arg0, s32 arg1) {
    struct func_801E5568_StructC *temp_v0;

    if (func_801CE284() != 0) {
        return 0x26;
    }
    if ((func_801CE2D0(0x01900027, 4) != 0) || (func_801CE2D0(0x01900027, 9) != 0)) {
        temp_v0 = (*(struct func_801E5568_StructA **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x680, D_801E9664, 1.0f);
    }
    return 0x25;
}


s32 func_801E5604(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E5614(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E5624(s32 arg0, s32 arg1) {
    return 40;
}



s32 func_801E5634(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



struct func_801E5678_Struct_A;
struct func_801E5678_Struct_B;

struct func_801E5678_Struct_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E5678_Struct_B {
    u8 pad0[0x2C];
    struct func_801E5678_Struct_Leaf *unk2C;
};

struct func_801E5678_Struct_A {
    u8 pad0[8];
    struct func_801E5678_Struct_A *unk8;
    u8 pad1[0x18];
    struct func_801E5678_Struct_B *unk24;
};

extern f32 D_801E9668;
extern f32 D_801E966C;

s32 func_801E5678(s32 arg0, s32 arg1) {
    struct func_801E5678_Struct_B *temp_v0;

    temp_v0 = ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E9668;
        ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = -470.0f;
        ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E966C;
        ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x412;
        func_801CC470(1, 0x01B80013, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5754(s32 arg0, s32 arg1) {
    return 3;
}


struct func_801E5764_StructC {
    u8 pad0[0x12];
    u16 unk12;
};

struct func_801E5764_StructB {
    u8 pad0[0x2C];
    struct func_801E5764_StructC *unk2C;
};

struct func_801E5764_StructA {
    u8 pad0[8];
    struct func_801E5764_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E5764_StructB *unk24;
};

s32 func_801E5764(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        ((struct func_801E5764_StructA *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1CF8;
        func_801CC470(1, 0x01B8001B, 0, 0x100, 1.0f);
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E57E8.s")


struct func_801E58F0_StructA;
struct func_801E58F0_StructB;

struct func_801E58F0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E58F0_StructB {
    u8 pad0[0x2C];
    struct func_801E58F0_StructC *unk2C;
};

struct func_801E58F0_StructA {
    u8 pad0[8];
    struct func_801E58F0_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E58F0_StructB *unk24;
};

extern s32 func_801CF3BC(void);
extern f32 D_801E967C;

s32 func_801E58F0(s32 arg0, s32 arg1) {
    struct func_801E58F0_StructC *temp_v0;

    if (func_801CF3BC() != 0) {
        return 5;
    }
    temp_v0 = D_801DAB14->unk8->unk8->unk24->unk2C;
    func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x676, D_801E967C, 1.0f);
    return 6;
}


s32 func_801E5968(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5978(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5988(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E5998(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


extern void func_801CF450(s32 arg0);
extern s32 D_801E8DF8;

s32 func_801E59EC(s32 arg0, s32 arg1) {
    func_801CF450(1);
    func_801CC470(1, 0x0410000F, 0, 0x1000, 5.0f);
    *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1CF8;
    func_801C0D04(4, 1);
    D_801E8DF8 = 0;
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E5A6C.s")


typedef struct func_801E5BDC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5BDC_Struct;

s32 func_801E5BDC(s32 arg0, s32 arg1) {
    if ((((func_801E5BDC_Struct *)func_801BF6B0(7))->unkC < 8) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}


typedef struct func_801E5C30_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E5C30_Struct;

s32 func_801E5C30(s32 arg0, s32 arg1) {
    if (((func_801E5C30_Struct *) func_801BF6B0(7))->unkC < 0xB || func_801C1B1C() == 0) {
        return 13;
    }
    return 14;
}



s32 func_801E5C84(s32 arg0, s32 arg1) {
    D_801E8DF8 = 0;
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E5C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E5E5C.s")



s32 func_801E5EB0(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 17;
    }
    return 18;
}


s32 func_801E5F04(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x04100010, 0, 0x1000, 4.0f);
    return 0x13;
}


s32 D_801CF3CC(void);

s32 func_801E5F4C(s32 arg0, s32 arg1) {
    if (D_801CF3CC() != 0) {
        return 0x14;
    }
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E5F7C.s")


struct func_801E5FD0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E5FD0(s32 arg0, s32 arg1) {
    if ((((struct func_801E5FD0_Struct *)func_801BF6B0(7))->unkC < 0x1B) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}


s32 func_801E6024(s32 arg0, s32 arg1) {
    func_801CF450(1);
    func_801CC470(1, 0x0410000F, 0, 0x1000, 5.0f);
    D_801E8DF8 = 0;
    return 0x17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E6078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E61C8.s")


struct func_801E621C_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E621C(s32 arg0, s32 arg1) {
    if ((((struct func_801E621C_Struct *)func_801BF6B0(7))->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}


extern f32 D_801E96AC;
extern f32 D_801E96B0;
extern f32 D_801E96B4;
extern f32 D_801E96B8;
extern f32 D_801E96BC;

s32 func_801E6270(s32 arg0, s32 arg1)
{
  unsigned char new_var;
  f32 scale;
  scale = D_801E96AC;
  new_var = 0x24;
  (*((struct func_801E58F0_StructA **) (func_801DAAF0 + new_var)))->unk8->unk8->unk24->unk2C->unk4 = (D_801E96B0 * scale) + D_801E96B4;
  *((f32 *) (&(*((struct func_801E58F0_StructA **) (func_801DAAF0 + new_var)))->unk8->unk8->unk24->unk2C->unkC)) = (D_801E96B8 * scale) + D_801E96BC;
  func_801CF450(1);
  func_801CC470(1, 0x04100016, 0, 0x100, 1.0f);
 if (0) { }
 D_801E8DF8 = 0; return 0x1B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E6334.s")


typedef struct func_801E6474_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6474_Struct;

s32 func_801E6474(s32 arg0, s32 arg1) {
    if ((((func_801E6474_Struct *) func_801BF6B0(7))->unkC < 0x28) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


struct func_801E64C8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E64C8(s32 arg0, s32 arg1) {
    if ((((struct func_801E64C8_Struct *) func_801BF6B0(7))->unkC < 0x2B) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E651C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E65C4.s")


typedef struct func_801E66E0_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E66E0_Struct;

s32 func_801E66E0(s32 arg0, s32 arg1) {
    if ((((func_801E66E0_Struct *) func_801BF6B0(7))->unkC < 0x30) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E6734(s32 arg0, s32 arg1) {
    return 34;
}


s32 func_801E6744(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E6754(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        return 36;
    }
    return 35;
}


s32 func_801E678C(s32 arg0, s32 arg1) {
    return 37;
}


s32 func_801E679C(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E67AC(s32 arg0, s32 arg1) {
    return 38;
}



s32 func_801E67BC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801E96E4;
extern f32 D_801E96E8;

struct func_801E6800_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E6800_StructB {
    u8 pad0[0x2C];
    struct func_801E6800_StructC *unk2C;
};

struct func_801E6800_StructA {
    u8 pad0[8];
    struct func_801E6800_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E6800_StructB *unk24;
};

s32 func_801E6800(s32 arg0, s32 arg1) {
    struct func_801E6800_StructB *temp_v0;

    temp_v0 = ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E96E4;
        ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = -470.0f;
        ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E96E8;
        ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x160F;
        func_801CC470(2, 0x02A8000C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E68EC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E68FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        func_801CC470(2, 0x02A8000C, 0, 0, 3.0f);
        return 4;
    }
    return 3;
}


s32 func_801D0408(void);

s32 func_801E6960(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x5;
    }
    return 0x4;
}



s32 func_801E6990(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_801CC470(2, 0x01B80023, 0, 0x100, 3.0f);
        return 6;
    }
    return 5;
}


s32 func_801E69F4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E6A04(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E6A14(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E6A24(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E6A34(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E6A44(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E6A54(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E6A64(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E6A74(s32 arg0, s32 arg1) {
    return 15;
}


extern f32 D_801E96EC;
extern f32 D_801E96F0;

struct func_801E6A84_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E6A84(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x16E360) != 0) {
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unk4 = D_801E96EC;
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unk8 = -470.0f;
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unkC = D_801E96F0;
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unk12 = 0x1C61;
        func_801CC470(2, 0x02A80024, 0, 0x1000, 5.0f);
        func_801C1000(4, 2);
        return 0x10;
    }
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E6B88.s")


s32 func_801E6C88(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(2, 0x02A80024, 0, 0x1000, 5.0f);
        func_801C1000(4, 2);
        return 0x12;
    }
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E6CF8.s")


extern s32 func_801C1000(s32, s32);

s32 func_801E6DF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_801CC470(2, 0x02A80024, 0, 0x1000, 5.0f);
        func_801C1000(4, 2);
        return 0x14;
    }
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E6E68.s")


s32 func_801E6F68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_801CC470(2, 0x02A80024, 0, 0x1100, 5.0f);
        func_801C1000(4, 2);
        return 0x16;
    }
    return 0x15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/func_801E6FD8.s")


s32 func_801D03F8(void);
extern s32 D_801E8E98;

s32 func_801E70D0(s32 arg0, s32 arg1) {
    if (D_801E8E98 == 0) {
        goto case0;
    }
    if (D_801E8E98 == 1) {
        goto case1;
    }
    return 0x17;
case0:
    func_801CC4D8(2, 0x02A80026, 0, 0x1000, 12.0f);
    D_801E8E98 = 1;
    goto end;
case1:
    if (func_801D03F8() != 0) {
        goto end;
    }
    func_801CC470(2, 0x02A80026, 0, 0x1000, 1.5f);
    return 0x18;
end:
    return 0x17;
}



s32 func_801E7180(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x19;
    }
    return 0x18;
}



s32 func_801E71B0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDEC740) != 0) {
        func_801CC470(2, 0x02A80026, 0, 0x1000, 1.5f);
        return 0x1A;
    }
    return 0x19;
}



s32 func_801E7214(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x1B;
    }
    return 0x1A;
}


s32 func_801E7244(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEE0980) != 0) {
        func_801CC470(2, 0x02A80026, 0, 0x1000, 1.5f);
        D_801E8E98 = 0;
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E72B0(s32 arg0, s32 arg1) {
    if (D_801E8E98 == 0) {
        goto case0;
    }
    if (D_801E8E98 == 1) {
        goto case1;
    }
    return 0x1C;

case0:
    if (func_801D0408() != 0) {
        func_801CC4D8(2, 0x01B8001A, 0, 0x1000, 6.0f);
        D_801E8E98 = 1;
    }
    goto ret1c;

case1:
    if (func_801D03F8() == 0) {
        return 0x1D;
    }
    goto ret1c;

ret1c:
    return 0x1C;
}



s32 func_801E734C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFD4BC0) != 0) {
        func_801CC470(2, 0x01B8001A, 0, 0x1000, 1.5f);
        return 0x1E;
    }
    return 0x1D;
}



s32 func_801E73B0(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x1F;
    }
    return 0x1E;
}



s32 func_801E73E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x011BD040) != 0) {
        func_801CC4D8(2, 0x02A80027, 0, 0x1000, 15.0f);
        D_801E8E98 = 0;
        return 0x20;
    }
    return 0x1F;
}


s32 func_801E744C(s32 arg0, s32 arg1) {
    if (D_801E8E98 == 0) {
        goto case0;
    }
    if (D_801E8E98 == 1) {
        goto case1;
    }
    return 0x20;
case0:
    if (func_801D03F8() != 0) {
        goto tail;
    }
    func_801CC470(2, 0x02A80027, 0, 0x1000, 2.0f);
    D_801E8E98 = 1;
    goto tail;
case1:
    if (func_801D0408() == 0) {
        goto tail;
    }
    return 0x21;
tail:
    return 0x20;
}



s32 func_801E74E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x012B1280) != 0) {
        func_801CC4D8(2, 0x01900016, 0, 0x1000, 15.0f);
        return 0x22;
    }
    return 0x21;
}


s32 func_801E754C(s32 arg0, s32 arg1) {
    if (func_801D03F8() == 0) {
        func_801CC470(2, 0x01900016, 0, 0x100, 1.0f);
        return 0x23;
    }
    return 0x22;
}


s32 func_801E75A4(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E75B4(s32 arg0, s32 arg1) {
    return 36;
}


s32 func_801E75C4(s32 arg0, s32 arg1) {
    return 37;
}


s32 func_801E75D4(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E75E4(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E75F4(s32 arg0, s32 arg1) {
    return 40;
}


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E7604(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0xF4240) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E768C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E76BC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E76CC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E76DC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E76EC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0158D940) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E7728(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
    return 7;
}



s32 func_801E7794(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E77BC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E77CC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E77DC(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E77EC(s32 arg0, s32 arg1) {
    return 2;
}

extern s32 func_801C18CC(s32 arg0, void *arg1);
extern s32 D_801E8F80[];

typedef struct func_801E77FC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E77FC_Struct;

s32 func_801E77FC(s32 arg0, s32 arg1) {
    func_801E77FC_Struct sp18;

    sp18 = *(func_801E77FC_Struct *) D_801E8F80;
    func_801C18CC(2, &sp18);
    return 3;
}



s32 func_801E7864(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3;
    }
    return 0x4;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E8460[];

s32 func_801E7894(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E8460);
    return 5;
}


s32 func_8038CBF0(void);

s32 func_801E78C8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E78F8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7;
}



typedef struct func_801E7920_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7920_Struct;

extern func_801E7920_Struct D_801E8F98;

s32 func_801E7920(s32 arg0, s32 arg1) {
    func_801E7920_Struct sp18;

    sp18 = D_801E8F98;
    func_801C18CC(2, &sp18);
    return 8;
}



s32 func_801E7988(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8;
    }
    return 0x9;
}


s32 func_801E79B8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA;
}


typedef struct func_801E79E0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E79E0_Struct;

extern func_801E79E0_Struct D_801E8FB0;

s32 func_801E79E0(s32 arg0, s32 arg1) {
    func_801E79E0_Struct sp1C;

    sp1C = D_801E8FB0;
    func_801C18CC(1, &sp1C);
    return 0xB;
}



s32 func_801E7A30(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}


extern u8 D_801E85D4[];

s32 func_801E7A60(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E85D4);
    return 13;
}



s32 func_801E7A94(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xE;
    }
    return 0xD;
}


s32 func_801E7AC4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xF;
}


typedef struct func_801E7AEC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7AEC_Struct;

extern func_801E7AEC_Struct D_801E8FBC;

s32 func_801E7AEC(s32 arg0, s32 arg1) {
    func_801E7AEC_Struct sp1C;

    sp1C = D_801E8FBC;
    func_801C18CC(1, &sp1C);
    return 0x10;
}



s32 func_801E7B3C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x10;
    }
    return 0x11;
}


s32 func_801E7B6C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x12;
}


typedef struct func_801E7B94_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7B94_Struct;

extern func_801E7B94_Struct D_801E8FC8;

s32 func_801E7B94(s32 arg0, s32 arg1) {
    func_801E7B94_Struct sp18;

    sp18 = D_801E8FC8;
    func_801C18CC(2, (void *) &sp18);
    return 0x13;
}



s32 func_801E7BFC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x13;
    }
    return 0x14;
}


extern u8 D_801E865C[];

s32 func_801E7C2C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E865C);
    return 21;
}



s32 func_801E7C60(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x16;
    }
    return 0x15;
}


s32 func_801E7C90(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x17;
}



typedef struct func_801E7CB8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7CB8_Struct;

extern func_801E7CB8_Struct D_801E8FE0;

s32 func_801E7CB8(s32 arg0, s32 arg1) {
    func_801E7CB8_Struct sp18;

    sp18 = D_801E8FE0;
    func_801C18CC(2, &sp18);
    return 0x18;
}



s32 func_801E7D20(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E7D50(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1A;
}


typedef struct func_801E7D78_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7D78_Struct;

extern func_801E7D78_Struct D_801E8FF8;

s32 func_801E7D78(s32 arg0, s32 arg1) {
    func_801E7D78_Struct sp1C;

    sp1C = D_801E8FF8;
    func_801C18CC(1, &sp1C);
    return 0x1B;
}



s32 func_801E7DC8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1B;
    }
    return 0x1C;
}


extern u8 D_801E86EC[];

s32 func_801E7DF8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E86EC);
    return 29;
}



s32 func_801E7E2C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E7E5C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1F;
}


typedef struct func_801E7E84_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7E84_Struct;

extern func_801E7E84_Struct D_801E9004;

s32 func_801E7E84(s32 arg0, s32 arg1) {
    func_801E7E84_Struct sp1C;

    sp1C = D_801E9004;
    func_801C18CC(1, &sp1C);
    return 0x20;
}



s32 func_801E7ED4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E7F04(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x22;
}



typedef struct func_801E7F2C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7F2C_Struct;

extern func_801E7F2C_Struct D_801E9010;

s32 func_801E7F2C(s32 arg0, s32 arg1) {
    func_801E7F2C_Struct sp18;

    sp18 = D_801E9010;
    func_801C18CC(2, &sp18);
    return 0x23;
}



s32 func_801E7F94(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x23;
    }
    return 0x24;
}


extern u8 D_801E8778[];

s32 func_801E7FC4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E8778);
    return 37;
}



s32 func_801E7FF8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x26;
    }
    return 0x25;
}


s32 func_801E8028(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x27;
}


struct func_801E8050_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

extern struct func_801E8050_Struct D_801E9028;

s32 func_801E8050(s32 arg0, s32 arg1) {
    struct func_801E8050_Struct sp18;

    sp18 = D_801E9028;
    func_801C18CC(2, &sp18);
    return 0x28;
}



s32 func_801E80B8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x28;
    }
    return 0x29;
}


s32 func_801E80E8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2A;
}


typedef struct func_801E8110_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8110_Struct;

extern func_801E8110_Struct D_801E9040;

s32 func_801E8110(s32 arg0, s32 arg1) {
    func_801E8110_Struct sp18;

    sp18 = D_801E9040;
    func_801C18CC(2, &sp18);
    return 0x2B;
}



s32 func_801E8178(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2B;
    }
    return 0x2C;
}


extern u8 D_801E89B8[];

s32 func_801E81A8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E89B8);
    return 45;
}



s32 func_801E81DC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2E;
    }
    return 0x2D;
}


s32 func_801E820C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2F;
}


typedef struct func_801E8234_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8234_Struct;

extern func_801E8234_Struct D_801E9058;

s32 func_801E8234(s32 arg0, s32 arg1) {
    func_801E8234_Struct sp18;

    sp18 = D_801E9058;
    func_801C18CC(2, &sp18);
    return 0x30;
}



s32 func_801E829C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x30;
    }
    return 0x31;
}


s32 func_801E82CC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x32;
}


s32 func_801E82F4(s32 arg0, s32 arg1) {
    return 51;
}


s32 func_801E8304(s32 arg0, s32 arg1) {
    return 51;
}


s32 func_801E8314(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E8324(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E8334(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E8344(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E8354(s32 arg0, s32 arg1) {
    return 5;
}


extern s32 D_801E9148;

s32 func_801E8364(s32 arg0, s32 arg1) {
    D_801E9148 = 0;
    return 0x6;
}



s32 func_801E837C(s32 arg0, s32 arg1) {
    if (D_801E9148 == 0) {
        goto case0;
    }
    if (D_801E9148 == 1) {
        goto case1;
    }
    if (D_801E9148 == 2) {
        goto case2;
    }
    return 6;
case0:
    if (func_801C0B8C(0xCF8500) == 0) {
        goto ret6;
    }
    func_8038D28C(0x1B1);
    D_801E9148 = 1;
    goto ret6;
case1:
    if (func_801C0B8C(0xE66860) == 0) {
        goto ret6;
    }
    func_8038D28C(0x1B2);
    D_801E9148 = 2;
    goto ret6;
case2:
    if (func_801C0B8C(0xF5AAA0) == 0) {
        goto ret6;
    }
    func_8038D28C(0x1B3);
    return 7;
ret6:
    return 6;
}


s32 func_801E844C(s32 arg0, s32 arg1) {
    return 7;
}

