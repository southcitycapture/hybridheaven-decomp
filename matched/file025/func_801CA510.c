#include "common.h"
#define HZP(p,l) HZQ(p,l)
#define HZQ(p,l) p##_##l
#define EX_4 extern
#define EX_18 extern
#define EX_20 extern
#define EX_21 extern
#define EX_22 extern
#define EX_23 extern
#define EX_24 extern
#define EX_25 extern
#define EX_29 extern
#define EX_30 extern
#define EX_31 extern
#define EX_32 extern
#define EX_39 extern
#define EX_41 extern
#define EX_43 extern
#define EX_44 extern
#define EX_45 extern
#define EX_46 extern
#define EX_48 extern
#define EX_49 extern
#define EX_50 extern
#define EX_52 extern
#define EX_53 extern
#define EX_68 extern
#define EX_69 extern
#define EX_90 extern
#define EX_93 extern
#define EX_95 extern
#define EX_117 extern
#define EX_120 extern
#define EX_135 extern
#define EX_150 extern
#define EX_165 extern
#define EX_170 extern
#define EX_172 extern
#define EX_175 extern
#define EX_190 extern
#define EX_192 extern
#define EX_206 extern
#define EX_208 extern
#define EX_209 extern
#define EX_212 extern
#define EX_227 extern
#define EX_242 extern
#define EX_274 extern
#define EX_275 extern
#define EX_276 extern
#define EX_277 extern
#define EX_278 extern
#define EX_279 extern
#define EX_280 extern
#define EX_282 extern
#define EX_333 extern
#define EX_334 extern
#define EX_335 extern
#define EX_338 extern
#define EX_339 extern
#define EX_340 extern
#define EX_353 extern
#define EX_354 extern
#define EX_365 extern
#define EX_366 extern
#define EX_367 extern
#define EX_368 extern
#define EX_371 extern
#define EX_403 extern
#define EX_404 extern
#define EX_405 extern
#define EX_406 extern
#define EX_475 extern
#define EX_476 extern
#define EX_477 extern
#define EX_478 extern
#define EX_480 extern
#define EX_495 extern
#define EX_496 extern
#define EX_497 extern
#define EX_499 extern
#define EX_547 extern
#define EX_586 extern
#define EX_587 extern
#define EX_633 extern
#define EX_634 extern
#define EX_680 extern
#define EX_681 extern
#define EX_682 extern
#define EX_698 extern
#define EX_700 extern
#define EX_701 extern
#define EX_702 extern
#define EX_703 extern
#define EX_745 extern
#define EX_746 extern
#define EX_747 static void hhw747(func_801CB450, hhk747)
#define EX_769 extern
#define EX_792 extern
#define EX_793 extern
#define EX_838 extern
#define EX_839 extern
#define EX_850 extern
#define EX_892 extern
#define EX_893 static void hhw893(func_801CBFE8, hhk893)
#define EX_908 extern
#define extern HZP(EX, __LINE__)
typedef struct func_801CA274_StructD {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CA274_StructD;
typedef struct func_801CA274_StructE {
    u8 pad[0x2C];
    func_801CA274_StructD *unk2C;
} func_801CA274_StructE;
extern struct func_801CA274_StructE *D_801BBCD8;
extern void func_80005700(s32 arg0);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern void func_8012CF8C(void *, u8 *, s32, s32);
extern u8 func_801CB450[];
extern u8 func_801CBFE8[];

#undef extern

struct func_801CA510_Node {
    u8 pad0[0x10];
    u16 unk10;
    u16 unk12;
};

struct func_801CA510_Inner {
    u8 pad0[0x30];
    struct func_801CA510_Node *unk30;
};

struct func_801CA510_Outer {
    u8 pad0[0xB0];
    u16 unkB0;
    u16 unkB2;
};

extern s32 D_801DA900[];

void func_801CA510(struct func_801CA510_Outer *arg0, struct func_801CA510_Inner **arg1) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    u32 temp_v0;
    s32 idx;

    temp_v0 = arg0->unkB0++ % 20U;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, D_801DA900[temp_v0]);
    sp28 = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
    sp24 = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(sp28, sp24) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20(sp28 * sp28 + sp24 * sp24)) & 0x1FFF;
    if ((s32)arg0->unkB2 < (s32)arg0->unkB0) {
        func_80005700((s32)arg0);
    }
}
