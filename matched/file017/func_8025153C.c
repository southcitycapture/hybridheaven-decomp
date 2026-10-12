#include "context.h"

typedef struct func_8025153C_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_8025153C_StructInner;

typedef struct func_8025153C_Struct {
    u8 pad[4];
    func_8025153C_StructInner *unk4;
} func_8025153C_Struct;

extern s32 func_80133A24(s32);

void func_8025153C(s32 arg0, func_8025153C_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
    }
}
