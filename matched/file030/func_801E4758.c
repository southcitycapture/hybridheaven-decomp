#include "context.h"

extern struct func_801E5060_StructC *D_8038D8D0;

typedef struct func_801E4758_Struct2 {
    u8 pad0[0x12];
    s16 unk12;
} func_801E4758_Struct2;

typedef struct func_801E4758_Struct1 {
    u8 pad0[0x30];
    func_801E4758_Struct2 *unk30;
} func_801E4758_Struct1;

typedef struct func_801E4758_Struct0 {
    u8 pad0[0x4];
    func_801E4758_Struct1 *unk4;
} func_801E4758_Struct0;

s32 func_801E4758(s32 arg0, s32 arg1) {
    func_801E4758_Struct2 *temp_v0;

    temp_v0 = ((func_801E4758_Struct0 *) D_8038D8D0)->unk4->unk30;
    temp_v0->unk12 = (s16) (temp_v0->unk12 + 0x222);
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801C0D04(3, 1);
        return 9;
    }
    return 8;
}
