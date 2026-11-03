#include "common.h"
typedef struct func_801E390C_Struct3 {
    u8 pad0[8];
    f32 unk8;
} func_801E390C_Struct3;
typedef struct func_801E390C_Struct2 {
    u8 pad0[0x30];
    func_801E390C_Struct3 *unk30;
} func_801E390C_Struct2;
typedef struct func_801E390C_Struct1 {
    func_801E390C_Struct2 *unk0;
} func_801E390C_Struct1;
extern struct func_801E390C_Struct1 *D_8038D8D0;
extern f64 func_80034C24();
extern u64 func_801C0B2C();
extern s32 func_801C0B8C(u64);


typedef struct func_801E4A44_StructC {
    u8 pad0[0x8];
    f32 unk8;
    u8 padC[0x8];
    s16 unk14;
} func_801E4A44_StructC;
typedef struct func_801E4A44_StructB {
    u8 pad0[0x30];
    func_801E4A44_StructC *unk30;
} func_801E4A44_StructB;
typedef struct func_801E4A44_StructA {
    u8 pad0[0x20];
    func_801E4A44_StructB *unk20;
} func_801E4A44_StructA;
extern f32 func_80029280(f32);
extern f64 D_801F5848;
extern f32 D_801F5850;
extern f64 D_801F5858;
extern f32 D_801F5860;

s32 func_801E4A44(s32 arg0, s32 arg1) {
    u64 t;
    f32 f;
    f32 a;

    if (func_801C0B8C(0xC65D40) != 0) {
        return 10;
    }
    if (func_801C0B8C(0x3D0900) != 0) {
        t = func_801C0B2C();
        ((func_801E4A44_StructA *)D_8038D8D0)->unk20->unk30->unk8 = (f32)((f32)(func_80034C24(t) / D_801F5848 - 4.0) / 9.0f * 18.0f + D_801F5850);
        f = func_80034C24(t) / D_801F5858;
        a = (f - (f32)(s32)f) * 360.0f * D_801F5860;
        if (a) {}
        ((func_801E4A44_StructA *)D_8038D8D0)->unk20->unk30->unk14 = (s32)(func_80029280(a) *8.0f * 2048.0f / 90.0f);
    }
    return 9;
}
