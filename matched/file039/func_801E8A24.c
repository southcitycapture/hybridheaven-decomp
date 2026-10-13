#include "context.h"

typedef struct func_801E8A24_Struct {
    s32 w[3];
} func_801E8A24_Struct;

extern func_801E8A24_Struct D_801EA92C;

s32 func_801E8A24(s32 arg0, s32 arg1) {
    func_801E8A24_Struct sp1C;

    sp1C = D_801EA92C;
    func_801C18CC(1, &sp1C);
    return 0xA;
}
