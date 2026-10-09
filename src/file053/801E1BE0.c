#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E1C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E1CEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E1DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E1EDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2088.s")


extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801E9904;
extern f32 D_801E9908;
extern f32 D_801E990C;
extern f32 D_801E9910;
extern f32 D_801E9914;

s32 func_801E20DC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E9904);
    func_8038BD50(D_801E9908, D_801E990C, 0xC3E20000);
    D_8038BD88(D_801E9910, D_801E9914, 0xC3E8F333);
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E21E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E22A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E22B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E22C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E238C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E239C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E23AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E23BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E23CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E23DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E23EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2DE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2E38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2EF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2F08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2F38.s")


s32 func_801C1088(s32 a0, s32 a1, s32 a2);
void func_801C10D8(s32 a0, s32 a1);
s32 func_801C1134(s32 a0, s32 a1);

struct func_801E2F88_Struct2 {
    u8 pad0[4];
    f32 unk4;
};

struct func_801E2F88_Struct1 {
    u8 pad0[0x30];
    struct func_801E2F88_Struct2 *unk30;
};

struct func_801E2F88_Struct0 {
    u8 pad0[0x24];
    struct func_801E2F88_Struct1 *unk24;
};

extern struct func_801E2F88_Struct0 *D_8038D8D0;

s32 func_801E2F88(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 var_ft0;
    u32 temp_v0;

    temp_v0 = func_801C1134(3, 0);
    var_ft1 = (f32) temp_v0;
    var_ft0 = var_ft1 / 10.0f;
    D_8038D8D0->unk24->unk30->unk4 = 20.0f * var_ft0;
    if (func_801C1088(3, 0, 0xA) != 0) {
        func_801C10D8(3, 0);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3038.s")


extern s32 func_801C1000(s32 arg0, s32 arg1);

s32 func_801E307C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x325A9F) != 0) {
        func_801C1000(3, 1);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E30C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E31EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E31FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E320C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E321C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E322C.s")


extern void func_801C84E0(void);

s32 func_801E3270(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x13D61F) != 0) {
        func_801C84E0();
        return 2;
    }
    return 1;
}


extern void func_801C851C(f32 f0, f32 f1, s32 a2, s32 a3);

s32 func_801E32BC(s32 arg0, s32 arg1) {
    func_801C851C(0.0f, 0.0f, 0x422C6666, 0x41200000);
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E32F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3318.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3348.s")


extern s32 D_801E8184;

s32 func_801E338C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x325A9F) != 0) {
        D_801E8184 = 0;
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E33D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E359C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E35AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E35BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E35CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E35DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E35EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E382C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E39F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E3FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E41C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4284.s")


extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E4294(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDA3360) != 0) {
        func_801CC4D8(0, 0x0348007A, 0, 0, 50.0f);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E42F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4350.s")


s32 func_801E4360(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01173C5F) != 0) {
        func_801CC4D8(0, 0x019100CD, 0, 0, 5.0f);
        return 8;
    }
    return 7;
}


s32 func_801CE274(void);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E43C4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x019100CD, 0, 0, 3.0f);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E441C.s")


typedef struct func_801E442C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E442C_Struct;

extern func_801E442C_Struct *func_801BF6B0(s32 arg0);

s32 func_801E442C(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 3) {
        func_801CC4D8(0, 0x0168003F, 0, 0, 5.0f);
        return 0xB;
    }
    return 0xA;
}


s32 func_801E4490(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0168003F, 0, 0x1100, 1.0f);
        func_801C1000(4, 0);
        return 0xC;
    }
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E44F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4630.s")


s32 func_801E46C8(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x0168003F, 0, 0, 5.0f);
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4774.s")


s32 func_801E4824(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 5) {
        func_801CC4D8(0, 0x0168003F, 0, 0, 5.0f);
        return 0x12;
    }
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E48EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4AB0.s")


s32 func_801E4B04(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x01B8003C, 0, 0, 5.0f);
    return 0x1A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4B4C.s")


extern s32 func_801CE284();

s32 func_801E4BA4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0x1C;
    }
    return 0x1B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4CFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4D1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4DA0.s")



s32 func_801E4DB0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(0, 0x01B8001B, 0, 0, 5.0f);
        return 0x27;
    }
    return 0x26;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4E74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4FE0.s")


extern void func_8038D28C(s32 arg0);

s32 func_801E5078(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_8038D28C(0x213);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0x2B;
    }
    return 0x2A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E50DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5260.s")


s32 func_801E5270(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 4) {
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E52B0.s")


s32 func_801CEDE4();
void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E52F8(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x0410002F, 0, 0, 30.0f);
        return 6;
    }
    return 5;
}


extern s32 func_801CEDD4();
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E5350(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x0410002F, 0, 0, 5.0f);
        return 7;
    }
    return 6;
}


s32 func_801E53A8(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80057, 0, 0, 15.0f);
        return 8;
    }
    return 7;
}


s32 func_801E5400(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80057, 0, 0, 3.0f);
        return 9;
    }
    return 8;
}


s32 func_801CEDE4(void);
s32 func_801CEE30(s32 a0, s32 a1);
void func_8038D33C(f32 fa0, f32 fa1, s32 a2, s32 a3, f32 f14, f32 f16);
extern f32 D_801E9980;
extern u8 func_801DAAF0[];

s32 func_801E5458(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    if (func_801CEDE4() != 0) {
        return 0xA;
    }
    if ((func_801CEE30(0x02A80057, 0x12) != 0) || (func_801CEE30(0x02A80057, 0x33) != 0) || (func_801CEE30(0x02A80057, 0x3F) != 0) || (func_801CEE30(0x02A80057, 0x48) != 0)) {
        temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(temp_v0 + 0x4), *(f32 *)(temp_v0 + 0x8), *(s32 *)(temp_v0 + 0xC), 0x67A, D_801E9980, 1.0f);
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5520.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5540.s")



s32 func_801E5590(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004E, 0, 0, 5.0f);
        return 0xE;
    }
    return 0xD;
}


s32 func_801CEDE4();
void func_801CED5C(s32 arg0);
void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E55E8(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0xF;
    }
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E564C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E56A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E56F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E574C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E579C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E57F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5858.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E58B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5904.s")


extern void func_801CED5C(s32 arg0);

s32 func_801E5958(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8004F, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x19;
}


s32 func_801E59A8(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004F, 0, 0, 5.5f);
        return 0x1A;
    }
    return 0x19;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5A64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5ABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5B10.s")


s32 func_801E5B64(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80046, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x1F;
}


s32 func_801E5BB4(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80046, 0, 0, 3.0f);
        return 0x20;
    }
    return 0x1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5C70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5CC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5D1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5E7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E5FCC.s")


s32 func_801E6024(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0x2D;
    }
    return 0x2C;
}


s32 func_801E607C(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CED5C(0);
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0x2E;
    }
    return 0x2D;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E60E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E61D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E62EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6350.s")


s32 func_801E6360(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(1, 0x02A80050, 0, 0, 5.0f);
        return 0x38;
    }
    return 0x37;
}



s32 func_801E63C0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80050, 0, 0, 3.0f);
        func_801C1000(4, 1);
        return 0x39;
    }
    return 0x38;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E64CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6524.s")


extern void func_801BF628(s32 a0, void *a1);
extern s32 D_801E9434;

typedef struct func_801E6534_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad_10[0x1F8 - 0x10];
} func_801E6534_Struct;

s32 func_801E6534(s32 arg0, s32 arg1) {
    func_801E6534_Struct sp18;

    func_801BF628(4, &sp18);
    if (sp18.unkC >= 2) {
        D_801E9434 = 1;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E66E4.s")


struct func_801E66F4_Struct {
    u8 pad0[0x4];
    f32 unk4;
    struct func_801E66F4_Struct *unk8;
    u8 pad_c[0x18];
    struct func_801E66F4_Struct *unk24;
    u8 pad_28[0x4];
    struct func_801E66F4_Struct *unk2C;
};

extern void func_801C78C0(void);
extern f32 D_801E9990;

void func_801E66F4(void) {
    func_801C78C0();
    D_801E9990 = ((struct func_801E66F4_Struct *)func_801DAAF0)->unk24->unk8->unk8->unk8->unk24->unk2C->unk4;
}


extern f32 func_801C78F8();

void func_801E6738(void) {
    f32 v;

    v = func_801C78F8() - 0.5f;
    ((struct func_801E66F4_Struct *) func_801DAAF0)->unk24->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E9990 + v;
}



s32 func_801E6790(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x13D61F) != 0) {
        func_801C1000(4, 2);
        func_8038D28C(0x212);
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E67E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E691C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6AC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6AE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6B3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6B5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6B6C.s")


extern void D_8038C97C(s32 a0, s32 a1, s32 a2, s32 a3, s32 s4, s32 s5, s32 s6);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E6B7C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x325A9F) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6C20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6C40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6C84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6CB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6E04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6E7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6EAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6FA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E6FF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E70B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E71B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E71DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E729C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E72EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E731C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E73A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E73F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E74B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E74E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E751C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E754C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E75DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E760C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E76B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E76E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7740.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E77C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E77E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E789C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E78CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E78F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E7974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E799C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E79AC.s")

