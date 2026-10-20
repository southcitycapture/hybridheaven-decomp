#include "context.h"
struct func_801E2F88_Struct2 {
    u8 pad0[4];
    f32 unk4;
};
struct func_801E2F88_Struct1 {
    u8 pad0[0x30];
    struct func_801E2F88_Struct2 *unk30;
};
struct func_801E2F88_Struct0 {
    u8 pad0[0x24];
    struct func_801E2F88_Struct1 *unk24;
};
extern struct func_801E2F88_Struct0 *D_8038D8D0;

typedef struct func_801E2500_Struct2 {
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
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E2500_Struct2;

typedef struct func_801E2500_Struct1 {
    u8 pad0[0x30];
    func_801E2500_Struct2 *unk30;
} func_801E2500_Struct1;

typedef struct func_801E2500_Vec {
    s32 v[4];
} func_801E2500_Vec;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern s32 D_8038D8CC;
extern u8 D_801D9768[];
extern u8 D_801D96C8[];
extern u8 D_801DA058[];
extern u8 D_801DA0B8[];
extern f32 D_801E992C;
extern f32 D_801E9930;
extern func_801E2500_Vec D_801E809C;
extern func_801E2500_Vec D_801E80AC;
extern func_801E2500_Vec D_801E80BC;
extern func_801E2500_Vec D_801E80CC;
extern func_801E2500_Vec D_801E80DC;
extern func_801E2500_Vec D_801E80EC;
extern func_801E2500_Vec D_801E80FC;
extern func_801E2500_Vec D_801E810C;

#define O(i) (((func_801E2500_Struct1 **)D_8038D8D0)[i]->unk30)

s32 func_801E2500(s32 arg0, s32 arg1) {
    func_801E2500_Vec sp98;
    func_801E2500_Vec sp88;
    func_801E2500_Vec sp78;
    func_801E2500_Vec sp68;
    func_801E2500_Vec sp58;
    func_801E2500_Vec sp48;
    func_801E2500_Vec sp38;
    func_801E2500_Vec sp28;
    s32 pad[2];

    sp98 = D_801E809C;
    sp88 = D_801E80AC;
    sp78 = D_801E80BC;
    sp68 = D_801E80CC;
    sp58 = D_801E80DC;
    sp48 = D_801E80EC;
    sp38 = D_801E80FC;
    sp28 = D_801E810C;
    func_80005E44(D_8038D8CC, &sp88);
    goto l1;
l1:
    func_80005E44(D_8038D8CC, &sp88);
    goto l2;
l2:
    func_80005E44(D_8038D8CC, &sp88);
    goto l3;
l3:
    func_80005E44(D_8038D8CC, &sp88);
    goto l4;
l4:
    func_80005E44(D_8038D8CC, &sp88);
    goto l5;
l5:
    func_80005E44(D_8038D8CC, &sp88);
    func_80005E44(D_8038D8CC, &sp58);
    func_80005E44(D_8038D8CC, &sp48);
    func_80005E44(D_8038D8CC, &sp48);
    func_80005E44(D_8038D8CC, &sp88);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x470, 6);
    func_8012C89C(D_8038D8CC, 1, 0x470, 7);
    func_8012C89C(D_8038D8CC, 2, 0x470, 6);
    func_8012C89C(D_8038D8CC, 3, 0x470, 7);
    func_8012C89C(D_8038D8CC, 4, 0x470, 0);
    func_8012C89C(D_8038D8CC, 5, 0x470, 2);
    func_8012C89C(D_8038D8CC, 6, 0x470, 3);
    func_8012C89C(D_8038D8CC, 7, 0x470, 4);
    func_8012C89C(D_8038D8CC, 8, 0x470, 8);
    func_8012C89C(D_8038D8CC, 9, 0x470, 5);
    O(0)->unk4 = 0.0f;
    O(0)->unk8 = 0.0f;
    O(0)->unkC = 125.0f;
    O(0)->unk12 = 0;
    O(0)->unk18 = 1.0f;
    O(0)->unk1C = 1.0f;
    O(0)->unk20 = 1.0f;
    O(1)->unk4 = 0.0f;
    O(1)->unk8 = 0.0f;
    O(1)->unkC = 125.0f;
    O(1)->unk12 = 0;
    O(1)->unk18 = 1.0f;
    O(1)->unk1C = 1.0f;
    O(1)->unk20 = 1.0f;
    O(2)->unk4 = 0.0f;
    O(2)->unk8 = 0.0f;
    O(2)->unkC = -125.0f;
    O(2)->unk12 = 0;
    O(2)->unk18 = 1.0f;
    O(2)->unk1C = 1.0f;
    O(2)->unk20 = 1.0f;
    O(3)->unk4 = 0.0f;
    O(3)->unk8 = 0.0f;
    O(3)->unkC = -125.0f;
    O(3)->unk12 = 0;
    O(3)->unk18 = 1.0f;
    O(3)->unk1C = 1.0f;
    O(3)->unk20 = 1.0f;
    O(4)->unk4 = 0.0f;
    O(4)->unk8 = 0.0f;
    O(4)->unkC = 0.0f;
    O(4)->unk12 = 0;
    O(4)->unk18 = 1.0f;
    O(4)->unk1C = 1.0f;
    O(4)->unk20 = 1.0f;
    O(5)->unk4 = 0.0f;
    O(5)->unk8 = 0.0f;
    O(5)->unkC = 0.0f;
    O(5)->unk12 = 0;
    O(5)->unk30 = (s32)D_801D9768 | 0x40000000;
    O(5)->unk24 = 0x100;
    O(5)->unk48 = 0xFF;
    O(5)->unk49 = 0xFF;
    O(5)->unk4A = 0xFF;
    O(5)->unk4B = 0xFF;
    O(5)->unk18 = 1.0f;
    O(5)->unk1C = 1.0f;
    O(5)->unk20 = 1.0f;
    O(6)->unk4 = 0.0f;
    O(6)->unk8 = 0.0f;
    O(6)->unkC = 0.0f;
    O(6)->unk12 = 0;
    O(6)->unk30 = (s32)D_801D96C8 | 0x40000000;
    O(6)->unk24 = 0x100;
    O(6)->unk48 = 0xFF;
    O(6)->unk49 = 0xFF;
    O(6)->unk4A = 0xFF;
    O(6)->unk4B = 0xFF;
    O(7)->unk4 = 0.0f;
    O(7)->unk8 = 0.0f;
    O(7)->unkC = 0.0f;
    O(7)->unk12 = 0;
    O(7)->unk30 = (s32)D_801DA058 | 0x40000000;
    O(7)->unk24 = 0x100;
    O(7)->unk48 = 0xFF;
    O(7)->unk49 = 0xFF;
    O(7)->unk4A = 0xFF;
    O(7)->unk4B = 0x7F;
    O(8)->unk4 = 0.0f;
    O(8)->unk8 = 0.0f;
    O(8)->unkC = D_801E992C;
    O(8)->unk12 = 0;
    O(8)->unk30 = (s32)D_801DA0B8 | 0x40000000;
    O(8)->unk24 = 0x300;
    O(8)->unk48 = 0;
    O(8)->unk49 = 0;
    O(8)->unk4A = 0;
    O(8)->unk4B = 0;
    O(8)->unk4C = 0;
    O(8)->unk4D = 0;
    O(8)->unk4E = 0;
    O(8)->unk4F = 0;
    O(9)->unk4 = 0.0f;
    O(9)->unk8 = 0.0f;
    O(9)->unkC = D_801E9930;
    O(9)->unk12 = 0;
    O(9)->unk18 = 1.0f;
    O(9)->unk1C = 1.0f;
    O(9)->unk20 = 1.0f;
    return 2;
}
