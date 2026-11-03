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
s32 func_801C1088(s32 a0, s32 a1, s32 a2);
void func_801C10D8(s32 a0, s32 a1);
s32 func_801C1134(s32 a0, s32 a1);
extern void func_801D8ADC(s32 a0);
void func_801E6738(void);


s32 func_801E691C(s32 arg0, s32 arg1) {
    u32 t;
    f32 f;

    t = func_801C1134(4, 2);
    f = (f32)t / 180.0f;
    CH->c2C->f8 = -5.0f * f;
    func_801D8ADC((u32)(-127.0f * f + 127.0f) & 0xFF);
    if (func_801C1088(4, 2, 0xB4) != 0) {
        func_801C10D8(4, 2);
        CH->c2C->f4 = 5120.0f;
        return 6;
    }
    func_801E6738();
    return 5;
}
