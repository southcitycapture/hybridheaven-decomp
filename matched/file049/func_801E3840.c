#include "context.h"

typedef struct func_801E3840_StructC {
    u8 pad[0x12];
    s16 unk12;
} func_801E3840_StructC;

typedef struct func_801E3840_StructB {
    u8 pad[0x30];
    func_801E3840_StructC *unk30;
} func_801E3840_StructB;

typedef struct func_801E3840_StructA {
    u8 pad[0x18];
    func_801E3840_StructB *unk18;
} func_801E3840_StructA;

s32 func_801E3840(s32 arg0, s32 arg1) {
    func_801E3840_StructC *temp_v1;

    temp_v1 = ((func_801E3840_StructA *) D_8038D8D0)->unk18->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x22);
    return 4;
}
