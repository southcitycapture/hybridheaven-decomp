#include "context.h"

typedef struct func_80371930_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80371930_Struct;

typedef struct func_80371930_Obj {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
} func_80371930_Obj;

extern void func_8013A334(f32 *a0, s32 a1, s32 a2, s32 a3);
extern u8 D_80387BD8[];

void func_80371930(func_80371930_Struct *arg0, s32 arg1, u8 arg2) {
    void *func_80005670();
    f32 sp2C[5];
    f32 sp1C[2];
    func_80371930_Obj *temp_v0;
    s32 temp;

    temp = arg0->unk5C;
    func_8013A334(sp2C, arg1, temp, 0x20);
    temp_v0 = func_80005670(arg0, D_80387BD8);
    if (temp_v0 != NULL) {
        temp_v0->unk6C = sp2C[0];
        temp_v0->unk70 = sp2C[1];
        temp_v0->unk74 = sp2C[2];
        temp_v0->unk78 = arg2;
    }
}
