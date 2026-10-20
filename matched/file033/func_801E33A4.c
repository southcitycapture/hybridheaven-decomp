#include "context.h"
void func_801CC470(s32, s32, s32, s32, f32);
extern u8 *D_801DAB14;

extern f32 D_801F472C;
extern f32 D_801F4730;
extern f32 D_801F4734;
extern f32 D_801F4738;
extern f32 D_801F473C;
extern f32 D_801F4740;

extern void func_801C53E0(f32, f32, s32);

typedef struct func_801E33A4_Z {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E33A4_Z;

typedef struct func_801E33A4_Y {
    u8 pad0[0x2C];
    func_801E33A4_Z *unk2C;
} func_801E33A4_Y;

typedef struct func_801E33A4_X {
    u8 pad0[0x24];
    func_801E33A4_Y *unk24;
} func_801E33A4_X;

typedef struct func_801E33A4_W {
    u8 pad0[8];
    func_801E33A4_X *unk8;
} func_801E33A4_W;

s32 func_801E33A4(s32 arg0, s32 arg1) {
    func_801E33A4_Z *z;

    if (func_801C0B8C(0xB71B00) != 0) {
        ((func_801E33A4_W *)D_801DAB14)->unk8->unk24->unk2C->unk4 = D_801F472C;
        ((func_801E33A4_W *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E33A4_W *)D_801DAB14)->unk8->unk24->unk2C->unkC = D_801F4730;
        func_801CC470(0, 0x03480031, 0, 1, 1.0f);
        func_8038BD50(D_801F4734, D_801F4738, (s32)0xC1680000);
        D_8038BD88(-4.5f, D_801F473C, (s32)0xC2520000);
        z = ((func_801E33A4_W *)D_801DAB14)->unk8->unk24->unk2C;
        func_801C53E0(z->unk4 + D_801F4740, z->unkC, (s32)0x3F4CCCCD);
        func_8038BED4();
        return 0x38;
    }
    return 0x37;
}
