#include "context.h"
extern func_80358964_StructA *D_8038CC10;
void func_80005700(void);

typedef struct func_80359044_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_80359044_Struct;

void func_80359044(func_80359044_Struct *arg0, s32 arg1) {
    if ((s32) ((func_80359044_Struct *) D_8038CC10)->unk4C >= ((s32) arg0->unk4E + 0x8003)) {
        func_80005700();
    }
}
