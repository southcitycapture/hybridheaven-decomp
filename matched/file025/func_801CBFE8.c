#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_801CB450 LP(fB, __LINE__)
#define func_801CBFE8 func_801CBFE8_decl
#include "context.h"
#undef func_801CB450
#undef func_801CBFE8

typedef struct func_801CBFE8_StructArg {
    u8 pad[0x90];
    u16 unk90;
    u8 pad92[0x16];
    u16 unkA8;
    u16 unkAA;
} func_801CBFE8_StructArg;

extern s32 D_801DAA60[];

void func_801CBFE8(func_801CBFE8_StructArg *arg0, func_801CBC50_Outer **arg1) {
    s32 pad;
    f32 dx;
    f32 dz;
    f32 dist;
    u32 index;
    func_801CA274_StructD *temp;

    index = (u32)(((f32)(u32)arg0->unkA8 / (f32)(u32)arg0->unkAA) * 20.0f) % 20U;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, D_801DAA60[index]);
    dx = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
    dz = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(dx, dz) + 0x1000) & 0x1FFF;
    dist = func_8002FC20(dx * dx + dz * dz);
    temp = D_801BBCD8->unk2C;
    (*arg1)->unk30->unk10 = func_8001EF38(temp->unk40 - temp->unk34, dist) & 0x1FFF;
    arg0->unkA8++;
    if (arg0->unkA8 >= (s32)arg0->unkAA) {
        if (arg0->unk90 != 0) {
            func_80005700((s32)arg0);
        } else {
            arg0->unkA8 = 0;
        }
    }
    if (D_801DA718 != 0) {
        func_80005700((s32)arg0);
    }
}
