#include "context.h"

typedef struct func_801C63B4_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_801C63B4_Struct;

extern void func_8001F540();
extern void func_800058DC(void *, void *);
extern s32 D_801DA50C;
extern void func_801C640C();

void func_801C63B4(func_801C63B4_Struct *arg0, void *arg1) {
    if (arg0->unk90++ >= 7) {
        func_8001F540(D_801DA50C);
        func_800058DC(arg0, func_801C640C);
    }
}
