#include "context.h"
typedef struct func_801CE1C8_StructB {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x18];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x10];
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78[16];
    f32 unk88;
    s32 unk8C;
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
} func_801CE1C8_StructB;

typedef struct func_801CDCE4_StructPair {
    u16 id;
    u16 index;
} func_801CDCE4_StructPair;

typedef struct func_801CDCE4_StructTable {
    func_801CDCE4_StructPair entries[6];
} func_801CDCE4_StructTable;

typedef struct func_801CDCE4_StructResource {
    u8 pad[4];
    s32 *data;
} func_801CDCE4_StructResource;

extern func_801CDCE4_StructTable D_801E13BC;
extern func_801CDCE4_StructResource *D_80171CEC[];
extern s32 func_801CDA0C(void *, u16, s32, s32);
extern void func_8012D8C8(void *, s32, s32, f32, s32, s32);

u8 func_801CDCE4(func_801CE1C8_StructB *arg0, s32 arg1) {
    func_801CDCE4_StructPair *entry;
    s32 i;
    func_801CDCE4_StructTable table = D_801E13BC;
    u16 id;
    s32 ret;
    u8 result;
    u16 index;
    s32 *data;

    entry = &table.entries[arg0->unk97];
    id = entry->id;
    index = entry->index;
    data = D_80171CEC[id]->data;
    ret = func_801CDA0C(arg0, id, data[index], arg1);
    result = ret;
    if (ret != 0) {
        return ret & 0xFF;
    }
    if (arg0->unk97 == 5) {
        for (i = 0; i < arg0->unk94; i++) {
            func_8012D8C8(arg0, 0x371, 0, 1.0f, 1, i);
        }
    }
    return result;
}
