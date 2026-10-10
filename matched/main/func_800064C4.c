#include "context.h"

void func_8000659C(void);

struct func_800064C4_Struct {
    struct func_800064C4_Struct *unk0;
    u8 pad4[0xC];
    struct func_800064C4_Struct *unk10;
    struct func_800064C4_Struct *unk14;
    struct func_800064C4_Struct *unk18;
    s32 unk1C;
    u8 pad20[0x4];
    void *unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
};

struct func_800064C4_Globals {
    u8 pad0[0xB0];
    struct func_800064C4_Struct *unkB0;
    u32 unkB4;
    u32 unkB8;
    u32 unkBC;
    u8 *unkC0;
    u8 *unkC4;
};

#define FUNC800064C4_G ((struct func_800064C4_Globals *) &D_800892B0)

void func_800064C4(struct func_800064C4_Struct *arg0) {
    struct func_800064C4_Struct *temp_v0;
    struct func_800064C4_Struct *temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;

    func_8000659C();
    temp_v0 = arg0->unk14;
    if (temp_v0 != NULL) {
        temp_v0->unk10 = arg0->unk10;
    } else {
        arg0->unk18->unk24 = arg0->unk10;
    }
    temp_v0_2 = arg0->unk10;
    if (temp_v0_2 != NULL) {
        temp_v0_2->unk14 = arg0->unk14;
    }
    arg0->unk0 = FUNC800064C4_G->unkB0;
    FUNC800064C4_G->unkB0 = arg0;
    temp_v1 = arg0->unk2C;
    arg0->unk1C = 0;
    if (temp_v1 != 0) {
        *(u8 *) (((u32) (temp_v1 - FUNC800064C4_G->unkB8) / 184U) + (u32) FUNC800064C4_G->unkC0) = 0;
    } else {
        temp_v1_2 = arg0->unk30;
        if (temp_v1_2 != 0) {
            *(u8 *) (((u32) (temp_v1_2 - FUNC800064C4_G->unkBC) / 80U) + (u32) FUNC800064C4_G->unkC4) = 0;
        }
    }
    arg0->unk2C = 0;
    arg0->unk30 = 0;
}
