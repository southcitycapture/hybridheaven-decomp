#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80250334 D_80250334
#define func_8024F188 LP(fA, __LINE__)
#define func_8024F24C LP(fB, __LINE__)
#define func_8024F818 LP(fC, __LINE__)
#define func_8024FFF4 LP(fD, __LINE__)
#include "context.h"
#undef func_80250334
#undef func_8024F188
#undef func_8024F24C
#undef func_8024F818
#undef func_8024FFF4

typedef struct func_80250334_StructA {
    u8 pad[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_80250334_StructA;

typedef struct func_80250334_StructB {
    u8 pad[0x2C];
    func_80250334_StructA *unk2C;
} func_80250334_StructB;

typedef struct func_80250334_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80250334_Struct;

extern func_8024EF6C_Vec D_80254B3C;
extern u8 D_80259D7C[];
extern u8 D_80259DBC[];
extern f32 D_8025A11C;
extern f32 D_8025A120;
extern f32 D_8025A124;
extern f32 D_8025A128;
extern f32 D_8025A12C;
extern f32 D_8025A130;
extern f32 D_8025A134;
extern f32 D_8025A138;
extern f32 D_8025A13C;

void func_80250334(func_80250334_Struct *arg0, func_80250334_StructB **arg1) {
    s32 v = arg0->unk90;

    arg0->unk90++;
    if (v == 0) {
        (*arg1)->unk2C->unk4 = D_8025A11C;
        (*arg1)->unk2C->unkC = D_8025A120;
    }
    if (v == 20) {
        func_80133980(0x77);
    }
    if (v >= 30) {
        func_802515AC((struct func_802515AC_Struct *)arg0);
    }
    if (v == 50) {
        GF(0) = D_8025A124;
        GF(1) = D_8025A128;
        GF(2) = 454.0f;
        GF(3) = D_8025A12C;
        GF(4) = D_8025A130;
        GF(5) = D_8025A134;
        func_8011AAF4(D_80259D7C, 0x575, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
    }
    if (v == 100) {
        GF(0) = D_8025A138;
        GF(1) = -116.0f;
        GF(2) = 450.0f;
        GF(3) = D_8025A13C;
        GF(4) = -111.5f;
        GF(5) = 450.0f;
        func_8011AAF4(D_80259DBC, 0x582, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
        func_8013A1B4(arg1, D_80254B3C, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802505C0);
    }
}
