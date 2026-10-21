#include "context.h"

typedef struct func_801CDF5C_Struct {
    u8 pad[0x90];
    u16 unk90;
    u8 pad92[2];
    u8 unk94;
    u8 pad95[2];
    u8 unk97;
} func_801CDF5C_Struct;

typedef struct func_801CDF5C_StructTable {
    u16 entries[9][3];
} func_801CDF5C_StructTable;

extern func_801CDF5C_StructTable D_801E1410;
extern s32 D_801E13D4[];

u8 func_801CDF5C(func_801CDF5C_Struct *arg0, s32 arg1) {
    s32 i;
    s32 mode;
    func_801CDF5C_StructTable table;
    u16 first;
    f32 scale;
    s32 second;
    s32 temp;
    u8 result;
    u8 index;

    table = D_801E1410;
    index = arg0->unk97 - 13;
    first = table.entries[index][0];
    second = table.entries[index][1];
    temp = func_801CDA0C(arg0, first, D_801E13D4[table.entries[index][2]], arg1);
    result = temp;
    if (temp != 0) {
        return temp & 0xFF;
    }
    temp = first;
    if (arg0->unk97 == 16) {
        scale = 1.0f;
        mode = 1;
    } else {
        scale = (f32) ((f64) (f32) (u32) arg0->unk90 / 24.0);
        mode = 2;
    }
    for (i = 0; i < arg0->unk94; i++) {
        func_8012D8C8(arg0, temp, second, scale, mode, i);
    }
    return result;
}
