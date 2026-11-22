#include "common.h"

extern s32 D_801EAC80;
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274(void);
extern s32 func_801CE2D0(s32, s32);
struct func_801E6850_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E6850_StructB {
    u8 pad0[0x2C];
    struct func_801E6850_StructC *unk2C;
};
struct func_801E6850_StructA {
    u8 pad0[8];
    struct func_801E6850_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E6850_StructB *unk24;
};
struct func_801E6850_StructRoot {
    u8 pad0[0x24];
    struct func_801E6850_StructA *unk24;
};
extern struct func_801E6850_StructRoot func_801DAAF0;
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
s32 func_801E3E2C(s32 arg0, s32 arg1) {
    struct func_801E6850_StructC *c;

    if (D_801EAC80 != 0) {
        if (D_801EAC80 == 1) {
            goto l1;
        }
        return 3;
    }
    if (func_801DAAF0.unk24->unk8->unk24->unk2C->unkC < -28.0f) {
        func_801CC4D8(0, 0x01B8003C, 0, 0, 10.0f);
        D_801EAC80 = 1;
    }
    if (func_801CE2D0(0x01B8001B, 0xC) != 0 || func_801CE2D0(0x01B8001B, 0x1E) != 0) {
        c = func_801DAAF0.unk24->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x678, (1.2000000476837158f), 1.0f);
        return 3;
    }
    goto end;
l1:
    if (func_801CE274() == 0) {
        c = func_801DAAF0.unk24->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x678, (1.2000000476837158f), 1.0f);
        return 4;
    }
end:
    return 3;
}
