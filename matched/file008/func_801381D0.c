#include "context.h"

typedef struct func_801381D0_Struct {
    u8 pad0[0x38];
    struct func_80136E10_Struct3 *unk38;
    u8 pad1[0x94 - 0x3C];
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
} func_801381D0_Struct;

extern f64 D_8018DCE0;
extern f64 D_8018DCE8;
extern f32 D_8018DCF0;
void func_801383C0(s32 arg0, s32 arg1);

void func_801381D0(func_801381D0_Struct *arg0, s32 arg1) {
    s32 sp6C;
    s32 pad;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 v;

    arg0->unk9E = arg0->unk9E + 1;
    if (!(arg0->unk9E % 8)) {
        arg0->unk9C = arg0->unk9C - 1;
        v = arg0->unk9C & 3;
        if (v != 0) {
            if (v == 1) goto c1;
            if (v == 2) goto c2;
            if (v != 3) goto join;
            goto c3;
        }
        sp6C = 0;
        goto e1;
c1:
        sp6C = 3;
e1:
        goto e2;
c2:
        sp6C = 4;
e2:
        goto join;
c3:
        sp6C = 5;
join:
        arg0->unk94 = (f32) ((f64) arg0->unk94 + D_8018DCE0);
        arg0->unk98 = (f32) ((f64) arg0->unk98 + D_8018DCE8);
        sp58 = func_8012C6B4(0x80);
        sp5C = func_8012C6B4(0x1F);
        sp60 = func_8012C6B4(0x1F);
        sp64 = func_8012C6B4(0x1F);
        func_80129FB8(arg0->unk94, 10.0f, arg0->unk98, -0.152f, 0.0f, D_8018DCF0, 0.0f, 0xFF, 0xFF, sp58, sp5C + 0xE0, sp60, sp64, 0xFF, 8, (f32) ((f64) (f32) func_8012C6B4(0xF) / 10.0), sp6C, 0);
    }
    if (func_80133A24(arg0->unk38->unk10 >> 0x10) == 0) {
        func_800058DC(arg0, func_801383C0);
    }
}
