#include "context.h"

typedef struct func_8012D8C8_Struct {
    u8 pad[0x2C];
    s32 unk2C;
} func_8012D8C8_Struct;

extern void func_8012D064(void *arg0, s32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5);

void func_8012D8C8(s32 arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5) {
    func_8012D8C8_Struct *p = (func_8012D8C8_Struct *) arg0;

    p->unk2C |= 2;
    func_8012D064(p, arg2, arg3, arg4, arg1, (u8) arg5);
}
