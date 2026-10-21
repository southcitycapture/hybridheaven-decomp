#include "context.h"

struct func_801E71F4_StructE { u8 pad[8]; f32 unk8; };
struct func_801E71F4_StructD { u8 pad[0x2C]; struct func_801E71F4_StructE *unk2C; };
struct func_801E71F4_StructC { u8 pad[0x24]; struct func_801E71F4_StructD *unk24; };
struct func_801E71F4_StructB { u8 pad[8]; struct func_801E71F4_StructC *unk8; };
struct func_801E71F4_StructA { u8 pad[8]; struct func_801E71F4_StructB *unk8; };
extern s32 func_801CEDD4();
extern f64 D_801E88F8;

s32 func_801E71F4(s32 arg0, s32 arg1) {
    u64 t;
    f64 r;
    f32 four = 4.0f;
    s32 st = D_801E8468;

    if (st == 0) goto c0;
    if (st != 1) goto tail;
    goto c1;
c0:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80039, 0, 0x100, 10.0f);
        D_801E8468 = 1;
    }
    goto tail;
c1:
    if (func_801C0B8C(0x0234110B) != 0) {
        func_801C0EB0(4, 1);
        D_801E846C = ((struct func_801E71F4_StructA *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8;
        func_801C0D04(4, 1);
        return 7;
    }
tail:
    t = func_801C0F18(4, 1);
    r = func_80034C24(t);
    ((struct func_801E71F4_StructA *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = (147.0f - D_801E846C) * ((f32)(r / D_801E88F8) / four) + D_801E846C;
    return 6;
}
