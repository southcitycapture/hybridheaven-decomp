#include "context.h"

struct func_801FB5F0_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xAF - 0x91];
    u8 unkAF;
};

extern s32 D_80116E80(s32);
struct func_801FB910_Struct;
void func_801FB910(struct func_801FB910_Struct *arg0, s32 *arg1);

void func_801FB5F0(struct func_801FB5F0_Struct *arg0, s32 *arg1) {
    u8 sp4F;
    u8 i;

    if (func_80126A0C(arg0, 0x112, 0) != 0) {
        D_80116E80(0x200);
        {
            u8 t = arg0->unkAF;
            if (t == 1) goto case1;
            if (t != 2) goto end;
            goto case2;
        }
case1:
        func_80146208(arg0, &sp4F, 0x66, 0x20, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 6);
        func_80146208(arg0, &sp4F, 0x66, 0x60, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 7);
        func_80146208(arg0, &sp4F, 0x66, 0xA0, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 8);
        func_80146208(arg0, &sp4F, 0x66, 0xE0, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 9);
        goto end;
case2:
        func_80146208(arg0, &sp4F, 0x66, 0x3C, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 2);
        func_80146208(arg0, &sp4F, 0x66, 0x7C, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 3);
        func_80146208(arg0, &sp4F, 0x66, 0xBC, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 4);
        func_80146208(arg0, &sp4F, 0x66, 0xFC, 0x96, 8, 0x20, 0, 0, 0xFF, 0x20D, 5);
end:
        for (i = 0; i < 4; i++) {
            func_80145310(arg1[i], 0, 0);
        }
        arg0->unk90 = 0;
        func_800058DC((s32)arg0, func_801FB910);
    }
}
