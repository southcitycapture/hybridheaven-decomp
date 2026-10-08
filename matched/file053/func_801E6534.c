#include "context.h"

extern void func_801BF628(s32 a0, void *a1);
extern s32 D_801E9434;

typedef struct func_801E6534_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad_10[0x1F8 - 0x10];
} func_801E6534_Struct;

s32 func_801E6534(s32 arg0, s32 arg1) {
    func_801E6534_Struct sp18;

    func_801BF628(4, &sp18);
    if (sp18.unkC >= 2) {
        D_801E9434 = 1;
        return 1;
    }
    return 0;
}
