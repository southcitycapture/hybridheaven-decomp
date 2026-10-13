#include "context.h"
struct func_801CC2CC_Struct2 {
    u8 pad[0x78];
    s16 unk78;
};
struct func_801CC2CC_Struct1 {
    u8 pad[0x5C];
    struct func_801CC2CC_Struct2 *unk5C;
};
void func_801CC2CC(struct func_801CC2CC_Struct1 *arg0, s32 arg1);

extern void func_8013B570(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

void func_801CC294(void *arg0, s32 arg1) {
    func_8013B570(arg0, 0x50, 2, 3, func_801CC2CC);
}
