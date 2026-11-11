#include "common.h"


struct func_8038DAFC_StrA {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0x9A - 0x93];
    s16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 padA3[0xB0 - 0xA3];
};

struct func_8038DAFC_StrB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 unk30;
    u8 pad34[0x38 - 0x34];
    u32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x2E0 - 0x2DA];
};
extern u32 func_8012C6B4(s32);
extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038DAFC(struct func_8038DAFC_StrA *arg0, struct func_8038DAFC_StrB *arg1,
                  struct func_8038DAFC_StrB *arg2) {
    u32 temp_v0;

    if (arg1->unk2 < (arg1->unk0 / 5)) {
        if (arg0->unkA0 != 0) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 1;
            arg0->unkA0--;
            arg0->unk9A |= 0x20;
            goto end;
        }
    }
    if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A |= 8;
        goto end;
    }
    if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        if (arg2->unk2 < 0x64) {
            func_80229CE0(arg0, arg1, 2);
        } else {
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        }
    } else {
        temp_v0 = func_8012C6B4(6);
        switch (temp_v0) {
        case 0:
        case 1:
            arg1->unk2D8 = 0;
            func_80229CE0(arg0, arg1, 1);
            arg0->unk92 = 0;
            goto end;
        case 2:
        case 3:
            arg1->unk2D8 = 1;
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
            arg0->unk92 = 1;
            goto end;
        case 4:
            arg1->unk2D8 = 0xA;
            arg1->unk2D9 = 0;
            arg0->unk92 = 2;
            goto end;
        case 5:
            arg1->unk2D8 = 2;
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
            arg0->unk92 = 3;
            break;
        }
    }
end:
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}

