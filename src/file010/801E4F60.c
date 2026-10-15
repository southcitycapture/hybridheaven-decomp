#include "common.h"


typedef struct func_801E4F60_Struct {
    u8 pad[0x54];
    s32 unk54;
} func_801E4F60_Struct;

extern void func_801C4A5C(void *, s32, s32);
extern func_801E4F60_Struct *D_801BBCCC;

void func_801E4F60(u16 arg0) {
    s32 temp_a2;
    func_801E4F60_Struct *temp_a0;

    temp_a2 = arg0;
    temp_a0 = D_801BBCCC;
    temp_a0->unk54 = temp_a2;
    func_801C4A5C(temp_a0, 0, temp_a2);
}



void func_801E4F94(u16 arg0) {
    s32 *temp_a0;

    temp_a0 = D_801BBCCC;
    temp_a0[0x54 / 4] |= arg0;
    func_801C4A5C(temp_a0, 0, arg0);
}


void func_801E4FD0(u16 arg0) {
    s32 temp_a2;
    func_801E4F60_Struct *temp_a0;

    temp_a2 = arg0;
    temp_a0 = D_801BBCCC;
    temp_a0->unk54 &= ~temp_a2;
    func_801C4A5C(temp_a0, 0, temp_a2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801E5010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801E6BCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801E7274.s")

typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);

typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;

typedef struct func_801E74DC_Arg2 {
    u8 pad[0x1C];
    func_801E74DC_Sub unk1C;
} func_801E74DC_Arg2;

typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;

typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;

typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;

extern void func_800111E0(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern func_801E74DC_Outer *D_801BBCD0;
extern func_801EFD14_Table D_80216B9C;
extern func_801EFD14_Table D_80216BA8;
extern f32 D_8021AFB0;

void func_801E74DC(func_801E74DC_Arg0 *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, s32 arg3) {
    s32 pad[4];
    func_801E74DC_Sub *s;

    s = &arg2->unk1C;
    if (arg2->unk1C.unk0 == 0x168003E) goto def;
    if (arg2->unk1C.unk0 == 0x168003F) goto caseA;
    if (arg2->unk1C.unk0 == 0x1680040) goto caseC;
    if (arg2->unk1C.unk0 != 0x1680041) goto def;
    goto caseB;

caseA:
    if (s->unk8 != 1.0) {
        s->unk8 = 1.0f;
    }
    func_8013A28C(arg1, *s);
    arg0->unk2C |= 0x60;
    arg0->unk2C &= ~0x80;
    func_800111E0(arg1, (u8 *)s + 6);
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
    }
    return;

caseB:
    func_80011140(arg1, arg2, D_80216B9C, 5);
    arg0->unk2C &= ~0x80;
    arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    return;

caseC:
    func_80011140(arg1, arg2, D_80216BA8, 4);
    arg0->unk2C &= ~0x80;
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
    }
    return;

def:
    func_80011140(arg1, arg2, D_80216BA8, 4);
    arg0->unk2C &= ~0x80;
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801E79B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801E7C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801E8BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801E95D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801EACA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801EB7A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801EBCC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801ECF58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801ED0EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801ED1F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801ED2D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801ED72C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801EDF0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801EEC58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801EF440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801EF6F8.s")


typedef struct func_801EFBEC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    s32 unk5C;
} func_801EFBEC_Struct;

s32 func_800058DC(void *arg0, void *arg1);
s32 func_80011198(void *arg0, s32 arg1, void *arg2, void *arg3);
extern u8 D_801BBE1A[];
extern s16 D_80216C10;
extern void func_801EFC50();

void func_801EFBEC(func_801EFBEC_Struct *arg0, void *arg1) {
    s32 temp;

    temp = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    D_80216C10 = 0;
    func_80011198(arg1, temp, arg0, arg1);
    D_801BBE1A[6] = 1;
    func_800058DC(arg0, func_801EFC50);
}

typedef struct func_801EFD14_Struct {
    u8 pad[0x5C];
    void *unk5C;
} func_801EFD14_Struct;
extern s32 func_80010550(s32, void *);
extern func_801EFD14_Table D_80216BCC;
void func_801EFD14(func_801EFD14_Struct *arg0, s32 arg1);

extern void func_80011258(s32, s32, u16);

void func_801EFC50(void *arg0, s32 arg1) {
    s32 sp24;
    u16 temp_a2;

    sp24 = (s32) *(void **) ((u8 *) arg0 + 0x5C);
    temp_a2 = (u16) func_80010550(arg1, (void *) sp24);
    if ((*(u16 *) &D_80216C10)++ >= 0x1F) {
        func_80011258(arg1, sp24 + 0x22, temp_a2);
    }
    if (temp_a2 != 0) {
        *(u16 *) &D_80216C10 = 0;
        func_80011140(arg1, (void *) sp24, D_80216BCC, 0x14);
        func_800058DC(arg0, &func_801EFD14);
    }
}

extern u16 D_801BCAE0;


typedef struct func_801EFD14_Obj {
    u8 pad[0x1C];
    s32 unk1C;
} func_801EFD14_Obj;


extern func_801EFD14_Table D_80216B90;
extern void func_801E5010(void);

void func_801EFD14(func_801EFD14_Struct *arg0, s32 arg1) {
    func_801EFD14_Obj *temp_a1;
    s32 temp_v1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1);
    temp_v1 = temp_a1->unk1C;
    if (temp_v1 == 0x01680041) {
        D_801BCAE0 = 0x80;
        func_800058DC(arg0, func_801E5010);
    } else if (temp_v1 != 0x03480010) {
        func_80011140(arg1, temp_a1, D_80216BCC, 0x14);
    } else {
        if (func_80010550(arg1, temp_a1) != 0) {
            func_80011140(arg1, temp_a1, D_80216B90, 0xA);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801EFE0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801EFF78.s")


typedef struct func_801F10C8_Struct_Inner2 {
    u8 pad0[0x4];
    u16 unk4;
} func_801F10C8_Struct_Inner2;

typedef struct func_801F10C8_Struct_Inner {
    u8 pad0[0x68];
    func_801F10C8_Struct_Inner2 *unk68;
} func_801F10C8_Struct_Inner;

typedef struct func_801F10C8_Struct {
    u8 pad0[0xDC];
    func_801F10C8_Struct_Inner *unkDC;
    u8 pad1[0xEF0 - 0xE0];
    u16 unkEF0;
} func_801F10C8_Struct;

extern func_801F10C8_Struct D_801BBBF0;

s32 func_801F10C8(void) {
    s32 var_a0;
    func_801F10C8_Struct_Inner2 *p;
    s32 flags;

    p = D_801BBBF0.unkDC->unk68;
    flags = D_801BBBF0.unkEF0;
    if (flags & 0x20) {
        return 1;
    }
    var_a0 = (p->unk4 & 0x4000) != 0;
    if (var_a0 != 0) {
        var_a0 = (flags & 0x880) != 0;
    }
    return var_a0 & 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801F1114.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801F1120.s")



s32 func_801F112C(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_801BCAE0 & 0x10) {
        var_v1 = 1;
    }
    if (D_801BCAE0 & 2) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 4) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 8) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x40) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x200) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x400) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x1000) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801F11C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801F13B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801F152C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/func_801F1888.s")

