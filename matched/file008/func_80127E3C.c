#include "context.h"
void func_80127E3C(func_80127D70_StructArg *arg0, s32 arg1) {
    arg0->unk90 = (u32)((f64)arg0->unk90 - (6.888888888888889));
    func_8012F41C(arg0, 0xFF, 0xFF, 0xFF, arg0->unk90);
    if ((f64)arg0->unk90 < (6.888888888888889)) {
        func_80005700();
    }
}
