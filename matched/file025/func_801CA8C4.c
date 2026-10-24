#define ZP(p,l) ZQ(p,l)
#define ZQ(p,l) p##_##l
#define D_801DD300 D_801DD300; void hhk770(func_801CB450, hhd770) int hhd770
#define func_801CB450_StructOuter ZP(zO, __LINE__)
#define zO_765 func_801CB450_StructOuter_t
#define zO_768 func_801CB450_StructOuter_t
#define zO_770 func_801CB450_StructOuter_t **arg1); {} extern void hhz770(func_801CB450_StructOuter_t
#define D_801DAA60 D_801DAA60[]; void hhk909(func_801CBFE8, hhd909) int hhd909
#define func_801CBC50_Outer ZP(zC, __LINE__)
#define zC_846 func_801CBC50_Outer_t
#define zC_849 func_801CBC50_Outer_t
#define zC_851 func_801CBC50_Outer_t
#define zC_909 func_801CBC50_Outer_t **arg1); {} extern void hhz909(func_801CBC50_Outer_t
#define func_801CA8C4 D_801CA8C4
#include "context.h"
#undef func_801CA8C4
#undef D_801DD300
#undef D_801DAA60
#undef func_801CB450_StructOuter
#undef func_801CBC50_Outer

extern s32 D_801DA960[];

void func_801CA8C4(func_801C7D0C_Struct *arg0, func_801CA628_Outer **arg1) {
    s32 pad;
    f32 sp28;
    f32 sp24;
    f32 dx;
    f32 dz;
    f32 length;
    u32 count;
    func_801CA274_StructD *cam;

    count = arg0->unkB0++ % 20U;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, D_801DA960[count]);
    cam = D_801BBCD8->unk2C;
    sp28 = cam->unk3C - cam->unk30;
    sp24 = cam->unk44 - cam->unk38;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(sp28, sp24) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20(sp28 * sp28 + sp24 * sp24)) & 0x1FFF;
    if ((s32)arg0->unkB2 < (s32)arg0->unkB0) {
        func_80005700((s32)arg0);
    }
}
