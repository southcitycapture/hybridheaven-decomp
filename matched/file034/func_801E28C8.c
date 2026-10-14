#include "context.h"

typedef struct func_801E28C8_Q {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    void *unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E28C8_Q;

typedef struct func_801E28C8_P {
    u8 pad0[0x2C];
    func_801E28C8_Q *unk2C;
} func_801E28C8_P;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 D_8017AF38[];
extern u8 D_8038D840[];
extern s32 D_8038D850;
extern func_801E28C8_P **D_8038D854;

s32 func_801E28C8(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D850, D_8038D840);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x288, 0);
    (*D_8038D854)->unk2C->unk4 = 0.0f;
    (*D_8038D854)->unk2C->unk8 = 0.0f;
    (*D_8038D854)->unk2C->unkC = 0.0f;
    (*D_8038D854)->unk2C->unk18 = 1.0f;
    (*D_8038D854)->unk2C->unk1C = 1.0f;
    (*D_8038D854)->unk2C->unk20 = 1.0f;
    (*D_8038D854)->unk2C->unk12 = 0;
    (*D_8038D854)->unk2C->unk24 = 0x13;
    (*D_8038D854)->unk2C->unk30 = D_8017AF38;
    (*D_8038D854)->unk2C->unk4C = 0;
    (*D_8038D854)->unk2C->unk4D = 0;
    (*D_8038D854)->unk2C->unk4E = 0;
    (*D_8038D854)->unk2C->unk4F = 0xAD;
    return 2;
}
