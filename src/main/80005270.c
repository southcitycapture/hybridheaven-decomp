#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005700.s")


extern void func_80005624(s32);
extern void func_80005670(s32, s32);
extern void func_80005700(void *);

struct func_800057DC_Struct {
    u8 pad[0xC];
    s32 unkC;
};

void func_800057DC(struct func_800057DC_Struct *arg0, s32 arg1) {
    s32 sp1C;

    sp1C = arg0->unkC;
    func_80005700(arg0);
    if (sp1C != 0) {
        func_80005670(sp1C, arg1);
    } else {
        func_80005624(arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_8000582C.s")


void func_8000582C(s32 a, void *p);
extern u8 D_80089378[];

void func_800058B8(s32 a) {
    func_8000582C(a, D_80089378);
}


struct func_800058DC_Struct {
    u8 pad[0x1C];
    s32 unk1C;
};

void func_800058DC(struct func_800058DC_Struct *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_800058E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_800058EC.s")


struct func_800058F4_Inner {
    u8 pad0[8];
    void *unk8;
};

struct func_800058F4_Struct {
    s32 unk0;
    struct func_800058F4_Struct *unk4;
    u8 pad8[4];
    struct func_800058F4_Inner *unkC;
    u8 pad10[4];
    s32 unk14;
};

extern void func_80005A04(void *, void *);
extern void func_80005B48(void *);
extern s32 D_8008D5D0;

void func_800058F4(struct func_800058F4_Struct *arg0, s32 arg1) {
    struct func_800058F4_Struct *v1;
    struct func_800058F4_Struct *v0;
    struct func_800058F4_Struct *sp1C;
    struct func_800058F4_Inner *temp_v0;

    if ((s32) arg0 == D_8008D5D0) {
        v0 = arg0->unk4;
        v1 = v0;
    } else {
        v1 = NULL;
        v0 = arg0->unk4;
    }
    if ((v0 != NULL) || (arg0->unk0 != 0)) {
        sp1C = v1;
        func_80005B48(arg0);
        temp_v0 = arg0->unkC;
        arg0->unk14 = arg1;
        if (temp_v0 == NULL) {
            sp1C = v1;
            func_80005A04(D_80089378, arg0);
        } else {
            sp1C = v1;
            func_80005A04(temp_v0->unk8, arg0);
        }
        if (sp1C != NULL) {
            D_8008D5D0 = sp1C->unk0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_800059B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005ACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005B48.s")


typedef struct func_80005B98_Struct {
    u8 pad[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u16 unk28;
} func_80005B98_Struct;

extern void func_800279F0(void *, s32);

void func_80005B98(func_80005B98_Struct *arg0, s32 *arg1) {
    func_80005B98_Struct *temp_a0;

    temp_a0 = (func_80005B98_Struct *) ((u8 *) arg0 + 0x2C);
    arg0->unk10 = arg1[0];
    arg0->unk14 = arg1[1];
    arg0->unk1C = arg1[3];
    arg0->unk18 = arg1[2];
    arg0->unk20 = arg1[4];
    arg0->unk24 = 0;
    func_800279F0(temp_a0, 0x88);
    arg0->unk28 = 0;
}


extern s32 D_80043394;
extern u16 D_80043398;

u16 func_80005BF8(void) {
    if (D_80043394 == 0x43781902) {
        return D_80043398;
    }
    return 0U;
}


s32 func_80005CB0();                                /* extern */

s32 func_80005C24(void) {
    if (D_80043394 == 0x43781902) {
        return (D_80043398 - func_80005CB0()) & 0xFFFF;
    }
    return 0;
}


s32 func_80005CB0();                                /* extern */

s32 func_80005C70(void) {
    if (D_80043394 == 0x43781902) {
        return func_80005CB0();
    }
    return 0;
}


struct func_80005CB0_Struct {
    struct func_80005CB0_Struct *next;
};

extern struct func_80005CB0_Struct *D_8008935C;

s32 func_80005CB0(void) {
    struct func_80005CB0_Struct *var_v0;
    s32 var_v1;

    var_v0 = D_8008935C;
    var_v1 = 0;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->next;
            var_v1 += 1;
        } while (var_v0 != NULL);
    }
    return var_v1 & 0xFFFF;
}


struct func_80005CDC_Struct {
    u8 pad0[0xB6];
    u16 unkB6;
    u8 padB8[0x4];
    s32 unkBC;
    u8 padC0[0x4];
    u8 *unkC4;
};

extern struct func_80005CDC_Struct D_800892B0;

s32 func_80005CDC(void) {
    s32 var_a0;
    s32 var_v0;
    u8 *var_v1;

    var_v1 = D_800892B0.unkC4;
    var_a0 = D_800892B0.unkBC;
    var_v0 = 0;
    if ((s32) D_800892B0.unkB6 > 0) {
        do {
            var_v0 += 1;
            if (*var_v1 != 0) {
                var_v1 += 1;
                var_a0 += 0x50;
            } else {
                *var_v1 = 1;
                return var_a0;
            }
        } while (var_v0 < (s32) D_800892B0.unkB6);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005D9C.s")


struct func_80005E44_Struct {
    u8 pad0[4];
    u32 unk4;
    u8 pad8[2];
    u16 unkA;
};

struct func_80005E44_Res {
    u8 pad0[12];
    s32 unkC;
};

extern s32 func_80005D9C(void *, u16);
extern void func_80006088(void *);
extern void func_80006370(s32, void *);
extern void *func_800063BC(void *, u32);
extern s32 func_800065EC(void *, void *);
extern u8 D_8008942C[];

void *func_80005E44(s32 arg0, struct func_80005E44_Struct *arg1) {
    struct func_80005E44_Res *temp_v0;

    temp_v0 = func_800063BC(D_8008942C, arg1->unk4);
    if (temp_v0 != NULL) {
        if (func_80005D9C(temp_v0, arg1->unkA) == 0) {
            return NULL;
        }
        func_80006370(arg0, temp_v0);
        if (func_800065EC(temp_v0, arg1) != 0) {
            func_80006088(temp_v0);
            return NULL;
        }
        temp_v0->unkC = 0;
    }
    return temp_v0;
}


struct func_80005ED8_Struct {
    u8 pad[0xC];
    s32 unkC;
};

struct func_80005ED8_Arg {
    u8 pad[0xA];
    u16 unkA;
};


void *func_80005ED8(s32 arg0, void *arg1, s32 arg2) {
    struct func_80005ED8_Struct *temp_v0;

    temp_v0 = func_800063BC(D_8008942C, arg2);
    if (temp_v0 != NULL) {
        if (func_80005D9C(temp_v0, ((struct func_80005ED8_Arg *) arg1)->unkA) == 0) {
            return NULL;
        }
        func_80006370(arg0, temp_v0);
        if (func_800065EC(temp_v0, arg1) != 0) {
            func_80006088(temp_v0);
            return NULL;
        }
        temp_v0->unkC = 0;
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005F8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005FAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80006088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80006148.s")


extern void *D_8008DA88;

struct func_80006214_Struct {
    u8 pad0[0x10];
    struct func_80006214_Struct *unk10;
};

s32 func_80006214(struct func_80006214_Struct *arg0) {
    s32 var_v1;
    struct func_80006214_Struct *var_v0;

    var_v0 = *(struct func_80006214_Struct **)((u8 *)arg0 + 0x24);
    var_v1 = 0;
    if (var_v0 != NULL) {
        void **var_a0 = &D_8008DA88;
        do {
            *var_a0 = var_v0;
            var_v0 = var_v0->unk10;
            var_v1 += 1;
            var_a0 += 1;
        } while (var_v0 != NULL);
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80006248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_800062D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_800062F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80006370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_800063BC.s")


struct func_80006414_Struct {
    struct func_80006414_Struct *unk0;
    struct func_80006414_Struct *unk4;
    struct func_80006414_Struct *unk8;
    struct func_80006414_Struct *unkC;
    u8 pad10[0x14];
    u32 unk24;
};

void func_80006414(struct func_80006414_Struct *arg0, struct func_80006414_Struct *arg1) {
    struct func_80006414_Struct *temp_v1;
    struct func_80006414_Struct *temp_v0;
    u32 temp_v0_key;

    temp_v0_key = arg1->unk24;
    if (arg0->unk24 < temp_v0_key) {
        arg1->unk0 = arg0;
        arg1->unk4 = arg0->unk4;
        arg1->unkC = arg0->unkC;
        arg0->unk4 = arg1;
        temp_v0 = arg1->unk4;
        if (temp_v0 != NULL) {
            temp_v0->unk0 = arg1;
        }
        if (arg1->unkC != NULL) {
            temp_v0 = arg0->unkC;
            if (arg0 == temp_v0->unk8) {
                temp_v0->unk8 = arg1;
            }
        }
    } else {
        for (;;) {
            temp_v1 = arg0->unk0;
            if (temp_v1 == NULL || temp_v1->unk24 < temp_v0_key) {
                break;
            }
            arg0 = temp_v1;
        }
        arg1->unk0 = temp_v1;
        arg1->unk4 = arg0;
        arg1->unkC = arg0->unkC;
        arg0->unk0 = arg1;
        temp_v0 = arg1->unk0;
        if (temp_v0 != NULL) {
            temp_v0->unk4 = arg1;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_800064C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_8000659C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_800065EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_8000671C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80006754.s")

