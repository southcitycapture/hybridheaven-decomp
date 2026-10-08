#include "common.h"

typedef struct func_80148D84_Struct {
    u8 pad[0x95];
    s8 unk95;
    s8 unk96;
} func_80148D84_Struct;

void func_80148D84(func_80148D84_Struct *arg0) {
    if (arg0->unk95 < 0) {
        arg0->unk95 = 3;
    }
    if (arg0->unk95 >= 4) {
        arg0->unk95 = 0;
    }
    if (arg0->unk96 < 0) {
        arg0->unk96 = 4;
    }
    if (arg0->unk96 >= 5) {
        arg0->unk96 = 0;
    }
}
