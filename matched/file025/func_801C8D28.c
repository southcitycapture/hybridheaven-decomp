#include "context.h"

typedef struct func_801C8D28_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801C8D28_Inner;
typedef struct func_801C8D28_Outer {
    u8 pad[0x30];
    func_801C8D28_Inner *unk30;
} func_801C8D28_Outer;
typedef struct func_801C8D28_Arg {
    u8 pad[0x90];
    f32 unk90;
    u8 pad94[4];
    f32 unk98;
    u8 pad9C[8];
    u16 unkA4;
    u8 padA6[2];
    u16 unkA8;
    u16 unkAA;
    f32 unkAC;
    f32 unkB0;
} func_801C8D28_Arg;
typedef struct func_801C8D28_K {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    f32 f14;
    f32 f18;
} func_801C8D28_K;

typedef struct func_801C8D28_D {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801C8D28_D;
typedef struct func_801C8D28_E {
    u8 pad[0x2C];
    func_801C8D28_D *unk2C;
} func_801C8D28_E;

extern struct func_801CA274_StructE *D_801BBCD8;
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
void func_801C8F9C(void *arg0, void **arg1);
#define G ((func_801C8D28_E *)D_801BBCD8)
extern f32 D_801DD2D0;
extern f32 D_801DD2D4;
extern f32 D_801DD2D8;

void func_801C8D28(func_801C8D28_Arg *arg0, func_801C8D28_Outer **arg1) {
    f32 sp2C;
    f32 sp28;
    func_801C8D28_Inner *p;
#define K ((func_801C8D28_K *)&D_801E04C0)

    (*arg1)->unk30->unk4 = arg0->unk90 * K->fC + K->f0;
    (*arg1)->unk30->unkC = arg0->unk98 * K->fC + K->f8;
    (*arg1)->unk30->unk18 = K->f14;
    (*arg1)->unk30->unk1C = K->f14;
    (*arg1)->unk30->unk20 = K->f14;
    sp2C = G->unk2C->unk3C - G->unk2C->unk30;
    sp28 = G->unk2C->unk44 - G->unk2C->unk38;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(sp2C, sp28) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk10 = func_8001EF38(G->unk2C->unk40 - G->unk2C->unk34, func_8002FC20(sp2C * sp2C + sp28 * sp28)) & 0x1FFF;
    if ((*arg1)->unk30->unk8 < D_801DD2D0) {
        func_800058DC((s32)arg0, (void (*)(void))func_801C8F9C);
        return;
    }
    if (func_801C78F8() > 0.5f && arg0->unkA4 == 0) {
        arg0->unkA4 = 1;
        arg0->unkA8 = 0;
        arg0->unkAA = (s32)(func_801C78F8() * 100.0f);
        arg0->unkAC = (func_801C78F8() - 0.5f) * D_801DD2D4;
        arg0->unkB0 = (func_801C78F8() - 0.5f) * D_801DD2D8;
    }
    if (arg0->unkA4 != 0) {
        arg0->unk90 = arg0->unk90 + arg0->unkAC;
        arg0->unk98 = arg0->unk98 + arg0->unkB0;
        arg0->unkA8 = arg0->unkA8 + 1;
        if ((s32)arg0->unkAA < arg0->unkA8) {
            arg0->unkA4 = 0;
        }
    }
    p = (*arg1)->unk30;
    p->unk8 = p->unk8 - K->f18;
}
