#include "context.h"
extern struct func_801E442C_Struct *func_801BF6B0(s32 arg0);
typedef struct func_801E442C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E442C_Struct;
extern struct func_801E5188_Struct0 *D_801DAB14;
struct func_801E5188_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E5188_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5188_Struct4 *unk2C;
};
struct func_801E5188_Struct2 {
    u8 pad0[0x24];
    struct func_801E5188_Struct3 *unk24;
};
struct func_801E5188_Struct1 {
    u8 pad0[8];
    struct func_801E5188_Struct2 *unk8;
};
struct func_801E5188_Struct0 {
    u8 pad0[8];
    struct func_801E5188_Struct1 *unk8;
};

extern f32 D_801E98C8;
extern f32 D_801E98CC;
extern f32 D_801E98D0;
extern f32 D_801E98D4;
extern f32 D_801E98D8;
extern f32 D_801E98DC;

struct func_801E1DD8_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E1DD8_Struct3 {
    u8 pad0[0x2C];
    struct func_801E1DD8_Struct4 *unk2C;
};
struct func_801E1DD8_Struct2 {
    u8 pad0[0x24];
    struct func_801E1DD8_Struct3 *unk24;
};
struct func_801E1DD8_Struct1 {
    u8 pad0[8];
    struct func_801E1DD8_Struct2 *unk8;
};
struct func_801E1DD8_Struct0 {
    u8 pad0[8];
    struct func_801E1DD8_Struct1 *unk8;
};
struct func_801E1DD8_StructR {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E1DD8(s32 arg0, s32 arg1) {
    if (((struct func_801E1DD8_StructR *) func_801BF6B0(3))->unkC >= 4) {
        func_8038BE98(D_801E98C8);
        func_8038BD50(-18.0f, D_801E98CC, 0xC3E73333);
        D_8038BD88(D_801E98D0, D_801E98D4, 0xC3F0999A);
        ((struct func_801E1DD8_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801E98D8;
        ((struct func_801E1DD8_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E1DD8_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E98DC;
        ((struct func_801E1DD8_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        return 4;
    }
    return 3;
}
