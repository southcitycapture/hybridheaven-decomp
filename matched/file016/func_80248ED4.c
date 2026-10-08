#include "context.h"

extern s32 D_8024F510;
void func_80248F04(void);

void func_80248ED4(s32 arg0, s32 arg1) {
    D_8024F510 = arg0;
    func_800058DC((void *) arg0, (void *) func_80248F04);
}
