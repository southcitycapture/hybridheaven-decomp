#include "context.h"
extern f64 D_8018CC28;
extern f64 D_8018CC30;

void func_80127E3C(func_80127D70_StructArg *arg0, s32 arg1) {
    arg0->unk90 = (u32)((f64)arg0->unk90 - D_8018CC28);
    func_8012F41C(arg0, 0xFF, 0xFF, 0xFF, arg0->unk90);
    if ((f64)arg0->unk90 < D_8018CC30) {
        func_80005700();
    }
}
