#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E785C_Struct *arg1);

typedef struct func_801E80F8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E80F8_Struct;

extern func_801E80F8_Struct D_80205B80;

s32 func_801E80F8(s32 arg0, s32 arg1) {
    func_801E80F8_Struct sp1C;

    sp1C = D_80205B80;
    func_801C18CC(1, &sp1C);
    return 0x4B;
}
