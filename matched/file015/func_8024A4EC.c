#include "context.h"
extern s32 func_801C2FF8(void);
extern f32 D_802592E0;
struct func_8024A588_Obj;
void func_8024A588(struct func_8024A588_Obj *arg0, s32 arg1);
typedef struct func_8024A4EC_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 unk1C;
} func_8024A4EC_Struct;

void func_8024A4EC(s32 arg0, s32 arg1) {
    func_8024A4EC_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = -370.0f;
        sp18.unk4 = -540.0f;
        sp18.unk8 = D_802592E0;
        sp18.unkC = 0x1100;
        sp18.unk10 = 0x0168003E;
        sp18.unk14 = 1.0f;
        sp18.unk18 = 0;
        sp18.unk1A = 0x5A;
        func_801C2F0C(2, &sp18.unk0);
        func_800208C4(0x7C);
        func_800058DC((void *)arg0, func_8024A588);
    }
}
