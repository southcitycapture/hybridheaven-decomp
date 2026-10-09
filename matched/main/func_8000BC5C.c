#include "context.h"

struct func_8000BC5C_Struct {
    u8 pad0[6];
    u16 unk6;
    u8 pad8[4];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
};

void func_8000BC5C(struct func_8000BC5C_Struct *arg0) {
    arg0->unk6 = 0;
    arg0->unkC = 0xFF;
    arg0->unkD = 0xFF;
    arg0->unkE = 0xFF;
    arg0->unkF = 0xFF;
}
