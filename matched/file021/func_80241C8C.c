#include "context.h"
typedef struct func_80241CE0_Struct1 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241CE0_Struct1;
typedef struct func_80241CE0_Struct3 {
    u8 pad0[0x1C];
    f32 unk1C;
} func_80241CE0_Struct3;
typedef struct func_80241CE0_Struct2 {
    u8 pad0[0x30];
    func_80241CE0_Struct3 *unk30;
} func_80241CE0_Struct2;
typedef struct func_80241CE0_Struct4 {
    u8 pad0[0x14];
    func_80241CE0_Struct2 *unk14;
} func_80241CE0_Struct4;
void func_80241CE0(func_80241CE0_Struct1 *arg0, func_80241CE0_Struct4 *arg1);

typedef struct func_80241C8C_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241C8C_Struct0;

typedef struct func_80241C8C_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
} func_80241C8C_Struct2;

typedef struct func_80241C8C_Struct1 {
    u8 pad0[0x30];
    func_80241C8C_Struct2 *unk30;
} func_80241C8C_Struct1;

typedef struct func_80241C8C_Struct3 {
    u8 pad0[0x18];
    func_80241C8C_Struct1 *unk18;
} func_80241C8C_Struct3;

void func_80241C8C(func_80241C8C_Struct0 *arg0, func_80241C8C_Struct3 *arg1) {
    s32 temp_v0;
    func_80241C8C_Struct2 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk18->unk30;
        temp_v0_2->unk4B = temp_v0_2->unk4B + 0xC;
        return;
    }
    arg0->unk92 = 0x14;
    func_800058DC(arg0, (void *) func_80241CE0);
}
