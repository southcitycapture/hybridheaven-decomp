#include "context.h"
extern struct func_8023A2BC_Struct D_80240880;
extern void func_800058DC(void *, void *);

struct func_8023BF10_StructB {
    u8 pad[0x2D4];
    void *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
};

extern s8 func_80243E50(u8, s32, u8, u8);
extern void func_80376BE4(void *);
extern void func_8023A09C(void);
extern u8 D_801842A0[];

void func_8023BF10(void *arg0, void *arg1) {
    s8 temp_v0;
    struct func_8023BF10_StructB *sp18;
    u8 *cfg;

    cfg = (u8 *) &D_80240880;
    sp18 = *(struct func_8023BF10_StructB **) ((u8 *) arg0 + 0x98);
    temp_v0 = func_80243E50(cfg[0x1B], ((s32) (cfg[0x1C] - 1) / 2) & 0xFF, cfg[0x1D], cfg[0x1E]);
    sp18->unk2D4 = (void *) ((temp_v0 * 0x1C) + D_801842A0);
    sp18->unk2D9 = temp_v0;
    func_80376BE4(sp18);
    func_800058DC(arg0, func_8023A09C);
}
