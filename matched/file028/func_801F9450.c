#include "common.h"

extern u8 *D_801DAB14;
extern void func_801CC470(s32, s32, s32, s32, f32);

#define FUNC_801F9450_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801F9450_SUB(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801F9450_TGT(p) FUNC_801F9450_SUB(FUNC_801F9450_SUB(p, 0x24), 0x2C)
#define FUNC_801F9450_CHAIN(p) FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(p))))))

s32 func_801F9450(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x39FBBF) != 0) {
        *(f32 *)(FUNC_801F9450_TGT(FUNC_801F9450_CHAIN(D_801DAB14)) + 0x4) = 6.5f;
        *(f32 *)(FUNC_801F9450_TGT(FUNC_801F9450_CHAIN(D_801DAB14)) + 0x8) = 0.0f;
        *(f32 *)(FUNC_801F9450_TGT(FUNC_801F9450_CHAIN(D_801DAB14)) + 0xC) = 52.5f;
        *(s16 *)(FUNC_801F9450_TGT(FUNC_801F9450_CHAIN(D_801DAB14)) + 0x12) = 0xFD2;
        func_801CC470(5, 0x03480010, 0, 0x1100, 6.0f);
        return 5;
    }
    return 4;
}
