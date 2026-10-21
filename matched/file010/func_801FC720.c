#include "context.h"
s32 func_801FC720(u16 arg0, u16 arg1, s32 arg2) {
    u32 s;

    if (arg1 >= 6) {
        return 0;
    }
    s = arg1;
    D_801BBBF0.unk228 = arg0;
    D_801BBBF0.unk21C = (u16)s;
    *(s32 *)((u8 *)&D_801BBBF0 + 0x220) = arg2;
    D_801BBBF0.unk224 = 0;
    D_801BBBF0.unk226 = 0;
    if (arg1 == 0) {
        D_801BBBF0.unk228 = 0;
        D_801BBBF0.unk21C = 0;
        return 1;
    }
    if (arg1 == 1) {
        func_80020718(D_801BBBF0.unk228);
        D_801BBBF0.unk21C = 0;
        return 1;
    }
    if (arg1 == 4) {
        func_800208C4(D_801BBBF0.unk228);
        D_801BBBF0.unk21C = 0;
        return 1;
    }
    s = (u16)D_801BBBF0.unk21C;
    if (s == 2) goto c2;
    if (s == 3) goto c3;
    if (s != 5) goto end;
    if (1) goto c5;
c2:
    D_801BBBF0.unk226 = arg2;
    if (1) goto end;
c3:
    func_80020718(D_801BBBF0.unk228);
    return 1;
c5:
    D_801BBBF0.unk226 = arg2;
end:
    return 1;
}
