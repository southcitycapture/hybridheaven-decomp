#include "context.h"

extern s32 func_80005F6C(s32, void *);
extern s32 func_80006214(s32);
extern s32 func_800058DC(s32, void *);
extern u8 D_80164F30[];
extern void func_80127918(void);

void func_801277BC(s32 arg0, s32 arg1) {
    func_80005F6C(arg0, D_80164F30);
    func_80006214(arg0);
    func_800058DC(arg0, func_80127918);
}
