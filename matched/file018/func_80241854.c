#include "context.h"

typedef struct func_80241854_Struct0 {
    u8 pad[0x92];
    u16 unk92;
} func_80241854_Struct0;

typedef struct func_80241854_Struct3 {
    u8 pad[0x4B];
    u8 unk4B;
} func_80241854_Struct3;

typedef struct func_80241854_Struct2 {
    u8 pad[0x30];
    func_80241854_Struct3 *unk30;
} func_80241854_Struct2;

typedef struct func_80241854_Struct1 {
    u8 pad[0x14];
    func_80241854_Struct2 *unk14;
    func_80241854_Struct2 *unk18;
} func_80241854_Struct1;

void func_80241854(func_80241854_Struct0 *arg0, func_80241854_Struct1 *arg1) {
    s32 temp_a2;
    func_80241854_Struct3 *temp_v0;
    func_80241854_Struct3 *temp_v1;

    extern void func_800058DC();

    temp_a2 = arg0->unk92;
    if (temp_a2 != 0) {
        arg0->unk92 = (u16) (temp_a2 - 1);
        temp_v0 = arg1->unk18->unk30;
        temp_v0->unk4B = (u8) (temp_v0->unk4B - 0xC);
        temp_v1 = arg1->unk14->unk30;
        temp_v1->unk4B = (u8) (temp_v1->unk4B - 6);
        return;
    }
    arg1->unk14->unk30->unk4B = 0;
    func_800058DC(arg0, &func_80126EAC, temp_a2, arg1);
}
