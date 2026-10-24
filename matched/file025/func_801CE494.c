#include "context.h"

extern void func_80006214(void *);

struct func_801CE494_StructData {
    u8 pad[4];
    s32 *unk4;
    u8 pad8[4];
    u16 unkC;
};
struct func_801CE494_StructRoot {
    u8 pad[0x5C];
    struct func_801CE494_StructData *unk5C;
};
struct func_801CE494_StructModel {
    u8 pad[0x24];
    u32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x17];
    u8 unk4B;
};
struct func_801CE494_StructObj {
    u8 pad[0x2C];
    struct func_801CE494_StructModel *unk2C;
};
extern u8 D_801D9160[];
extern u8 D_801D91B8[];
extern u8 D_801D9268[];
extern u8 D_801D92C0[];

void func_801CE494(s32 arg0) {
    s32 i;
    s32 *p;
    struct func_801CE494_StructObj **slot;
    struct func_801CE494_StructData *temp_t0;

    func_80006214((void *)D_801DAC50);
    temp_t0 = ((struct func_801CE494_StructRoot *)D_801DAC50)->unk5C;
    p = temp_t0->unk4;
    for (i = 1; i < temp_t0->unkC; i++) {
        slot = (struct func_801CE494_StructObj **)((u8 *)&D_8008DA88 + i * 4);
        if (p[i] < 0) {
        } else {
            if (((*slot)->unk2C->unk24 & 0xFF) == 0x15) {
                if (arg0 != 0) {
                    (*slot)->unk2C->unk30 = (s32)D_801D91B8 | 0x40000000;
                } else {
                    (*slot)->unk2C->unk30 = (s32)D_801D9160 | 0x40000000;
                }
            } else if (arg0 != 0) {
                (*slot)->unk2C->unk30 = (s32)D_801D92C0 | 0x40000000;
            } else {
                (*slot)->unk2C->unk30 = (s32)D_801D9268 | 0x40000000;
            }
            (*slot)->unk2C->unk4B = 0xFF;
        }
    }
}
