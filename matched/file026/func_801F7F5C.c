#include "common.h"
struct func_801EC5B4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EC5B4_Struct2 {
    u8 pad0[0x2C];
    struct func_801EC5B4_Struct3 *unk2C;
};
struct func_801EC5B4_Struct1 {
    u8 pad0[0x24];
    struct func_801EC5B4_Struct2 *unk24;
};
struct func_801EC5B4_Struct0 {
    u8 pad0[8];
    struct func_801EC5B4_Struct1 *unk8;
};
extern struct func_801EC5B4_Struct0 *D_801DAB14;
s32 func_801C0B8C(u64 time);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);


extern f32 D_801FD3BC;

s32 func_801F7F5C(s32 arg0, s32 arg1)
{
    struct func_801EC5B4_Struct0 **p;

    if (func_801C0B8C(0x017EFEDF) != 0) {
        p = &D_801DAB14;
        (*p)->unk8->unk24->unk2C->unk4 = -2.0f;
        (*p)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*p)->unk8->unk24->unk2C->unkC = D_801FD3BC;
        (*p)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01B80022, 0, 0x1100, 3.0f);
        return 0xB;
    }
    return 0xA;
}
