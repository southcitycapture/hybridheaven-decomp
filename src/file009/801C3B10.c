#include "common.h"


extern s16 D_801BBD7E;

void func_801C3B10(s32 arg0) {
    s32 *p;
    p = &arg0;
    D_801BBD7E = *p;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3B3C.s")


struct func_801C3B48_Struct {
    u8 pad[0xE];
    s16 unkE;
};
extern struct func_801C3B48_Struct D_801BBD86;

s32 func_801C3B48(s32 arg0) {
    s32 *p = &arg0;
    D_801BBD86.unkE = *p;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3B5C.s")


void func_801C3B70(void) {
    D_801BBD86.unkE = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3B94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3BA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3BAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3BBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3BC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3D20.s")


struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};

struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};

extern struct func_801C3D90_StructA D_801BBBF0;

s32 func_801C3D90(void) {
    if ((D_801BBBF0.unkE0 != 0) && (D_801BBBF0.unkDC->unk63 != 0)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3DC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C4058.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C419C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C42DC.s")


s32 func_801C4700(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == arg1) {
        return arg1;
    }
    if (arg0 < arg1) {
        arg0 = arg0 + arg2;
        if (arg0 >= arg1) {
            arg0 = arg1;
        }
        goto block_ret;
    }
    arg0 = arg0 - arg2;
    if (arg1 < arg0) {
        goto block_ret;
    }
    arg0 = arg1;
block_ret:
    return arg0;
}


f32 func_801C4750(f32 arg0, f32 arg1, f32 arg2) {
    if (arg0 == arg1) {
        return arg1;
    }
    if (arg2 < 0.0f) {
        arg2 = -arg2;
    }
    if (arg0 < arg1) {
        arg0 = arg0 + arg2;
        if (arg1 <= arg0) {
            arg0 = arg1;
        }
    } else {
        arg0 = arg0 - arg2;
        if (arg0 <= arg1) {
            arg0 = arg1;
        }
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C47E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C4848.s")


typedef struct func_801C4890_StructC {
    u8 pad[0x12];
    s16 unk12;
} func_801C4890_StructC;

typedef struct func_801C4890_StructB {
    u8 pad[0x2C];
    func_801C4890_StructC *unk2C;
} func_801C4890_StructB;

typedef struct func_801C4890_StructA {
    u8 pad[0x24];
    func_801C4890_StructB *unk24;
} func_801C4890_StructA;

s32 func_801C4890(func_801C4890_StructA *arg0, s16 arg1, s16 arg2) {
    func_801C4890_StructC *temp_v1;
    s16 temp_v0;
    s32 temp_a3;
    s32 temp_a0;

    temp_v1 = arg0->unk24->unk2C;
    temp_v0 = temp_v1->unk12;
    temp_a3 = temp_v0 - arg1;
    if (temp_a3 < 0) {
        temp_a0 = -temp_a3;
    } else {
        temp_a0 = temp_a3;
    }
    if (arg2 >= temp_a0) {
        temp_v1->unk12 = arg1;
        return 1;
    }
    if ((arg1 - temp_v0) >= 0x1000) {
        temp_v1->unk12 = (s16) (temp_v0 - arg2);
    } else {
        temp_v1->unk12 = (s16) (temp_v0 + arg2);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C4908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C4A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C5A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C5A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C787C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C7B18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C7FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C80CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C83C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C84FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C86C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C88BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C89D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8A94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8E48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8E84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CB71C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CB864.s")


extern u8 D_801E0CA0[];

void func_801CBC70(u8 arg0, u8 arg1, u8 arg2) {
    D_801E0CA0[4] = arg0;
    D_801E0CA0[0] = arg0;
    D_801E0CA0[5] = arg1;
    D_801E0CA0[1] = arg1;
    D_801E0CA0[6] = arg2;
    D_801E0CA0[2] = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CBCA0.s")



void func_801CBCD0(s8 arg0, s32 arg1, s8 arg2) {
    D_801E0CA0[0x10] = arg0;
    D_801E0CA0[0x11] = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CBD00.s")


void func_801CBD00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);

void func_801CBD70(void) {
    func_801CBD00(0x80, 0x80, 0x80, 0, 0xFF, 0xFF, 0, -0x7F, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CBDBC.s")


struct func_801CBE04_Inner {
    u8 pad[0xC];
    u16 unkC;
};

struct func_801CBE04_Outer {
    u8 pad[0x5C];
    struct func_801CBE04_Inner *unk5C;
};

struct func_801CBE04_Sub {
    u8 pad[0x34];
    void *unk34;
};

struct func_801CBE04_Node {
    u8 pad[0x2C];
    struct func_801CBE04_Sub *unk2C;
};

extern void func_80116E80(s32);
extern void func_801CBDBC(void *, void **, s32);
extern void func_801479A8(void *);
extern u8 D_8017B768[];
extern u8 D_801E0CB8[];

void func_801CBE04(struct func_801CBE04_Outer *arg0, void **arg1) {
    struct func_801CBE04_Inner *sp1C;

    sp1C = arg0->unk5C;
    func_80116E80(0x40);
    func_801CBDBC(arg0, arg1, 0x40);
    func_801479A8(arg0);
    func_801CBD70();
    ((struct func_801CBE04_Node *)*arg1)->unk2C->unk34 = D_801E0CB8;
    ((struct func_801CBE04_Node *)arg1[sp1C->unkC - 1])->unk2C->unk34 = D_8017B768;
}


extern void func_801170DC(s32);

struct func_801CBE90_Sub {
    u8 pad[0x34];
    s32 unk34;
};

struct func_801CBE90_Node {
    u8 pad[0x2C];
    struct func_801CBE90_Sub *unk2C;
};

struct func_801CBE90_Mid {
    u8 pad[0xC];
    u16 unkC;
};

struct func_801CBE90_Top {
    u8 pad[0x24];
    struct func_801CBE90_Node *unk24;
    u8 pad2[0x34];
    struct func_801CBE90_Mid *unk5C;
};

void func_801CBE90(struct func_801CBE90_Top *arg0, struct func_801CBE90_Node **arg1) {
    struct func_801CBE90_Mid *sp1C;

    sp1C = arg0->unk5C;
    func_801CBDBC(arg0, arg1, 0x1000);
    func_801170DC(0x40);
    arg0->unk24->unk2C->unk34 = 0;
    arg1[sp1C->unkC - 1]->unk2C->unk34 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CBEF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CC078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CC260.s")


typedef struct func_801CC660_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CC660_Struct;

extern void func_80005700(s32);
extern s32 func_80126944(void);
extern void func_80126E88(s32);
extern func_801CC660_Struct *D_801E4080;

void func_801CC660(s32 arg0, s32 arg1) {
    if ((s32) D_801E4080->unk4C >= (s32) (D_801E4080->unk4E + 0x8002)) {
        if (func_80126944() != 1) {
            func_80126E88(0x1AA);
            func_80126E88(0x1AB);
            func_80126E88(0x1AC);
            func_80126E88(0x1AD);
            func_80126E88(0x1AF);
        }
        func_80005700(arg0);
        D_801E4080 = NULL;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CC6F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CC830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CC9B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CCA44.s")


struct func_801CCD58_Inner {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
};

struct func_801CCD58_Outer {
    u8 pad0[0x5C];
    struct func_801CCD58_Inner *unk5C;
};

struct func_801CCD58_Global {
    u8 pad0[0x4C];
    u16 unk4C;
};

extern void func_800058DC(void *, void *);
extern void func_801DB6B8(void *, s32, s32);
extern void func_801CCDE4(void);
extern u8 D_801BCC25;
extern u8 D_801E4070[];

void func_801CCD58(struct func_801CCD58_Outer *arg0, s32 arg1) {
    struct func_801CCD58_Inner *temp_v0;

    temp_v0 = arg0->unk5C;
    if (D_801BCC25 == 1) {
        func_801DB6B8(arg0, arg1, 0);
        if (temp_v0->unk7C == D_801E4070 && temp_v0->unk80 == 0) {
            D_801E4080->unk4C = D_801E4080->unk4C | 0x8000;
            D_801BCC25 = 0;
            func_800058DC(arg0, func_801CCDE4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CCDE4.s")


extern void *func_80005670(void *, void *);
extern u8 D_801E0CFC[];

void func_801CCF88(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    void *temp_v0;

    temp_v0 = func_80005670(arg0, D_801E0CFC);
    if (temp_v0 != NULL) {
        *(f32 *)((u8 *)temp_v0 + 0x6C) = arg1;
        *(f32 *)((u8 *)temp_v0 + 0x70) = arg2;
        *(f32 *)((u8 *)temp_v0 + 0x74) = arg3;
        *(f32 *)((u8 *)temp_v0 + 0x7C) = arg4;
        *(f32 *)((u8 *)temp_v0 + 0x80) = arg5;
        *(f32 *)((u8 *)temp_v0 + 0x84) = arg6;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CCFEC.s")


struct func_801CD1CC_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern u8 func_801CD208[];

void func_801CD1CC(struct func_801CD1CC_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) arg0->unk4E) {
        func_800058DC(arg0, func_801CD208);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CD208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CD228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CD288.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CD3FC.s")


extern s32 func_8012C6B4(s32);
extern void func_801CE330(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern f32 D_801E343C;

void func_801CD420(void *arg0, s32 arg1) {
    s32 pad;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    sp58 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0x4);
    sp54 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0x8);
    sp50 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0xC);
    func_801CE330(arg0, 0x16, sp58, sp54, sp50, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, func_8012C6B4(2) + 1, 0x18, D_801E343C, 1);
    func_800058DC(arg0, func_801CD1CC);
}

