#include "context.h"

extern s32 func_801C2FF8(void);
extern void func_801C2F0C(s32, f32 *);
extern void func_8024E87C(void);
extern f32 D_8025A058;

typedef struct func_8024E7EC_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 unk1C;
} func_8024E7EC_Struct;

void func_8024E7EC(s32 arg0, s32 arg1) {
    func_8024E7EC_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = 150.0f;
        sp18.unk4 = D_8025A058;
        sp18.unk8 = 0.0f;
        sp18.unkC = 0x1100;
        sp18.unk10 = 0x0168003E;
        sp18.unk14 = 1.0f;
        sp18.unk18 = 0;
        sp18.unk1A = 0x96;
        func_801C2F0C(2, &sp18.unk0);
        func_800058DC(arg0, func_8024E87C);
    }
}
