#include "context.h"

extern s32 func_801D27D8(s32, s32);
extern f32 D_80208C1C;
extern f32 D_80208C20;
extern f32 D_80208C24;
extern f32 D_80208E3C;

#define N(p) (*(u8 **)((u8 *)(p) + 0x8))
#define CH() (*(u8 **)(*(u8 **)(N(N(N(N(*(u8 **)(func_801DAAF0 + 0x24))))) + 0x24) + 0x2C))

s32 func_801F8008(s32 arg0, s32 arg1) {
    u8 *v;

    if (D_802073A4 == 0) goto c0;
    if (D_802073A4 == 1) goto c1;
    if (D_802073A4 == 2) goto c2;
    return 5;
c0:
    D_80208E3C = (D_80208C1C - *(f32 *)(CH() + 0xC)) / (f32)(u32)(D_80208C20 * 30.0f);
    func_801C0D04(4, 3);
    D_802073A4 = 1;
    goto done;
c1:
    if (func_801C0DE4(4, 3, 0x40400001) != 0) {
        func_801C0EB0(4, 3);
        func_801CC4D8(3, 0x03200000, 0, 0, 15.0f);
        D_802073A4 = 2;
    }
    v = CH();
    *(f32 *)(v + 0xC) = *(f32 *)(v + 0xC) + D_80208E3C;
    if (!(func_801D27D8(0x01680003, 0x14) != 0 || func_801D27D8(0x01680003, 0x28) != 0)) {
        goto done;
    }
    v = CH();
    func_8038D33C(*(f32 *)(v + 4), *(f32 *)(v + 8), *(s32 *)(v + 0xC), 0x4A2, D_80208C24, 1.0f);
    return 5;
c2:
    if (func_801D277C() == 0) {
        return 6;
    }
    goto done;
done:
    return 5;
}
