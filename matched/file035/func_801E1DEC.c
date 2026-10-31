#include "common.h"
#define HHZ_EAT(a, b, c, d, e) D_801E8C2C_ctx
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
extern struct func_801E64F4_Struct1 *D_801DAB14;
extern void D_8038BD88(f32, f32, f32);
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

#undef HHZ_EAT

extern f32 D_801E8908;
extern f32 D_801E890C;
extern f32 D_801E8910;
extern f32 D_801E8914;
extern f32 D_801E8918;
extern f32 D_801E891C;
extern f32 D_801E8920;
extern f32 D_801E8924;
extern f32 D_801E8928;
extern f32 D_801E892C;
extern f32 D_801E8930;
extern f32 D_801E8934;

s32 func_801E1DEC(s32 arg0, s32 arg1) {
    f32 c37 = 37.0f;
    f32 c2 = 2.0f;
    f32 k = D_801E8908;
    f32 h = 0.5f;
    if (func_8038BEF8(0.0f, 2.5f, -17.8f, c37, D_801E890C, D_801E8910, c37, D_801E8914, c2, k, h, c2, k, h) != 0) {
        func_8038BE98(D_801E8918);
        func_8038BD50(D_801E891C, D_801E8920, -69.8f);
        D_8038BD88(D_801E8924, D_801E8928, 0.0f);
        func_8038BED4();
        ((func_801E64F4_Struct3 *)D_801DAB14->unk8)->unk24->unk2C->unk4 = D_801E892C;
        ((func_801E64F4_Struct3 *)D_801DAB14->unk8)->unk24->unk2C->unk8 = D_801E8930;
        ((func_801E64F4_Struct3 *)D_801DAB14->unk8)->unk24->unk2C->unkC = D_801E8934;
        ((func_801E64F4_Struct3 *)D_801DAB14->unk8)->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x03480054, 0, 1, 1.0f);
        return 5;
    }
    return 4;
}
