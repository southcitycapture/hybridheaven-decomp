#include "context.h"

extern void *func_800058DC(void *, void *);
extern s16 func_80228C20(void *);
extern void func_80229500(void);
extern void func_8038D000(void);

void func_8038CFC0(void *arg0, void *arg1) {
    func_80229500();
    *(s16 *)((u8 *)arg0 + 0x96) = func_80228C20(arg0);
    func_800058DC(arg0, func_8038D000);
}
