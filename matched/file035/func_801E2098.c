#include "context.h"
extern void func_801CC470(s32, s32, s32, s32, f32);
extern struct func_801E64F4_Struct1 *D_801DAB14;
typedef struct func_801E64F4_Struct5 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E64F4_Struct5;
typedef struct func_801E64F4_Struct4 {
    u8 pad0[0x2C];
    func_801E64F4_Struct5 *unk2C;
} func_801E64F4_Struct4;
typedef struct func_801E64F4_Struct3 {
    u8 pad0[0x24];
    func_801E64F4_Struct4 *unk24;
} func_801E64F4_Struct3;
typedef struct func_801E64F4_Struct2 {
    u8 pad0[0x8];
    func_801E64F4_Struct3 *unk8;
} func_801E64F4_Struct2;
typedef struct func_801E64F4_Struct1 {
    u8 pad0[0x8];
    func_801E64F4_Struct2 *unk8;
} func_801E64F4_Struct1;

extern f32 D_801E8964;
extern f32 D_801E8968;
extern f32 D_801E896C;
extern f32 D_801E8970;
extern f32 D_801E8974;
extern f32 D_801E8978;
extern f32 D_801E897C;
extern f32 D_801E8980;

s32 func_801E2098(s32 arg0, s32 arg1) {
    u8 **v;

    if (func_801C0B8C(0xE975A0) != 0) {
        func_8038BD50(D_801E8964, D_801E8968, 81.5f);
        D_8038BD88(D_801E896C, D_801E8970, 0);
        func_8038BE98(D_801E8974);
        func_8038BED4();
        v = (u8 **)&D_801DAB14;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*v + 8) + 0x24) + 0x2C) + 4) = D_801E8978;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*v + 8) + 0x24) + 0x2C) + 8) = D_801E897C;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*v + 8) + 0x24) + 0x2C) + 12) = D_801E8980;
        *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*v + 8) + 0x24) + 0x2C) + 0x12) = 0;
        func_801CC470(0, 0x03480055, 0, 1, 1.0f);
        return 7;
    }
    return 6;
}
