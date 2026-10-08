#include "context.h"

typedef struct func_80377140_Struct {
    u8 pad[6];
    u16 unk6;
    u16 unk8;
} func_80377140_Struct;

extern func_80377140_Struct D_801BBBF0;
extern u16 D_803787A4[];
extern u8 D_803887E4[];
extern void func_803771A4();
extern void func_8013EA94();

void func_80377140(s32 arg0, s32 arg1) {
    if (D_803887E4[0] == 0) {
        func_8013EA94();
        D_801BBBF0.unk6 = D_803787A4[D_801BBBF0.unk8];
        func_800058DC((void *) arg0, (void *) func_803771A4);
    }
}
