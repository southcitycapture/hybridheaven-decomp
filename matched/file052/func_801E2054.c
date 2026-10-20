#include "context.h"

typedef struct func_801E2054_StructInit { s32 w[4]; } func_801E2054_StructInit;
typedef struct func_801E2054_StructData {
    s16 unk0; u8 pad2[2];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14; u8 pad16[2];
    f32 unk18, unk1C, unk20;
    s32 unk24; void *unk28; s16 unk2C; u8 pad2E[2];
    s32 unk30; u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_801E2054_StructData;
typedef struct func_801E2054_StructNode {
    u8 pad[0x22]; u8 unk22; u8 pad23[0xD];
    func_801E2054_StructData *unk30;
} func_801E2054_StructNode;
typedef struct func_801E2054_StructRoot {
    func_801E2054_StructNode *nodes[10];
} func_801E2054_StructRoot;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012CF8C(s32, void *, s32, s32);
extern s32 func_8038D8B8[];
extern u8 D_801D96C8[], D_801D9768[], D_801D9908[], D_801DA058[], D_801DA0B8[];
extern func_801E2054_StructInit D_801E5738, D_801E5748, D_801E5758, D_801E5768;
extern func_801E2054_StructInit D_801E5778, D_801E5788, D_801E5798, D_801E57A8;
extern s32 D_8038D8CC;
extern struct func_801E2B54_Struct_A *D_8038D8D0;
#define HANDLE D_8038D8CC
#define NODE(i) (((func_801E2054_StructRoot *)D_8038D8D0)->nodes[i])
#define DATA(i) (NODE(i)->unk30)
#define POS(i,z) DATA(i)->unk4 = 0.0f; DATA(i)->unk8 = 0.0f; DATA(i)->unkC = z; DATA(i)->unk12 = 0
#define SCALE(i) DATA(i)->unk18 = 1.0f; DATA(i)->unk1C = 1.0f; DATA(i)->unk20 = 1.0f
#define COLOR(i,r,g,b,a) DATA(i)->unk48 = r; DATA(i)->unk49 = g; DATA(i)->unk4A = b; DATA(i)->unk4B = a

s32 func_801E2054(s32 arg0, s32 arg1) {
    func_801E2054_StructInit sp98 = D_801E5738;
    func_801E2054_StructInit sp88 = D_801E5748;
    func_801E2054_StructInit sp78 = D_801E5758;
    func_801E2054_StructInit sp68 = D_801E5768;
    func_801E2054_StructInit sp58 = D_801E5778;
    func_801E2054_StructInit sp48 = D_801E5788;
    func_801E2054_StructInit sp38 = D_801E5798;
    func_801E2054_StructInit sp28 = D_801E57A8;
    u8 pad[8];
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp58);
    func_80005E44(HANDLE, &sp48);
    func_80005E44(HANDLE, &sp48);
    func_80005E44(HANDLE, &sp58);
    func_80006214(HANDLE);
    func_8012C89C(HANDLE, 0, 0x470, 6);
    func_8012C89C(HANDLE, 1, 0x470, 7);
    func_8012C89C(HANDLE, 2, 0x470, 6);
    func_8012C89C(HANDLE, 3, 0x470, 7);
    func_8012C89C(HANDLE, 4, 0x470, 0);
    func_8012C89C(HANDLE, 5, 0x470, 2);
    func_8012C89C(HANDLE, 6, 0x470, 3);
    func_8012C89C(HANDLE, 7, 0x470, 4);
    func_8012C89C(HANDLE, 8, 0x470, 8);
    DATA(9)->unk30 = 0;
    DATA(9)->unk28 = D_801D9908;
    DATA(9)->unk0 = 0;
    DATA(9)->unk2C = 0;
    func_8012CF8C(HANDLE, (u8 *)DATA(9) + 0x40, 0x378, 0);
    POS(0,125.0f); SCALE(0);
    POS(1,125.0f); SCALE(1);
    POS(2,-125.0f); SCALE(2);
    POS(3,-125.0f); SCALE(3);
    POS(4,0.0f); SCALE(4);
    POS(5,0.0f);
    DATA(5)->unk30 = (s32)D_801D9768 | 0x40000000;
    DATA(5)->unk24 = 0x100;
    COLOR(5,255,255,255,255);
    SCALE(5);
    POS(6,0.0f);
    DATA(6)->unk30 = (s32)D_801D96C8 | 0x40000000;
    DATA(6)->unk24 = 0x100;
    COLOR(6,255,255,255,255);
    POS(7,0.0f);
    DATA(7)->unk30 = (s32)D_801DA058 | 0x40000000;
    DATA(7)->unk24 = 0x100;
    COLOR(7,255,255,255,127);
    POS(8,0.0f);
    DATA(8)->unk30 = (s32)D_801DA0B8 | 0x40000000;
    DATA(8)->unk24 = 0x300;
    COLOR(8,0,0,0,127);
    DATA(8)->unk4C = 0x3F;
    DATA(8)->unk4D = 0x5D;
    DATA(8)->unk4E = 0x29;
    DATA(8)->unk4F = 0x7F;
    NODE(8)->unk22 = 0;
    DATA(9)->unk4 = 0.0f;
    DATA(9)->unk8 = 0.0f;
    DATA(9)->unkC = 0.0f;
    DATA(9)->unk10 = 0x800;
    DATA(9)->unk12 = 0;
    DATA(9)->unk14 = 0;
    SCALE(9);
    DATA(9)->unk24 = 0x300;
    COLOR(9,0,200,255,127);
    DATA(9)->unk4C = 255;
    DATA(9)->unk4D = 255;
    DATA(9)->unk4E = 255;
    DATA(9)->unk4F = 127;
    NODE(9)->unk22 = 0;
    return 2;
}
