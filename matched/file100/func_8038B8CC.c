#include "context.h"
extern u8 D_8038DD68[];
void func_801C250C(void *);
void func_8038B8FC(void);

s32 func_8038B8CC(void) {
    func_801C250C(D_8038DD68);
    func_8038B8FC();
    return 1;
}
