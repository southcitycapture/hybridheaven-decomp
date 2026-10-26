#include "common.h"
typedef struct func_801FCB44_Struct {
    u8 pad[0x18];
    u8 *unk18;
} func_801FCB44_Struct;
extern struct func_801FCB44_Struct *D_8038D8D0;
typedef struct func_801FC008_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801FC008_StructB;
typedef struct func_801FC008_StructA {
    u8 pad0[0x30];
    func_801FC008_StructB *unk30;
} func_801FC008_StructA;
#define O(i) (((func_801FC008_StructA **)D_8038D8D0)[i])->unk30
extern s32 func_801C0B8C(u64);


extern f32 D_80208DAC;

s32 func_801FC710(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA4CB80) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x7704C0) != 0) {
        *(s16 *)((u8 *)O(2) + 0x10) += (s16)((2048.0f * D_80208DAC) / 90.0f);
    }
    return 2;
}
