#include "common.h"
extern u8 D_801D9110[];
extern u8 D_8038D89C[];
extern s32 D_8038D8CC;
typedef struct func_801FCB44_Struct {
    u8 pad[0x18];
    u8 *unk18;
} func_801FCB44_Struct;
extern struct func_801FCB44_Struct *D_8038D8D0;
typedef struct func_801E3068_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x10];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801E3068_Struct2;
typedef struct func_801E3068_Struct1 {
    u8 pad0[0x30];
    func_801E3068_Struct2 *unk30;
} func_801E3068_Struct1;
#define O ((func_801E3068_Struct1 **)D_8038D8D0)
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 func_8038D830[];


typedef struct func_801FC008_StructB {
    u8 pad0[4];
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
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801FC008_StructB;
typedef struct func_801FC008_StructA {
    u8 pad0[0x30];
    func_801FC008_StructB *unk30;
} func_801FC008_StructA;

extern f32 D_80208DA0;
#undef O
#define O(i) (((func_801FC008_StructA **)D_8038D8D0)[i])->unk30

s32 func_801FC008(s32 arg0, s32 arg1) {
    register f32 k;
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D9, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D9, 1);
    func_8012C89C(D_8038D8CC, 2, 0x2D9, 2);
    func_8012C89C(D_8038D8CC, 3, 0x2D9, 3);
    func_8012C89C(D_8038D8CC, 4, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 5, 0x2D9, 5);
    func_8012C89C(D_8038D8CC, 6, 0x2D9, 6);
    func_8012C89C(D_8038D8CC, 7, 0x2D9, 7);
    k = D_80208DA0;
    if (k) {
    }
    goto L;
L:
    O(0)->unk4 = 22.0f; O(0)->unk8 = 0.0f; O(0)->unkC = -28.0f; O(0)->unk12 = 0;
    O(1)->unk4 = 22.0f; O(1)->unk8 = 0.0f; O(1)->unkC = -28.0f; O(1)->unk12 = 0;
    O(2)->unk4 = -22.0f; O(2)->unk8 = 0.0f; O(2)->unkC = -28.0f; O(2)->unk12 = 0;
    O(3)->unk4 = -22.0f; O(3)->unk8 = 0.0f; O(3)->unkC = -28.0f; O(3)->unk12 = 0;
    O(4)->unk4 = 5120.0f; O(4)->unk8 = 0.0f; O(4)->unkC = -28.0f; O(4)->unk12 = 0x200;
    O(4)->unk30 = (s32)D_801D9110 | 0x40000000;
    O(4)->unk24 = 0x100;
    O(4)->unk48 = 0x66; O(4)->unk49 = 0xE5; O(4)->unk4A = 0xE5; O(4)->unk4B = 0x7F;
    O(5)->unk4 = 0.0f; O(5)->unk8 = 0.0f; O(5)->unkC = 0.0f; O(5)->unk12 = 0;
    O(6)->unk4 = 13.0f; O(6)->unk8 = 0.0f; O(6)->unkC = -12.0f; O(6)->unk12 = 0;
    O(6)->unk18 = k; O(6)->unk1C = k; O(6)->unk20 = k;
    O(7)->unk4 = 13.0f; O(7)->unk8 = 0.0f; O(7)->unkC = -12.0f; O(7)->unk12 = 0;
    O(7)->unk18 = k; O(7)->unk1C = k; O(7)->unk20 = k;
    return 2;
}
