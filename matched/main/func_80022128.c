#include "context.h"

typedef struct func_80022128_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 pad6[2];
    u8 **unk8;
} func_80022128_Struct;
typedef struct func_80022128_StructEntry {
    u8 unk0, unk1, unk2, unk3;
} func_80022128_StructEntry;

extern void func_80022214();
extern u8 *D_800CBB50[];
extern u8 D_80153070[];

void func_80022128(u16 arg0, s32 arg1)
{
    func_80022128_StructEntry *temp_v0;
    u8 temp_v1;
    u8 *base;
    s32 i;

    temp_v0 = (func_80022128_StructEntry *)D_80153070 + arg0;
    temp_v1 = temp_v0[-16].unk2;
    ((func_80022128_Struct *)D_800CBAD8)->unk5 = temp_v1;
    ((func_80022128_Struct *)D_800CBAD8)->unk0 = temp_v0[-16].unk0;
    ((func_80022128_Struct *)D_800CBAD8)->unk3 = temp_v0[-16].unk1;
    ((func_80022128_Struct *)D_800CBAD8)->unk1 = temp_v0[-16].unk3;
    ((func_80022128_Struct *)D_800CBAD8)->unk8 = D_800CBB50;
    if (temp_v1 != 0) {
        base = D_801B8600 + (((volatile func_80022128_StructEntry *)temp_v0)[-16].unk2 << 12) - 0x1000;
    } else {
        base = D_801B6600;
    }
    for (i = 0; i < ((func_80022128_Struct *)D_800CBAD8)->unk0; i++) {
        D_800CBB50[i] = base + ((u16 *)base)[i];
    }
    D_800CBB48 = arg0;
    ((func_80022128_Struct *)D_800CBAD8)->unk2 = 0x1E;
    ((func_80022128_Struct *)D_800CBAD8)->unk4 = *((u8 *)&arg1 + 3);
    func_80022214(0);
}
