#include "common.h"

extern void func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern u8 D_8017DD93;
extern u8 D_80044090[];
extern void func_801CBC48(void);
extern void func_801CBD54(void);

void func_801CBBEC(void *arg0, void *arg1) {
    if (D_8017DD93 != 0) {
        func_80005670(arg0, D_80044090);
        func_800058DC(arg0, func_801CBC48);
        return;
    }
    func_800058DC(arg0, func_801CBD54);
}
