#include "context.h"

extern void func_800058DC(s32, void *);
extern void func_801C11BC(s32);
extern void func_801C1A30();
extern void func_801C17C8();
extern s32 D_801CC8A4;
extern void func_801C33C8();

extern void func_801C1A98();

typedef struct func_801C1A30_Struct {
    u8 pad[0x90];
    s8 unk90;
} func_801C1A30_Struct;

void func_801C1A30(s32 arg0, s32 arg1) {
    if (D_801CC8A4 == 0) {
        func_801C11BC(0x64);
    } else {
        ((func_801C1A30_Struct *) D_801CC8A4)->unk90 = 0x64;
        func_800058DC(D_801CC8A4, (void *) func_801C33C8);
    }
    func_800058DC(arg0, (void *) func_801C1A98);
}
