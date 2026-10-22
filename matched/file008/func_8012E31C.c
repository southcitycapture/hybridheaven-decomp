#include "context.h"

extern s32 D_8017BAD8;
extern u8 D_801BCC21;
extern s32 func_80126944(void);

typedef struct func_8012E31C_StructData {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x17];
    u8 unk4B;
} func_8012E31C_StructData;
typedef struct func_8012E31C_StructNode {
    u8 pad0[0x2C];
    func_8012E31C_StructData *unk2C;
} func_8012E31C_StructNode;
typedef struct func_8012E31C_StructState {
    u8 pad0[4];
    s32 *unk4;
    u8 pad8[4];
    u16 unkC;
    u8 padE[0x8E];
    u8 unk9C;
} func_8012E31C_StructState;
typedef struct func_8012E31C_StructObj {
    u8 pad0[0x5C];
    func_8012E31C_StructState *unk5C;
} func_8012E31C_StructObj;

void func_8012E31C(void *arg0, s32 arg1) {
    func_8012E31C_StructState *temp_t2;
    s32 pad;
    s32 *sp24;
    s16 var_t1;
    register s32 *var_a0;
    s32 var_v1;
    register func_8012E31C_StructData *temp_v0_2;

    temp_t2 = ((func_8012E31C_StructObj *)arg0)->unk5C;
    sp24 = temp_t2->unk4;
    if (((func_80126944() != 1) || (((s32) D_801BCC21 > 0) && ((s32) D_801BCC21 < 0xA))) && ((temp_t2->unk9C == 1) || (temp_t2->unk9C == 3))) {
        var_t1 = ((func_8012E31C_StructNode **)arg1)[1]->unk2C->unk4B;
        if (temp_t2->unk9C == 1) {
            var_t1 -= 0x19;
            if (var_t1 <= 0) {
                var_t1 = 0;
                temp_t2->unk9C = 2;
            }
        } else {
            var_t1 += 0x19;
            if (var_t1 >= 0xFF) {
                var_t1 = 0xFF;
                temp_t2->unk9C = 0;
            }
        }
        if ((s32) temp_t2->unkC >= 2) {
            var_v1 = 4;
            var_a0 = sp24 + 1;
            do {
                if (*var_a0 < 0) {
                } else {
                    temp_v0_2 = (*(func_8012E31C_StructNode **)(arg1 + var_v1))->unk2C;
                    temp_v0_2->unk24 |= 0x100;
                    temp_v0_2->unk30 = (s32) &D_8017BAD8 | 0x40000000;
                    temp_v0_2->unk4B = var_t1;
                }
                var_v1 += 4;
                var_a0++;
            } while (var_v1 < temp_t2->unkC * 4);
        }
    }
}
