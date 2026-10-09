#include "context.h"

typedef struct func_80000F78_Struct {
    u8 pad[0x89C];
    s32 unk89C;
} func_80000F78_Struct;

void func_80000F78(void *arg0) {
    func_80000F78_Struct *s = (func_80000F78_Struct *) arg0;
    s->unk89C = s->unk89C + 2;
}
