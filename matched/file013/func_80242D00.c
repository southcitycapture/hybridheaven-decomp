#include "context.h"

typedef struct func_80242D00_Struct {
    u8 pad[0x64];
    void *unk64;
} func_80242D00_Struct;

extern void func_801293C8(s32 arg0, f32 arg1);

void func_80242D00(void) {
    void *temp_a0;

    func_801293C8((s32)D_8008D5D4, 0.0f);
    temp_a0 = ((func_80242D00_Struct *)D_8008D5D4)->unk64;
    if (temp_a0 != NULL) {
        func_80005700(temp_a0);
        ((func_80242D00_Struct *)D_8008D5D4)->unk64 = NULL;
    }
}
