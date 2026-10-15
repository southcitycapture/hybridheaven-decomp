#include "common.h"

extern f32 D_801EA0A8;
extern f32 D_801EA0AC;
extern f32 D_801EA0B0;
extern f32 D_801EA0B4;
extern f32 D_801EA0B8;
extern f32 D_801EA0BC;
extern f32 D_801EA0C0;
extern f32 D_801EA0C4;
extern f32 D_801EA0C8;
extern f32 D_801EA0CC;
extern f32 D_801EA0D0;
extern f32 D_801EA0D4;
extern f32 D_801EA0D8;
extern f32 D_801EA0DC;
extern f32 D_801EA0E0;
extern f32 D_801EA0E4;
extern f32 D_801EA0E8;
extern f32 D_801EA0EC;
extern f32 D_801EA0F0;
extern f32 D_801EA0F4;
extern f32 D_801EA0F8;
extern f32 D_801EA0FC;
extern f32 D_801EA100;
extern f32 D_801EA104;
extern f32 D_801EA108;
extern f32 D_801EA10C;
extern f32 D_801EA110;
extern f32 D_801EA114;
extern f32 D_801EA118;
extern f32 D_801EA11C;
extern f32 D_801EA120;
extern f32 D_801EA124;
extern f32 D_801EA128;
extern f32 D_801EA12C;
extern f32 D_801EA130;
extern f32 D_801EA134;
extern f32 D_801EA138;
extern f32 D_801EA13C;
extern f32 D_801EA140;
extern f32 D_801EA144;
extern f32 D_801EA148;
extern f32 D_801EA14C;
extern f32 D_801EA150;
extern f32 D_801EA154;
extern f32 D_801EA158;
extern f32 D_801EA15C;
extern f32 D_801EA160;
extern f32 D_801EA164;
extern f32 D_801EA17C;
extern f32 D_801EA180;
extern f32 D_801EA184;
extern f32 D_801EA19C;
extern f32 D_801EA1A0;
extern f32 D_801EA1A4;
extern f32 D_801EA1A8;
extern f32 D_801EA1AC;
extern f32 D_801EA1B0;
extern f32 D_801EA1B4;
extern f32 D_801EA1E8;
extern f32 D_801EA1FC;
extern f32 D_801EA200;
extern f32 D_801EA204;
extern f32 D_801EA208;
extern f64 D_801EA1E0;
extern f64 func_80034C24();
extern s16 D_80089354;
extern s32 D_801D8D60;
extern s32 D_801DABB8;
extern s32 D_801DABBC;
extern s32 D_801E9678;
extern s32 D_801E9720;
extern s32 D_801E9800;
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 func_801C0DE4(s32, s32, s32);
extern s32 func_801C1974();
extern s32 func_801C1B1C();
extern s32 func_801C2420(s32 arg0, void *arg1);
extern s32 func_801CCE0C();
extern s32 func_801CCE50();
extern s32 func_801CCE88();
extern s32 func_801CCEC8();
extern s32 func_801CD044();
extern s32 func_801CE274();
extern s32 func_801CE284(void);
extern s32 func_801CEDD4();
extern s32 func_801CEDE4(void);
extern s32 func_801E3584();
extern s32 func_8038CBF0(void);
extern u64 func_801C0F18(s32, s32);
extern u8 D_801BBD54;
extern u8 D_801DAD14[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801E0A48[];
extern u8 D_801E8E70[];
extern u8 D_801E8EC0[];
extern u8 D_801E8F38[];
extern u8 D_801E8F68[];
extern u8 D_801E8FF4[];
extern u8 D_801E90A0[];
extern u8 D_801E9150[];
extern u8 D_801E9248[];
extern u8 D_801E9374[];
extern u8 D_801E93D8[];
extern u8 D_801E9438[];
extern u8 D_801E94D4[];
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 func_801DAC30[];
extern void *func_801BF6B0(s32 arg0);
extern void D_801CCF48(s32, s32);
extern void D_8038BA70(void);
extern void D_8038BD88(f32, f32, s32);
extern void D_8038C158();
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern void func_801BF628(s32 arg0, s32 *arg1);
extern void func_801C0D04(s32 arg0, s32 arg1);
extern void func_801C0EB0(s32, s32);
extern void func_801CC318(void);
extern void func_801CC458(s32 arg0, void *arg1);
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4C0(s32 arg0, void *arg1);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern void func_801CC530(void);
extern void func_801CD074(s32 arg0);
extern void func_801CED5C(s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
extern void func_8038BEC8(f32);
extern void func_8038CB60(f32 arg0, void *arg1);
extern void func_8038D28C(s32 arg0);



s32 func_801E1C00(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E1C54.s")



s32 func_801E1D28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E1D74.s")



s32 func_801E1E48(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5572FF) != 0) {
        D_8038C158();
        return 0x5;
    }
    return 0x4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E1E94.s")



s32 func_801E1F50(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x73F77F) != 0) {
        D_8038C158();
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E1F9C.s")


s32 func_801E2070(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        D_8038C158();
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E20BC.s")



s32 func_801E218C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD72620) != 0) {
        D_8038C158();
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E21D8.s")



s32 func_801E22AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFED260) != 0) {
        D_8038C158();
        return 0xD;
    }
    return 0xC;
}



s32 func_801E22F8(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, -81.7f, 8.5f, D_801EA0A8, D_801EA0AC, D_801EA0B0, D_801EA0B4, D_801EA0B8, D_801EA0BC, 121.5f, -87.0f, D_801EA0C0, D_801EA0C4, 41.5f, 41.5f) != 0) {
        return 0xE;
    }
    return 0xD;
}


s32 func_801E23C8(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E23D8(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E23E8(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 7) || (func_801C1B1C() == 0)) {
        return 16;
    }
    return 17;
}


s32 func_801E243C(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x12;
}



s32 func_801E2464(s32 arg0, s32 arg1)
{
  f32 a = D_801EA0C8;
  f32 new_var;
  f32 b = D_801EA0CC;
  f32 c = D_801EA0D0;
  new_var = a;
 if (0) { }
  if (0 != D_8038C17C(0.0f, 3, (double) (-129.6f), 2.3f, D_801EA0D4, D_801EA0D8, D_801EA0DC, D_801EA0E0, new_var, b, c, a, b, c, 41.5f, 41.5f))
  {
    return 0x13;
  }
  return 0x12;
}


typedef struct func_801E2520_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2520_Struct;

s32 func_801E2520(s32 arg0, s32 arg1) {
    if ((((func_801E2520_Struct *) func_801BF6B0(7))->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0x13;
    }
    return 0x14;
}


typedef struct func_801E2574_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2574_Struct;

s32 func_801E2574(s32 arg0, s32 arg1) {
    if ((((func_801E2574_Struct *)func_801BF6B0(7))->unkC < 0xF) || (func_801C1B1C() == 0)) {
        return 20;
    }
    return 0x15;
}



s32 func_801E25C8(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA0E4, D_801EA0E8, 0x42E2CCCD);
    D_8038BD88(D_801EA0EC, D_801EA0F0, 0x42F9CCCD);
    return 0x16;
}


typedef struct func_801E2630_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2630_Struct;

s32 func_801E2630(s32 arg0, s32 arg1) {
    if ((((func_801E2630_Struct *)func_801BF6B0(7))->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}


typedef struct func_801E2684_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2684_Struct;

s32 func_801E2684(s32 arg0, s32 arg1) {
    if ((((func_801E2684_Struct *)func_801BF6B0(7))->unkC < 0x17) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}



s32 func_801E26D8(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA0F4, D_801EA0F8, 0x42D33333);
    D_8038BD88(D_801EA0FC, D_801EA100, 0x42F86666);
    return 0x19;
}


typedef struct func_801E2740_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2740_Struct;

s32 func_801E2740(s32 arg0, s32 arg1) {
    if ((((func_801E2740_Struct *) func_801BF6B0(7))->unkC < 0x1C) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}

/* starting point: func_801E2574 (file046), whose assembly is 95% the same as this function's */

typedef struct func_801E2794_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2794_Struct;

s32 func_801E2794(s32 arg0, s32 arg1) {
    if ((((func_801E2794_Struct *) func_801BF6B0(7))->unkC < 0x1F) || (func_801C1B1C() == 0)) {
        return 0x1A;
    }
    return 0x1B;
}



s32 func_801E27E8(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA104, D_801EA108, 0x42EC3333);
    D_8038BD88(D_801EA10C, D_801EA110, 0x42EE6666);
    return 0x1C;
}


typedef struct func_801E2850_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2850_Struct;


s32 func_801E2850(s32 arg0, s32 arg1) {
    if ((((func_801E2850_Struct *)func_801BF6B0(7))->unkC < 0x24) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


typedef struct func_801E28A4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E28A4_Struct;

s32 func_801E28A4(s32 arg0, s32 arg1) {
    if ((((func_801E28A4_Struct *)func_801BF6B0(7))->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}



s32 func_801E28F8(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA114, 17.5f, 0x42D56666);
    D_8038BD88(-87.5f, D_801EA118, 0x42EE999A);
    return 0x1F;
}

/* starting point: func_801E6CB8 (file046), whose assembly is 95% the same as this function's */


struct func_801E2960_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E2960(s32 arg0, s32 arg1) {
    if ((((struct func_801E2960_Struct *)func_801BF6B0(7))->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 31;
    }
    return 32;
}

/* starting point: func_801E6D0C (file046), whose assembly is 95% the same as this function's */

typedef struct func_801E29B4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E29B4_Struct;

s32 func_801E29B4(s32 arg0, s32 arg1) {
    if ((((func_801E29B4_Struct *) func_801BF6B0(7))->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}



s32 func_801E2A08(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA11C, 1.0f, 0x42E2999A);
    D_8038BD88(D_801EA120, D_801EA124, 0x42EE6666);
    return 0x22;
}


typedef struct func_801E2A70_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2A70_Struct;

s32 func_801E2A70(s32 arg0, s32 arg1) {
    if ((((func_801E2A70_Struct *)func_801BF6B0(7))->unkC < 0x34) || (func_801C1B1C() == 0)) {
        return 0x22;
    }
    return 0x23;
}


typedef struct func_801E2AC4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2AC4_Struct;

s32 func_801E2AC4(s32 arg0, s32 arg1) {
    if ((((func_801E2AC4_Struct *) func_801BF6B0(7))->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}



s32 func_801E2B18(s32 arg0, s32 arg1) {
    func_8038BE98(41.5);
    func_8038BD50(D_801EA128, D_801EA12C, 0x42ECCCCD);
    D_8038BD88(D_801EA130, D_801EA134, 0x42EE6666);
    return 0x25;
}


struct func_801E2B80_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E2B80(s32 arg0, s32 arg1) {
    if ((((struct func_801E2B80_Struct *) func_801BF6B0(7))->unkC < 0x3A) || (func_801C1B1C() == 0)) {
        return 0x25;
    }
    return 0x26;
}


s32 func_801E2BD4(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x3D) || (func_801C1B1C() == 0)) {
        return 0x26;
    }
    return 0x27;
}



s32 func_801E2C28(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA138, 9.5f, 0x42D5999A);
    D_8038BD88(D_801EA13C, 16.0f, 0x42EE6666);
    return 0x28;
}


typedef struct func_801E2C90_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2C90_Struct;

s32 func_801E2C90(s32 arg0, s32 arg1) {
    if ((((func_801E2C90_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x28;
    }
    return 0x29;
}


typedef struct func_801E2CE4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2CE4_Struct;

s32 func_801E2CE4(s32 arg0, s32 arg1) {
    if ((((func_801E2CE4_Struct *)func_801BF6B0(7))->unkC < 0x45) || (func_801C1B1C() == 0)) {
        return 0x29;
    }
    return 0x2A;
}



s32 func_801E2D38(s32 arg0, s32 arg1) {
    func_8038BE98(41.5);
    func_8038BD50(D_801EA140, D_801EA144, 0x42E0CCCD);
    D_8038BD88(D_801EA148, D_801EA14C, 0x42F86666);
    return 0x2B;
}


typedef struct func_801E2DA0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2DA0_Struct;

s32 func_801E2DA0(s32 arg0, s32 arg1) {
    if ((((func_801E2DA0_Struct *)func_801BF6B0(7))->unkC < 0x4A) || (func_801C1B1C() == 0)) {
        return 0x2B;
    }
    return 0x2C;
}


struct func_801E2DF4_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E2DF4(s32 arg0, s32 arg1) {
    if ((((struct func_801E2DF4_Struct *)func_801BF6B0(7))->unkC < 0x4D) || (func_801C1B1C() == 0)) {
        return 0x2C;
    }
    return 0x2D;
}



s32 func_801E2E48(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(-105.5f, 11.0f, 0x42E2999A);
    D_8038BD88(D_801EA150, D_801EA154, 0x42ED6666);
    return 0x2E;
}


typedef struct func_801E2EB0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2EB0_Struct;


s32 func_801E2EB0(s32 arg0, s32 arg1) {
    if (((func_801E2EB0_Struct *) func_801BF6B0(7))->unkC < 0x52 || func_801C1B1C() == 0) {
        return 0x2E;
    }
    return 0x2F;
}

/* context.h line 122 declares this with a typedef defined later; same pointer type, declared early. */
extern struct func_801E4428_StructTop *D_801DAB14;

struct func_801E2F04_StructC {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_801E2F04_StructE {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x12 - 0xC];
    s16 unk12;
};

struct func_801E2F04_StructB {
    u8 pad0[0x2C];
    struct func_801E2F04_StructE *unk2C;
};

struct func_801E2F04_StructA {
    u8 pad0[0x8];
    struct func_801E2F04_StructA *unk8;
    u8 pad1[0x24 - 0xC];
    struct func_801E2F04_StructB *unk24;
};


s32 func_801E2F04(s32 arg0, s32 arg1) {
    struct func_801E2F04_StructE *e;

    if ((((struct func_801E2F04_StructC *) func_801BF6B0(7))->unkC < 0x55) || (func_801C1B1C() == 0)) {
        return 0x2F;
    }
    e = ((struct func_801E2F04_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C;
    e->unk8 = e->unk8 + 1.0f;
    ((struct func_801E2F04_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xC71;
    func_8038BE98(D_801EA158);
    func_8038BD50(D_801EA15C, D_801EA160, 0x42C93333);
    D_8038BD88(D_801EA164, 17.0f, 0x42EDCCCD);
    D_8038C158();
    return 0x30;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E2FEC.s")


typedef struct func_801E30A8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E30A8_Struct;

s32 func_801E30A8(s32 arg0, s32 arg1) {
    if ((((func_801E30A8_Struct *)func_801BF6B0(7))->unkC < 0x5A) || (func_801C1B1C() == 0)) {
        return 0x31;
    }
    return 0x32;
}


s32 func_801E30FC(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] < 0x5D || func_801C1B1C() == 0) {
        return 0x32;
    }
    return 0x33;
}



s32 func_801E3150(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(-84.0f, D_801EA17C, 0x42C20000);
    D_8038BD88(D_801EA180, D_801EA184, 0x42E90000);
    return 0x34;
}


typedef struct func_801E31B0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E31B0_Struct;

s32 func_801E31B0(s32 arg0, s32 arg1) {
    if ((((func_801E31B0_Struct *)func_801BF6B0(7))->unkC < 0x62) || (func_801C1B1C() == 0)) {
        return 0x34;
    }
    return 0x35;
}


s32 func_801E3204(s32 arg0, s32 arg1) {
    return 54;
}



s32 func_801E3214(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x37;
    }
    return 0x36;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E325C.s")


s32 func_801E3314(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        D_8038C158();
        return 57;
    }
    return 56;
}



s32 func_801E3360(s32 arg0, s32 arg1)
{
  f32 sp20;
  f32 sp24;
  f32 sp28;
  f32 sp38;
  sp20 = D_801EA19C;
 do { sp24 = D_801EA1A0; sp28 = D_801EA1A4; sp38 = 29.5f; } while (0);
  if (D_8038C17C(0.0f, D_801EA1A8, -91.5f, 3.1f, D_801EA1AC, D_801EA1B0, 3.0f, D_801EA1B4, sp20, sp24, sp28, sp20, sp24, sp28, sp38, 29.5f) != 0)
  {
    return 0x3A;
  }
  return 0x39;
}



s32 func_801E3418(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x960B75) != 0) {
        D_8038C158();
        return 0x3B;
    }
    return 0x3A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E3464.s")


s32 func_801E3538(s32 arg0, s32 arg1) {
    return 60;
}



s32 func_801E3548(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E3584.s")



s32 func_801E35F0(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0, 0, 0);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE88(1, 0, 0, 0);
    func_801CCEC8(1, 0, 0, 0);
    func_801CCE50(0x52, 0x2D, 1);
    D_801E9678 = 0x10;
    return 2;
}



s32 func_801E3684(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5572FF) != 0) {
        func_801CD074(0);
        return 3;
    }
    return 2;
}


s32 func_801CD098(s32 a0, s32 a1, s32 a2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8, f32 f9, f32 f10, f32 f11, f32 f12, f32 f13, f32 f14);

s32 func_801E36D0(s32 arg0, s32 arg1) {
    if (func_801CD098(0, 0, 0x40400002, 0.0f, 0.0f, 0.0f, 255.0f, 255.0f, 255.0f, 1.0f, 119.0f, 1.0f, 1.0f, 119.0f, 1.0f) != 0) {
        return 4;
    }
    return 3;
}


s32 func_801E375C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        func_801E3584();
        return 5;
    }
    return 4;
}



s32 func_801E37A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFED260) != 0) {
        func_801CCE88(0, 0, 0, 0);
        func_801CCE88(1, 0xFF, 0x99, 0);
        func_801CCEC8(1, 0x1E, 0x1E, 0x1E);
        func_8038D28C(0x651);
        return 6;
    }
    func_801E3584();
    return 5;
}


s32 func_801E3834(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3844(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3854(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3864(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3874(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3884(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E3894(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E38A4(s32 arg0, s32 arg1) {
    func_801C2420(0x449, D_8038DD90);
    D_8038BA70();
    func_801C2420(0xA6, D_8038DDA8);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E38F8.s")


s32 func_801E3C48(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3C58(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3C68(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3C78(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E3C88(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E3CCC_Struct1 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E3CCC_Struct2 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E3CCC_Struct1 *unk30;
};

struct func_801E3CCC_Struct3 {
    u8 pad0[4];
    struct func_801E3CCC_Struct2 *unk4;
};

extern struct func_801E3CCC_Struct3 *D_8038D8D0;

s32 func_801E3CCC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x64B53F) != 0) {
        D_8038D8D0->unk4->unk30->unk4 = 198.0f;
        D_8038D8D0->unk4->unk30->unk8 = 23.0f;
        D_8038D8D0->unk4->unk30->unkC = 167.0f;
        D_8038D8D0->unk4->unk30->unk12 = 0x1000;
        D_8038D8D0->unk4->unk22 = 1;
        return 2;
    }
    return 1;
}



s32 func_801E3D80(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x73F77F) != 0) {
        func_8038D28C(0x24C);
        func_801C0D04(3, 1);
        return 3;
    }
    return 2;
}



s32 func_801E3DD8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x3FA00004) != 0) {
        func_801C0EB0(3, 1);
        return 4;
    }
    temp_ret = func_801C0F18(3, 1);
    D_8038D8D0->unk4->unk30->unk4 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801EA1E0) / D_801EA1E8) * -93.0f) + 198.0f);
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E3E88.s")


s32 func_801E3FCC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        func_801C0D04(3, 1);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E4018.s")


s32 func_801E4130(s32 arg0, s32 arg1) {
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E4140.s")


s32 func_801E41A0(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E41B0(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E41C0(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    return 1;
}

typedef struct func_801E4428_StructTop {
    u8 pad0[0x8];
    struct func_801E4428_StructMid *unk8;
} func_801E4428_StructTop;
typedef struct func_801E4428_StructMid {
    u8 pad0[0x24];
    struct func_801E4428_StructLow *unk24;
} func_801E4428_StructMid;
typedef struct func_801E4428_StructLow {
    u8 pad0[0x2C];
    struct func_801E4428_StructFl *unk2C;
} func_801E4428_StructLow;
typedef struct func_801E4428_StructFl {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E4428_StructFl;
typedef struct func_801E53D4_StructA {
    u8 pad0[0x8];
    struct func_801E4428_StructTop *unk8;
} func_801E53D4_StructA;
typedef struct func_801E53D4_StructG {
    func_801E53D4_StructA *unk0;
    u8 pad0[0x20];
} func_801E53D4_StructG;
extern func_801E53D4_StructG func_801DAAF0[];

extern void func_80005670(void *a0, void *a1);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);

s32 func_801E4254(s32 arg0, s32 arg1) {
    func_80005670(*(void **)((u8 *)func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)((u8 *)func_801DAAF0 + 0x24) + 8), D_801DAD14);
    func_801CC530();
    return 2;
}



#define FUNC_801E42BC_NEXT(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801E42BC_CHAIN() FUNC_801E42BC_NEXT(FUNC_801E42BC_NEXT((u8 *)D_801DAB14, 0x8), 0x24)

s32 func_801E42BC(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = FUNC_801E42BC_CHAIN();
    if (temp_v0 != NULL) {
        *(f32 *)(FUNC_801E42BC_NEXT(temp_v0, 0x2C) + 0x4) = D_801EA1FC;
        *(f32 *)(FUNC_801E42BC_NEXT(FUNC_801E42BC_CHAIN(), 0x2C) + 0x8) = 0.0f;
        *(f32 *)(FUNC_801E42BC_NEXT(FUNC_801E42BC_CHAIN(), 0x2C) + 0xC) = 164.0f;
        *(s16 *)(FUNC_801E42BC_NEXT(FUNC_801E42BC_CHAIN(), 0x2C) + 0x12) = 0x1127;
        func_801CC470(0, 0x03480012, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801E4384(s32 arg0, s32 arg1) {
    return 4;
}

s32 func_801C0B8C(u64 time);

s32 func_801E4394(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(0, 0x03480012, 0, 0, 6.0f);
        return 5;
    }
    return 4;
}



s32 func_801E43F8(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x6;
    }
    return 0x5;
}







s32 func_801E4428(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x870A50) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -86.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 113.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x138E;
        func_801CC470(0, 0x03480066, 0, 1, 1.0f);
        return 7;
    }
    return 6;
}


s32 func_801E44FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD72620) != 0) {
        func_801CC470(0, 0x03480066, 0, 0, 4.0f);
        D_801E9720 = 0;
        return 8;
    }
    return 7;
}



s32 func_801E4568(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E9720;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 8;
case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x04100036, 0, 0, 30.0f);
        D_801E9720 = 1;
    }
    goto ret8;
case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100036, 0, 0x100, 10.0f);
        return 9;
    }
ret8:
    return 8;
}


s32 func_801E4624(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E4634(s32 arg0, s32 arg1) {
    return 11;
}



s32 func_801E4644(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x04100036, 0, 0, 30.0f);
    return 0xC;
}


s32 func_801E468C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100036, 0, 0x100, 10.0f);
        return 0xD;
    }
    return 0xC;
}


s32 func_801E46E4(s32 arg0, s32 arg1) {
    return 14;
}


typedef struct func_801E46F4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E46F4_Struct;

s32 func_801E46F4(s32 arg0, s32 arg1) {
    if ((((func_801E46F4_Struct *) func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 14;
    }
    return 15;
}


s32 func_801E4748(s32 arg0, s32 arg1) {
    if ((((func_801E46F4_Struct *)func_801BF6B0(7))->unkC < 0xF) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}


s32 func_801E479C(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x0348004D, 0, 0, 5.0f);
    D_801E9720 = 0;
    return 0x11;
}


s32 func_801E47E8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E9720;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x11;

case0:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004D, 0, 0, 6.0f);
        D_801E9720 = 1;
    }
    goto block_10;
case1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348004E, 0, 0, 5.0f);
        D_801E9720 = 2;
    }
    goto block_10;
case2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004E, 0, 0x100, 10.0f);
        return 0x12;
    }
block_10:
    return 0x11;
}


s32 func_801E48EC(s32 arg0, s32 arg1) {
    return 19;
}


typedef struct func_801E48FC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E48FC_Struct;

s32 func_801E48FC(s32 arg0, s32 arg1) {
    if ((((func_801E48FC_Struct *) func_801BF6B0(7))->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x13;
    }
    return 0x14;
}


struct func_801E4950_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E4950(s32 arg0, s32 arg1) {
    if ((((struct func_801E4950_Struct *)func_801BF6B0(7))->unkC < 0x17) || (func_801C1B1C() == 0)) {
        return 20;
    }
    return 21;
}


s32 func_801E49A4(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E49B4(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E49C4(s32 arg0, s32 arg1) {
    return 24;
}



typedef struct func_801E49D4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E49D4_Struct;

s32 func_801E49D4(s32 arg0, s32 arg1) {
    if ((((func_801E49D4_Struct *)func_801BF6B0(7))->unkC < 0x1C) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}


typedef struct func_801E4A28_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4A28_Struct;

s32 func_801E4A28(s32 arg0, s32 arg1) {
    if ((((func_801E4A28_Struct *)func_801BF6B0(7))->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}


s32 func_801E4A7C(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x0348004D, 0, 0, 30.0f);
    return 0x1B;
}



s32 func_801E4AC4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004D, 0, 2, 6.0f);
        D_801E9720 = 0;
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E4B24(s32 arg0, s32 arg1) {
    if (D_801E9720 == 0) {
        goto case0;
    }
    if (D_801E9720 == 1) {
        goto case1;
    }
    return 0x1C;

case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007A, 0, 0, 30.0f);
        D_801E9720 = 1;
    }
    goto block_end;

case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 0x1D;
    }

block_end:
    return 0x1C;
}


typedef struct func_801E4BE0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4BE0_Struct;

s32 func_801E4BE0(s32 arg0, s32 arg1) {
    if ((((func_801E4BE0_Struct *)func_801BF6B0(7))->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}

/* starting point: func_801E6D0C (file046), whose assembly is 95% the same as this function's */

typedef struct func_801E4C34_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4C34_Struct;

s32 func_801E4C34(s32 arg0, s32 arg1) {
    if ((((func_801E4C34_Struct *) func_801BF6B0(7))->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 0x1E;
    }
    return 0x1F;
}


s32 func_801E4C88(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E4C98(s32 arg0, s32 arg1) {
    return 33;
}


s32 func_801E4CA8(s32 arg0, s32 arg1) {
    return 34;
}


typedef struct func_801E4CB8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4CB8_Struct;

s32 func_801E4CB8(s32 arg0, s32 arg1) {
    if ((((func_801E4CB8_Struct *)func_801BF6B0(7))->unkC < 0x34) || (func_801C1B1C() == 0)) {
        return 0x22;
    }
    return 0x23;
}


typedef struct func_801E4D0C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4D0C_Struct;

s32 func_801E4D0C(s32 arg0, s32 arg1) {
    if ((((func_801E4D0C_Struct *)func_801BF6B0(7))->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801E4D60(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x0348004D, 0, 0, 5.0f);
    return 0x25;
}


s32 func_801E4DA8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004D, 0, 0, 3.0f);
        return 0x26;
    }
    return 0x25;
}



s32 func_801E4E00(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348004E, 0, 0, 5.0f);
        return 0x27;
    }
    return 0x26;
}


s32 func_801E4E58(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004E, 0, 0x100, 7.0f);
        return 0x28;
    }
    return 0x27;
}


s32 func_801E4EB0(s32 arg0, s32 arg1) {
    return 41;
}


typedef struct func_801E4EC0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4EC0_Struct;

s32 func_801E4EC0(s32 arg0, s32 arg1) {
    if ((((func_801E4EC0_Struct *)func_801BF6B0(7))->unkC < 0x3A) || (func_801C1B1C() == 0)) {
        return 0x29;
    }
    return 0x2A;
}


typedef struct func_801E4F14_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4F14_Struct;

s32 func_801E4F14(s32 arg0, s32 arg1) {
    if ((((func_801E4F14_Struct *) func_801BF6B0(7))->unkC < 0x5D) || (func_801C1B1C() == 0)) {
        return 0x2A;
    }
    return 0x2B;
}


s32 func_801E4F68(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x0348004F, 0, 0, 30.0f);
    return 0x2C;
}


s32 func_801E4FB0(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004F, 0, 0, 5.0f);
        return 0x2D;
    }
    return 0x2C;
}



s32 func_801E5008(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348004E, 0, 0, 5.0f);
        return 0x2E;
    }
    return 0x2D;
}


s32 func_801E5060(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004E, 0, 0x100, 7.0f);
        return 0x2F;
    }
    return 0x2E;
}


s32 func_801E50B8(s32 arg0, s32 arg1) {
    return 48;
}

/* starting point: func_801E67BC (file043), whose assembly is 95% the same as this function's */

s32 func_801E50C8(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x62) || (func_801C1B1C() == 0)) {
        return 0x30;
    }
    return 0x31;
}


s32 func_801E511C(s32 arg0, s32 arg1) {
    return 50;
}


s32 func_801E512C(s32 arg0, s32 arg1) {
    return 51;
}


s32 func_801E513C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(0, 0x03480050, 0, 0, 5.0f);
        return 0x34;
    }
    return 0x33;
}


s32 func_801E519C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480050, 0, 0, 6.0f);
        return 0x35;
    }
    return 0x34;
}



s32 func_801E51F4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x36;
    }
    return 0x35;
}


s32 func_801E5224(s32 arg0, s32 arg1) {
    return 54;
}



s32 func_801E5234(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E5278_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5278_Struct4 *unk2C;
};

struct func_801E5278_Struct2 {
    u8 pad0[0x24];
    struct func_801E5278_Struct3 *unk24;
};

struct func_801E5278_Struct1 {
    u8 pad0[0x8];
    struct func_801E5278_Struct2 *unk8;
};

struct func_801E5278_Struct0 {
    u8 pad0[0x8];
    struct func_801E5278_Struct1 *unk8;
};

struct func_801E5278_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};


s32 func_801E5278(s32 arg0, s32 arg1) {
    struct func_801E5278_Struct3 *temp_v0;

    temp_v0 = ((struct func_801E5278_Struct0 *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -8.0f;
        ((struct func_801E5278_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5278_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801EA200;
        ((struct func_801E5278_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xC2D;
        func_801CC470(1, 0x03480012, 0, 0x11, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5350(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E5360(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5572FF) != 0) {
        func_801CC470(1, 0x03480012, 0, 0x10, 5.0f);
        return 4;
    }
    return 3;
}


s32 func_801E53C4(s32 arg0, s32 arg1) {
    return 5;
}





s32 func_801E53D4(s32 arg0, s32 arg1)
{
  char new_var;
  if (0 != func_801C0B8C(0x870A50))
  {
    new_var = 1;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unk4 = D_801EA204;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unkC = D_801EA208;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unk12 = 0xE38;
    func_801CC470(new_var, 0x03480066, 0, new_var, 1.0f);
    D_801E9800 = 0;
    return 6;
  }
  return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E54C0.s")


s32 func_801E55E4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E55F4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5604(s32 arg0, s32 arg1) {
    func_801CED5C(1);
    func_801CC4D8(1, 0x02A8002A, 0, 0, 5.0f);
    return 0xA;
}



s32 func_801E5654(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8002A, 0, 0, 5.0f);
        D_801E9800 = 0;
        return 0xB;
    }
    return 0xA;
}


s32 func_801E56B4(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E9800;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0xB;

case0:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto ret0B;

case1:
    if (func_801CEDD4() != 0) {
        goto ret0B;
    }
    func_801CED5C(0);
    func_801CC470(1, 0x02A80029, 0, 0x100, 6.0f);
    return 0xC;

ret0B:
    return 0xB;
}


typedef struct func_801E577C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E577C_Struct;

s32 func_801E577C(s32 arg0, s32 arg1) {
    if ((((func_801E577C_Struct *)func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}


typedef struct func_801E57D0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E57D0_Struct;

s32 func_801E57D0(s32 arg0, s32 arg1) {
    if ((((func_801E57D0_Struct *)func_801BF6B0(7))->unkC < 7) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}


s32 func_801E5824(s32 arg0, s32 arg1) {
    func_801CED5C(1);
    func_801CC4D8(1, 0x02A8002B, 0, 0, 5.0f);
    return 0xF;
}



s32 func_801E5874(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8002B, 0, 0, 5.0f);
        D_801E9800 = 0;
        return 0x10;
    }
    return 0xF;
}


s32 func_801E58D4(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto block_0;
    }
    if (D_801E9800 == 1) {
        goto block_1;
    }
    return 0x10;
block_0:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto done;
block_1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 6.0f);
        return 0x11;
    }
done:
    return 0x10;
}


typedef struct func_801E599C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E599C_Struct;

s32 func_801E599C(s32 arg0, s32 arg1) {
    if ((((func_801E599C_Struct *) func_801BF6B0(7))->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}


typedef struct func_801E59F0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E59F0_Struct;

s32 func_801E59F0(s32 arg0, s32 arg1) {
    if ((((func_801E59F0_Struct *)func_801BF6B0(7))->unkC < 0xF) || (func_801C1B1C() == 0)) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801E5A44(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80041, 0, 0, 5.0f);
    func_801CED5C(1);
    return 20;
}


s32 func_801E5A94(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80041, 0, 0, 4.0f);
        D_801E9800 = 0;
        return 0x15;
    }
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E5AF4.s")

typedef struct func_801E5C4C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5C4C_Struct;

s32 func_801E5C4C(s32 arg0, s32 arg1) {
    func_801E5C4C_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}


typedef struct func_801E5CA0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5CA0_Struct;


s32 func_801E5CA0(s32 arg0, s32 arg1) {
    if ((((func_801E5CA0_Struct *)func_801BF6B0(7))->unkC < 0x17) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}



s32 func_801E5CF4(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8002E, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x19;
}


s32 func_801E5D44(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8002E, 0, 0, 5.0f);
        D_801E9800 = 0;
        return 0x1A;
    }
    return 0x19;
}


s32 func_801E5DA4(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto block_0;
    }
    if (D_801E9800 == 1) {
        goto block_1;
    }
    return 0x1A;
block_0:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto done;
block_1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 6.0f);
        return 0x1B;
    }
done:
    return 0x1A;
}


typedef struct func_801E5E6C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5E6C_Struct;

s32 func_801E5E6C(s32 arg0, s32 arg1) {
    if ((((func_801E5E6C_Struct *)func_801BF6B0(7))->unkC < 0x1C) || (func_801C1B1C() == 0)) {
        return 0x1B;
    }
    return 0x1C;
}


typedef struct func_801E5EC0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5EC0_Struct;

s32 func_801E5EC0(s32 arg0, s32 arg1) {
    if ((((func_801E5EC0_Struct *) func_801BF6B0(7))->unkC < 0x1F) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}



s32 func_801E5F14(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8002B, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x1E;
}



s32 func_801E5F64(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8002B, 0, 0, 5.0f);
        D_801E9800 = 0;
        return 0x1F;
    }
    return 0x1E;
}


s32 func_801E5FC4(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto block_0;
    }
    if (D_801E9800 == 1) {
        goto block_1;
    }
    return 0x1F;
block_0:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto done;
block_1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 6.0f);
        return 0x20;
    }
done:
    return 0x1F;
}

/* starting point: func_801E6D0C (file046), whose assembly is 95% the same as this function's */

typedef struct func_801E608C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E608C_Struct;

s32 func_801E608C(s32 arg0, s32 arg1) {
    if ((((func_801E608C_Struct *) func_801BF6B0(7))->unkC < 0x24) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}


typedef struct func_801E60E0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E60E0_Struct;

s32 func_801E60E0(s32 arg0, s32 arg1) {
    if ((((func_801E60E0_Struct *)func_801BF6B0(7))->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 0x21;
    }
    return 0x22;
}



s32 func_801E6134(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8002E, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x23;
}


s32 func_801E6184(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8002E, 0, 0, 5.0f);
        D_801E9800 = 0;
        return 0x24;
    }
    return 0x23;
}


s32 func_801E61E4(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto block_0;
    }
    if (D_801E9800 == 1) {
        goto block_1;
    }
    return 0x24;
block_0:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto done;
block_1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 6.0f);
        return 0x25;
    }
done:
    return 0x24;
}

/* starting point: func_801E6DE4 (file046), whose assembly is 95% the same as this function's */

struct func_801E62AC_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E62AC(s32 arg0, s32 arg1) {
    if ((((struct func_801E62AC_Struct *) func_801BF6B0(7))->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 0x25;
    }
    return 0x26;
}

/* starting point: func_801E6D0C (file046), whose assembly is 95% the same as this function's */

typedef struct func_801E6300_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6300_Struct;

s32 func_801E6300(s32 arg0, s32 arg1) {
    if ((((func_801E6300_Struct *) func_801BF6B0(7))->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 0x26;
    }
    return 0x27;
}


s32 func_801E6354(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80043, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x28;
}


s32 func_801E63A4(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80043, 0, 0, 6.0f);
        D_801E9800 = 0;
        return 0x29;
    }
    return 0x28;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E6404.s")


s32 func_801E655C(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 0x34) || (func_801C1B1C() == 0)) {
        return 0x2A;
    }
    return 0x2B;
}

/* starting point: func_801E2DA0 (file043), whose assembly is 95% the same as this function's */

typedef struct func_801E65B0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E65B0_Struct;

s32 func_801E65B0(s32 arg0, s32 arg1) {
    if ((((func_801E65B0_Struct *)func_801BF6B0(7))->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 0x2B;
    }
    return 0x2C;
}



s32 func_801E6604(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80048, 0, 0, 5.0f);
    return 0x2D;
}


s32 func_801E664C(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80048, 0, 0, 5.0f);
        D_801E9800 = 0;
        return 0x2E;
    }
    return 0x2D;
}



s32 func_801E66AC(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto case0;
    }
    if (D_801E9800 != 1) {
        goto done;
    }
    goto case1;

case0:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto done;

case1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 10.0f);
        return 0x2F;
    }

done:
    return 0x2E;
}


typedef struct func_801E6768_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6768_Struct;

s32 func_801E6768(s32 arg0, s32 arg1) {
    if ((((func_801E6768_Struct *)func_801BF6B0(7))->unkC < 0x3A) || (func_801C1B1C() == 0)) {
        return 0x2F;
    }
    return 0x30;
}


s32 func_801E67BC(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x3D) || (func_801C1B1C() == 0)) {
        return 0x30;
    }
    return 0x31;
}



s32 func_801E6810(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8002E, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x32;
}


s32 func_801E6860(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8002E, 0, 0, 5.0f);
        D_801E9800 = 0;
        return 0x33;
    }
    return 0x32;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E68C0.s")


typedef struct func_801E6A18_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6A18_Struct;

s32 func_801E6A18(s32 arg0, s32 arg1) {
    if ((((func_801E6A18_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x34;
    }
    return 0x35;
}


typedef struct func_801E6A6C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6A6C_Struct;

s32 func_801E6A6C(s32 arg0, s32 arg1) {
    if ((((func_801E6A6C_Struct *)func_801BF6B0(7))->unkC < 0x45) || (func_801C1B1C() == 0)) {
        return 0x35;
    }
    return 0x36;
}



s32 func_801E6AC0(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80047, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x37;
}



s32 func_801E6B10(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80047, 0, 0, 4.0f);
        D_801E9800 = 0;
        return 0x38;
    }
    return 0x37;
}


s32 func_801E6B70(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E9800;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x38;

case0:
    if (func_801CEDE4() == 0) {
        goto ret38;
    }
    func_801CED5C(0);
    func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
    D_801E9800 = 1;
    goto ret38;

case1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 10.0f);
        return 0x39;
    }

ret38:
    return 0x38;
}


typedef struct func_801E6C38_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6C38_Struct;

s32 func_801E6C38(s32 arg0, s32 arg1) {
    if ((((func_801E6C38_Struct *)func_801BF6B0(7))->unkC < 0x4A) || (func_801C1B1C() == 0)) {
        return 0x39;
    }
    return 0x3A;
}


typedef struct func_801E6C8C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6C8C_Struct;

s32 func_801E6C8C(s32 arg0, s32 arg1) {
    if ((((func_801E6C8C_Struct *)func_801BF6B0(7))->unkC < 0x4D) || (func_801C1B1C() == 0)) {
        return 0x3A;
    }
    return 0x3B;
}



s32 func_801E6CE0(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80044, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x3C;
}


s32 func_801E6D30(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80044, 0, 0, 4.0f);
        D_801E9800 = 0;
        return 0x3D;
    }
    return 0x3C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file043/801E1C00/func_801E6D90.s")


typedef struct func_801E6E1C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6E1C_Struct;

s32 func_801E6E1C(s32 arg0, s32 arg1) {
    if ((((func_801E6E1C_Struct *) func_801BF6B0(7))->unkC < 0x52) || (func_801C1B1C() == 0)) {
        return 0x3E;
    }
    return 0x3F;
}



s32 func_801E6E70(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x55) || (func_801C1B1C() == 0)) {
        return 0x3F;
    }
    return 0x40;
}



s32 func_801E6EC4(s32 arg0, s32 arg1) {
    func_801CED5C(1);
    func_801CC4D8(1, 0x02A80046, 0, 0, 5.0f);
    return 0x41;
}


s32 func_801E6F14(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80046, 0, 0, 3.0f);
        D_801E9800 = 0;
        return 0x42;
    }
    return 0x41;
}


s32 func_801E6F74(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto case0;
    }
    if (D_801E9800 == 1) {
        goto case1;
    }
    if (D_801E9800 == 2) {
        goto case2;
    }
    return 0x42;
case0:
    if (func_801CEDE4() != 0) {
        D_801E9800 = 1;
    }
    goto block_9;
case1:
    func_801CC470(1, 0x02A80045, 0, 0, 10.0f);
    D_801E9800 = 2;
    goto block_9;
case2:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        return 0x43;
    }
block_9:
    return 0x42;
}


typedef struct func_801E7030_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7030_Struct;

s32 func_801E7030(s32 arg0, s32 arg1) {
    if ((((func_801E7030_Struct *)func_801BF6B0(7))->unkC < 0x5A) || (func_801C1B1C() == 0)) {
        return 0x43;
    }
    return 0x44;
}


typedef struct func_801E7084_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7084_Struct;

s32 func_801E7084(s32 arg0, s32 arg1) {
    func_801E7084_Struct *s;

    s = func_801BF6B0(7);
    if ((s->unkC < 0x5D) || (func_801C1B1C() == 0)) {
        return 0x44;
    }
    return 0x45;
}



s32 func_801E70D8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80049, 0, 0, 30.0f);
    func_801CED5C(1);
    return 0x46;
}


s32 func_801E7128(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80049, 0, 0, 5.0f);
        D_801E9800 = 0;
        return 0x47;
    }
    return 0x46;
}


s32 func_801E7188(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto case0;
    }
    if (D_801E9800 == 1) {
        goto case1;
    }
    if (D_801E9800 == 2) {
        goto case2;
    }
    return 0x47;
case0:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A8004A, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto block_10;
case1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004A, 0, 0, 10.0f);
        D_801E9800 = 2;
    }
    goto block_10;
case2:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        return 0x48;
    }
block_10:
    return 0x47;
}

/* starting point: func_801E3968 (file039), whose assembly is 95% the same as this function's */

typedef struct func_801E7274_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7274_Struct;

s32 func_801E7274(s32 arg0, s32 arg1) {
    if ((((func_801E7274_Struct *)func_801BF6B0(7))->unkC < 0x62) || (func_801C1B1C() == 0)) {
        return 0x48;
    }
    return 0x49;
}


s32 func_801E72C8(s32 arg0, s32 arg1) {
    return 74;
}


s32 func_801E72D8(s32 arg0, s32 arg1) {
    return 75;
}


s32 func_801E72E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(1, 0x02A8004B, 0, 0, 5.0f);
        return 0x4C;
    }
    return 0x4B;
}


s32 func_801E7348(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004B, 0, 0, 6.0f);
        return 0x4D;
    }
    return 0x4C;
}



s32 func_801E73A0(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        return 0x4E;
    }
    return 0x4D;
}


s32 func_801E73D0(s32 arg0, s32 arg1) {
    return 78;
}


s32 func_801E73E0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0xF4240) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E7468(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}



s32 func_801E7498(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 2;
    }
    if (func_801C0B8C(0x7B98A0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 1);
        return 3;
    }
    return 2;
}



s32 func_801E7520(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    return 4;
}



s32 func_801E7548(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 2);
        return 5;
    }
    return 4;
}



s32 func_801E75BC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 5;
    }
    D_80089354 = 0;
    return 6;
}


s32 func_801E75EC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E75FC(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E760C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E761C(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E762C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0xC3D235) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        func_8038D28C(0xA);
        return 0xB;
    }
    return 0xA;
}



s32 func_801E76BC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 11;
    }
    return 12;
}


s32 func_801E76E4(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E76F4(s32 arg0, s32 arg1) {
    return 1;
}



s32 func_801E7704(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E8E70);
    return 2;
}



s32 func_801E7738(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}


typedef struct func_801E7768_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7768_Struct;

extern func_801E7768_Struct D_801E9988;

s32 func_801E7768(s32 arg0, s32 arg1) {
    func_801E7768_Struct sp18;

    sp18 = D_801E9988;
    func_801C18CC(2, (void *) &sp18);
    return 4;
}



s32 func_801E77D0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}


s32 func_801E7800(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}


typedef struct func_801E7828_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7828_Struct;

extern func_801E7828_Struct D_801E99A0;

s32 func_801E7828(s32 arg0, s32 arg1) {
    func_801E7828_Struct sp18;

    sp18 = D_801E99A0;
    func_801C18CC(2, (void *) &sp18);
    return 7;
}



s32 func_801E7890(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}



s32 func_801E78C0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E8EC0);
    func_8038D28C(0x7B);
    return 9;
}



s32 func_801E78FC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA;
    }
    return 0x9;
}


s32 func_801E792C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB;
}


typedef struct func_801E7954_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7954_Struct;

extern func_801E7954_Struct D_801E99B8;

s32 func_801E7954(s32 arg0, s32 arg1) {
    func_801E7954_Struct sp18;

    sp18 = D_801E99B8;
    func_801C18CC(2, &sp18);
    return 0xC;
}



s32 func_801E79BC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E79EC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xE;
}


typedef struct func_801E7A14_Struct {
    s32 w[9];
} func_801E7A14_Struct;

s32 func_801C18CC(s32 arg0, func_801E7A14_Struct *arg1);
extern func_801E7A14_Struct D_801E99D0;

s32 func_801E7A14(s32 arg0, s32 arg1) {
    func_801E7A14_Struct sp1C;

    sp1C = D_801E99D0;
    func_801C18CC(3, &sp1C);
    return 15;
}



s32 func_801E7A78(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xF;
    }
    return 0x10;
}



s32 func_801E7AA8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E8F38);
    return 17;
}



s32 func_801E7ADC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x12;
    }
    return 0x11;
}


s32 func_801E7B0C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x13;
}


typedef struct func_801E7B34_Struct {
    s32 w[9];
} func_801E7B34_Struct;

extern func_801E7B34_Struct D_801E99F4;

s32 func_801E7B34(s32 arg0, s32 arg1) {
    func_801E7B34_Struct sp1C;

    sp1C = D_801E99F4;
    func_801C18CC(3, &sp1C);
    return 20;
}



s32 func_801E7B98(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801E7BC8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x16;
}


typedef struct func_801E7BF0_Struct {
    s32 w[9];
} func_801E7BF0_Struct;

extern func_801E7BF0_Struct D_801E9A18;

s32 func_801E7BF0(s32 arg0, s32 arg1) {
    func_801E7BF0_Struct sp1C;

    sp1C = D_801E9A18;
    func_801C18CC(3, &sp1C);
    return 23;
}



s32 func_801E7C54(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x17;
    }
    return 0x18;
}



s32 func_801E7C84(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E8F68);
    return 25;
}



s32 func_801E7CB8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1A;
    }
    return 0x19;
}


s32 func_801E7CE8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1B;
}


typedef struct func_801E7D10_Struct {
    s32 w[9];
} func_801E7D10_Struct;

extern func_801E7D10_Struct D_801E9A3C;

s32 func_801E7D10(s32 arg0, s32 arg1) {
    func_801E7D10_Struct sp1C;

    sp1C = D_801E9A3C;
    func_801C18CC(3, &sp1C);
    return 28;
}



s32 func_801E7D74(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1C;
    }
    return 0x1D;
}


s32 func_801E7DA4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1E;
}


typedef struct func_801E7DCC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7DCC_Struct;

extern func_801E7DCC_Struct D_801E9A60;

s32 func_801E7DCC(s32 arg0, s32 arg1) {
    func_801E7DCC_Struct sp18;

    sp18 = D_801E9A60;
    func_801C18CC(2, &sp18);
    return 0x1F;
}



s32 func_801E7E34(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1F;
    }
    return 0x20;
}



s32 func_801E7E64(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E8FF4);
    return 33;
}



s32 func_801E7E98(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x22;
    }
    return 0x21;
}


s32 func_801E7EC8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x23;
}


typedef struct func_801E7EF0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7EF0_Struct;

extern func_801E7EF0_Struct D_801E9A78;

s32 func_801E7EF0(s32 arg0, s32 arg1) {
    func_801E7EF0_Struct sp18;

    sp18 = D_801E9A78;
    func_801C18CC(2, &sp18);
    return 0x24;
}



s32 func_801E7F58(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x24;
    }
    return 0x25;
}


s32 func_801E7F88(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x26;
}


typedef struct func_801E7FB0_Struct {
    s32 w[9];
} func_801E7FB0_Struct;

extern func_801E7FB0_Struct D_801E9A90;

s32 func_801E7FB0(s32 arg0, s32 arg1) {
    func_801E7FB0_Struct sp1C;

    sp1C = D_801E9A90;
    func_801C18CC(3, &sp1C);
    return 39;
}



s32 func_801E8014(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x27;
    }
    return 0x28;
}



s32 func_801E8044(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E90A0);
    return 41;
}



s32 func_801E8078(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2A;
    }
    return 0x29;
}


s32 func_801E80A8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2B;
}


typedef struct func_801E80D0_Struct {
    s32 w[9];
} func_801E80D0_Struct;

extern func_801E80D0_Struct D_801E9AB4;

s32 func_801E80D0(s32 arg0, s32 arg1) {
    func_801E80D0_Struct sp1C;

    sp1C = D_801E9AB4;
    func_801C18CC(3, &sp1C);
    return 44;
}



s32 func_801E8134(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2C;
    }
    return 0x2D;
}


s32 func_801E8164(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2E;
}


typedef struct func_801E818C_Struct {
    s32 w[9];
} func_801E818C_Struct;

extern func_801E818C_Struct D_801E9AD8;

s32 func_801E818C(s32 arg0, s32 arg1) {
    func_801E818C_Struct sp1C;

    sp1C = D_801E9AD8;
    func_801C18CC(3, &sp1C);
    return 47;
}



s32 func_801E81F0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2F;
    }
    return 0x30;
}



s32 func_801E8220(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9150);
    return 49;
}



s32 func_801E8254(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x32;
    }
    return 0x31;
}


s32 func_801E8284(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x33;
}


typedef struct func_801E82AC_Struct {
    s32 w[9];
} func_801E82AC_Struct;

extern func_801E82AC_Struct D_801E9AFC;

s32 func_801E82AC(s32 arg0, s32 arg1) {
    func_801E82AC_Struct sp1C;

    sp1C = D_801E9AFC;
    func_801C18CC(3, &sp1C);
    return 52;
}



s32 func_801E8310(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x34;
    }
    return 0x35;
}


s32 func_801E8340(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x36;
}


typedef struct func_801E8368_Struct {
    s32 w[9];
} func_801E8368_Struct;

extern func_801E8368_Struct D_801E9B20;

s32 func_801E8368(s32 arg0, s32 arg1) {
    func_801E8368_Struct sp1C;

    sp1C = D_801E9B20;
    func_801C18CC(3, &sp1C);
    return 55;
}



s32 func_801E83CC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x37;
    }
    return 0x38;
}


s32 func_801E83FC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x39;
}


typedef struct func_801E8424_Struct {
    s32 w[9];
} func_801E8424_Struct;

extern func_801E8424_Struct D_801E9B44;

s32 func_801E8424(s32 arg0, s32 arg1) {
    func_801E8424_Struct sp1C;

    sp1C = D_801E9B44;
    func_801C18CC(3, &sp1C);
    return 58;
}



s32 func_801E8488(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3A;
    }
    return 0x3B;
}


s32 func_801E84B8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3C;
}


typedef struct func_801E84E0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E84E0_Struct;

extern func_801E84E0_Struct D_801E9B68;

s32 func_801E84E0(s32 arg0, s32 arg1) {
    func_801E84E0_Struct sp18;

    sp18 = D_801E9B68;
    func_801C18CC(2, &sp18);
    return 0x3D;
}



s32 func_801E8548(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3D;
    }
    return 0x3E;
}



s32 func_801E8578(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9248);
    return 63;
}



s32 func_801E85AC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x40;
    }
    return 0x3F;
}


s32 func_801E85DC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x41;
}


typedef struct func_801E8604_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8604_Struct;

extern func_801E8604_Struct D_801E9B80;

s32 func_801E8604(s32 arg0, s32 arg1) {
    func_801E8604_Struct sp18;

    sp18 = D_801E9B80;
    func_801C18CC(2, &sp18);
    return 0x42;
}



s32 func_801E866C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x42;
    }
    return 0x43;
}


s32 func_801E869C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x44;
}


typedef struct func_801E86C4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E86C4_Struct;

extern func_801E86C4_Struct D_801E9B98;

s32 func_801E86C4(s32 arg0, s32 arg1) {
    func_801E86C4_Struct sp18;

    sp18 = D_801E9B98;
    func_801C18CC(2, &sp18);
    return 0x45;
}



s32 func_801E872C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x45;
    }
    return 0x46;
}



s32 func_801E875C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9374);
    return 71;
}



s32 func_801E8790(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x48;
    }
    return 0x47;
}


s32 func_801E87C0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x49;
}


typedef struct func_801E87E8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E87E8_Struct;

extern func_801E87E8_Struct D_801E9BB0;

s32 func_801E87E8(s32 arg0, s32 arg1) {
    func_801E87E8_Struct sp18;

    sp18 = D_801E9BB0;
    func_801C18CC(2, &sp18);
    return 0x4A;
}



s32 func_801E8850(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4A;
    }
    return 0x4B;
}


s32 func_801E8880(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4C;
}


typedef struct func_801E88A8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E88A8_Struct;

extern func_801E88A8_Struct D_801E9BC8;

s32 func_801E88A8(s32 arg0, s32 arg1) {
    func_801E88A8_Struct sp18;

    sp18 = D_801E9BC8;
    func_801C18CC(2, &sp18);
    return 0x4D;
}



s32 func_801E8910(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4D;
    }
    return 0x4E;
}



s32 func_801E8940(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E93D8);
    return 79;
}



s32 func_801E8974(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x50;
    }
    return 0x4F;
}


s32 func_801E89A4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x51;
}


typedef struct func_801E89CC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E89CC_Struct;

extern func_801E89CC_Struct D_801E9BE0;

s32 func_801E89CC(s32 arg0, s32 arg1) {
    func_801E89CC_Struct sp18;

    sp18 = D_801E9BE0;
    func_801C18CC(2, &sp18);
    return 0x52;
}



s32 func_801E8A34(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x52;
    }
    return 0x53;
}


s32 func_801E8A64(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x54;
}


typedef struct func_801E8A8C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8A8C_Struct;

extern func_801E8A8C_Struct D_801E9BF8;

s32 func_801E8A8C(s32 arg0, s32 arg1) {
    func_801E8A8C_Struct sp18;

    sp18 = D_801E9BF8;
    func_801C18CC(2, &sp18);
    return 0x55;
}



s32 func_801E8AF4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x55;
    }
    return 0x56;
}



s32 func_801E8B24(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9438);
    return 87;
}



s32 func_801E8B58(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x58;
    }
    return 0x57;
}


s32 func_801E8B88(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x59;
}


typedef struct func_801E8BB0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8BB0_Struct;

extern func_801E8BB0_Struct D_801E9C10;

s32 func_801E8BB0(s32 arg0, s32 arg1) {
    func_801E8BB0_Struct sp18;

    sp18 = D_801E9C10;
    func_801C18CC(2, &sp18);
    return 0x5A;
}



s32 func_801E8C18(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5A;
    }
    return 0x5B;
}


s32 func_801E8C48(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5C;
}


typedef struct func_801E8C70_Struct {
    s32 w[9];
} func_801E8C70_Struct;

extern func_801E8C70_Struct D_801E9C28;

s32 func_801E8C70(s32 arg0, s32 arg1) {
    func_801E8C70_Struct sp1C;

    sp1C = D_801E9C28;
    func_801C18CC(3, &sp1C);
    return 93;
}



s32 func_801E8CD4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5D;
    }
    return 0x5E;
}



s32 func_801E8D04(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E94D4);
    return 95;
}



s32 func_801E8D38(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x60;
    }
    return 0x5F;
}


s32 func_801E8D68(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x61;
}


typedef struct func_801E8D90_Struct {
    s32 w[9];
} func_801E8D90_Struct;

extern func_801E8D90_Struct D_801E9C4C;

s32 func_801E8D90(s32 arg0, s32 arg1) {
    func_801E8D90_Struct sp1C;

    sp1C = D_801E9C4C;
    func_801C18CC(3, &sp1C);
    return 98;
}



s32 func_801E8DF4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x62;
    }
    return 0x63;
}


s32 func_801E8E24(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x64;
}


s32 func_801E8E4C(s32 arg0, s32 arg1) {
    return 101;
}


s32 func_801E8E5C(s32 arg0, s32 arg1) {
    return 101;
}

