#include "context.h"

typedef struct func_801C0FA8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C0FA8_Struct;

extern struct func_801C1134_Struct D_801DEA40[];

void func_801C0FA8(void) {
    s32 i;

    for (i = 0; i < 32; i++) {
        ((func_801C0FA8_Struct *)D_801DEA40)[i].unk0 = -1;
        ((func_801C0FA8_Struct *)D_801DEA40)[i].unk4 = -1;
        ((func_801C0FA8_Struct *)D_801DEA40)[i].unk8 = 0;
    }
    D_801DEA38[0].a0 = 0;
}
