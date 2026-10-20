#include "context.h"
extern struct func_801C2F0C_StructBBBF0 D_801BBBF0;
extern void func_801C3BAC(u16);
struct func_801C2E20_Struct0 {
    u8 pad0[0x5C];
    s32 unk5C;
};
struct func_801C2E20_Struct10 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern void func_800058DC(void *, void *);
extern void func_801C2580();
extern s32 func_80011140(s32, s32, struct func_801C2E20_Struct10, s32);
extern void func_801C3B48(s32);
extern struct func_801C2E20_Struct10 D_801E0B10;
struct func_801C2F0C_StructBBBF0 {
    u8 pad0[0x1B4];
    u16 unk1B4;
    u8 pad1[0x1E0 - 0x1B6];
    f32 unk1E0;
};

struct func_801C29BC_StructBBBF0 {
    u8 pad[0x1C4];
    u16 unk1C4;
};

void func_801C29BC(struct func_801C2E20_Struct0 *arg0, s32 arg1) {
    s32 sp24;

    sp24 = arg0->unk5C;
    if (D_801BBBF0.unk1B4 & 1) {
        D_801BBBF0.unk1B4 &= 0xFFFE;
        func_800058DC(arg0, func_801C2580);
        return;
    }
    if (func_80011140(arg1, sp24, D_801E0B10,
            ((struct func_801C29BC_StructBBBF0 *)&D_801BBBF0)->unk1C4) != 0) {
        func_801C3BAC(0);
        func_801C3B48(4);
        func_800058DC(arg0, func_801C2580);
    }
}
