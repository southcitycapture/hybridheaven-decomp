#include "common.h"
typedef struct func_801F6914_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_801F6914_Struct3;
typedef struct func_801F6914_Struct2 {
    u8 pad0[0x30];
    func_801F6914_Struct3 *unk30;
} func_801F6914_Struct2;
typedef struct func_801F6914_Struct1 {
    u8 pad0[0xC];
    func_801F6914_Struct2 *unkC;
} func_801F6914_Struct1;
extern struct func_801F6914_Struct1 *D_8038D8D0;
s32 func_801C0B8C(u64 time);
struct func_801E4348_S2 { u8 pad[0x12]; s16 unk12; };
struct func_801E4348_S1 { u8 pad[0x30]; struct func_801E4348_S2 *unk30; };
struct func_801E4348_S0 { u8 pad[0x14]; struct func_801E4348_S1 *unk14; };


extern f32 D_801FBFC8;

s32 func_801E43CC(s32 arg0, s32 arg1) {
    struct func_801E4348_S2 *temp_v0;

    if (func_801C0B8C(0x069D4490) != 0) {
        temp_v0 = ((struct func_801E4348_S0 *)D_8038D8D0)->unk14->unk30;
        temp_v0->unk12 = (s16)(temp_v0->unk12 + (s16)D_801FBFC8);
        if (func_801C0B8C(0x06CB0B50) != 0) {
            return 3;
        }
    }
    return 2;
}
