#include "common.h"
extern s32 D_8038D8CC;
extern u32 D_8038D8D0;


typedef struct func_801E1F44_StructData { s32 x[4]; } func_801E1F44_StructData;
typedef struct func_801E1F44_StructNode {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[2]; s16 unk12;
    u8 pad14[4]; f32 unk18, unk1C, unk20;
    s32 unk24; u8 pad28[8]; s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_801E1F44_StructNode;
typedef struct func_801E1F44_StructItem {
    u8 pad0[0x22]; u8 unk22; u8 pad23[0xD];
    func_801E1F44_StructNode *unk30;
} func_801E1F44_StructItem;
typedef struct func_801E1F44_StructRoot {
    func_801E1F44_StructItem *items[22];
} func_801E1F44_StructRoot;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012CF8C(s32, s32, s32, s32);
extern u8 D_801D96C8[];
extern u8 D_801D9768[];
extern u8 D_801D9FE8[];
extern u8 D_801DA088[];
extern u8 D_801DA0B8[];
extern void func_801D9F00(void);
extern func_801E1F44_StructData D_801E39F4;
extern func_801E1F44_StructData D_801E3A04;
extern func_801E1F44_StructData D_801E3A14;
extern func_801E1F44_StructData D_801E3A24;
extern func_801E1F44_StructData D_801E3A34;
extern func_801E1F44_StructData D_801E3A44;
extern func_801E1F44_StructData D_801E3A54;
extern func_801E1F44_StructData D_801E3A64;
#define ROOT (*(func_801E1F44_StructRoot **)&D_8038D8D0)
#define NODE(n) (ROOT->items[n]->unk30)
typedef struct func_801E1F44_StructLoopRoot {
    func_801E1F44_StructItem *first[8];
    func_801E1F44_StructItem *loopitems[14];
} func_801E1F44_StructLoopRoot;
#define LOOPITEM (ROOT->items[i + 8])

s32 func_801E1F44(s32 arg0, s32 arg1) {
    func_801E1F44_StructData spB0 = D_801E39F4;
    func_801E1F44_StructData spA0 = D_801E3A04;
    func_801E1F44_StructData sp90 = D_801E3A14;
    func_801E1F44_StructData sp80 = D_801E3A24;
    func_801E1F44_StructData sp70 = D_801E3A34;
    func_801E1F44_StructData sp60 = D_801E3A44;
    func_801E1F44_StructData sp50 = D_801E3A54;
    func_801E1F44_StructData sp40 = D_801E3A64;
#define i arg0
    s32 offset;
    s32 addr;
    s32 shared;
    func_801E1F44_StructItem *item;

    func_80005E44(D_8038D8CC, &spA0);
    func_80005E44(D_8038D8CC, &spA0);
    for (i = 0; i < 2; i++) {
        func_80005E44(D_8038D8CC, &sp60);
    }
    func_80005E44(D_8038D8CC, &sp60);
    func_80005E44(D_8038D8CC, &spB0);
    func_80005E44(D_8038D8CC, &sp70);
    func_80005E44(D_8038D8CC, &sp60);
    for (i = 0; i < 14; i++) {
        func_80005E44(D_8038D8CC, &sp70);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x463, 0);
    func_8012C89C(D_8038D8CC, 1, 0x463, 2);
    func_8012C89C(D_8038D8CC, 2, 0x463, 3);
    func_8012C89C(D_8038D8CC, 3, 0x463, 4);
    func_8012C89C(D_8038D8CC, 4, 0x463, 5);
    func_8012C89C(D_8038D8CC, 5, 0x464, 2);
    func_8012C89C(D_8038D8CC, 6, 0x464, 3);
    func_8012C89C(D_8038D8CC, 7, 0x464, 4);
    for (i = 0; i < 14; i++) {
        func_8012C89C(D_8038D8CC, i + 8, 0x46E, 0);
    }
    NODE(0)->unk4 = 0.0f;
    NODE(0)->unk8 = 0.0f;
    NODE(0)->unkC = 0.0f;
    NODE(0)->unk12 = 0;
    NODE(0)->unk18 = 1.0f;
    NODE(0)->unk1C = 1.0f;
    NODE(0)->unk20 = 1.0f;
    NODE(1)->unk4 = 0.0f;
    NODE(1)->unk8 = 0.0f;
    NODE(1)->unkC = 0.0f;
    NODE(1)->unk30 = (s32)D_801D9768 | 0x40000000;
    NODE(1)->unk24 = 0x100;
    NODE(1)->unk48 = 0xFF;
    NODE(1)->unk49 = 0xFF;
    NODE(1)->unk4A = 0xFF;
    NODE(1)->unk4B = 0xFF;
    NODE(1)->unk12 = 0;
    NODE(1)->unk18 = 1.0f;
    NODE(1)->unk1C = 1.0f;
    NODE(1)->unk20 = 1.0f;
    NODE(2)->unk4 = 0.0f;
    NODE(2)->unk8 = 0.0f;
    shared = (s32)D_801D9FE8 | 0x40000000;
    NODE(2)->unkC = 0.0f;
    NODE(2)->unk12 = 0;
    NODE(2)->unk30 = shared;
    NODE(2)->unk24 = 0x300;
    NODE(2)->unk48 = 0;
    NODE(2)->unk49 = 0xFF;
    NODE(2)->unk4A = 0xFF;
    NODE(2)->unk4B = 0x7F;
    NODE(2)->unk4C = 0xFF;
    NODE(2)->unk4D = 0xFF;
    NODE(2)->unk4E = 0xFF;
    NODE(2)->unk4F = 0x7F;
    NODE(3)->unk4 = 0.0f;
    NODE(3)->unk8 = 0.0f;
    NODE(3)->unkC = 0.0f;
    NODE(3)->unk12 = 0;
    NODE(3)->unk30 = shared;
    NODE(3)->unk24 = 0x300;
    NODE(3)->unk48 = 0xFF;
    NODE(3)->unk49 = 0;
    NODE(3)->unk4A = 0;
    NODE(3)->unk4B = 0x7F;
    NODE(3)->unk4C = 0xFF;
    NODE(3)->unk4D = 0xFF;
    NODE(3)->unk4E = 0xFF;
    NODE(3)->unk4F = 0x7F;
    NODE(4)->unk4 = 0.0f;
    NODE(4)->unk8 = 0.0f;
    NODE(4)->unkC = 0.0f;
    NODE(4)->unk12 = 0;
    NODE(4)->unk30 = (s32)D_801DA088 | 0x40000000;
    NODE(4)->unk24 = 0x100;
    NODE(4)->unk48 = 0xFF;
    NODE(4)->unk49 = 0xFF;
    NODE(4)->unk4A = 0xFF;
    NODE(4)->unk4B = 0x7F;
    NODE(5)->unk4 = 0.0f;
    NODE(5)->unk8 = 0.0f;
    NODE(5)->unkC = 0.0f;
    NODE(5)->unk12 = 0;
    NODE(5)->unk18 = 1.0f;
    NODE(5)->unk1C = 1.0f;
    NODE(5)->unk20 = 1.0f;
    NODE(6)->unk4 = 0.0f;
    NODE(6)->unk8 = 0.0f;
    NODE(6)->unkC = 0.0f;
    NODE(6)->unk12 = 0;
    NODE(6)->unk30 = (s32)D_801D96C8 | 0x40000000;
    NODE(6)->unk24 = 0x100;
    NODE(6)->unk48 = 0xFF;
    NODE(6)->unk49 = 0xFF;
    NODE(6)->unk4A = 0xFF;
    NODE(6)->unk4B = 0xFF;
    NODE(7)->unk4 = 0.0f;
    NODE(7)->unk8 = 0.0f;
    NODE(7)->unkC = 0.0f;
    NODE(7)->unk12 = 0;
    NODE(7)->unk30 = (s32)D_801DA0B8 | 0x40000000;
    NODE(7)->unk24 = 0x300;
    NODE(7)->unk48 = 0;
    NODE(7)->unk49 = 0;
    NODE(7)->unk4A = 0;
    NODE(7)->unk4B = 0x7F;
    NODE(7)->unk4C = 0x3F;
    NODE(7)->unk4D = 0x5D;
    addr = (s32)func_801D9F00 | 0x40000000;
    NODE(7)->unk4E = 0x29;
    NODE(7)->unk4F = 0x7F;
    for (i = 0; i < 14; i++) {
    func_8012CF8C(D_8038D8CC, (s32)LOOPITEM->unk30 + 0x40, 0x46F, 0);
    LOOPITEM->unk30->unk30 = addr;
    LOOPITEM->unk30->unk24 = 0x300;
    LOOPITEM->unk30->unk48 = 0xFF;
    LOOPITEM->unk30->unk49 = 0xFF;
    LOOPITEM->unk30->unk4A = 0xFF;
    LOOPITEM->unk30->unk4B = 0x7F;
    LOOPITEM->unk30->unk4C = 0xFF;
    LOOPITEM->unk30->unk4D = 0xFF;
    LOOPITEM->unk30->unk4E = 0xFF;
    LOOPITEM->unk30->unk4F = 0x7F;
    LOOPITEM->unk22 = 0;
    }
    if (i) {} if (i) {} if (i) {} if (i) {}
    return 2;
}
