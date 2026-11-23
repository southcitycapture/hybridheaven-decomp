#include "common.h"
extern u8 D_801CFDA4[];
extern void (*D_801CCB04)(void *, s32, u8);
extern void func_8012D918(s32, s32, s32, u8, s32);
typedef struct func_801C659C_Ret {
    u8 pad[0x90];
    u8 unk90;
} func_801C659C_Ret;


void func_801C5D64(arg0, arg1)
void *arg0;
u8 arg1;
{
    func_8012D918((s32) arg0, 0x229, arg1 + 6, D_801CFDA4[((func_801C659C_Ret *) arg0)->unk90], 0);
}
