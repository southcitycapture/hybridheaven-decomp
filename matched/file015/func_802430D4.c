#include "context.h"
typedef struct func_802430D4_S { s32 a, b, c; } func_802430D4_S;
extern func_802430D4_S D_80252104;
void func_8024315C(void);

void func_802430D4(u8 *arg0, s32 volatile arg1) {
    extern s32 func_80010550();
    s32 t = *(s32 *)(arg0 + 0x5C);
    if (func_80010550(arg1, t)) {
        func_80133980(0x77);
        func_8013A1B4(arg1, D_80252104, 0xFFFFFF);
        *(s16 *)(arg0 + 0x90) = 0;
        func_800058DC(arg0, func_8024315C);
    }
}
