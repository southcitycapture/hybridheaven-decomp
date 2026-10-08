#include "context.h"

typedef struct func_8024D134_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024D134_Struct;

extern s32 D_8025A2D4;
extern u8 D_80253974[];
extern void func_8024D19C(void);
extern void func_801514B0(s32, s32);
extern s32 func_80151790(s32);
extern void func_8015115C(s32, void *);

void func_8024D134(func_8024D134_Struct *arg0, s32 arg1) {
    func_801514B0(D_8025A2D4, 0x71);
    if (func_80151790(D_8025A2D4) == 0) {
        func_8015115C(D_8025A2D4, D_80253974);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024D19C);
    }
}
