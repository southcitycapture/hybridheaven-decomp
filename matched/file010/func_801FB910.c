#include "context.h"
struct func_801FBA3C_Struct {
    u8 pad0[0x24];
    void *unk24;
    u8 pad28[0xAF - 0x28];
    u8 unkAF;
};
struct func_801FBA3C_Inner {
    u8 pad0[0x8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};
struct func_801FBA3C_Entry {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FBA3C_Inner *unk30;
};
void func_801FBA3C(struct func_801FBA3C_Struct *arg0, struct func_801FBA3C_Entry **arg1);


struct func_801FB910_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xAF - 0x91];
    u8 unkAF;
};

void func_801FB910(struct func_801FB910_Struct *arg0, s32 *arg1) {
    u8 i;
    u8 j;

    arg0->unk90++;
    if (arg0->unk90 == 2) {
        goto case2;
    }
    if (arg0->unk90 != 4) {
        goto end;
    }
    goto case4;
case2:
    for (i = 0; i < 4; i++) {
        func_80145310(arg1[i], 1, 1);
    }
    goto end;
case4:
    if (arg0->unkAF == 1) {
        for (i = 0; i < 4; i++) {
            func_80145310(arg1[i], 3, 3);
        }
    } else {
        for (j = 0; j < 4; j++) {
            func_80145310(arg1[j], 0x1B, 0x1B);
        }
    }
end:
    if (arg0->unk90 >= 0x51) {
        func_800058DC((s32)arg0, (void *)func_801FBA3C);
    }
}
