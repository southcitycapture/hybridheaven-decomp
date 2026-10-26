#include "common.h"
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
struct func_8024EACC_Sub2 {
    u8 pad[0xC];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_8024EACC_Sub {
    u8 pad[0x2C];
    struct func_8024EACC_Sub2 *unk2C;
};
struct func_8024EACC_Glob {
    u8 pad[0xE0];
    struct func_8024EACC_Sub *unkE0;
};
extern struct func_8024EACC_Glob D_801BBBF0;
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80133A24(s32);


typedef struct func_8024E67C_StructO {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024E67C_StructO;

typedef struct func_8024E67C_StructP {
    u8 pad[0x40];
    f32 unk40;
    u8 pad44[4];
    f32 unk48;
} func_8024E67C_StructP;
extern void func_801C3B10(s32);
extern s32 func_801C3B20(void);
extern void func_801C3B2C(s32);
extern void func_8024E7EC();
extern u8 D_80259B3C[];
extern f32 D_8025A040;
extern f32 D_8025A044;
extern f32 D_8025A048;
extern f32 D_8025A04C;
extern f32 D_8025A050;
extern f32 D_8025A054;
#define F67C(i) (*(f32 *)((u8 *)&D_801BBBF0 + 0x1E8 + 4 * (i)))

void func_8024E67C(func_8024E67C_StructO *arg0, s32 arg1) {
    s32 v;

    v = arg0->unk3C;
    arg0->unk3C = v + 1;
    if (v == 3) {
        F67C(0) = D_8025A040;
        F67C(1) = -126.5f;
        F67C(2) = D_8025A044;
        F67C(3) = D_8025A048;
        F67C(4) = D_8025A04C;
        F67C(5) = D_8025A050;
        func_8011AAF4(D_80259B3C, 0x26A, arg0, 0, 1, 0.0f, F67C(0), F67C(1), F67C(2), 0.0f, F67C(3), F67C(4), F67C(5), 0.0f, D_8025A054, -1, -1);
    }
    if (func_80133A24(0x7A) != 0 && func_801C3B20() == 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        (*(func_8024E67C_StructP **)((u8 *)&D_801BBBF0 + 0xDC))->unk40 = 0.0f;
        (*(func_8024E67C_StructP **)((u8 *)&D_801BBBF0 + 0xDC))->unk48 = 0.0f;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024E7EC);
    }
}
