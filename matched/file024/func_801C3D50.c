#include "common.h"

extern s32 func_800058DC(s32, void *);
extern s32 func_8013E7C0();
extern void func_801C3D84();

void func_801C3D50(s32 arg0, s32 arg1) {
    func_8013E7C0();
    func_800058DC(arg0, &func_801C3D84);
}
