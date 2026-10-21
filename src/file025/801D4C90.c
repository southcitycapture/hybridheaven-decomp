#include "common.h"


extern s32 D_801DB640;
extern s32 D_801DB648;
extern s32 D_801DB660;
extern s32 D_801DB664;
extern s32 D_801DB684;
extern s32 D_801DB688;
extern void func_801D4D48();
s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8013B570(s32, s32, s32, s32, void *);

void func_801D4C90(s32 arg0, s32 arg1) {
    D_801DB640 = arg0;
    D_801DB660 = 0;
    D_801DB664 = 0;
    D_801DB684 = 1;
    D_801DB648 = 0;
    D_801DB688 = func_801CC654(arg0, 0x118, 0, 0x118, 3, 0x118, 0, 0x118, 3, 1, 0, 0);
    func_8013B570(arg0, 0x11B, 0, 4, (void *)func_801D4D48);
}


struct func_801D4D48_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801D4DA4();

void func_801D4D48(struct func_801D4D48_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x118, 0);
        func_800058DC(arg0, func_801D4DA4);
        return;
    }
    func_800058DC(arg0, func_801D4D48);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D4C90/func_801D4DA4.s")

extern s32 D_801DB67C;
extern s32 D_801DB680;
extern u8 D_801E1630;
struct func_801D5250_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801D5250_Struct D_801E1640;
extern s32 D_801DB644;
extern u8 D_801E1650;
extern u8 D_801E1660;
extern void func_801D52B8(s32 arg0);
extern void func_80006214(void *);
extern u8 D_8008DA88[];
struct func_801D4F1C_V { s32 a; s32 b; s32 c; };
struct func_801D4F1C_O { u8 pad[0x5C]; struct func_801D4F1C_V v; };
struct func_801D4F1C_P { u8 pad[0x2C]; struct func_801D4F1C_O *p2C; };
struct func_801D4F1C_S { u8 pad[0x5C]; u8 *p5C; };
struct func_801D4F1C_A { u8 pad[0x4]; struct func_801D4F1C_P *p4; };
extern s32 func_801CC540();
extern void func_8013A28C(u8 *, struct func_801D4F1C_V);
extern void func_8013A334();
extern s32 func_80011140(void *, void *, struct func_801D4F1C_V, u32);
extern s32 func_80010550();
extern u8 D_801BC025[];
extern u8 *D_801DB678;
extern u8 D_801D4F1C[];

void func_801D4F1C(struct func_801D4F1C_S *arg0, struct func_801D4F1C_A *arg1) {
    u8 *p;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D4F1C);
        return;
    }
    if (D_801DB660 != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D4F1C_V *)D_801DB660);
        p = arg0->p5C;
        p[0x76] = 1;
        D_801DB660 = 0;
    }
    p = (u8 *)D_801DB664;
    if (p != 0) {
        if (func_80011140(arg1, arg0->p5C, *(struct func_801D4F1C_V *)p, (u32)*(f32 *)(p + 8)) != 0) {
            D_801DB664 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->p5C) != 0) {
            D_801DB684 = 1;
        } else {
            D_801DB684 = 0;
        }
        *(struct func_801D4F1C_V *)&D_801E1640 = arg1->p4->p2C->v;
        *(struct func_801D4F1C_V *)&D_801E1630 = *(struct func_801D4F1C_V *)(D_801BC025 + 3);
        D_801DB644 = (s32)arg1;
        func_8013A334(&D_801E1650, arg1, arg0->p5C, 0xF);
        func_8013A334(&D_801E1660, arg1, arg0->p5C, 0x12);
    }
    if (D_801DB67C != 0) {
        D_801DB678[0x22] = D_801DB680;
    }
    if (D_801DB648 != 0) {
        func_801D52B8((s32)arg0);
    }
}



void func_801D517C(s32 arg0) {
    D_801DB67C = arg0;
}



void func_801D5188(s32 arg0) {
    D_801DB680 = arg0;
}



s32 func_801D5194(void) {
    return D_801DB664 != 0;
}



s32 func_801D51A4(void) {
    if (D_801DB664 != 0) {
        return 0;
    }
    if (D_801DB660 != 0) {
        return 0;
    }
    return D_801DB684;
}


u8 *func_801D51E4(void) {
    return &D_801E1630;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D4C90/func_801D51F0.s")




s32 func_801D5250(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1640.unk0) {
        return 0;
    }
    return D_801E1640.unk4 == arg1;
}



s32 func_801D5288(void) {
    return D_801DB640;
}



s32 func_801D5294(void) {
    return D_801DB644;
}


u8 *func_801D52A0(void) {
    return &D_801E1650;
}


u8 *func_801D52AC(void) {
    return &D_801E1660;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D4C90/func_801D52B8.s")

