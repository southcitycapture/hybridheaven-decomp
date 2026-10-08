#include "context.h"

extern s32 func_8013B570();
extern s32 D_801DB7E0;
extern s32 D_801DB7F8;
extern s32 D_801DB7FC;
extern s32 D_801DB804;
extern void func_801D5BBC();

void func_801D5B60(s32 arg0, s32 arg1) {
    D_801DB7F8 = 0;
    D_801DB7FC = 0;
    D_801DB804 = 1;
    D_801DB7E0 = 0;
    func_8013B570(arg0, 0x2D, 0, 4, func_801D5BBC);
}
