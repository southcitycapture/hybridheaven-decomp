#include "common.h"


extern s32 D_801DB710;
extern s32 D_801DB730;
extern s32 D_801DB734;
extern s32 D_801DB754;
extern s32 D_801DB718;
extern void func_801D5484();

void func_801D5420(s32 arg0, s32 arg1) {
    D_801DB710 = arg0;
    D_801DB730 = 0;
    D_801DB734 = 0;
    D_801DB754 = 1;
    D_801DB718 = 0;
    func_8013B570(arg0, 0x34, 0, 4, func_801D5484);
}


struct func_801D5484_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801D54E0();

void func_801D5484(struct func_801D5484_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x34, 0);
        func_800058DC(arg0, func_801D54E0);
        return;
    }
    func_800058DC(arg0, func_801D5484);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D5420/func_801D54E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D5420/func_801D5658.s")


extern s32 D_801DB74C;

void func_801D58C4(s32 arg0) {
    D_801DB74C = arg0;
}


extern s32 D_801DB750;

void func_801D58D0(s32 arg0) {
    D_801DB750 = arg0;
}



s32 func_801D58DC(void) {
    return D_801DB734 != 0;
}



s32 func_801D58EC(void) {
    if (D_801DB734 != 0) {
        return 0;
    }
    if (D_801DB730 != 0) {
        return 0;
    }
    return D_801DB754;
}

extern u8 D_801E1680;

u8 *func_801D592C(void) {
    return &D_801E1680;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D5420/func_801D5938.s")


struct func_801D5998_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D5998_Struct D_801E1690;

s32 func_801D5998(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1690.unk0) {
        return 0;
    }
    return D_801E1690.unk4 == arg1;
}



s32 func_801D59D0(void) {
    return D_801DB710;
}


extern s32 D_801DB714;

s32 func_801D59DC(void) {
    return D_801DB714;
}

extern u8 D_801E16A0;

u8 *func_801D59E8(void) {
    return &D_801E16A0;
}

extern u8 D_801E16B0;

u8 *func_801D59F4(void) {
    return &D_801E16B0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D5420/func_801D5A00.s")


extern s32 func_8013B570();
extern s32 D_801DB7E0;
extern s32 D_801DB7F8;
extern s32 D_801DB7FC;
extern s32 D_801DB804;
extern void func_801D5BBC();

void func_801D5B60(s32 arg0, s32 arg1) {
    D_801DB7F8 = 0;
    D_801DB7FC = 0;
    D_801DB804 = 1;
    D_801DB7E0 = 0;
    func_8013B570(arg0, 0x2D, 0, 4, func_801D5BBC);
}


struct func_801D5BBC_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_801D5C18();
extern u8 D_801D5BBC[];

void func_801D5BBC(struct func_801D5BBC_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x2D, 0);
        func_800058DC(arg0, func_801D5C18);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D5BBC);
}

extern u8 D_801E16D0;

struct func_801D5C18_Struct { s32 a; s32 b; s32 c; };
struct func_801D5C18_StructF { s32 a; s32 b; f32 c; };
struct func_801D5C18_Obj { u8 pad[0x5C]; u8 *unk5C; };

extern s32 func_801CC540();
extern void func_80006214(void *);
extern s32 func_80010550(s32, void *);
extern s32 func_80011140(s32, void *, struct func_801D5C18_Struct, u32);
extern void func_8013A28C(void *, struct func_801D5C18_Struct);
extern void func_801D5E9C(void *);
extern u8 D_8008DA88[];
extern u8 D_801D5C18[];
extern u8 D_801BC025[];

void func_801D5C18(struct func_801D5C18_Obj *arg0, s32 arg1) {
    struct func_801D5C18_StructF *p;
    u8 *q;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D5C18);
        return;
    }
    if (D_801DB7F8 != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D5C18_Struct *)D_801DB7F8);
        q = arg0->unk5C;
        q[0x76] = 1;
        D_801DB7F8 = 0;
    }
    p = (struct func_801D5C18_StructF *)D_801DB7FC;
    if (p != 0) {
        if (func_80011140(arg1, arg0->unk5C, *(struct func_801D5C18_Struct *)p, (u32)p->c) != 0) {
            D_801DB7FC = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->unk5C) != 0) {
            D_801DB804 = 1;
        } else {
            D_801DB804 = 0;
        }
        *(struct func_801D5C18_Struct *)&D_801E16D0 = *(struct func_801D5C18_Struct *)(D_801BC025 + 3);
    }
    if (D_801DB7E0 != 0) {
        func_801D5E9C(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D5420/func_801D5DF8.s")



s32 func_801D5E40(void) {
    return D_801DB7FC != 0;
}



s32 func_801D5E50(void) {
    if (D_801DB7FC != 0) {
        return 0;
    }
    if (D_801DB7F8 != 0) {
        return 0;
    }
    return D_801DB804;
}


u8 *func_801D5E90(void) {
    return &D_801E16D0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D5420/func_801D5E9C.s")

