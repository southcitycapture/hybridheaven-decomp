#include "context.h"

typedef struct func_80151700_Struct2 {
    u8 pad[0x30];
    s32 unk30;
} func_80151700_Struct2;

typedef struct func_80151700_Struct1 {
    u8 pad[0x2C];
    func_80151700_Struct2 *unk2C;
} func_80151700_Struct1;

extern void func_80006214(void *);
extern void *D_8008D5D4;
extern func_80151700_Struct1 *D_8008DA88[];

s32 func_80151700(func_801516CC_Struct0 *arg0, u8 arg1, s32 arg2) {
    func_801516CC_Struct1 *sp1C;

    sp1C = arg0->unk5C;
    if ((func_801517CC(arg0) != 0) && ((s32) arg1 < (s32) sp1C->unkC)) {
        func_80006214(arg0);
        D_8008DA88[arg1]->unk2C->unk30 = arg2;
        func_80006214(D_8008D5D4);
        return 1;
    }
    return 0;
}
