#include "common.h"
extern s32 D_80388C60;

extern void func_80005700();

typedef struct func_80380E4C_Struct {
    u8 pad[8];
    s32 unk8;
} func_80380E4C_Struct;

void func_80380E4C(s32 arg0, s32 arg1) {
    if (((func_80380E4C_Struct *)arg0)->unk8 == 0) {
        D_80388C60 = 0;
        func_80005700();
        return;
    }
    return;
}
