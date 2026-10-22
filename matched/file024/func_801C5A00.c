#include "context.h"

extern void func_800023EC(void);

typedef struct func_801C5A00_StructEntry {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
} func_801C5A00_StructEntry;

typedef struct func_801C5A00_StructState {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x172];
    u16 unk178;
} func_801C5A00_StructState;

extern func_801C5A00_StructEntry D_801CC988[];

void func_801C5A00(void) {
    u16 temp_t8;
    u16 var_t0;
    func_801C5A00_StructEntry *temp_v0;

    var_t0 = ((func_801C5A00_StructState *)&D_801BBBF0)->unk178;
    if ((s32)var_t0 >= 4) {
        var_t0 = ((func_801C5A00_StructState *)&D_801BBBF0)->unk178 = 0;
    }
    temp_v0 = &D_801CC988[var_t0];
    func_8012FE50(temp_v0->unk1, D_801BBBF0.unk4 = temp_v0->unk2, temp_v0->unk5, 1, (s32)temp_v0->unk6);
    ((func_801C5A00_StructState *)&D_801BBBF0)->unk178++;
    func_80133830();
    func_80133950();
    func_80133A70();
    func_801C1308();
    func_80152240();
    func_800023EC();
}
