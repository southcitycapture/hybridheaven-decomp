#include "common.h"


typedef struct func_800033CC_StructCharacter {
    u16 first;
    u16 second;
} func_800033CC_StructCharacter;

typedef struct func_800033CC_StructTable {
    func_800033CC_StructCharacter chars[160];
} func_800033CC_StructTable;
extern func_800033CC_StructTable D_800377B0;

typedef struct func_800033CC_StructEntry {
    u32 word;
    u8 pad4[6];
    u8 shortcodes[4];
    u8 codes[18];
} func_800033CC_StructEntry;

typedef struct func_800033CC_Struct {
    func_800033CC_StructEntry entries[16];
    u8 pad200[2];
    u8 name[16][33];
    u8 shortname[16][9];
    u8 flag[16];
} func_800033CC_Struct;

void func_800033CC(u8 arg0, void *arg1) {
    s32 i;
    func_800033CC_StructTable table = D_800377B0;

    for (i = 0; i < 16; i++) {
        ((func_800033CC_Struct *)arg1)->name[arg0][i * 2] = (u8)((u16 *)table.chars)[((func_800033CC_Struct *)arg1)->entries[arg0].codes[i] * 2];
        ((func_800033CC_Struct *)arg1)->name[arg0][i * 2 + 1] = ((u16 *)table.chars)[((func_800033CC_Struct *)arg1)->entries[arg0].codes[i] * 2 + 1];
    }
    ((func_800033CC_Struct *)arg1)->name[arg0][i * 2] = 0;
    for (i = 0; i < 4; i++) {
        ((func_800033CC_Struct *)arg1)->shortname[arg0][i * 2] = ((u16 *)table.chars)[((func_800033CC_Struct *)arg1)->entries[arg0].shortcodes[i] * 2];
        ((func_800033CC_Struct *)arg1)->shortname[arg0][i * 2 + 1] = ((u16 *)table.chars)[((func_800033CC_Struct *)arg1)->entries[arg0].shortcodes[i] * 2 + 1];
    }
    ((func_800033CC_Struct *)arg1)->shortname[arg0][i * 2] = 0;
    ((func_800033CC_Struct *)arg1)->flag[arg0] = ((func_800033CC_Struct *)arg1)->entries[arg0].word >> 8;
}
