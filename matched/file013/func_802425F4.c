#define LPX2(a, b) a##b
#define LP2(a, b) LPX2(a, b)
#define func_80241200 LP2(ctxA2_, __LINE__)
#define func_802425F4 func_802425F4_ctx
#define VD_5 void
#define VD_6 void
#define VD_8 void
#define VD_9 void
#define VD_10 void
#define VD_18 void
#define VD_20 void
#define VD_44 void
#define VD_45 void
#define VD_46 void
#define VD_47 void
#define VD_49 void
#define VD_53 void
#define VD_58 void
#define VD_59 void
#define VD_60 void
#define VD_61 void
#define VD_62 void
#define VD_63 void
#define VD_64 void
#define VD_65 void
#define VD_68 void
#define VD_85 void
#define VD_86 void
#define VD_87 void
#define VD_89 void
#define VD_102 void
#define VD_103 void
#define VD_104 void
#define VD_121 void
#define VD_122 void
#define VD_127 void
#define VD_139 void
#define VD_140 void
#define VD_147 void
#define VD_148 void
#define VD_150 void
#define VD_151 void
#define VD_155 void
#define VD_159 void
#define VD_160 void
#define VD_161 void
#define VD_174 void
#define VD_193 void
#define VD_194 void
#define VD_199 void
#define VD_204 void
#define VD_205 void
#define VD_206 void
#define VD_208 void
#define VD_209 void
#define VD_211 void
#define VD_216 void
#define VD_217 void
#define VD_218 void
#define VD_256 void
#define VD_257 void
#define VD_258 void
#define VD_263 void
#define VD_264 void
#define VD_267 void
#define VD_299 void
#define VD_318 void
#define VD_319 void
#define VD_357 void
#define VD_374 void
#define VD_376 void
#define VD_377 void
#define VD_399 void
#define VD_402 void
#define VD_403 void
#define VD_404 void
#define VD_423 void ctxd423(void
#define VD_425 void
#define VD_427 void
#define VD_432 void
#define VD_433 void
#define VD_450 void
#define VD_451 void
#define VD_470 void
#define VD_475 void
#define VD_477 void
#define VD_497 void
#define VD_498 void
#define VD_499 void
#define VD_518 void
#define VD_519 void
#define VD_521 void
#define VD_522 void
#define VD_542 void
#define VD_543 void
#define VD_562 void
#define VD_568 void
#define VD_569 void
#define VD_595 void
#define VD_596 void
#define VD_608 void
#define VD_615 void
#define VD_629 void
#define VD_631 void
#define AO_6 arg1
#define AO_20 arg1
#define AO_49 arg1
#define AO_53 arg1
#define AO_63 arg1
#define AO_68 arg1
#define AO_87 arg1
#define AO_102 arg1
#define AO_104 arg1
#define AO_121 arg1
#define AO_122 arg1
#define AO_140 arg1
#define AO_148 arg1
#define AO_151 arg1
#define AO_155 arg1
#define AO_159 arg1
#define AO_160 arg1
#define AO_174 arg1
#define AO_193 arg1
#define AO_199 arg1
#define AO_205 arg1
#define AO_206 arg1
#define AO_208 arg1
#define AO_211 arg1
#define AO_216 arg1
#define AO_217 arg1
#define AO_218 arg1
#define AO_256 arg1
#define AO_258 arg1
#define AO_264 arg1
#define AO_267 arg1
#define AO_299 arg1
#define AO_319 arg1
#define AO_357 arg1
#define AO_377 arg1
#define AO_403 arg1
#define AO_423 arg1)
#define AO_432 arg1
#define AO_450 arg1
#define AO_470 arg1
#define AO_477 arg1
#define AO_498 arg1
#define AO_518 arg1
#define AO_521 arg1
#define AO_542 arg1
#define AO_562 arg1
#define AO_569 arg1
#define AO_596 arg1
#define AO_608 arg1
#define AO_615 arg1
#define AO_629 arg1
#define AO_631 arg1
#define void LP2(VD_, __LINE__)
#define arg1 LP2(AO_, __LINE__)
#include "context.h"
#undef void
#undef arg1
#undef func_80241200
#undef func_802425F4
extern f32 func_8001518C(f32);
extern f32 func_80029280(f32);
extern f32 func_80032720(f32);
extern f64 D_80249B20;
struct func_802425F4_StructA { u8 pad[0x90]; f32 unk90; };
struct func_802425F4_StructB {
    u8 pad0[0xF20];
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25, unkF26, unkF27, unkF28;
    u8 pad1[0xF32 - 0xF29];
    u8 unkF32, unkF33, unkF34;
};

void func_802425F4(struct func_802425F4_StructA *arg0, s32 arg1) {
    f32 t;

    arg0->unk90 = (f32)((f64)arg0->unk90 + D_80249B20);
    t = func_80029280(func_8001518C(arg0->unk90)) * 40.0f;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF26 = (s32)(t + 40.0f);
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF28 = 0x28;
    t = func_80032720(func_8001518C(arg0->unk90)) * 40.0f;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF27 = (s32)(t + 40.0f);
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF32 = 0x50;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF33 = 0;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF34 = 0;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF20 = (u16)(u32)(func_80029280(func_8001518C(arg0->unk90)) * 40.0f) + 0x96;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF21 = 0x80;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF22 = 0x80;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF23 = 0xFF;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF24 = 0;
    ((struct func_802425F4_StructB *)&D_801BBBF0)->unkF25 = 0;
}
