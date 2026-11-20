#include "common.h"
void func_8000EB80(s16 *arg0, s16 *arg1, s16 *arg2, u16 arg3);


#undef func_8000EB80

typedef struct func_8000EC64_Struct {
    u8 pad[0x10];
    s16 values[3];
} func_8000EC64_Struct;

void func_8000EC64(func_8000EC64_Struct *arg0, u16 arg1)
{
    func_8000EB80(&arg0->values[0], &arg0->values[1], &arg0->values[2], arg1);
}
