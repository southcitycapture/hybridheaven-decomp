#include "context.h"

typedef struct func_801E73FC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E73FC_Struct;

extern func_801E73FC_Struct D_801EAF78;

s32 func_801E73FC(s32 arg0, s32 arg1) {
    func_801E73FC_Struct sp1C;

    sp1C = D_801EAF78;
    func_801C18CC(1, &sp1C);
    return 0x14;
}
