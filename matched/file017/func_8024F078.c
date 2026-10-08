#include "context.h"

typedef struct func_8024F078_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_8024F078_StructInner;

typedef struct func_8024F078_Struct {
    u8 pad[4];
    func_8024F078_StructInner *unk4;
} func_8024F078_Struct;

extern s32 func_80133A24(s32);

void func_8024F078(s32 arg0, func_8024F078_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
    }
}
