#include "context.h"

extern s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801D2C5C();
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern f32 D_8020884C;
extern f32 D_80208850;

#define B() ((u8 *)D_801DAB14)
#define P(b) (*(u8 **)((b) + 8))
#define Q() (*(u8 **)(P(P(B())) + 0x24))
#define OBJ() (*(u8 **)(Q() + 0x2C))

s32 func_801E42F0(s32 arg0, s32 arg1) {
    u8 *o;
    if (D_80208E24 != 0) {
        if (D_80208E24 == 1) goto c1;
        if (D_80208E24 == 2) goto c2;
        return 0xF;
    }
    *(f32 *)(OBJ() + 4) = 0.0f;
    *(f32 *)(OBJ() + 8) = 0.0f;
    *(f32 *)(OBJ() + 0xC) = D_8020884C;
    *(s16 *)(OBJ() + 0x12) = 0x1000;
    func_801CC470(1, 0x0320001B, 0, 0x100, 3.0f);
    D_80208E24 = 1;
    goto done;
c1:
    if (*(f32 *)(OBJ() + 0xC) < D_80208850) {
        func_801CC4D8(1, 0x0320001A, 0, 1, 30.0f);
        D_80208E24 = 2;
    } else if (func_801D2C5C(0x0320001B, 0) != 0 || func_801D2C5C(0x0320001B, 0x12) != 0) {
        o = OBJ();
        func_8038D33C(*(f32 *)(o + 4), *(f32 *)(o + 8), *(s32 *)(o + 0xC), 0x4A1, 1.5f, 1.0f);
    }
    goto done;
c2:
    if (func_801D2C00() == 0) {
        return 0x10;
    }
done:
    return 0xF;
}
