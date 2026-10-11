#include "context.h"

void func_802332D8(void) {
    struct func_80232128_Struct *e;
    u32 v;

    e = *(struct func_80232128_Struct **)(D_801BBBF0 + 0xEC);
    v = *(u16 *)(D_801BBBF0 + 0x2C);
    if (v == 0xA || v == 0xB) {
        func_80020718(0x5E);
        return;
    }
    v = e->unk36;
    if (v == 0xF9 || v == 0x149 || v == 0x32 || v == 0xFA || v == 0xFB || v == 0xFC || v == 0xFD || v == 0x2E || v == 0x31) {
        func_80020718(0x5F);
        return;
    }
    if (v == 0x148) {
        func_80020718(0x60);
        return;
    }
    if (v == 0x11D) {
        func_80020718(0x61);
        return;
    }
    if (v == 0x11E) {
        func_80020718(0x62);
        return;
    }
    if (v == 0x11B) {
        func_80020718(0x6C);
        return;
    }
    func_80020718(0x5E);
}
