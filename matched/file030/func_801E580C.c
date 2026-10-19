#include "context.h"
extern f32 D_801EC71C;
typedef struct func_801E580C_Struct {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E580C_Struct;

s32 func_801E580C(s32 arg0, s32 arg1) {
    func_801E580C_Struct *p;
    s32 v = D_801EB924;

    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 7;
c0:
    if (func_801CE274() == 0) {
        p = (func_801E580C_Struct *)D_801DAB14->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x67A, D_801EC71C, 1.0f);
        func_801CC470(0, 0x03480019, 0, 0, 2.0f);
        D_801EB924 = 1;
    }
    goto end;
c1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x04100026, 0, 0, 15.0f);
        D_801EB924 = 2;
    }
    goto end;
c2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100026, 0, 0, 3.0f);
        D_801EB924 = 3;
    }
    goto end;
c3:
    if (func_801CE284() != 0) {
        return 8;
    }
end:
    return 7;
}
