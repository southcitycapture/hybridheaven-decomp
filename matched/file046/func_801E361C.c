#include "common.h"
struct func_801E4D04_StructInner {
    u8 pad[0x22];
    u8 flag;
};
struct func_801E4D04_StructOuter {
    u8 pad[0xC];
    struct func_801E4D04_StructInner *unkC;
};
extern struct func_801E4D04_StructOuter *D_8038D8D0;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
void *func_801BF6B0(s32 arg0);
struct func_801E2034_Struct {
    u8 pad[0xC];
    s32 unkC;
};
extern u8 func_8038D830[];


typedef struct func_801E361C_StructLeaf {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_801E361C_StructLeaf;
typedef struct func_801E361C_StructNode {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E361C_StructLeaf *unk30;
} func_801E361C_StructNode;
typedef struct func_801E361C_StructData { s32 a, b, c, d; } func_801E361C_StructData;
extern void func_801C28F0(void *);
extern u8 D_801DA088[];
extern u8 D_801D9FE8[];
extern u8 func_801D9F00[];
extern u8 D_801EA6D8[];
extern u8 D_801EA6E8[];
extern func_801E361C_StructData D_801EA698[];
#define ITEMS ((func_801E361C_StructNode **)D_8038D8D0)
extern s32 D_8038D8CC;
#define HANDLE D_8038D8CC
#define ITEM(i) (ITEMS[i])

s32 func_801E361C(s32 arg0, s32 arg1) {
    s32 i;
    struct func_801E2034_Struct *result;
    result = func_801BF6B0(2);
    if (result->unkC < 2) return 1;
    for (i = 0; i < 2; i++) { func_80005E44(HANDLE, D_801EA6D8); if ((s32)D_801EA6D8 == i) {} }
    func_80005E44(HANDLE, D_801EA6E8);
    func_80005E44(HANDLE, D_801EA6E8);
    arg1 = (s32)(func_8038D830 + 0x6C);
    if (arg1) {}
    if (arg1) {}
    i = 0;
    do {
        func_80005E44(HANDLE, (void*)arg1);
        i++;
    } while (i < 2);
    func_80005E44(HANDLE, (void*)arg1);
    func_80005E44(HANDLE, (void*)arg1);
    func_80005E44(HANDLE, func_8038D830 + 0x5C);
    func_80006214(HANDLE);
    func_8012C89C(HANDLE, 0, 0x466, 2);
    func_8012C89C(HANDLE, 1, 0x466, 3);
    func_8012C89C(HANDLE, 2, 0x466, 4);
    func_8012C89C(HANDLE, 3, 0x466, 5);
    func_8012C89C(HANDLE, 4, 0x469, 0);
    func_8012C89C(HANDLE, 5, 0x469, 0);
    func_8012C89C(HANDLE, 6, 0x468, 0);
    func_8012C89C(HANDLE, 7, 0x465, 0);
    func_8012C89C(HANDLE, 8, 0x466, 6);
    ITEMS[0]->unk30->unk4 = 0.0f;
    ITEMS[0]->unk30->unk8 = 0.0f;
    ITEMS[0]->unk30->unkC = 0.0f;
    ITEMS[0]->unk30->unk12 = 0;
    ITEMS[0]->unk30->unk30 = (s32)D_801DA088 | 0x40000000;
    ITEMS[0]->unk30->unk24 = 0x100;
    ITEMS[0]->unk30->unk48 = 0xFF;
    ITEMS[0]->unk30->unk49 = 0xFF;
    ITEMS[0]->unk30->unk4A = 0xFF;
    ITEMS[0]->unk30->unk4B = 0;
    ITEMS[0]->unk22 = 1;
    ITEMS[1]->unk30->unk4 = 0.0f;
    ITEMS[1]->unk30->unk8 = 0.0f;
    ITEMS[1]->unk30->unkC = 0.0f;
    ITEMS[1]->unk30->unk12 = 0;
    ITEMS[1]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    ITEMS[1]->unk30->unk24 = 0x300;
    ITEMS[1]->unk30->unk48 = 0;
    ITEMS[1]->unk30->unk49 = 0xFF;
    ITEMS[1]->unk30->unk4A = 0xFF;
    ITEMS[1]->unk30->unk4B = 0x7F;
    ITEMS[1]->unk30->unk4C = 0xFF;
    ITEMS[1]->unk30->unk4D = 0xFF;
    ITEMS[1]->unk30->unk4E = 0xFF;
    ITEMS[1]->unk30->unk4F = 0x7F;
    ITEMS[1]->unk22 = 1;
    ITEMS[2]->unk30->unk4 = 0.0f;
    ITEMS[2]->unk30->unk8 = 190.0f;
    ITEMS[2]->unk30->unkC = 0.0f;
    ITEMS[2]->unk30->unk12 = 0;
    ITEMS[2]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    ITEMS[2]->unk30->unk24 = 0x300;
    ITEMS[2]->unk30->unk48 = 0;
    ITEMS[2]->unk30->unk49 = 0xFF;
    ITEMS[2]->unk30->unk4A = 0xFF;
    ITEMS[2]->unk30->unk4B = 0xFF;
    ITEMS[2]->unk30->unk4C = 0xFF;
    ITEMS[2]->unk30->unk4D = 0xFF;
    ITEMS[2]->unk30->unk4E = 0xFF;
    ITEMS[2]->unk30->unk4F = 0xFF;
    ITEMS[2]->unk22 = 0;
    ITEMS[3]->unk30->unk4 = 0.0f;
    ITEMS[3]->unk30->unk8 = 181.0f;
    ITEMS[3]->unk30->unkC = 0.0f;
    ITEMS[3]->unk30->unk12 = 0;
    ITEMS[3]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    ITEMS[3]->unk30->unk24 = 0x300;
    ITEMS[3]->unk30->unk48 = 0;
    ITEMS[3]->unk30->unk49 = 0xFF;
    ITEMS[3]->unk30->unk4A = 0xFF;
    ITEMS[3]->unk30->unk4B = 0xFF;
    ITEMS[3]->unk30->unk4C = 0xFF;
    ITEMS[3]->unk30->unk4D = 0xFF;
    ITEMS[3]->unk30->unk4E = 0xFF;
    ITEMS[3]->unk30->unk4F = 0xFF;
    ITEMS[3]->unk22 = 0;
    for (i = 4; i < 6; i++) {
        ITEM(i)->unk30->unk4 = 0.0f;
        ITEM(i)->unk30->unk8 = 0.0f;
        ITEM(i)->unk30->unkC = 0.0f;
        ITEM(i)->unk30->unk12 = 0;
        ITEM(i)->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
        ITEM(i)->unk30->unk24 = 0x300;
        ITEM(i)->unk30->unk48 = 0;
        ITEM(i)->unk30->unk49 = 0xFF;
        ITEM(i)->unk30->unk4A = 0xFF;
        ITEM(i)->unk30->unk4B = 0xFF;
        ITEM(i)->unk30->unk4C = 0xFF;
        ITEM(i)->unk30->unk4D = 0xFF;
        ITEM(i)->unk30->unk4E = 0xFF;
        ITEM(i)->unk30->unk4F = 0xFF;
        ITEM(i)->unk22 = 1;
    }
    ITEMS[6]->unk30->unk4 = 0.0f;
    ITEMS[6]->unk30->unk8 = 0.0f;
    ITEMS[6]->unk30->unkC = 0.0f;
    ITEMS[6]->unk30->unk12 = 0;
    {
        s32 pad;
        func_801E361C_StructData sp34 = D_801EA698[0];
        s32 pad2;
        func_801C28F0(&sp34);
    }
    ITEMS[6]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    ITEMS[6]->unk30->unk24 = 0x300;
    ITEMS[6]->unk30->unk48 = 0xFF;
    ITEMS[6]->unk30->unk49 = 0;
    ITEMS[6]->unk30->unk4A = 0;
    ITEMS[6]->unk30->unk4B = 0xFF;
    ITEMS[6]->unk30->unk4C = 0xFF;
    ITEMS[6]->unk30->unk4D = 0xFF;
    ITEMS[6]->unk30->unk4E = 0xFF;
    ITEMS[6]->unk30->unk4F = 0xFF;
    ITEMS[6]->unk22 = 0;
    ITEMS[7]->unk30->unk4 = 0.0f;
    ITEMS[7]->unk30->unk8 = 0.0f;
    ITEMS[7]->unk30->unkC = 100.0f;
    ITEMS[7]->unk30->unk12 = 0;
    ITEMS[7]->unk30->unk18 = 1.0f;
    ITEMS[7]->unk30->unk1C = 1.0f;
    ITEMS[7]->unk30->unk20 = 1.0f;
    ITEMS[7]->unk30->unk30 = (s32)func_801D9F00 | 0x40000000;
    ITEMS[7]->unk30->unk24 = 0x300;
    ITEMS[7]->unk30->unk48 = 0;
    ITEMS[7]->unk30->unk49 = 0xFF;
    ITEMS[7]->unk30->unk4A = 0xFF;
    ITEMS[7]->unk30->unk4B = 0;
    ITEMS[7]->unk30->unk4C = 0xFF;
    ITEMS[7]->unk30->unk4D = 0xFF;
    ITEMS[7]->unk30->unk4E = 0xFF;
    ITEMS[7]->unk30->unk4F = 0xFF;
    ITEMS[7]->unk22 = 0;
    ITEMS[8]->unk30->unk4 = 0.0f;
    ITEMS[8]->unk30->unk8 = 0.0f;
    ITEMS[8]->unk30->unkC = -300.0f;
    ITEMS[8]->unk30->unk12 = 0;
    ITEMS[8]->unk22 = 1;
    return 2;
}
