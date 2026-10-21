#include "context.h"
struct func_8038D8A0_S0 { u8 pad0[0x9A]; s16 unk9A; u8 pad1[4]; u8 unkA0; u8 unkA1; u8 unkA2; };
struct func_8038D8A0_S1 { s16 unk0; s16 unk2; u8 pad0[0x34]; u32 f38:1; u32 pad38:31; u8 pad1[0x6A]; u8 unkA6; u8 pad2[0x231]; u8 unk2D8; u8 unk2D9; };
struct func_8038D8A0_S2 { u8 pad0[0x30]; u32 padb:11; u32 f30:2; u32 padc:19; };
extern void func_80229404();
extern void func_80229CE0();
extern s32 func_8022B640();

s32 func_8038D8A0(struct func_8038D8A0_S0 *arg0, struct func_8038D8A0_S1 *arg1, struct func_8038D8A0_S2 *arg2) {
    s32 r;
    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 3;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A |= 0x20;
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 25.0) && !(arg1->unkA6 & 0x10)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 0x20;
        arg0->unk9A |= 0x100;
    } else if (arg2->f30 != 0) {
        func_80229404(arg1);
        arg0->unk9A |= 8;
    } else if (arg1->f38 != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else {
        r = func_8022B640(3);
        if (r == 0) goto c0;
        if (r != 1) goto cd;
        goto c1;
c0:
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        goto end;
c1:
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, 1);
        goto end;
cd:
        arg1->unk2D8 = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
end:
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
