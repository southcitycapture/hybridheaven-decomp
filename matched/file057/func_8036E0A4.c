typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } AnimEarly0;
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define func_8036D30C_Anim ACAT(AnimL_, __LINE__)
#define AnimL_58 AnimEarly0
#define AnimL_63 AnimEarly0
#define AnimL_195 AnimR
#define AnimL_200 func_8036D30C_Anim
#define AnimL_203 func_8036D30C_Anim
#define AnimL_226 func_8036D30C_Anim
#define AnimL_228 func_8036D30C_Anim
#define func_8036E0A4 func_8036E0A4_ctx
#include "context.h"
#undef func_8036E0A4

void func_8036E0A4(s32 arg0, s32 arg1) {
    struct func_8036DF48_Struct *a;
    struct func_8036DF48_Struct *b;
    s32 sp24[3];

    if (arg0 == D_801BBCCC) {
        a = (struct func_8036DF48_Struct *)D_801BC03C;
    } else {
        a = (struct func_8036DF48_Struct *)D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        b = (struct func_8036DF48_Struct *)D_801BC03C;
    } else {
        b = (struct func_8036DF48_Struct *)D_801BC3D8;
    }
    func_8036DD64(sp24, arg0, b);
    if (D_801BCC21 != 0xF) {
        if (a->unk2 <= 0 || a->b != 0) {
            func_802233B0(arg0, arg1, b);
            return;
        }
        if (a->d == 5) {
            func_8022397C(arg0);
            return;
        }
        func_80224AC4(arg0, 0);
        if (b->c == 0 || b->b != 0 || b->unk2 <= 0) {
            func_800058DC(arg0, func_8021E59C);
            return;
        }
        if (func_8036A680(arg0, arg1, sp24[0], sp24[2]) != 0) {
            func_800058DC(arg0, func_8036E204);
        }
    }
}
