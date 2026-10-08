#include "context.h"

struct func_8038C600_StructC {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_8038C600_StructB {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_8038C600_StructA {
    u8 pad[0x2C];
    struct func_8038C600_StructB *unk2C;
};

struct func_8038C600_StructG {
    u8 pad[0xE8];
    struct func_8038C600_StructA *unkE8;
};

struct func_8038C600_StructC *func_8038C778(void);
extern s32 D_8038D8F0;
extern s32 D_8038DB48;
extern u8 D_8038E070[];

void func_8038C600(void) {
    struct func_8038C600_StructC *temp_v0;
    struct func_8038C600_StructB *temp_v1;
    struct func_8038C600_StructG *glob;
    f32 var_fv0;
    f32 temp_fv1;
    f32 temp_fa0;
    f32 temp_fa1;

    if ((D_8038D8F0 != 0) && (D_8038D8F0 < 9)) {
        temp_v0 = func_8038C778();
        var_fv0 = 1.0f;
        if (D_8038DB48 != 0) {
            glob = (struct func_8038C600_StructG *) D_801BBBF0;
            temp_v1 = glob->unkE8->unk2C;
            temp_fv1 = temp_v1->unk3C - temp_v1->unk30;
            temp_fa0 = temp_v1->unk40 - temp_v1->unk34;
            temp_fa1 = temp_v1->unk44 - temp_v1->unk38;
            var_fv0 = ((temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0) + (temp_fa1 * temp_fa1)) / 400.0f;
        }
        if (temp_v0 != NULL) {
            glob = (struct func_8038C600_StructG *) D_801BBBF0;
            glob->unkE8->unk2C->unk30 = glob->unkE8->unk2C->unk30 + (temp_v0->unk4 * var_fv0);
            glob->unkE8->unk2C->unk34 = glob->unkE8->unk2C->unk34 + (temp_v0->unk8 * var_fv0);
            glob->unkE8->unk2C->unk38 = glob->unkE8->unk2C->unk38 + (temp_v0->unkC * var_fv0);
            glob->unkE8->unk2C->unk3C = glob->unkE8->unk2C->unk3C + (temp_v0->unk4 * var_fv0);
            glob->unkE8->unk2C->unk40 = glob->unkE8->unk2C->unk40 + (temp_v0->unk8 * var_fv0);
            glob->unkE8->unk2C->unk44 = glob->unkE8->unk2C->unk44 + (temp_v0->unkC * var_fv0);
            *(s32 *) (D_8038E070 + D_8038D8F0 * 0x10 - 0xC) += 1;
        }
    }
}
