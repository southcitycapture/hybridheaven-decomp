#include "context.h"

typedef struct func_8035B820_Struct {
    u8 pad[0x3E];
    u16 unk3E;
} func_8035B820_Struct;

void func_8035B820(func_8035B820_Struct *arg0, s32 arg1) {
    if (arg0->unk3E++ >= 0x1F) {
        arg0->unk3E = 0;
        func_800058DC(arg0, (void *) func_8035B234);
    }
}
