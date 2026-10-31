#include "common.h"

#define func_801CDF50 func_801CDF50__func_801CDE80

extern s32 func_8013B570(s32, s32, s32, s32, void (*)());
extern s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_801DAC50;
extern s32 D_801DAC58;
extern s32 D_801DAC70;
extern s32 D_801DAC74;
extern s32 D_801DAC78;
extern s32 D_801DAC7C;
extern s32 D_801DAC84;
extern s32 D_801DAC88;
extern s32 D_801DAC8C;
extern void func_801CDF50();

void func_801CDE80(s32 arg0, s32 arg1) {
    D_801DAC50 = arg0;
    D_801DAC70 = 0;
    D_801DAC74 = 0;
    D_801DAC78 = 1;
    D_801DAC7C = 0;
    D_801DAC58 = 0;
    D_801DAC84 = 0;
    D_801DAC88 = 0;
    D_801DAC8C = func_801CC654(arg0, 0x28, 0, 0x28, 1, 0x28, 0, 0x28, 1, 1, 0, 0);
    func_8013B570(arg0, 0x29, 0, 4, func_801CDF50);
}
#undef func_801CDF50

#define func_801CDFAC func_801CDFAC__func_801CDF50

struct func_801CDF50_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801CDFAC();

void func_801CDF50(struct func_801CDF50_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x28, 0);
        func_800058DC(arg0, func_801CDFAC);
        return;
    }
    func_800058DC(arg0, func_801CDF50);
}
#undef func_801CDFAC

#define func_801CE5A8 func_801CE5A8__func_801CDFAC

typedef struct { s32 x; s32 y; f32 z; } func_801CDFAC_V;
typedef struct { s32 x; s32 y; s32 z; } func_801CDFAC_W;
struct func_801CDFAC_Struct { u8 pad[0x5C]; s32 unk5C; s32 unk60; s32 unk64; };
struct func_801CDFAC_Obj2 { u8 pad[0x76]; u8 unk76; };
struct func_801CDFAC_Obj { u8 pad[0x5C]; struct func_801CDFAC_Obj2 *unk5C; };
struct func_801CDFAC_B { u8 pad[0x2C]; struct func_801CDFAC_Struct *unk2C; };
struct func_801CDFAC_A { u8 pad[4]; struct func_801CDFAC_B *unk4; };
struct func_801CDFAC_I { u16 unk0; u16 unk2; };
struct func_801CDFAC_J { struct func_801CDFAC_I *unk0; s32 *unk4; };
struct func_801CDFAC_H { u8 pad[0xD8]; struct func_801CDFAC_J *unkD8; };
struct func_801CDFAC_K { u16 unk0; u8 pad[0x26]; s32 unk28; u16 unk2C; };
struct func_801CDFAC_L { u8 pad[0x2C]; struct func_801CDFAC_K *unk2C; };
struct func_801CDFAC_G { u8 pad[0x30]; struct func_801CDFAC_L *unk30; };
extern s32 func_801CC540();
extern s32 D_80006214(void *);
extern u8 D_801CDFAC[];
extern u8 D_801E11A0;
extern struct func_801CE2D0_Struct D_801E11B0;
extern void func_80006214();
extern s32 D_801DAC54;
extern u8 D_801E11C0;
extern u8 D_801E11D0;
void func_801CE5A8(s32 arg0);
extern s32 func_80010550(void *, void *);
extern s32 func_80011140(void *, void *, func_801CDFAC_V, u32);
extern void func_8013A28C(void *, func_801CDFAC_W);
extern void func_8013A334(void *, void *, void *, s32);
extern void func_801CE5D8(void *);
extern struct func_801CDFAC_G D_8008DA88;
extern u8 D_801BC025[];
extern struct func_801CDFAC_H D_80171CF0;

void func_801CDFAC(struct func_801CDFAC_Obj *arg0, struct func_801CDFAC_A *arg1) {
    struct func_801CDFAC_Struct *t;
    func_801CDFAC_V *p;
    struct func_801CDFAC_Obj2 *o;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801CDFAC);
        return;
    }
    if (D_801DAC70 != 0) {
        func_80006214(arg0);
        func_8013A28C(&D_8008DA88, *(func_801CDFAC_W *)D_801DAC70);
        o = arg0->unk5C;
        o->unk76 = 1;
        D_801DAC70 = 0;
    }
    p = (func_801CDFAC_V *)D_801DAC74;
    if (p != 0) {
        if (func_80011140(arg1, arg0->unk5C, *p, (u32)p->z) != 0) {
            D_801DAC74 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->unk5C) != 0) {
            D_801DAC78 = 1;
        } else {
            D_801DAC78 = 0;
        }
        *(func_801CDFAC_W *)&D_801E11B0 = *(func_801CDFAC_W *)&arg1->unk4->unk2C->unk5C;
        *(func_801CDFAC_W *)&D_801E11A0 = *(func_801CDFAC_W *)(D_801BC025 + 3);
        D_801DAC54 = (s32)arg1;
        func_8013A334(&D_801E11C0, arg1, arg0->unk5C, 0xF);
        func_8013A334(&D_801E11D0, arg1, arg0->unk5C, 0x12);
    }
    if (D_801DAC7C != 0) {
        func_801CE5A8((s32)arg0);
    }
    if (D_801DAC58 != 0) {
        func_801CE5D8(arg0);
    }
    if (D_801DAC88 != 0) {
        D_80006214(arg0);
        D_8008DA88.unk30->unk2C->unk28 = *D_80171CF0.unkD8->unk4;
        D_8008DA88.unk30->unk2C->unk0 = D_80171CF0.unkD8->unk0->unk0;
        D_8008DA88.unk30->unk2C->unk2C = D_80171CF0.unkD8->unk0->unk2;
    }
}
#undef func_801CE5A8



s32 func_801CE274(void) {
    return D_801DAC74 != 0;
}



s32 func_801CE284(void) {
    if (D_801DAC74 != 0) {
        return 0;
    }
    if (D_801DAC70 != 0) {
        return 0;
    }
    return D_801DAC78;
}


u8 *func_801CE2C4(void) {
    return &D_801E11A0;
}


struct func_801CE2D0_Struct {
    s32 unk0;
    u16 unk4;
};


s32 func_801CE2D0(s32 arg0, u16 arg1) {
    if (arg0 != D_801E11B0.unk0) {
        return 0;
    }
    return D_801E11B0.unk4 == arg1;
}


extern void func_801C3370(s32, s32, s32, u8, s32, s32, s32, s32);

void func_801CE308(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801DAC50);
        func_801C3370(D_801DAC50, arg1, arg2, arg3, (s32) arg4, 0, arg5, 0);
        D_801DAC7C = 1;
        return;
    }
    D_801DAC7C = 0;
}



s32 func_801CE384(void) {
    return D_801DAC7C == 0;
}



s32 func_801CE394(void) {
    return D_801DAC50;
}



s32 func_801CE3A0(void) {
    return D_801DAC54;
}


u8 *func_801CE3AC(void) {
    return &D_801E11C0;
}


u8 *func_801CE3B8(void) {
    return &D_801E11D0;
}



void func_801CE3C4(s32 arg0) {
    D_801DAC84 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE3D0.s")



void func_801CE488(s32 arg0) {
    D_801DAC88 = arg0;
}

#define D_801D9160 D_801D9160__func_801CE494
#define D_801D91B8 D_801D91B8__func_801CE494
#define D_801D9268 D_801D9268__func_801CE494
#define D_801D92C0 D_801D92C0__func_801CE494
#define func_80006214 func_80006214__func_801CE494
extern void func_80006214(void *);

struct func_801CE494_StructData {
    u8 pad[4];
    s32 *unk4;
    u8 pad8[4];
    u16 unkC;
};
struct func_801CE494_StructRoot {
    u8 pad[0x5C];
    struct func_801CE494_StructData *unk5C;
};
struct func_801CE494_StructModel {
    u8 pad[0x24];
    u32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x17];
    u8 unk4B;
};
struct func_801CE494_StructObj {
    u8 pad[0x2C];
    struct func_801CE494_StructModel *unk2C;
};
extern u8 D_801D9160[];
extern u8 D_801D91B8[];
extern u8 D_801D9268[];
extern u8 D_801D92C0[];

void func_801CE494(s32 arg0) {
    s32 i;
    s32 *p;
    struct func_801CE494_StructObj **slot;
    struct func_801CE494_StructData *temp_t0;

    func_80006214((void *)D_801DAC50);
    temp_t0 = ((struct func_801CE494_StructRoot *)D_801DAC50)->unk5C;
    p = temp_t0->unk4;
    for (i = 1; i < temp_t0->unkC; i++) {
        slot = (struct func_801CE494_StructObj **)((u8 *)&D_8008DA88 + i * 4);
        if (p[i] < 0) {
        } else {
            if (((*slot)->unk2C->unk24 & 0xFF) == 0x15) {
                if (arg0 != 0) {
                    (*slot)->unk2C->unk30 = (s32)D_801D91B8 | 0x40000000;
                } else {
                    (*slot)->unk2C->unk30 = (s32)D_801D9160 | 0x40000000;
                }
            } else if (arg0 != 0) {
                (*slot)->unk2C->unk30 = (s32)D_801D92C0 | 0x40000000;
            } else {
                (*slot)->unk2C->unk30 = (s32)D_801D9268 | 0x40000000;
            }
            (*slot)->unk2C->unk4B = 0xFF;
        }
    }
}
#undef D_801D9160
#undef D_801D91B8
#undef D_801D9268
#undef D_801D92C0
#undef func_80006214


extern s32 func_801C354C(s32);

void func_801CE5A8(s32 arg0) {
    func_80006214();
    D_801DAC7C = func_801C354C(arg0) == 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/D_801DD400.s")


#define D_801DAC90 D_801DAC90__func_801CE5D8
#define D_801DD430 D_801DD430__func_801CE5D8
#define D_801E11E8 D_801E11E8__func_801CE5D8
#define func_80034C24 func_80034C24__func_801CE5D8
#define func_801C0B2C func_801C0B2C__func_801CE5D8
extern u64 func_801C0B2C();
extern f64 func_80034C24(u64);
struct func_801CE5D8_Struct { f32 unk0; s32 unk4; };
extern struct func_801CE5D8_Struct D_801DAC90[];
extern f64 D_801DD430;
u64 D_801E11E0[1];
extern u32 D_801E11E8;

void func_801CE5D8(void *arg0) {
    u64 d;

    d = func_801C0B2C() - D_801E11E0[0];
    if ((f64)D_801DAC90[D_801E11E8].unk0 <= func_80034C24(d) / D_801DD430) {
        if (D_801DAC90[D_801E11E8].unk4 == 0) goto c0;
        if (D_801DAC90[D_801E11E8].unk4 != 1) goto end;
        goto c1;
    c0:
        if (D_801DAC84 != 0) {
            func_8012D844(arg0, 0x28, 4);
        } else {
            func_8012D844(arg0, 0x28, 0);
        }
        goto end;
    c1:
        if (D_801DAC84 != 0) {
            func_8012D844(arg0, 0x28, 5);
        } else {
            func_8012D844(arg0, 0x28, 2);
        }
    end:
        D_801E11E8++;
        if (D_801E11E8 >= 0xF) {
            D_801E11E0[0] = func_801C0B2C();
        }
        D_801E11E8 = D_801E11E8 % 15;
    }
}
#undef D_801DAC90
#undef D_801DD430
#undef D_801E11E8
#undef func_80034C24
#undef func_801C0B2C

/* Readonly constants retained after the last ASM donor became C. */
static const f64 D_801DD430__rodata[] = {1000000.0};
