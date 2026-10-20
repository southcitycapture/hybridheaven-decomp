#include "context.h"

typedef struct func_80136F30_StructInner {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
} func_80136F30_StructInner;

typedef struct func_80136F30_Struct {
    u8 pad0[0x38];
    func_80136F30_StructInner *unk38;
    u8 pad1[0x90 - 0x3C];
    s16 unk90;
} func_80136F30_Struct;

struct func_80136F90_Struct;
void func_80136F90(struct func_80136F90_Struct *arg0, void *arg1);

void func_80136F30(func_80136F30_Struct *arg0, void *arg1) {
    if (func_80133A24(arg0->unk38->unk14 >> 16) != 0) {
        arg0->unk90 = (s16) ((arg0->unk38->unk10 >> 16) & 0xFF);
        func_800058DC(arg0, func_80136F90);
    }
}
