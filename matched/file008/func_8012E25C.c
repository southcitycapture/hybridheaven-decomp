#include "common.h"

struct func_8012E25C_StructB {
    u8 pad[0x74];
    u8 unk74;
};

struct func_8012E25C_StructA {
    u8 pad[0x5C];
    struct func_8012E25C_StructB *unk5C;
};

s32 func_80126944(void);
void func_801DBEE4(void *arg0, s32 arg1);
void func_80223ED4(void *arg0, s32 arg1);
extern u8 D_801BBBF0[];

void func_8012E25C(struct func_8012E25C_StructA *arg0, s32 arg1) {
    struct func_8012E25C_StructB *temp;

    temp = arg0->unk5C;
    if ((temp->unk74 != 4) && (func_80126944() == 1) && (D_801BBBF0[0x1031] > 0) && (D_801BBBF0[0x1031] < 0xE) && (*(void **) (D_801BBBF0 + 0xDC) != NULL) && (*(void **) (D_801BBBF0 + 0xE0) != 0) && (((u8 *) *(void **) (D_801BBBF0 + 0xDC))[0x63] != 0) && (*(void **) (D_801BBBF0 + 0xEC) != NULL) && (*(void **) (D_801BBBF0 + 0xF0) != 0) && (((u8 *) *(void **) (D_801BBBF0 + 0xEC))[0x63] != 0)) {
        func_80223ED4(arg0, arg1);
        func_801DBEE4(arg0, arg1);
    }
}
