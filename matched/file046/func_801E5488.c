#include "context.h"
extern void func_801C1000(s32, s32);
void func_801E51C0(void);


s32 func_801E5488(s32 arg0, s32 arg1) {
    func_801E51C0();
    if (func_801C0B8C(0) != 0) {
        func_801C1000(3, 6);
        return 0xF;
    }
    return 0xE;
}
