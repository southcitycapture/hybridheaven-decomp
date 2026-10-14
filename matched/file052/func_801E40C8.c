#include "context.h"

struct func_801E40C8_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
    u8 pad2[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};
struct func_801E40C8_Struct3 {
    u8 pad0[0x2C];
    struct func_801E40C8_Struct4 *unk2C;
};
struct func_801E40C8_Struct2 {
    u8 pad0[0x24];
    struct func_801E40C8_Struct3 *unk24;
};
struct func_801E40C8_Struct1 {
    u8 pad0[8];
    struct func_801E40C8_Struct2 *unk8;
};
struct func_801E40C8_Struct0 {
    u8 pad0[8];
    struct func_801E40C8_Struct1 *unk8;
};

extern f32 D_801E5A68;
extern f32 D_801E5A6C;

s32 func_801E40C8(s32 arg0, s32 arg1) {
    struct func_801E40C8_Struct3 *temp_t0;
    struct func_801E40C8_Struct4 *temp_v0;

    temp_t0 = ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24;
    if (temp_t0 != NULL) {
        f32 scale = D_801E5A68;

        temp_t0->unk2C->unk4 = 0.0f;
        ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C->unkC = D_801E5A6C;
        ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        temp_v0 = ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C;
        temp_v0->unk18 = temp_v0->unk18 * scale;
        temp_v0 = ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C;
        temp_v0->unk1C = temp_v0->unk1C * scale;
        temp_v0 = ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C;
        temp_v0->unk20 = temp_v0->unk20 * scale;
        func_801CC470(1, 0x01B80046, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
