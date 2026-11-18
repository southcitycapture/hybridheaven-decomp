#include "context.h"

typedef struct func_801C01AC_S2 {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad2[0x32];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C01AC_S2;
typedef struct func_801C01AC_S1 {
    u8 pad[0x2C];
    func_801C01AC_S2 *unk2C;
} func_801C01AC_S1;
typedef struct func_801C01AC_S0 {
    u8 pad[0x24];
    func_801C01AC_S1 *unk24;
} func_801C01AC_S0;

extern f32 func_8001518C(f32);
extern f32 func_80029280(f32);
void func_801C01AC(func_801C01AC_S0 *arg0, func_801C01AC_S1 **arg1) {
    (*arg1)->unk2C->unk4A = (u32)((func_80029280(func_8001518C((f32)((f64)arg0->unk24->unk2C->unk12 * (0.0439453125) * (0.1)))) * 40.0f) + 180.0f);
    (*arg1)->unk2C->unk49 = (u32)((func_80029280(func_8001518C((f32)((f64)arg0->unk24->unk2C->unk10 * (0.0439453125) * (0.1) + 120.0))) * 40.0f) + 180.0f);
    (*arg1)->unk2C->unk48 = (u32)((func_80029280(func_8001518C((f32)((f64)arg0->unk24->unk2C->unk14 * (0.0439453125) * (0.1) + 240.0))) * 25.0f) + 50.0f);
    arg0->unk24->unk2C->unk12 += 2;
    arg0->unk24->unk2C->unk10 += 1;
    arg0->unk24->unk2C->unk14 += 4;
}
