#include "context.h"
extern void func_800058DC(void *, void *);
extern void func_80020744(s32);
extern void func_801268F4(s32);
extern s32 func_80133A24(s32);

typedef struct func_80240A68_StructB {
    u8 pad0[0x10];
    u32 unk10;
} func_80240A68_StructB;

typedef struct func_80240A68_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x38 - 0x30];
    func_80240A68_StructB *unk38;
    u8 pad2[0x3E - 0x3C];
    u8 unk3E;
} func_80240A68_StructA;

extern u8 D_801BBBF0[];
extern void func_80240B24(void);
extern void func_80240BE4(void);

void func_80240A68(func_80240A68_StructA *arg0, s32 arg1) {
    *(f32 *) (D_801BBBF0 + 0x390) = 0.0f;
    *(f32 *) (D_801BBBF0 + 0x394) = 0.0f;
    *(f32 *) (D_801BBBF0 + 0x398) = 0.0f;
    if ((arg0->unk38->unk10 >> 0x18) == 0) {
        if (func_80133A24(0x50) != 0) {
            func_800058DC(arg0, func_80240BE4);
            arg0->unk2C = 0xC60;
            arg0->unk3E = 0;
            func_801268F4(0);
        }
    } else if (func_80133A24(0x4F) != 0) {
        func_80020744(0x144);
        func_800058DC(arg0, func_80240B24);
        arg0->unk2C = 0xC20;
    }
}
