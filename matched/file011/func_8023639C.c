#include "common.h"
extern void (*D_80216D10[])(void *, s32);


typedef struct func_8023639C_StructInner {
    u8 pad[0x30];
    u32 unk30;
} func_8023639C_StructInner;

typedef struct func_8023639C_Struct {
    u8 pad[0x9C];
    func_8023639C_StructInner *unk9C;
} func_8023639C_Struct;

s32 func_8023639C(void *arg0) {
    func_8023639C_StructInner *p;
    p = ((func_8023639C_Struct *)arg0)->unk9C;
    if ((p->unk30 << 11) >> 30) {
        return 1;
    }
    return 0;
}
