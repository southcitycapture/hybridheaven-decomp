#include "context.h"

typedef struct func_801F4208_SubStruct {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_801F4208_SubStruct;

typedef struct func_801F4208_Struct {
    u8 pad0[0x38];
    func_801F4208_SubStruct *unk38;
} func_801F4208_Struct;

typedef struct func_801F4208_Out {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4208_Out;

void func_801F4208(func_801F4208_Struct *arg0, func_801F4208_Out *arg1) {
    arg1->unk0 = (f32) ((f64) (f32) arg0->unk38->unk6 / 10.0);
    arg1->unk4 = (f32) ((f64) (f32) arg0->unk38->unk8 / 10.0);
    arg1->unk8 = (f32) ((f64) (f32) arg0->unk38->unkA / 10.0);
}
