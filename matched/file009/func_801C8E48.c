#include "context.h"

extern void func_801E0294(void);
extern void func_8001F74C(s32);
extern void func_801C8E84(void);

void func_801C8E48(s32 arg0, s32 arg1) {
    func_801E0294();
    func_8001F74C(arg0);
    func_800058DC((void *) arg0, (void *) func_801C8E84);
}
