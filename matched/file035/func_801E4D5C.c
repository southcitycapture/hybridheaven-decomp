#define HHSW248(a, b, c, d, e)
#define D_801E8C2C D_801E8C2C; HHSW248(
#include "context.h"
#undef D_801E8C2C

typedef struct func_801E4D5C_S3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x3B];
    u8 unk4B;
} func_801E4D5C_S3;
typedef struct func_801E4D5C_S2 {
    u8 pad0[0x30];
    func_801E4D5C_S3 *unk30;
} func_801E4D5C_S2;
typedef struct func_801E4D5C_S1 {
    u8 pad0[0x14];
    func_801E4D5C_S2 *unk14;
} func_801E4D5C_S1;

extern f64 D_801E8CB8;
extern f32 D_801E8CC0;
extern f32 D_801E8CC4;
extern f32 D_801E8CC8;
extern f32 D_801E8CCC;

#define GP4D5C (*(func_801E4D5C_S1 **)&D_8038D8D0)

s32 func_801E4D5C(s32 arg0, s32 arg1) {
    f32 t;

    if (func_801C0DE4(3, 5, 4.5f) != 0) {
        func_801C0EB0(3, 5);
        return 3;
    }
    t = (f32)(func_80034C24(func_801C0F18(3, 5)) / D_801E8CB8) / 4.5f;
    GP4D5C->unk14->unk30->unk4 = t * (1.0f - 1.0f) +D_801E8CC0;
    GP4D5C->unk14->unk30->unk8 = t * D_801E8CC4 + D_801E8CC8;
    GP4D5C->unk14->unk30->unkC = t * 16.5f + D_801E8CCC;
    GP4D5C->unk14->unk30->unk4B = (u32)(t * -255.0f + 255.0f);
    return 2;
}
