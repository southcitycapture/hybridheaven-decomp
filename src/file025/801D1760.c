#include "common.h"


extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_801D17D0();
extern u8 D_801BC3D8[];
extern s32 D_801DB174;
extern s32 D_801DB164;
extern s32 D_801DB168;
extern s32 D_801DB16C;
extern s32 D_801DB170;
extern s32 D_801E1390;

void func_801D1760(s32 arg0, s32 arg1) {
    D_801E1390 = arg0;
    D_801DB164 = 0;
    D_801DB168 = 0;
    D_801DB16C = 1;
    D_801DB170 = 0;
    D_801DB174 = 0;
    func_8013B570(arg0, 0x2B, 0, 4, func_801D17D0);
    *(s16 *)&D_801BC3D8[0x3B2] = 0;
}


struct func_801D17D0_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801D182C();

void func_801D17D0(struct func_801D17D0_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x28, 0);
        func_800058DC(arg0, func_801D182C);
        return;
    }
    func_800058DC(arg0, func_801D17D0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D182C.s")



s32 func_801D1A64(void) {
    return D_801DB168 != 0;
}



s32 func_801D1A74(void) {
    if (D_801DB168 != 0) {
        return 0;
    }
    if (D_801DB164 != 0) {
        return 0;
    }
    return D_801DB16C;
}

extern u8 D_801E1398;

u8 *func_801D1AB4(void) {
    return &D_801E1398;
}


struct func_801D1AC0_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D1AC0_Struct D_801E13A8;

s32 func_801D1AC0(s32 arg0, u16 arg1) {
    if (arg0 != D_801E13A8.unk0) {
        return 0;
    }
    return D_801E13A8.unk4 == arg1;
}



void func_801D1AF8(s32 arg0) {
    D_801DB170 = arg0;
}



s32 func_801D1B04(void) {
    return D_801DB170;
}


extern void func_80006214(s32);
extern void func_801C3370(s32, s32, s32, u8, s32, s32, s32, s32);

void func_801D1B10(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801E1390);
        func_801C3370(D_801E1390, arg1, arg2, arg3, (s32) arg4, 1, arg5, 0);
        D_801DB174 = 1;
        return;
    }
    D_801DB174 = 0;
}



s32 func_801D1B90(void) {
    return D_801DB174 == 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D1BA0.s")


extern s32 D_801E13C0;
extern s32 D_801DB198;
extern s32 D_801DB19C;
extern s32 D_801DB1C0;
extern s32 D_801DB180;
extern void func_801D1C34();

void func_801D1BD0(s32 arg0, s32 arg1) {
    D_801E13C0 = arg0;
    D_801DB198 = 0;
    D_801DB19C = 0;
    D_801DB1C0 = 1;
    D_801DB180 = 0;
    func_8013B570(arg0, 0x31, 0, 4, func_801D1C34);
}


struct func_801D1C34_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_801D1C90();

void func_801D1C34(struct func_801D1C34_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x31, 0);
        func_800058DC(arg0, func_801D1C90);
        return;
    }
    func_800058DC(arg0, func_801D1C34);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D1C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D1E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D2034.s")


extern s32 D_801DB1B8;

void func_801D2094(s32 arg0) {
    D_801DB1B8 = arg0;
}


extern s32 D_801DB1BC;

void func_801D20A0(s32 arg0) {
    D_801DB1BC = arg0;
}



s32 func_801D20AC(void) {
    return D_801DB19C != 0;
}



s32 func_801D20BC(void) {
    if (D_801DB19C != 0) {
        return 0;
    }
    if (D_801DB198 != 0) {
        return 0;
    }
    return D_801DB1C0;
}

extern u8 D_801E13C8;

u8 *func_801D20FC(void) {
    return &D_801E13C8;
}


struct func_801D2108_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D2108_Struct D_801E13D8;

s32 func_801D2108(s32 arg0, u16 arg1) {
    if (arg0 != D_801E13D8.unk0) {
        return 0;
    }
    return D_801E13D8.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D2140.s")


extern s32 D_801E1400;
extern s32 D_801DB258;
extern s32 D_801DB25C;
extern s32 D_801DB280;
extern s32 D_801DB240;
extern void func_801D2304();

void func_801D22A0(s32 arg0, s32 arg1) {
    D_801E1400 = arg0;
    D_801DB258 = 0;
    D_801DB25C = 0;
    D_801DB280 = 1;
    D_801DB240 = 0;
    func_8013B570(arg0, 0x32, 0, 4, func_801D2304);
}


struct func_801D2304_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_801D2360();

void func_801D2304(struct func_801D2304_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x32, 0);
        func_800058DC(arg0, func_801D2360);
        return;
    }
    func_800058DC(arg0, func_801D2304);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D2360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D24D8.s")


extern s32 D_801DB278;

void func_801D2704(s32 arg0) {
    D_801DB278 = arg0;
}


extern s32 D_801DB27C;

void func_801D2710(s32 arg0) {
    D_801DB27C = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D271C.s")



s32 func_801D277C(void) {
    return D_801DB25C != 0;
}



s32 func_801D278C(void) {
    if (D_801DB25C != 0) {
        return 0;
    }
    if (D_801DB258 != 0) {
        return 0;
    }
    return D_801DB280;
}

extern u8 D_801E1408;

u8 *func_801D27CC(void) {
    return &D_801E1408;
}


struct func_801D27D8_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D27D8_Struct D_801E1418;

s32 func_801D27D8(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1418.unk0) {
        return 0;
    }
    return D_801E1418.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D2810.s")


extern s32 D_801DB314;
extern s32 D_801DB318;
extern s32 D_801DB31C;
extern void func_801D29C4();

void func_801D2970(s32 arg0, s32 arg1) {
    D_801DB314 = 0;
    D_801DB318 = 0;
    D_801DB31C = 1;
    func_8013B570(arg0, 0x2F, 0, 4, &func_801D29C4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D29C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D2A0C.s")



s32 func_801D2C00(void) {
    return D_801DB318 != 0;
}



s32 func_801D2C10(void) {
    if (D_801DB318 != 0) {
        return 0;
    }
    if (D_801DB314 != 0) {
        return 0;
    }
    return D_801DB31C;
}

extern u8 D_801E1440;

u8 *func_801D2C50(void) {
    return &D_801E1440;
}


struct func_801D2C5C_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D2C5C_Struct D_801E1450;

s32 func_801D2C5C(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1450.unk0) {
        return 0;
    }
    return D_801E1450.unk4 == arg1;
}

