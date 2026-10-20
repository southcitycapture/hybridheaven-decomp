#include "context.h"
void func_801C0438(void);
typedef struct func_801C07A8_Struct {
    u8 pad[4];
    u16 unk4;
} func_801C07A8_Struct;
extern s32 func_8012FE50(s32, u16, s32, s32, s32);
extern func_801C07A8_Struct D_801BBBF0;

void func_801C0760(void) {
    func_801C0438();
    D_801BBBF0.unk4 = 0x73;
    func_8012FE50(2, D_801BBBF0.unk4, 1, 6, 0);
}
