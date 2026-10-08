#include "context.h"

#define FUNC_801E5474_NEXT(p, off) (*(void **)((u8 *)(p) + (off)))
#define FUNC_801E5474_BASE FUNC_801E5474_NEXT(FUNC_801E5474_NEXT(FUNC_801E5474_NEXT(D_801DAB14, 0x8), 0x8), 0x8)
#define FUNC_801E5474_OBJ FUNC_801E5474_NEXT(FUNC_801E5474_BASE, 0x24)
#define FUNC_801E5474_E ((func_801E3D90_StructE *)FUNC_801E5474_NEXT(FUNC_801E5474_NEXT(FUNC_801E5474_BASE, 0x24), 0x2C))

s32 func_801E5474(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = FUNC_801E5474_OBJ;
    if (temp_v0 != NULL) {
        ((func_801E3D90_StructE *)FUNC_801E5474_NEXT(temp_v0, 0x2C))->unk4 = 5120.0f;
        FUNC_801E5474_E->unk8 = 0.0f;
        FUNC_801E5474_E->unkC = 0.0f;
        FUNC_801E5474_E->unk12 = 0;
        func_801CC470(2, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}
