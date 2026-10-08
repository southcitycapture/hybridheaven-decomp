#include "context.h"

typedef struct func_801F4658_Struct {
    f32 unk0;
    u8 pad4[4];
    f32 unk8;
} func_801F4658_Struct;

extern void func_8001EF38(f32, f32);

void func_801F4658(func_801F4658_Struct *arg0) {
    func_8001EF38(arg0->unk0, arg0->unk8);
}
