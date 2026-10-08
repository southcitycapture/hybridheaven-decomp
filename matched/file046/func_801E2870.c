#include "context.h"

typedef struct func_801E2870_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2870_Struct;

s32 func_801E2870(s32 arg0, s32 arg1) {
    func_801E2870_Struct *temp;

    temp = (func_801E2870_Struct *)func_801BF6B0(0);
    if (temp->unkC > 0) {
        return 3;
    }
    return 2;
}
