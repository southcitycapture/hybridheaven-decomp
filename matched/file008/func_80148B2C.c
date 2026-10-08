#include "context.h"

typedef struct func_80148B2C_Struct {
    u8 pad[0x30];
    void *unk30;
} func_80148B2C_Struct;

typedef struct func_80148B2C_Pos {
    s16 unk0;
    s16 unk2;
} func_80148B2C_Pos;

extern func_80148B2C_Struct *D_801BED20;

void func_80148B2C(s8 arg0, s8 arg1) {
    func_80148B2C_Pos *temp_v0;

    temp_v0 = (func_80148B2C_Pos *) D_801BED20->unk30;
    temp_v0->unk0 = (s16) ((arg0 << 5) + 0x1B);
    temp_v0->unk2 = (s16) ((arg1 << 5) + 0x2C);
}
