#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E1C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E1D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E1E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E1EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E1FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E20B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E21A0.s")


extern s32 func_8038BED4();

s32 func_801E2260(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDFCBAA) != 0) {
        func_8038BED4();
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E22AC.s")


s32 func_801E2388(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0119C76B) != 0) {
        func_8038BED4();
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E23D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E24AC.s")


s32 func_801E2588(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x014EAD16) != 0) {
        func_8038BED4();
        return 0xE;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E25D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E26C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E27AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2888.s")



s32 func_801E2964(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1D8838B) != 0) {
        func_8038BED4();
        return 0x13;
    }
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E29B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2A94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2C5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2DC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2E1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2ED8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E2F34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E302C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E303C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3114.s")


extern void **D_8038D8D0;

s32 func_801E3690(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x013A54C0) != 0) {
        ((u8 *)*D_8038D8D0)[0x22] = 1;
        return 3;
    }
    return 2;
}


s32 func_801E36E4(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64) 0x014EAD16) != 0) {
        func_801C0D04(3, 0);
        return 4;
    }
    return 3;
}


struct func_801E3730_Struct2 {
    u8 pad0[8];
    f32 unk8;
};

struct func_801E3730_Struct1 {
    u8 pad0[0x30];
    struct func_801E3730_Struct2 *unk30;
};

extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern s32 func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
extern f64 func_80034C24(u64 arg0);
extern f64 D_801E87D8;
extern f32 D_801E87E0;

s32 func_801E3730(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 0, 0x41108888) != 0) {
        func_801C0EB0(3, 0);
        return 5;
    }
    temp_ret = func_801C0F18(3, 0);
    ((struct func_801E3730_Struct1 *) *D_8038D8D0)->unk30->unk8 = ((((f32) (func_80034C24(temp_ret) / D_801E87D8)) / D_801E87E0) * -120.0f) + 145.0f;
    return 4;
}


s32 func_801E37E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01F7080B) != 0) {
        func_801C0D04(3, 0);
        return 6;
    }
    return 5;
}


struct func_801E382C_Struct_B {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E382C_Struct_A {
    u8 pad[0x30];
    struct func_801E382C_Struct_B *unk30;
};

extern f64 D_801E87E8;

s32 func_801E382C(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f32 div;

    if (func_801C0DE4(3, 0, 0x40800000) != 0) {
        func_801C0EB0(3, 0);
        func_801C0D04(3, 0);
        return 7;
    }
    temp_ret = func_801C0F18(3, 0);
    div = 4.0f;
    ((struct func_801E382C_Struct_A *) *D_8038D8D0)->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E87E8)) / div) * 122.0f + 25.0f);
    return 6;
}


extern f64 D_801E87F0;

s32 func_801E38E4(s32 arg0, s32 arg1) {
    f32 divisor;

    divisor = 4.0f;
    if (func_801C0DE4(3, 0, 0x40800000) != 0) {
        func_801C0EB0(3, 0);
        return 8;
    }
    *(f32 *) (*(s32 *) ((s32) *(s32 *) D_8038D8D0 + 0x30) + 8) = (f32) ((((f32) (func_80034C24(func_801C0F18(3, 0)) / D_801E87F0) / divisor) * 121.0f) + 147.0f);
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E39A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E39E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3A38.s")


extern void func_8038D28C(s32 a0);
extern f64 D_801E87F8;
extern f32 D_801E8800;

s32 func_801E3A90(s32 arg0, s32 arg1) {
    if (func_801C0DE4(3, 1, 0x41108888) != 0) {
        func_801C0EB0(3, 1);
        func_8038D28C(0x243);
        return 4;
    }
    *(f32 *) (*(u8 **) (*(u8 **) ((u8 *) D_8038D8D0 + 4) + 0x30) + 8) = (f32) ((((f32) (func_80034C24(func_801C0F18(3, 1)) / D_801E87F8)) / D_801E8800) * -120.0f + 145.0f);
    return 3;
}



s32 func_801E3B48(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1F7080BULL) != 0) {
        func_8038D28C(0x245);
        func_801C0D04(3, 1);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3BA0.s")


struct func_801E3C58_Struct1 {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E3C58_Struct2 {
    u8 pad[0x30];
    struct func_801E3C58_Struct1 *unk30;
};

struct func_801E3C58_Struct0 {
    u8 pad[0x4];
    struct func_801E3C58_Struct2 *unk4;
};

extern f64 D_801E8810;

s32 func_801E3C58(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f32 divisor;

    divisor = 4.0f;
    if (func_801C0DE4(3, 1, 0x40800000) != 0) {
        func_801C0EB0(3, 1);
        return 7;
    }
    temp_ret = func_801C0F18(3, 1);
    ((struct func_801E3C58_Struct0 *) D_8038D8D0)->unk4->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E8810) / divisor) * 121.0f) + 147.0f);
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3DDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3DFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3E50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3E70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3EB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E3F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E415C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E4184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E41AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E41BC.s")


void func_801C4028(s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801E4200(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        func_801C4028(1, 0x42680000, 0x428E0000, 0xC2500000, 0, 0x13A, 0, 3.0f, 3.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x3C);
        return 2;
    }
    return 1;
}


extern s32 D_801E82F4;

s32 func_801E42A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x50DF20) != 0) {
        func_801C4028(1, 0xC25C0000, 0x42AA0000, 0x3F800000, 0, 0x54, 0, 3.0f, 3.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C4028(1, 0xC2540000, 0x42880000, 0xC0400000, 0, 0x54, 0, 4.0f, 4.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C7F40();
        D_801E82F4 = 0;
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E43C8.s")


s32 func_801E45BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB698CB) != 0) {
        func_801C4028(1, 0x41C80000, 0x41900000, 0xC2080000, 0, 0xD, 0, 5.0f, 5.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E4664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E4790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E4944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E4A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E4B84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E4BC0.s")


extern s32 func_801C7F40();

s32 func_801E4BFC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01AABCCB) != 0) {
        func_801C4028(1, 0xC23C0000, 0x426C0000, 0x41200000, 0x10E, 0, 0, 3.0f, 3.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C7F40();
        return 0xC;
    }
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E4CAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E4E38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E55E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E560C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E561C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E562C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E563C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E564C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E565C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E56A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E56D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5B48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5B58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5B68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5B98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5BA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5BC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5C1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5E4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5EA4.s")


extern s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E5EB4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x325A9F) != 0) {
        func_801CC4D8(0, 0x03480043, 0, 0, 5.0f);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5F48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E5F58.s")

extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801CE274();

s32 func_801E5FBC(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480044, 0, 0, 4.0f);
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6014.s")



s32 func_801E6024(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x50DF20) != 0) {
        func_801CC4D8(0, 0x03480044, 0, 0, 2.0f);
        return 0xD;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E60E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E60F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E615C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E649C.s")


s32 func_801E64AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD51D4B) != 0) {
        func_801CC4D8(0, 0x01B80024, 0, 0, 5.0f);
        return 0x13;
    }
    return 0x12;
}



s32 func_801E6510(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B80024, 0, 0, 2.0f);
        return 0x14;
    }
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6580.s")


s32 func_801E6688(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDFCBAA) != 0) {
        func_801CC470(0, 0x03480066, 0, 0, 3.0f);
        return 0x17;
    }
    return 0x16;
}


extern s32 func_801CE284(void);
extern s32 D_801E83B4;

s32 func_801E66EC(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007B, 0, 0, 5.0f);
        D_801E83B4 = 0;
        return 0x18;
    }
    return 0x17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E674C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E68A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E68B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E68C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E68D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E68E0.s")

extern s32 func_801DAAF0[];

s32 func_801E68F0(s32 arg0, s32 arg1)
{
  u8 *new_var;
  u8 **p;
  new_var = (u8 *) func_801DAAF0;
  if (func_801C0B8C(0x019D012B) != 0)
  {
    p = (u8 **) (new_var + 0x24);
    if (!p)
    {
    }
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 8))) + 0x24))) + 0x2C))) + 4)) = -28.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 8))) + 0x24))) + 0x2C))) + 8)) = 0.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 8))) + 0x24))) + 0x2C))) + 12)) = 31.0f;
    *((u16 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 8))) + 0x24))) + 0x2C))) + 0x12)) = 0x1C00;
    func_801CC470(0, 0x03480046, 0, 1, 1.0f);
    return 0x24;
  }
  return 0x23;
}



s32 func_801E69C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01AABCCB) != 0) {
        func_801CC470(0, 0x03480046, 0, 0x100, 5.0f);
        return 0x25;
    }
    return 0x24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6A28.s")


extern s32 D_801E83BC;

s32 func_801E6A38(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01D8838B) != 0) {
        func_801CC4D8(0, 0x03480047, 0, 0, 15.0f);
        D_801E83B4 = 0;
        D_801E83BC = 0;
        return 0x27;
    }
    return 0x26;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6D98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6DDC.s")


extern f32 D_801E88B8;
extern f32 D_801E88BC;
extern f32 D_801E88C0;

s32 func_801E6E84(s32 arg0, s32 arg1)
{
  u8 **pp;
  if (func_801C0B8C(0x013A54C0) != 0)
  {
    pp = (u8 **) (&func_801DAAF0[9]);
    pp += 0;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) pp)) + 0x8))) + 0x8))) + 0x24))) + 0x2C))) + 0x4)) = D_801E88B8;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) pp)) + 0x8))) + 0x8))) + 0x24))) + 0x2C))) + 0x8)) = D_801E88BC;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) pp)) + 0x8))) + 0x8))) + 0x24))) + 0x2C))) + 0xC)) = D_801E88C0;
    *((s16 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) pp)) + 0x8))) + 0x8))) + 0x24))) + 0x2C))) + 0x12)) = 0xC71;
    func_801CC470(1, 0x02A80039, 0, 0x100, 10.0f);
    return 3;
  }
  return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E6FE4.s")


s32 func_801C0D04(s32 arg0, s32 arg1);
extern s32 D_801E8468;
extern f32 D_801E846C;

s32 func_801E7158(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01F7080B) != 0) {
        D_801E8468 = 0;
        D_801E846C = *(f32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)((u8 *)func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8);
        func_801CC4D8(1, 0x02A80039, 0, 0, 5.0f);
        func_801C0D04(4, 1);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E71F4.s")


extern f64 D_801E8900;

s32 func_801E7338(s32 arg0, s32 arg1)
{
  f64 new_var;
  u64 temp_ret;
  volatile unsigned long long pad;
  f32 four;
  if (func_801C0B8C(0x2711A0B) != 0)
  {
    func_801C0EB0(4, 1);
    return 8;
  }
  temp_ret = func_801C0F18(4, 1);
  four = 4.0f;
  new_var = func_80034C24(temp_ret);
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (((u8 *) func_801DAAF0) + 0x24))) + 8))) + 8))) + 0x24))) + 0x2C))) + 8)) = (f32) (((268.0f - D_801E846C) * (((f32) (new_var / D_801E8900)) / four)) + D_801E846C);
  return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E73F0.s")


s32 func_801E7400(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x493E0) != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E743C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E744C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E7488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E74E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file040/801E1BE0/func_801E7508.s")

