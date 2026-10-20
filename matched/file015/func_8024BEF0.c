#include "context.h"
extern void func_800058DC(void *, void *);

extern s32 func_801C2FF8(void);
struct func_8024BF80_Struct;
extern void func_801C2F0C(s32, struct func_8024BF80_Struct *);
void func_8024BF80(s32 arg0, s32 arg1);
extern f32 D_80259710;
extern f32 D_80259714;

typedef struct func_8024BEF0_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 unk1C;
} func_8024BEF0_Struct;

void func_8024BEF0(s32 arg0, s32 arg1) {
    func_8024BEF0_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = D_80259710;
        sp18.unk4 = D_80259714;
        sp18.unk8 = 0.0f;
        sp18.unkC = 0x1100;
        sp18.unk10 = 0x0168003E;
        sp18.unk14 = 1.0f;
        sp18.unk18 = 0;
        sp18.unk1A = 0x96;
        func_801C2F0C(2, (void *)&sp18);
        func_800058DC(arg0, func_8024BF80);
    }
}
