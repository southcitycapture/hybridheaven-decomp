#include "common.h"

extern s32 D_801DB164;
extern s32 D_801DB168;
extern s32 D_801DB16C;
extern s32 D_801DB170;
extern s32 D_801DB174;
extern s32 D_801DB180;
extern s32 D_801DB198;
extern s32 D_801DB19C;
extern s32 D_801DB1B8;
extern s32 D_801DB1BC;
extern s32 D_801DB1C0;
extern s32 D_801DB240;
extern s32 D_801DB258;
extern s32 D_801DB25C;
extern s32 D_801DB278;
extern s32 D_801DB27C;
extern s32 D_801DB280;
extern s32 D_801DB314;
extern s32 D_801DB318;
extern s32 D_801DB31C;
extern s32 D_801E1390;
extern s32 D_801E13C0;
extern s32 D_801E1400;
extern s32 func_80010550(void *, void *);
extern s32 func_801C354C(s32);
extern s32 func_801CC540();
extern u8 *D_801DB274;
extern u8 D_8008DA88[];
extern u8 D_801BC025[];
extern u8 D_801BC3D8[];
extern u8 D_801D24D8[];
extern u8 D_801D29C4[];
extern u8 D_801E1398;
extern u8 D_801E13C8;
extern u8 D_801E1408;
extern u8 D_801E1440;
extern void func_800058DC(void *, void (*)(void));
extern void func_80006214();
extern void func_8012D844(void *, s32, s32);
extern void func_801C3370(s32, s32, s32, u8, s32, s32, s32, s32);
extern void func_801D17D0();
extern void func_801D182C();
extern void func_801D1C34();
extern void func_801D1C90();
extern void func_801D2304();
extern void func_801D2360();
extern void func_801D2810(void *);
extern void func_801D29C4();


extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

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



void func_801D1BA0(s32 arg0) {
    func_80006214();
    D_801DB174 = func_801C354C(arg0) == 0;
}



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



void func_801D2094(s32 arg0) {
    D_801DB1B8 = arg0;
}



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


void func_801D2304(struct func_801D2304_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x32, 0);
        func_800058DC(arg0, func_801D2360);
        return;
    }
    func_800058DC(arg0, func_801D2304);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D2360.s")

struct func_801D27D8_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801D27D8_Struct D_801E1418;

struct func_801D24D8_StructA { s32 a, b, c; };
struct func_801D24D8_StructB { s32 a, b; f32 c; };
struct func_801D24D8_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D24D8_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D24D8_StructR { u8 pad[4]; struct func_801D24D8_StructS *u4; };
struct func_801D24D8_StructS { u8 pad[0x2C]; struct func_801D24D8_StructP *u2C; };
struct func_801D24D8_StructT { u8 pad[0x5C]; struct func_801D24D8_StructQ *u5C; };
extern s32 func_80011140(void *, void *, struct func_801D24D8_StructB, u32);
extern void func_8013A28C(void *, struct func_801D24D8_StructA);

void func_801D24D8(struct func_801D24D8_StructT *arg0, struct func_801D24D8_StructR *arg1) {
    struct func_801D24D8_StructB *p;
    struct func_801D24D8_StructQ *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D24D8);
        return;
    }
    if (D_801DB258 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D24D8_StructA *)D_801DB258);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DB258 = 0;
    }
    p = (struct func_801D24D8_StructB *)D_801DB25C;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DB25C = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DB280 = 1;
        } else {
            D_801DB280 = 0;
        }
        *(struct func_801D24D8_StructA *)&D_801E1418 = *(struct func_801D24D8_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D24D8_StructA *)&D_801E1408 = *(struct func_801D24D8_StructA *)&D_801BC025[3];
    }
    if (D_801DB278 != 0) {
        D_801DB274[0x22] = D_801DB27C;
    }
    if (D_801DB240 != 0) {
        func_801D2810(arg0);
    }
}



void func_801D2704(s32 arg0) {
    D_801DB278 = arg0;
}



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


u8 *func_801D27CC(void) {
    return &D_801E1408;
}




s32 func_801D27D8(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1418.unk0) {
        return 0;
    }
    return D_801E1418.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1760/func_801D2810.s")



void func_801D2970(s32 arg0, s32 arg1) {
    D_801DB314 = 0;
    D_801DB318 = 0;
    D_801DB31C = 1;
    func_8013B570(arg0, 0x2F, 0, 4, &func_801D29C4);
}

struct func_801D2A0C_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D2A0C_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D2A0C_StructR { u8 pad[4]; struct func_801D2A0C_StructS *u4; };
struct func_801D2A0C_StructS { u8 pad[0x2C]; struct func_801D2A0C_StructP *u2C; };
struct func_801D2A0C_StructT { u8 pad[0x5C]; struct func_801D2A0C_StructQ *u5C; };
void func_801D2A0C(struct func_801D2A0C_StructT *arg0, struct func_801D2A0C_StructR *arg1);


void func_801D29C4(struct func_801D17D0_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D2A0C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D29C4);
}

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

