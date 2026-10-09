#include "context.h"
extern struct func_801E58E4_P *D_8038D8D0;

extern s32 D_801E9E6C;
extern s32 D_801E9E70;

typedef struct func_801E5714_Inner {
    u8 pad[0x22];
    u8 unk22;
} func_801E5714_Inner;

typedef struct func_801E5714_Struct {
    u8 pad[0x20];
    func_801E5714_Inner *unk20;
} func_801E5714_Struct;

s32 func_801E5714(s32 arg0, s32 arg1) {
    D_801E9E6C = 0;
    D_801E9E70 = 0;
    ((func_801E5714_Struct *)D_8038D8D0)->unk20->unk22 = 0;
    return 2;
}
