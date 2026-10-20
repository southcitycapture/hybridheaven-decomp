#include "context.h"

s32 func_8013E5C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    struct func_8013E570_Struct *arr = (struct func_8013E570_Struct *)&D_801BEB50;

    for (i = 0; i < 3; i++) {
        if (arg0 == arr[i].unk0) {
            arr[i].unk0 = 0;
            arr[i].unk4 = 0;
            arr[i].unk8 = 0;
            arr[i].unkC = 0;
            return 1;
        }
    }
    return 0;
}
