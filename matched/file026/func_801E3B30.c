#include "common.h"
extern u8 D_8038D88C[];
extern s32 D_8038D8CC;
typedef struct func_801F6914_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_801F6914_Struct3;
typedef struct func_801F6914_Struct2 {
    u8 pad0[0x30];
    func_801F6914_Struct3 *unk30;
} func_801F6914_Struct2;
typedef struct func_801F6914_Struct1 {
    u8 pad0[0xC];
    func_801F6914_Struct2 *unkC;
} func_801F6914_Struct1;
extern struct func_801F6914_Struct1 *D_8038D8D0;
extern void func_80005E44(s32 a, void *b);
void func_80006214(s32);
extern void func_8012C89C(s32 a, s32 b, s32 c, s32 d);
extern void func_8012CF8C(s32, s32, s32, s32);
extern u8 func_8038D830[];


extern u8 D_801FB068[];
extern u8 D_801FB0C0[];

struct func_801E3B30_StructLeaf {
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
    u8 pad24[0xC];
    s32 unk30;
};

struct func_801E3B30_StructNode {
    u8 pad0[0x30];
    struct func_801E3B30_StructLeaf *unk30;
};

struct func_801E3B30_StructRoot {
    struct func_801E3B30_StructNode *items[7];
};

#define FUNC_801E3B30_ROOT ((struct func_801E3B30_StructRoot *)D_8038D8D0)
#define FUNC_801E3B30_LEAF(i) (FUNC_801E3B30_ROOT->items[i]->unk30)

s32 func_801E3B30(s32 arg0, s32 arg1) {
    s32 i;
    u8 *buffer;

    buffer = D_8038D88C;
    for (i = 0; 6 > i; i++) {
        func_80005E44(D_8038D8CC, buffer);
    }
    func_80005E44(D_8038D8CC, func_8038D830 + 0x6C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0xA3, 0);
    func_8012C89C(D_8038D8CC, 1, 0x25A, 0);
    func_8012C89C(D_8038D8CC, 2, 0x25C, 0);
    func_8012C89C(D_8038D8CC, 3, 0x25D, 0);
    func_8012C89C(D_8038D8CC, 4, 0x25E, 0);
    func_8012C89C(D_8038D8CC, 5, 0x25F, 0);
    func_8012C89C(D_8038D8CC, 6, 0xA4, 0);
    do {
        func_8012CF8C(D_8038D8CC, (s32)((u8 *)FUNC_801E3B30_LEAF(1) + 0x40), 0x25B, 1);
    } while (0);

    FUNC_801E3B30_LEAF(0)->unk4 = 4096.0f;
    FUNC_801E3B30_LEAF(0)->unk8 = 0.0f;
    FUNC_801E3B30_LEAF(0)->unkC = 0.0f;
    FUNC_801E3B30_LEAF(0)->unk12 = 0;
    FUNC_801E3B30_LEAF(0)->unk30 = (s32)D_801FB068 | 0x40000000;
    FUNC_801E3B30_LEAF(1)->unk4 = 18.0f;
    FUNC_801E3B30_LEAF(1)->unk8 = 11.0f;
    FUNC_801E3B30_LEAF(1)->unkC = 11;
    FUNC_801E3B30_LEAF(1)->unk12 = 0x49F;
    FUNC_801E3B30_LEAF(1)->unk18 = 0.1f;
    FUNC_801E3B30_LEAF(1)->unk1C = 0.1f;
    FUNC_801E3B30_LEAF(1)->unk20 = 0.1f;
    FUNC_801E3B30_LEAF(2)->unk4 = 14.0f;
    FUNC_801E3B30_LEAF(2)->unk8 = 10.8f;
    FUNC_801E3B30_LEAF(2)->unkC = 10.0f;
    FUNC_801E3B30_LEAF(2)->unk12 = 0;
    FUNC_801E3B30_LEAF(2)->unk18 = 0.1f;
    FUNC_801E3B30_LEAF(2)->unk1C = 0.1f;
    FUNC_801E3B30_LEAF(2)->unk20 = 0.1f;
    FUNC_801E3B30_LEAF(3)->unk4 = 0.0f;
    FUNC_801E3B30_LEAF(3)->unk8 = 11.85f;
    FUNC_801E3B30_LEAF(3)->unkC = 83.67f;
    FUNC_801E3B30_LEAF(3)->unk12 = 0;
    FUNC_801E3B30_LEAF(3)->unk18 = 0.2f;
    FUNC_801E3B30_LEAF(3)->unk1C = 0.2f;
    FUNC_801E3B30_LEAF(3)->unk20 = 0.2f;
    FUNC_801E3B30_LEAF(4)->unk4 = 0.0f;
    FUNC_801E3B30_LEAF(4)->unk8 = 0.0f;
    FUNC_801E3B30_LEAF(4)->unkC = 0.0f;
    FUNC_801E3B30_LEAF(4)->unk12 = 0;
    FUNC_801E3B30_LEAF(4)->unk18 = 1.0f;
    FUNC_801E3B30_LEAF(4)->unk1C = 1.0f;
    FUNC_801E3B30_LEAF(4)->unk20 = 1.0f;
    FUNC_801E3B30_LEAF(5)->unk4 = 50.49f;
    FUNC_801E3B30_LEAF(5)->unk8 = 14.55f;
    FUNC_801E3B30_LEAF(5)->unkC = 12.88f;
    FUNC_801E3B30_LEAF(5)->unk12 = 0;
    FUNC_801E3B30_LEAF(5)->unk18 = 0.05f;
    FUNC_801E3B30_LEAF(5)->unk1C = 0.05f;
    FUNC_801E3B30_LEAF(5)->unk20 = 0.05f;
    FUNC_801E3B30_LEAF(6)->unk4 = 0.0f;
    FUNC_801E3B30_LEAF(6)->unk8 = 0.0f;
    FUNC_801E3B30_LEAF(6)->unkC = 0.0f;
    FUNC_801E3B30_LEAF(6)->unk12 = 0;
    FUNC_801E3B30_LEAF(6)->unk18 = 1.0f;
    FUNC_801E3B30_LEAF(6)->unk1C = 1.0f;
    FUNC_801E3B30_LEAF(6)->unk20 = 1.0f;
    FUNC_801E3B30_LEAF(6)->unk30 = (s32)D_801FB0C0 | 0x40000000;
    return 2;
}
