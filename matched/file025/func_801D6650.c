#include "context.h"

extern void func_801D66D0();
extern s32 func_8013B570(s32 a0, s32 a1, s32 a2, s32 a3, void *cb);
extern u8 D_801BC3D8[];
extern s32 D_801DB950;
extern s32 D_801DB968;
extern s32 D_801DB96C;
extern s32 D_801DB970;
extern s32 D_801DB974;
extern s32 D_801DB978;
extern s32 D_801DB980;
extern s32 D_801E1730;

void func_801D6650(s32 arg0, s32 arg1) {
    D_801E1730 = arg0;
    D_801DB968 = 0;
    D_801DB96C = 0;
    D_801DB970 = 1;
    D_801DB974 = 0;
    D_801DB978 = 0;
    D_801DB950 = 0;
    D_801DB980 = 0;
    func_8013B570(arg0, 0x2C, 0, 4, func_801D66D0);
    *(s16 *)(D_801BC3D8 + 0x3B2) = 0;
}
