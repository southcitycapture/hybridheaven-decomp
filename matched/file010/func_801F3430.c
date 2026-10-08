#include "common.h"

extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);
extern u16 D_801BBBF4;
extern void func_801F34FC(void);

void func_801F3430(void *arg0, void *arg1) {
    if (D_801BBBF4 == 0xD) {
        if ((f64)*(f32 *)(*(u8 **)(*(u8 **)((u8 *)arg0 + 0x24) + 0x30) + 8) == ((f64)(f32)*(s16 *)(*(u8 **)((u8 *)arg0 + 0x38) + 8) / 10.0 + 0.5)) {
            func_80020718(0x1FC);
            func_801518D4(0, 7, 6);
        }
    } else {
        func_80020718(0x1FC);
        func_801518D4(0, 7, 6);
    }
    func_800058DC(arg0, func_801F34FC);
}
