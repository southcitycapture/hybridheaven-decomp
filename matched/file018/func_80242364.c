#include "context.h"
extern f32 D_8025BE68;
extern u8 D_80258BE4[];
extern void func_801268F4(s32);
void func_80242428(u64 arg0);

typedef struct func_80242364_StructB {
    u8 pad[0x2C];
    f32 *unk2C;
} func_80242364_StructB;
typedef struct func_80242364_StructA {
    u8 pad[0x63];
    u8 unk63;
} func_80242364_StructA;
typedef struct func_80242364_Struct {
    u8 pad[0xDC];
    func_80242364_StructA *unkDC;
    func_80242364_StructB *unkE0;
} func_80242364_Struct;

void func_80242364(s32 arg0, s32 arg1) {
    f32 *p;
    f32 x, y, z;

    if (((func_80242364_Struct *)&D_801BBBF0)->unkDC->unk63 != 0) {
        p = ((func_80242364_Struct *)&D_801BBBF0)->unkE0->unk2C;
        x = D_8025BE68 - p[1];
        y = 300.0f - p[2];
        z = 276.0f - p[3];
        if (!((x * x + y * y + z * z) > 400.0f)) {
            func_801268F4(0);
            func_80203830(arg0, D_80258BE4);
            func_800058DC(arg0, (void *)func_80242428);
        }
    }
}
