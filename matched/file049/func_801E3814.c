#include "context.h"
typedef struct func_801E3A38_StructC {
    u8 pad[0xC];
    f32 unkC;
} func_801E3A38_StructC;
typedef struct func_801E3A38_StructB {
    u8 pad[0x30];
    func_801E3A38_StructC *unk30;
} func_801E3A38_StructB;
typedef struct func_801E3A38_StructA {
    u8 pad[0xC];
    func_801E3A38_StructB *unkC;
} func_801E3A38_StructA;
extern func_801E3A38_StructA *D_8038D8D0;

typedef struct func_801E3814_StructC {
    u8 pad[0x12];
    s16 unk12;
} func_801E3814_StructC;

typedef struct func_801E3814_StructB {
    u8 pad[0x30];
    func_801E3814_StructC *unk30;
} func_801E3814_StructB;

typedef struct func_801E3814_StructA {
    u8 pad[0x18];
    func_801E3814_StructB *unk18;
} func_801E3814_StructA;

s32 func_801E3814(s32 arg0, s32 arg1) {
    func_801E3814_StructC *temp_v1;

    temp_v1 = ((func_801E3814_StructA *) D_8038D8D0)->unk18->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x22);
    return 3;
}
