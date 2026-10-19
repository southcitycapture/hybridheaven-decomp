#include "context.h"

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
extern f32 D_801E9984;
extern f32 D_801E9988;

#define ROOT (*(struct func_801E6584_StructA **)&D_801DAB14)
#define CH (ROOT->c8->c8->c8->c24)

s32 func_801E6584(s32 arg0, s32 arg1) {
    if (CH != NULL) {
        CH->c2C->f4 = 0.0f;
        CH->c2C->f8 = 0.0f;
        if (D_801E9434 != 0) {
            CH->c2C->fC = D_801E9984;
            CH->c2C->s12 = 0x1000;
            func_801CC470(2, 0x01900017, 0, 1, 1.0f);
            return 2;
        }
        CH->c2C->fC = D_801E9988;
        CH->c2C->s12 = 0x1000;
        func_801CC470(2, 0x01900018, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
