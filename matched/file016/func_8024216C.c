#include "context.h"

extern f32 func_8001EAD0(s16);

typedef struct func_8024216C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024216C_Struct;

void func_8024216C(func_8024216C_Struct *arg0, func_80242080_Struct1 **arg1) {
    (*arg1)->unk30->unk4B = (s8) (u32) (func_8001EAD0((s16) ((s16) (arg0->unk3C * 0x50) & 0x1FFF)) * 127.0f + 128.0f);
    arg0->unk3C = (u16) (arg0->unk3C + 1);
}
