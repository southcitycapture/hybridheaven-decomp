#include "common.h"
extern s32 D_801ECD58;
extern s32 D_801ECD5C;
extern s32 D_801ECD60;
extern s32 D_801ECEF0;
extern f32 D_801ECEF4;
struct func_801E4EE0_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x4B - 0x14];
    u8 unk4B;
};
struct func_801E4EE0_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E4EE0_Leaf *unk30;
};
struct func_801E4EE0_Obj {
    u8 pad0[0x1C];
    struct func_801E4EE0_Mid *unk1C;
};
extern struct func_801E4EE0_Obj *D_8038D8D0;
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);


typedef struct func_801E5D2C_StructLeaf {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    u8 pad24[0x27];
    u8 unk4B;
} func_801E5D2C_StructLeaf;
typedef struct func_801E5D2C_StructMid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E5D2C_StructLeaf *unk30;
} func_801E5D2C_StructMid;
typedef struct func_801E5D2C_StructRoot {
    u8 pad0[0x24];
    func_801E5D2C_StructMid *unk24;
} func_801E5D2C_StructRoot;
extern s32 D_801EDEF0;
#define OBJECT_5D2C (*(func_801E5D2C_StructRoot **) &D_8038D8D0)

s32 func_801E5D2C(s32 arg0, s32 arg1) {
    s32 time;
    u32 amount;
    u32 elapsed;
    s32 flag;
    f32 fraction;
    f32 scale;
    f32 one = 1.0f;
    func_801E5D2C_StructLeaf *leaf;
    s32 state;

    if (func_801C1088(3, 9, 0x96) != 0) {
        func_801C10D8(3, 9);
        return 3;
    }
    time = func_801C1134(3, 9);
    state = D_801ECD58;
    switch (state) {
    case 0:
        if ((u32) time >= 0x3D) {
            D_801ECD58 = 1;
            break;
        }
        fraction = (f32) (u32) time / 60.0f;
        OBJECT_5D2C->unk24->unk30->unk4B = (u32) (255.0f * fraction);
        break;
    case 1:
        if ((u32) time >= 0x97) {
            D_801ECD58 = 2;
            break;
        }
        fraction = (f32) ((u32) time - 0x3C) / 90.0f;
        OBJECT_5D2C->unk24->unk30->unk4B = (u32) ((-255.0f * fraction) + 255.0f);
        break;
    case 2:
        OBJECT_5D2C->unk24->unk22 = 0;
        break;
    }
    switch (D_801ECD5C) {
    case 0:
        if (func_801C1088(3, 9, 0x4B) != 0) {
            D_801ECD5C = 1;
            D_801EDEF0 = 1;
            break;
        }
        fraction = (f32) (u32) time / 75.0f;
        scale = one * fraction;
        OBJECT_5D2C->unk24->unk30->unk18 = scale;
        OBJECT_5D2C->unk24->unk30->unk1C = -2.25f * fraction + 3.0f;
        OBJECT_5D2C->unk24->unk30->unk20 = scale;
        break;
    case 1:
        flag = D_801EDEF0;
        if (flag != 0) {
            elapsed = ((u32) time - 0x4B) % 10U;
            amount = elapsed;
        } else {
            elapsed = ((u32) time - 0x4B) % 10U;
            amount = 9 - elapsed;
        }
        if (amount < 0) {
            amount = 0;
        }
        if (elapsed >= 9U) {
            if (flag != 0) {
                *(s32 *) ((u8 *) &D_801ECEF4 + 0xFFC) = 0;
            } else {
                *(s32 *) ((u8 *) &D_801ECEF0 + 0x1000) = 1;
            }
        }
        fraction = (f32) amount / 9.0f;
        OBJECT_5D2C->unk24->unk30->unk1C = 2.25f * fraction + 0.75f;
        break;
    }
    switch (D_801ECD60) {
    case 0:
        if (func_801C1088(3, 9, 10) != 0) {
            D_801ECD60 = 1;
            break;
        }
        leaf = OBJECT_5D2C->unk24->unk30;
        fraction = (f32) (u32) time / 10.0f;
        leaf->unk12 = (s16) (leaf->unk12 + (s16) (s32) ((2048.0f * ((-9.8f * fraction) + 15.8f)) / 90.0f));
        break;
    case 1:
        OBJECT_5D2C->unk24->unk30->unk12 += 0x88;
        break;
    }
    return 2;
}
