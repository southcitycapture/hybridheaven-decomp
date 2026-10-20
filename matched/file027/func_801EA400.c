#include "context.h"
extern s32 func_801C18CC(s32 arg0, func_801E8814_Struct *arg1);

typedef struct func_801EA400_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EA400_Struct;

extern func_801EA400_Struct D_801F435C;

s32 func_801EA400(s32 arg0, s32 arg1) {
    func_801EA400_Struct sp1C;

    sp1C = D_801F435C;
    func_801C18CC(1, &sp1C);
    return 0x84;
}
