#include "context.h"
extern u16 D_801CD0D4[];
typedef struct func_801C72F8_Struct { u8 pad[0x3C]; u16 unk3C; } func_801C72F8_Struct;
void func_801C72F8(func_801C72F8_Struct *arg0, s32 arg1) {
    if ((s32)arg0->unk3C > 0) {
        arg0->unk3C = arg0->unk3C - 1;
        return;
    }
    ((u16 *)&D_801BBBF0)[2] = D_801CD0D4[D_801CFDC0];
    func_8012FE50(0x1B, ((u16 *)&D_801BBBF0)[2], 1, 1, 0);
}
