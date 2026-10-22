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

extern s32 D_801DB74C;
extern s32 D_801DB750;
extern u8 *D_801DB748;
extern void func_801D5658(void *, void *);

typedef struct func_801D54E0_StructData {
    u16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u32 unk28;
    u16 unk2C;
} func_801D54E0_StructData;
typedef struct func_801D54E0_StructObject {
    u8 pad0[0x22];
    s8 unk22;
    u8 pad23;
    s32 unk24;
    u8 pad28[4];
    func_801D54E0_StructData *unk2C;
    s32 unk30;
} func_801D54E0_StructObject;
typedef struct func_801D54E0_StructSource {
    u16 *unk0;
    void **unk4;
} func_801D54E0_StructSource;
extern func_801D54E0_StructObject *func_80005FAC(void *, s32, void *);
extern u8 D_80171CF0[];
extern u8 D_801DB738[];
#define OBJ ((func_801D54E0_StructObject *)D_801DB748)

void func_801D54E0(func_801D54E0_StructObject *arg0, func_801D54E0_StructObject *arg1) {
    func_801D54E0_StructData *temp_a0;

    if (arg0->unk24 != 0) {
        if (D_801DB74C != 0) {
            D_801DB748 = (u8 *)func_80005FAC(arg0, arg1->unk30, D_801DB738);
            *(s32 *)((u8 *)OBJ->unk2C + 0x28) = (s32)(*(func_801D54E0_StructSource **)(D_80171CF0 + 0x980))->unk4[1];
            OBJ->unk2C->unk0 = *(*(func_801D54E0_StructSource **)(D_80171CF0 + 0x980))->unk0;
            OBJ->unk2C->unk2C = (*(func_801D54E0_StructSource **)(D_80171CF0 + 0x980))->unk0[1];
            OBJ->unk2C->unk4 = 0.0f;
            OBJ->unk2C->unk8 = 0.0f;
            OBJ->unk2C->unkC = 0.0f;
            OBJ->unk2C->unk12 = 0;
            OBJ->unk2C->unk18 = 5.0f;
            OBJ->unk2C->unk1C = 5.0f;
            OBJ->unk2C->unk20 = 5.0f;
            temp_a0 = OBJ->unk2C;
            temp_a0->unk24 |= 0x40015;
            OBJ->unk22 = D_801DB750;
        } else {
            D_801DB748 = 0;
            D_801DB750 = 0;
        }
        func_800058DC(arg0, (void (*)(void))func_801D5658);
        return;
    }
    func_800058DC(arg0, (void (*)(void))func_801D54E0);
}


#if __LINE__ == 3
#define func_801D5658_S12 func_801D5C18_Struct
#define func_801D5658_S12F func_801D5C18_StructF
#else
struct func_801D5658_S12 { s32 a; s32 b; s32 c; };
struct func_801D5658_S12F { s32 a; s32 b; f32 c; };
extern s32 func_801CC540();
extern void func_80006214();
extern s32 func_80010550();
extern s32 func_80011140();
extern u8 D_8008DA88[];
extern u8 D_801BC025[];
extern u8 D_801E1680;
extern struct func_801D5998_Struct D_801E1690;
extern s32 D_801DB714;
extern u8 D_801E16A0;
extern u8 D_801E16B0;
#endif
struct func_801D5658_Obj { u8 pad[0x5C]; u8 *unk5C; };
struct func_801D5658_Q { u8 pad[0x4]; struct func_801D5658_R *unk4; };
struct func_801D5658_R { u8 pad[0x2C]; struct func_801D5658_T *unk2C; };
struct func_801D5658_T { u8 pad[0x5C]; struct func_801D5658_S12 v; };
extern void func_8013A1B4(void *, struct func_801D5658_S12, s32);
extern void func_8013A334(void *, s32, u8 *, s32);
extern void func_801D5A00(void *);
extern u8 D_801D5658[];

void func_801D5658(void *arg0, void *arg1) {
    struct func_801D5658_S12F *p;
    u8 *q;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D5658);
        return;
    }
    if (D_801DB730 != 0) {
        func_80006214(arg0);
        func_8013A1B4(D_8008DA88, *(struct func_801D5658_S12 *)D_801DB730, 0x1BFFFF);
        q = ((struct func_801D5658_Obj *)arg0)->unk5C;
        q[0x76] = 1;
        D_801DB730 = 0;
    }
    p = (struct func_801D5658_S12F *)D_801DB734;
    if (p != 0) {
        if (func_80011140((s32)arg1, ((struct func_801D5658_Obj *)arg0)->unk5C, *(struct func_801D5658_S12 *)p, (u32)p->c) != 0) {
            D_801DB734 = 0;
        }
    } else {
        if (func_80010550((s32)arg1, ((struct func_801D5658_Obj *)arg0)->unk5C) != 0) {
            D_801DB754 = 1;
        } else {
            D_801DB754 = 0;
        }
        *(struct func_801D5658_S12 *)&D_801E1690 = ((struct func_801D5658_Q *)arg1)->unk4->unk2C->v;
        *(struct func_801D5658_S12 *)&D_801E1680 = *(struct func_801D5658_S12 *)(D_801BC025 + 3);
        D_801DB714 = (s32)arg1;
        func_8013A334(&D_801E16A0, (s32)arg1, ((struct func_801D5658_Obj *)arg0)->unk5C, 0xF);
        func_8013A334(&D_801E16B0, (s32)arg1, ((struct func_801D5658_Obj *)arg0)->unk5C, 0x12);
    }
    if (D_801DB74C != 0) {
        OBJ->unk22 = D_801DB750;
    }
    if (D_801DB718 != 0) {
        func_801D5A00(arg0);
    }
}



void func_801D58C4(s32 arg0) {
    D_801DB74C = arg0;
}



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


u8 *func_801D592C(void) {
    return &D_801E1680;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D5420/func_801D5938.s")


struct func_801D5998_Struct {
    s32 unk0;
    u16 unk4;
};


s32 func_801D5998(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1690.unk0) {
        return 0;
    }
    return D_801E1690.unk4 == arg1;
}



s32 func_801D59D0(void) {
    return D_801DB710;
}



s32 func_801D59DC(void) {
    return D_801DB714;
}


u8 *func_801D59E8(void) {
    return &D_801E16A0;
}


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

extern void func_8013A28C(void *, struct func_801D5C18_Struct);
extern void func_801D5E9C(void *);
extern u8 D_801D5C18[];

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

