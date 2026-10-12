#include "context.h"

typedef struct func_80248738_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80248738_StructInner;

typedef struct func_80248738_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80248738_StructInner *unk5C;
} func_80248738_Struct;

extern s8 D_8025C704;
extern void func_802487AC();

void func_80248738(func_80248738_Struct *arg0, s32 arg1) {
    func_80248738_StructInner *temp_a3;

    temp_a3 = arg0->unk5C;
    if (func_80010550(arg1, temp_a3) != 0) {
        temp_a3->unk78 = 1;
        arg0->unk2C = arg0->unk2C & ~0x80;
        D_8025C704 = 1;
        func_800058DC(arg0, func_802487AC);
    }
}
