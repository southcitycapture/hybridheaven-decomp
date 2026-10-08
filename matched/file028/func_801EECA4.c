#include "context.h"

extern s32 func_801D1B10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5);

#define FUNC_801EECA4_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801EECA4_P5() FUNC_801EECA4_NEXT(FUNC_801EECA4_NEXT(FUNC_801EECA4_NEXT(FUNC_801EECA4_NEXT(FUNC_801EECA4_NEXT(D_801DAB14)))))
#define FUNC_801EECA4_E() ((func_801E3D90_StructD *)(*(u8 **)((u8 *)FUNC_801EECA4_P5() + 0x24)))->unk2C

s32 func_801EECA4(s32 arg0, s32 arg1) {
    FUNC_801EECA4_E()->unk4 = -4.0f;
    FUNC_801EECA4_E()->unk8 = 3.0f;
    FUNC_801EECA4_E()->unkC = -33.0f;
    FUNC_801EECA4_E()->unk12 = 0;
    func_801CC470(4, 0x0348007A, 0, 1, 10.0f);
    func_801D1B10(1, 4, 0x3FC00000, 0, 0x7F, 1);
    return 5;
}
