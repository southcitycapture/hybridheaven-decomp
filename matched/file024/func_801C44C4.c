#include "context.h"
void func_801C45C8(s32 arg0, s32 arg1);
struct func_801C56B8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
void func_801C56B8(struct func_801C56B8_Struct *arg0, s32 arg1);

extern u8 D_801CEE68[];

void func_801C44C4(s32 arg0, s32 arg1) {
    if ((func_801C1340() & 0x800) && (D_801CC8C8 == 1)) {
        D_801CC8C8 = 0;
    }
    if ((func_801C1340() & 0x400) && (D_801CC8C8 == 0)) {
        D_801CC8C8 = 1;
    }
    func_8001B204(1, 0x7D0, (s16) (D_801CC8C8 * 10 + 0x94), D_801CEE68);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, func_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        func_80020718(8);
        func_80152CF8(D_801CC8C8);
        func_800058DC(arg0, func_801C45C8);
    }
}
