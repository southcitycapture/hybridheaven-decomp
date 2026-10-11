#include "context.h"

typedef struct func_801E4B14_StructB {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801E4B14_StructB;

typedef struct func_801E4B14_StructA {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    func_801E4B14_StructB *unk30;
} func_801E4B14_StructA;

typedef struct func_801E4B14_StructD {
    u8 pad0[0x10];
    func_801E4B14_StructA *unk10;
} func_801E4B14_StructD;

extern s32 func_8012CF8C(s32, void *, s32, s32);
extern s32 D_8038D8CC;

s32 func_801E4B14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x022E78BE) != 0) {
        ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk22 = 0;
        return 2;
    }
    if (func_801C0B8C(0x0200B1FE) != 0) {
        ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk22 = 1;
        if (D_801E8584 >= 3) {
            D_801E8580 = D_801E8580 ^ 1;
            if (D_801E8580 != 0) {
                ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk30->unk48 = 0xCD;
                ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk30->unk49 = 0xDA;
                ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk30->unk4A = 0xDF;
                func_8012CF8C(D_8038D8CC, (u8 *) ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk30 + 0x40, 0x441, 1);
            } else {
                ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk30->unk48 = 0xD1;
                ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk30->unk49 = 0xE4;
                ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk30->unk4A = 0xEB;
                func_8012CF8C(D_8038D8CC, (u8 *) ((func_801E4B14_StructD *) D_8038D8D0)->unk10->unk30 + 0x40, 0x441, 0);
            }
            D_801E8584 = 0;
            return 1;
        } else {
            D_801E8584 += 1;
        }
    }
    return 1;
}
