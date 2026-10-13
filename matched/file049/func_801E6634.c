#include "context.h"
extern s32 func_801C18CC(s32 arg0, func_801E6450_Struct *arg1);

typedef struct func_801E6634_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6634_Struct;

extern func_801E6634_Struct D_801E738C;

s32 func_801E6634(s32 arg0, s32 arg1) {
    func_801E6634_Struct sp1C;

    sp1C = D_801E738C;
    func_801C18CC(1, &sp1C);
    return 0x17;
}
