#include "context.h"

extern void func_801269C0();
extern void func_801C4A5C(s32, s32);
extern void func_8001E978(s32, s32, s32, s32, s32, s32, s32, s32);
extern f64 D_80389380;
extern f64 D_80389378;
extern u8 D_8038916C[];
extern s16 D_80089354;
extern s32 D_8014B4A0(u16, f32 *);
void func_8037741C(s32 arg0, s32 arg1);
extern void func_80020718(s32);
extern u8 D_80389EF2;
extern u16 D_801BBBF8;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

struct func_803771E8_Sp {
    f32 x;
    f32 y;
    f32 z;
    s16 a;
};
struct func_803771E8_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_803771E8_StructE0 {
    u8 pad[0x2C];
    struct func_803771E8_Struct2C *unk2C;
};
struct func_803771E8_Glob {
    u8 pad0[8];
    u16 unk8;
    u8 pad0A[0xD6];
    struct func_803771E8_StructE0 *unkE0;
    u8 pad0E4[0xE0C];
    u16 unkEF0;
};
#define G ((struct func_803771E8_Glob *)&D_801BBBF0)

void func_803771E8(s32 arg0, s32 arg1) {
    struct func_803771E8_Sp sp;
    f32 sp74;
    f32 sp70;
    s32 pad[4];
    s32 v;

    G->unkEF0 |= 0xD0;
    if (D_8014B4A0(G->unk8, &sp.x) != 0) {
        func_801269C0();
        sp74 = (f32)((f64)func_8001EAD0(sp.a) * D_80389378 + (f64)sp.x);
        sp70 = (f32)((f64)sp.y + 25.0);
        func_8011AAF4(D_8038916C, 0x1E0, arg0, 0, 1, 10.0f, sp74, sp70, (f32)((f64)func_8001EB64(sp.a) * D_80389380 + (f64)sp.z), 10.0f, sp.x, (f32)((f64)sp.y + 15.0), sp.z, 0.0f, 35.0f, -1, -1);
        G->unkE0->unk2C->unk4 = sp.x;
        G->unkE0->unk2C->unk8 = sp.y;
        G->unkE0->unk2C->unkC = sp.z;
        G->unkE0->unk2C->unk12 = sp.a;
        func_801C4A5C(arg0, 0);
        G->unkEF0 = 0x80;
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0xF, 0, 2, 0);
        D_80389EF2 = 0;
        v = G->unk8;
        if (v == 0x8002) {
            func_80020718(0x103);
            v = D_801BBBF8;
        }
        if (v == 0x8014) {
            func_80020718(0x232);
        }
        func_800058DC((void *)arg0, (void *)func_8037741C);
    }
}
