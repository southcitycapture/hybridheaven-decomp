#include "common.h"
#define SG_CAT2(a, b) a##b
#define SG_CAT(a, b) SG_CAT2(a, b)
#define func_80242F38_StructGlobal SG_CAT(SGL_, __LINE__)
#define SGL_348 int
#define SGL_407 func_80242F38_StructGlobal
#define SGL_411 func_80242F38_StructGlobal
#define SGL_412 func_80242F38_StructGlobal
#define SGL_413 func_80242F38_StructGlobal
#define SGL_584 func_80242F38_StructGlobal
#define FA_342 FA_342_x
#define FA_351 func_80242A54
#define FB_423 FB_423_x
#define FB_433 func_8024315C
#define FC_585 FC_585_x
#define FC_603 func_8024443C
extern void func_800058DC(void *, void *);
extern s32 func_801C3044(void);
extern u8 func_80242A54[];
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;
void func_8024315C(void);
extern void func_8024443C(void);

#undef func_80242F38_StructGlobal

typedef struct func_80241D4C_Struct { s16 a; s16 pad; s32 b; f32 c; } func_80241D4C_Struct;
typedef struct func_80241D4C_Arg { u8 pad0[0x3C]; u16 unk3C; } func_80241D4C_Arg;
extern u8 func_80241DD0[];
extern void func_801C2F0C(s32, void *, void *);

void func_80241D4C(func_80241D4C_Arg *arg0, s32 arg1) {
    u8 padx[0x14];
    func_80241D4C_Struct s;

    if (((arg0->unk3C++ < 0x1E) ^ 1) && func_801C3044() == 0) {
        s.a = 0x1000;
        s.b = 0x04100044;
        s.c = 6.0f;
        func_801C2F0C(4, &s, arg0);
        func_800058DC(arg0, func_80241DD0);
    }
}
