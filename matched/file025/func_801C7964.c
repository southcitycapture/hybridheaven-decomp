#include "common.h"
typedef struct func_801C7A74_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} func_801C7A74_Struct;
extern func_801C7A74_Struct D_801E04C0;
f32 func_801C78F8(void);
s32 func_801C8828(f32 arg0, f32 arg1, f32 arg2);


void func_801C7964(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 a;
    f32 b;
    f32 c;
    s32 i;
    s32 j;

    *(f32 *)&D_801E04C0.unk0 = arg0;
    *(f32 *)&D_801E04C0.unk4 = arg1;
    *(f32 *)&D_801E04C0.unk8 = arg2;
    *(f32 *)&D_801E04C0.unkC = arg4;
    *(f32 *)&D_801E04C0.unk10 = arg5;
    *(f32 *)&D_801E04C0.unk14 = arg6;
    *(f32 *)&D_801E04C0.unk18 = arg7;
    for (i = 0; i != 0x1E; i++) {
        a = func_801C78F8() - 0.5f;
        b = func_801C78F8() - 0.5f;
        for (j = 0; j != 2; j++) {
            c = func_801C78F8();
            func_801C8828(arg3 * arg4 * a, (arg1 * arg5) * c, arg3 * arg4 * b);
        }
    }
}
