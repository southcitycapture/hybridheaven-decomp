#include "context.h"

extern s32 func_801D0408();
extern f32 D_801FC8EC;
struct func_801EE710_S2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EE710_N {
    u8 pad0[8];
    struct func_801EE710_N *unk8;
    u8 pad1[0x18];
    struct func_801EE710_N *unk24;
    u8 pad2[4];
    struct func_801EE710_S2 *unk2C;
};
#define P ((*(struct func_801EE710_N **)&D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C)

s32 func_801EE710(s32 arg0, s32 arg1) {
    s32 v = D_801FB5FC;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    return 6;
c0:
    if (func_801C0B8C(0x04FFB42A) != 0) {
        P->unk4 = -197.0f;
        P->unk8 = 0.0f;
        P->unkC = D_801FC8EC;
        P->unk12 = 0x1000;
        func_801CC470(3, 0x01B8001F, 9, 0, 1.0f);
        D_801FB5FC = 1;
    }
    goto end;
c1:
    if (func_801D0408() != 0) {
        func_801CC470(3, 0x01B8001D, 0, 0, 4.0f);
        return 7;
    }
end:
    return 6;
}
