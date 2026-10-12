#include "context.h"
struct func_80248F3C_Struct2 {
    u8 pad[0x78];
    s16 unk78;
};
struct func_80248F3C_Struct1 {
    u8 pad[0x5C];
    struct func_80248F3C_Struct2 *unk5C;
};
void func_80248F3C(struct func_80248F3C_Struct1 *arg0, s32 arg1);

extern void func_8013B570(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

void func_80248F04(void *arg0, s32 arg1) {
    func_8013B570(arg0, 0xF5, 2, 3, func_80248F3C);
}
