#include "common.h"


extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern s32 D_801DB144;
extern s32 D_801DB148;
extern s32 D_801DB14C;
extern void func_801D1474();

void func_801D1420(s32 arg0, s32 arg1) {
    D_801DB144 = 0;
    D_801DB148 = 0;
    D_801DB14C = 1;
    func_8013B570(arg0, 0x2A, 0, 4, &func_801D1474);
}


struct func_801D1474_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801D14D0();

void func_801D1474(struct func_801D1474_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x28, 0);
        func_800058DC(arg0, func_801D14D0);
        return;
    }
    func_800058DC(arg0, func_801D1474);
}

#define D_801E1380 D_801E1380__func_801D14D0
#define func_801D1720_Struct func_801D1720_Struct__func_801D14D0
struct func_801D1720_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801D1720_Struct D_801E1380;
extern u8 D_801E1370;
/* starting point: func_801D2D3C (file025), whose assembly is 100% the same as this function's */
/* starting point: func_801D6D98 (file025), whose assembly is 97% the same as this function's */

struct func_801D14D0_StructA { s32 a, b, c; };
struct func_801D14D0_StructB { s32 a, b; f32 c; };
struct func_801D14D0_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D14D0_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D14D0_StructR { u8 pad[4]; struct func_801D14D0_StructS *u4; };
struct func_801D14D0_StructS { u8 pad[0x2C]; struct func_801D14D0_StructP *u2C; };
struct func_801D14D0_StructT { u8 pad[0x5C]; struct func_801D14D0_StructQ *u5C; };
void func_80006214();
extern s32 func_801CC540();
extern s32 func_80010550(void *, void *);
extern s32 func_80011140(void *, void *, struct func_801D14D0_StructB, u32);
extern void func_8013A28C(void *, struct func_801D14D0_StructA);
extern u8 D_8008DA88[];
extern u8 D_801BC025[];

void func_801D14D0(struct func_801D14D0_StructT *arg0, struct func_801D14D0_StructR *arg1) {
    struct func_801D14D0_StructB *p;
    struct func_801D14D0_StructQ *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D14D0);
        return;
    }
    if (D_801DB144 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D14D0_StructA *)D_801DB144);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DB144 = 0;
    }
    p = (struct func_801D14D0_StructB *)D_801DB148;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DB148 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DB14C = 1;
        } else {
            D_801DB14C = 0;
        }
        *(struct func_801D14D0_StructA *)&D_801E1380 = *(struct func_801D14D0_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D14D0_StructA *)&D_801E1370 = *(struct func_801D14D0_StructA *)&D_801BC025[3];
    }
}
#undef D_801E1380
#undef func_801D1720_Struct



s32 func_801D16C4(void) {
    return D_801DB148 != 0;
}



s32 func_801D16D4(void) {
    if (D_801DB148 != 0) {
        return 0;
    }
    if (D_801DB144 != 0) {
        return 0;
    }
    return D_801DB14C;
}

extern u8 D_801E1370;

u8 *func_801D1714(void) {
    return &D_801E1370;
}


struct func_801D1720_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D1720_Struct D_801E1380;

s32 func_801D1720(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1380.unk0) {
        return 0;
    }
    return D_801E1380.unk4 == arg1;
}

