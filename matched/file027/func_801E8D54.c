#include "context.h"
extern s32 func_801C18CC(s32 arg0, func_801E8814_Struct *arg1);

typedef struct func_801E8D54_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8D54_Struct;

extern func_801E8D54_Struct D_801F41AC;

s32 func_801E8D54(s32 arg0, s32 arg1) {
    func_801E8D54_Struct sp1C;

    sp1C = D_801F41AC;
    func_801C18CC(1, &sp1C);
    return 0x1B;
}
