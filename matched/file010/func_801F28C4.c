#include "context.h"

extern void func_800058DC(s32, void *);
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);
extern void func_801F290C(void);

void func_801F28C4(s32 arg0, s32 arg1) {
    func_80020718(0x1FC);
    func_801518D4(0, 7, 6);
    func_800058DC(arg0, func_801F290C);
}
