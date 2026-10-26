#include "common.h"
#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define extern CAT(EX_, __LINE__)
#define EX_4 extern
#define EX_5 extern
#define EX_6 extern
#define EX_7 extern
#define EX_8 extern
#define EX_9 extern
#define EX_10 extern
#define EX_11 extern
#define EX_44 extern
#define EX_45 extern
#define EX_46 extern
#define EX_47 extern
#define EX_49 extern
#define EX_50 extern
#define EX_51 extern
#define EX_52 extern
#define EX_58 extern
#define EX_59 extern
#define EX_60 extern
#define EX_61 extern
#define EX_62 extern
#define EX_64 extern
#define EX_65 extern
#define EX_66 extern
#define EX_67 extern
#define EX_85 extern
#define EX_86 extern
#define EX_88 extern
#define EX_89 extern
#define EX_103 extern
#define EX_104 extern
#define EX_138 extern
#define EX_139 extern
#define EX_147 extern
#define EX_149 extern
#define EX_150 extern
#define EX_152 extern
#define EX_153 extern
#define EX_156 extern
#define EX_161 extern
#define EX_194 extern
#define EX_204 extern
#define EX_207 extern
#define EX_209 extern
#define EX_210 extern
#define EX_212 extern
#define EX_213 extern
#define EX_214 extern
#define EX_215 extern
#define EX_254 extern
#define EX_255 extern
#define EX_257 extern
#define EX_263 extern
#define EX_268 extern
#define EX_316 extern
#define EX_317 extern
#define EX_318 extern
#define EX_352 extern
#define EX_353 extern
#define EX_354 extern
#define EX_355 extern
#define EX_356 extern
#define EX_374 extern
#define EX_375 extern
#define EX_376 extern
#define EX_399 extern
#define EX_400 extern
#define EX_401 extern
#define EX_402 static void ctx_k402(func_80241E64, ctx_y403)
#define EX_404 extern
#define EX_424 extern
#define EX_425 extern
#define EX_426 extern
#define EX_427 extern
#define EX_433 extern
#define EX_451 extern
#define EX_475 extern
#define EX_476 extern
#define EX_497 extern
#define EX_499 extern
#define EX_519 extern
#define EX_520 extern
#define EX_522 extern
#define EX_543 extern
#define EX_567 extern
#define EX_568 extern
#define EX_594 extern
#define EX_595 extern
#define EX_603 extern
#define EX_604 extern
#define EX_605 extern
#define EX_606 extern
#define EX_607 extern
#define EX_616 extern
#define EX_617 extern
#define EX_618 extern
#define EX_628 extern
#define EX_630 extern
#define DC_376 func_80241D7C
#define DC_403 (*ctx_y403)(void); {} void func_80241D7C
extern void func_800058DC(void *arg0, void *arg1);
struct func_80240D94_Inner {
    u8 pad[8];
    f32 unk8;
};
struct func_80240D94_Outer {
    u8 pad[0x30];
    struct func_80240D94_Inner *unk30;
};
struct func_80240D94_Self {
    u8 pad[0x90];
    s16 unk90;
};
struct func_80240E7C_Struct2 {
    u8 pad[0x8];
    f32 unk8;
};
struct func_80240E7C_Struct1 {
    u8 pad[0x30];
    struct func_80240E7C_Struct2 *unk30;
};
struct func_80240E7C_Struct0 {
    u8 pad[0x4];
    struct func_80240E7C_Struct1 *unk4;
};
struct func_80240E7C_Struct3 {
    u8 pad[0x90];
    s16 unk90;
};
void func_80240E7C(struct func_80240E7C_Struct3 *arg0, struct func_80240E7C_Struct0 *arg1);
extern void func_80241D7C();
extern void func_80241E64(void);

#undef extern

extern f64 D_80249AA0;
extern void D_80020744(s32, void *, s32);

void func_80240DF4(struct func_80240D94_Self *arg0, struct func_80240D94_Outer **arg1, s32 arg2) {
    s32 temp_v1;

    (*arg1)->unk30->unk8 -= D_80249AA0;
    temp_v1 = arg0->unk90;
    arg0->unk90 = temp_v1 - 1;
    if (temp_v1 == 0) {
        (*arg1)->unk30->unk8 = -10.0f;
        arg0->unk90 = 0x46;
        D_80020744(0x6B2, arg1, arg2);
        func_800058DC(arg0, func_80240E7C);
    }
}
