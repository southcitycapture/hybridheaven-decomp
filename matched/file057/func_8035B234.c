#include "common.h"

struct func_8035B234_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern void func_80005700();
extern s32 D_8038CC14;

void func_8035B234(struct func_8035B234_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) (arg0->unk4E | 0x8000)) {
        D_8038CC14 = 0;
        func_80005700();
    }
}
