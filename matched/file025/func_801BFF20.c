#include "context.h"

typedef struct func_801BFF20_Struct {
    u8 pad[8];
    s32 unk8;
} func_801BFF20_Struct;

extern s32 func_80005700(s32);
extern func_801BFF20_Struct *D_801D8D60;

void func_801BFF20(void) {
    func_801C00B8();
    func_801C13C0();
    func_801C1520();
    func_801C1860();
    func_801C1FD0();
    func_801C117C();
    func_801C1D60();
    func_801C0C7C();
    func_801C0FA8();
    func_801C0A30();
    func_801C0C44();
    func_80005700(D_801D8D60->unk8);
    D_801D8D60->unk8 = 0;
}
