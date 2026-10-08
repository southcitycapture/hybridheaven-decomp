#include "context.h"

typedef struct func_801C0F98_Struct {
    u8 pad[0x90];
    f32 unk90;
} func_801C0F98_Struct;

extern u8 D_801CE978[];
extern u8 D_801CE994[];
extern u8 D_801CE9B0[];
extern u8 D_801CE9CC[];
extern void func_801C1034(void);

void func_801C0F98(func_801C0F98_Struct *arg0, s32 arg1) {
    arg0->unk90 = 150.0f;
    func_8001B204(1, 0x7D0, 0x50, D_801CE978);
    func_8001B204(2, 0x7D0, 0x5A, D_801CE994);
    func_8001B204(3, 0x7D0, 0x64, D_801CE9B0);
    func_8001B204(4, 0x7D0, 0x6E, D_801CE9CC);
    func_800058DC((s32)arg0, func_801C1034);
}
