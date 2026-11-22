#include "common.h"

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
extern struct func_801E5188_Struct0 *D_801DAB14;
struct func_801E6584_StructB {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[2];
    s16 s12;
};
struct func_801E6584_StructA {
    u8 pad0[8];
    struct func_801E6584_StructA *c8;
    u8 padC[0x18];
    struct func_801E6584_StructA *c24;
    u8 pad28[4];
    struct func_801E6584_StructB *c2C;
};
#define ROOT (*(struct func_801E6584_StructA **)&D_801DAB14)
#define CH (ROOT->c8->c8->c8->c24)
extern s32 D_801E9434;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801E6584(s32 arg0, s32 arg1) {
    if (CH != NULL) {
        CH->c2C->f4 = 0.0f;
        CH->c2C->f8 = 0.0f;
        if (D_801E9434 != 0) {
            CH->c2C->fC = 43.0999985f;
            CH->c2C->s12 = 0x1000;
            func_801CC470(2, 0x01900017, 0, 1, 1.0f);
            return 2;
        }
        CH->c2C->fC = 41.0999985f;
        CH->c2C->s12 = 0x1000;
        func_801CC470(2, 0x01900018, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
