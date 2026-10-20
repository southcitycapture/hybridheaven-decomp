#include "context.h"

typedef struct func_8012CE10_StructC {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8012CE10_StructC;

typedef struct func_8012CE10_StructB {
    u8 pad[0x2C];
    func_8012CE10_StructC *unk2C;
} func_8012CE10_StructB;

typedef struct func_8012CE10_StructA {
    u8 pad[0x24];
    func_8012CE10_StructB *unk24;
    s32 unk28;
    s32 unk2C;
} func_8012CE10_StructA;

extern u8 D_801BBBF0[];

void func_8012CE10(void *arg0) {
    func_8012CE10_StructA *obj;
    func_8012CE10_StructC *temp;

    obj = arg0;
    if (obj->unk2C & 0x80) {
        temp = obj->unk24->unk2C;
        temp->unk4 += (f64)*(f32 *)(D_801BBBF0 + 0x438);
        temp = obj->unk24->unk2C;
        temp->unk8 += (f64)*(f32 *)(D_801BBBF0 + 0x43C);
        temp = obj->unk24->unk2C;
        temp->unkC += (f64)*(f32 *)(D_801BBBF0 + 0x440);
    }
}
