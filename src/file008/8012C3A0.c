#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012C3A0.s")


typedef struct func_8012C4D0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8012C4D0_Struct;

typedef struct func_8012C4D0_Obj {
    u8 pad0[0x30];
    s32 unk30;
    u8 unk34;
    u8 pad1[9];
    u8 unk3E;
} func_8012C4D0_Obj;

func_8012C4D0_Obj *func_80005670(s32, func_8012C4D0_Struct *);
s32 func_8012C3A0(s32, u8);

func_8012C4D0_Obj *func_8012C4D0(s32 arg1, func_8012C4D0_Struct arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 temp_v0_2;
    func_8012C4D0_Obj *temp_v0;

    temp_v0_2 = func_8012C3A0(arg1, arg5);
    if (temp_v0_2 != 0) {
        temp_v0 = func_80005670(temp_v0_2, &arg2);
        if (temp_v0 != NULL) {
            temp_v0->unk34 = arg5;
            temp_v0->unk3E = 0x19;
            temp_v0->unk30 = 0;
            return temp_v0;
        }
    }
    return NULL;
}


typedef struct func_8012C52C_StructC {
    s32 pad;
    f32 unk4;
} func_8012C52C_StructC;

typedef struct func_8012C52C_StructB {
    u8 pad[0x2C];
    func_8012C52C_StructC *unk2C;
} func_8012C52C_StructB;

typedef struct func_8012C52C_StructA {
    u8 pad[0x24];
    func_8012C52C_StructB *unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    u8 unk34;
    u8 pad2[9];
    u8 unk3E;
} func_8012C52C_StructA;

extern s32 func_80005F6C(void *, void *);
extern void func_80005700(void *);
extern u8 D_80164F30[];

void *func_8012C52C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, f32 arg7, f32 arg8, f32 arg9) {
    func_8012C52C_StructA *sp1C;
    s32 temp_v0;

    temp_v0 = func_8012C3A0(arg0, arg6);
    if (temp_v0 != 0) {
        sp1C = (func_8012C52C_StructA *) func_80005670(temp_v0, (func_8012C4D0_Struct *) &arg1);
        if (sp1C != NULL) {
            if (func_80005F6C(sp1C, D_80164F30) == 0) {
                func_80005700(sp1C);
                return NULL;
            }
            sp1C->unk24->unk2C->unk4 = arg7;
            sp1C->unk24->unk2C->unk4 = arg8;
            sp1C->unk24->unk2C->unk4 = arg9;
            sp1C->unk30 |= 1;
            sp1C->unk34 = arg6;
            sp1C->unk3E = 0x19;
            return sp1C;
        }
    }
    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012C5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012C6B4.s")


typedef struct func_8012C71C_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_8012C71C_Inner;

typedef struct func_8012C71C_Sub {
    u8 pad0[0x2C];
    func_8012C71C_Inner *unk2C;
    func_8012C71C_Inner *unk30;
} func_8012C71C_Sub;

typedef struct func_8012C71C_Outer {
    u8 pad0[0x24];
    func_8012C71C_Sub *unk24;
} func_8012C71C_Outer;

void func_8012C71C(func_8012C71C_Outer *arg0, f32 arg1) {
    func_8012C71C_Sub *temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0->unk2C != NULL) {
        temp_v0->unk2C->unk18 = arg1;
        arg0->unk24->unk2C->unk1C = arg1;
        arg0->unk24->unk2C->unk20 = arg1;
        return;
    }
    temp_v0->unk30->unk18 = arg1;
    arg0->unk24->unk30->unk1C = arg1;
    arg0->unk24->unk30->unk20 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012C778.s")


typedef struct func_8012C784_StructA {
    u16 unk0;
    u8 pad2[0x26];
    s32 unk28;
    u16 unk2C;
} func_8012C784_StructA;

typedef struct func_8012C784_StructB {
    u8 pad[0x2C];
    func_8012C784_StructA *unk2C;
    func_8012C784_StructA *unk30;
} func_8012C784_StructB;

typedef struct func_8012C784_StructE {
    u16 *unk0;
    s32 *unk4;
} func_8012C784_StructE;

typedef struct func_8012C784_StructC {
    u8 pad[0x36];
    u16 unk36;
} func_8012C784_StructC;

extern func_8012C784_StructB *D_8008DA88[];
extern func_8012C784_StructE *D_80171CF0[];

void func_8012C784(func_8012C784_StructC *arg0, s32 arg1, s32 arg2) {
    func_8012C784_StructB **temp_v0;
    func_8012C784_StructB *temp_v1;
    func_8012C784_StructA *temp_a3;

    temp_v0 = &D_8008DA88[arg1];
    temp_v1 = *temp_v0;
    temp_a3 = temp_v1->unk2C;
    if (temp_a3 != NULL) {
        temp_a3->unk28 = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk4[arg2];
        (*temp_v0)->unk2C->unk0 = *((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0;
        (*temp_v0)->unk2C->unk2C = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0[1];
        return;
    }
    temp_v1->unk30->unk28 = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk4[arg2];
    (*temp_v0)->unk30->unk0 = *((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0;
    (*temp_v0)->unk30->unk2C = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0[1];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012C89C.s")


typedef struct func_8012C97C_Struct {
    u16 *unk0;
    s32 *unk4;
} func_8012C97C_Struct;

extern func_8012C97C_Struct *D_80171CEC[];
void func_8000522C(u16, s32);

void func_8012C97C(s32 arg0, s32 arg1) {
    func_8012C97C_Struct *temp_v0;

    temp_v0 = D_80171CEC[arg0];
    func_8000522C(*temp_v0->unk0, temp_v0->unk4[arg1]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012C9C0.s")


s32 func_8012CAB8(s32 arg0) {
    s32 *ptr;

    ptr = &arg0;
    arg0 &= 0xFF;
    if ((arg0 == 0xC) || (arg0 == 0x11) || (arg0 == 0x14) || (arg0 == 0x17) || (arg0 == 0x19) || (arg0 == 0x1A) || (arg0 == 0x25) || (arg0 == 0x28) || (arg0 == 0x46) || (arg0 == 0x4B) || (arg0 == 0x4C) || (arg0 == 0x50) || (arg0 == 0x51) || (arg0 == 0x5B) || (arg0 == 0x5D)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012CB4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012CD28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012CE10.s")


typedef struct func_8012CE9C_Arg {
    s32 w0;
    s32 w1;
    s32 w2;
} func_8012CE9C_Arg;

typedef struct func_8012CE9C_Struct {
    u8 pad[0x78];
    u16 unk78;
} func_8012CE9C_Struct;

extern s32 func_80011140(void *, void *, func_8012CE9C_Arg, u16);

s32 func_8012CE9C(void *arg0, func_8012CE9C_Struct *arg1, func_8012CE9C_Arg arg2, u16 arg3) {
    if (arg1->unk78 != 0) {
        if (func_80011140(arg0, arg1, arg2, arg3) == 0) {
            return 1;
        }
        arg1->unk78 = 0;
    }
    return 0;
}


struct func_8012CF10_Arg {
    s32 w0;
    s32 w1;
    s32 w2;
};

extern s32 func_80010D08(void *, void *, struct func_8012CF10_Arg, u16, s32);

struct func_8012CF10_Struct {
    u8 pad[0x78];
    u16 unk78;
};

s32 func_8012CF10(void *arg1, struct func_8012CF10_Struct *arg2, struct func_8012CF10_Arg arg3, u16 arg4, s32 arg5) {
    if (arg2->unk78 != 0) {
        if (func_80010D08(arg1, arg2, arg3, arg4, arg5) == 0) {
            return 1;
        }
        arg2->unk78 = 0;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012CF8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012D064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012D40C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012D7A8.s")


extern void func_8012D8C8(s32, s32, s32, f32, s32, s32);

void func_8012D814(s32 arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4) {
    func_8012D8C8(arg0, arg1, arg2, arg3, arg4, 0);
}


extern void func_8012CF8C(void *arg0, void *arg1, u16 arg2, s32 arg3);

void func_8012D844(void *arg0, u16 arg1, s32 arg2) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(((u8 *)arg0) + 0x24);
    if (*(void **)(temp_v0 + 0x2C) != NULL) {
        func_8012CF8C(arg0, *(u8 **)(temp_v0 + 0x2C) + 0x40, arg1, arg2);
        return;
    }
    func_8012CF8C(arg0, *(u8 **)(temp_v0 + 0x30) + 0x40, arg1, arg2);
}


typedef struct func_8012D894_StructB {
    u8 pad0[0x2C];
    s32 unk2C;
} func_8012D894_StructB;

typedef struct func_8012D894_StructA {
    u8 pad0[0x24];
    func_8012D894_StructB *unk24;
} func_8012D894_StructA;

void func_8012D894(void *arg0, u16 arg1, s32 arg2) {
    func_8012D894_StructA *a = arg0;

    func_8012CF8C(arg0, (u8 *)a->unk24->unk2C + 0x44, arg1, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012D8C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012D918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012DA90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012DE58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012DF38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012E114.s")


struct func_8012E25C_StructB {
    u8 pad[0x74];
    u8 unk74;
};

struct func_8012E25C_StructA {
    u8 pad[0x5C];
    struct func_8012E25C_StructB *unk5C;
};

s32 func_80126944(void);
void func_801DBEE4(void *arg0, s32 arg1);
void func_80223ED4(void *arg0, s32 arg1);
extern u8 D_801BBBF0[];

void func_8012E25C(struct func_8012E25C_StructA *arg0, s32 arg1) {
    struct func_8012E25C_StructB *temp;

    temp = arg0->unk5C;
    if ((temp->unk74 != 4) && (func_80126944() == 1) && (D_801BBBF0[0x1031] > 0) && (D_801BBBF0[0x1031] < 0xE) && (*(void **) (D_801BBBF0 + 0xDC) != NULL) && (*(void **) (D_801BBBF0 + 0xE0) != 0) && (((u8 *) *(void **) (D_801BBBF0 + 0xDC))[0x63] != 0) && (*(void **) (D_801BBBF0 + 0xEC) != NULL) && (*(void **) (D_801BBBF0 + 0xF0) != 0) && (((u8 *) *(void **) (D_801BBBF0 + 0xEC))[0x63] != 0)) {
        func_80223ED4(arg0, arg1);
        func_801DBEE4(arg0, arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012E31C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012E454.s")


extern void func_8012E774();
extern void func_8012B7C0(s32);

void func_8012E584(s32 arg0, s32 arg1) {
    func_8012E774();
    func_8012B7C0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012E5B0.s")


typedef struct func_8012E654_Struct {
    u8 pad[0x24];
    void *unk24;
} func_8012E654_Struct;

extern void func_8012B1E4(void *, s32);
extern void func_8012BFA0(void *);
extern void func_8012C9C0(void *);
extern void func_8012CD28(void *);
extern void func_8012CE10(void *);
extern void func_8012D7A8();

void func_8012E654(func_8012E654_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != NULL) {
        func_8012D7A8();
        func_8012CD28(arg0);
        func_8012C9C0(arg0);
        func_8012CE10(arg0);
        func_8012B1E4(arg0, 1);
        func_8012BFA0(arg0);
    }
}


typedef struct func_8012E6BC_Struct {
    u8 pad[0x24];
    void *unk24;
} func_8012E6BC_Struct;

extern void func_8012E31C(void *, s32);
extern u8 D_801BCC21;

void func_8012E6BC(func_8012E6BC_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != NULL) {
        func_8012E25C((struct func_8012E25C_StructA *) arg0, arg1);
        if ((func_80126944() != 1) || (D_801BCC21 == 5) || (D_801BCC21 == 7) || (D_801BCC21 == 0xA) || (D_801BCC21 == 0xB)) {
            func_8012CD28(arg0);
            func_8012C9C0(arg0);
            func_8012CE10(arg0);
            func_8012B1E4(arg0, 1);
            func_8012BFA0(arg0);
            func_8012D7A8(arg0);
            func_8012E31C(arg0, arg1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012E774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012E81C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012F30C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012F388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012F41C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012F490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012F87C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012FA20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012FBC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012FD1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012FE50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012FF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012FF4C.s")


s32 func_80151BC4();                                /* extern */
s32 func_80151C34();                                /* extern */
extern u16 D_801BBC1E;

u16 func_8012FF58(void) {
    s32 temp_v0;

    if (func_80151BC4() != 2) {
        goto block_load;
    }
    temp_v0 = func_80151C34();
    if (temp_v0 == 1) {
        goto block_r3;
    }
    if (temp_v0 == 2) {
        goto block_r32;
    }
    if (temp_v0 != 0x67) {
        goto block_load;
    }
block_r3:
    return 3U;
block_r32:
    return 0x32U;
block_load:
    return D_801BBC1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012FFC0.s")


extern s8 D_801BBC06;

void func_8012FFCC(s32 arg0) {
    s32 *p = &arg0;
    D_801BBC06 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_8012FFDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_80130038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_80130078.s")


struct func_801300B0_Struct {
    u8 pad0[0x112C];
    s32 unk112C;
    f32 unk1130;
    u8 pad1[0x4];
    s32 unk1138;
    u8 pad2[0x8];
    f32 unk1144;
    f32 unk1148;
    f32 unk114C;
};

void func_801300B0(f32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4) {
    struct func_801300B0_Struct *obj = (struct func_801300B0_Struct *) D_801BBBF0;

    obj->unk112C = 1;
    obj->unk1130 = arg0;
    obj->unk1138 = arg2;
    obj->unk1144 = arg3;
    obj->unk1148 = arg4;
    obj->unk114C = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_801300E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/func_80130254.s")


s32 func_80001060();                                /* extern */

s32 func_80130264(void) {
    if (func_80001060() != 0) {
        return 1;
    }
    return 0;
}


s32 func_80130264();                                /* extern */
extern u8 D_801760B4;

s32 func_80130290(void) {
    if ((func_80130264() != 0) && (D_801760B4 == 0)) {
        return 1;
    }
    return 0;
}


s32 func_801302CC(void) {
    if ((func_80130264() != 0) && (D_801760B4 == 1)) {
        return 1;
    }
    return 0;
}

