#include "context.h"

typedef struct func_8012C97C_Struct {
    u16 *unk0;
    s32 *unk4;
} func_8012C97C_Struct;

extern func_8012C97C_Struct *D_80171CEC[];
void func_8000522C(u16, s32);

void func_8012C97C(s32 arg0, s32 arg1) {
    func_8012C97C_Struct *temp_v0;

    temp_v0 = D_80171CEC[arg0];
    func_8000522C(*temp_v0->unk0, temp_v0->unk4[arg1]);
}
