#include "context.h"

typedef struct func_802415DC_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_802415DC_Struct0;

typedef struct func_802415DC_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
} func_802415DC_Struct2;

typedef struct func_802415DC_Struct1 {
    u8 pad0[0x30];
    func_802415DC_Struct2 *unk30;
} func_802415DC_Struct1;

typedef struct func_802415DC_Struct3 {
    u8 pad0[0x18];
    func_802415DC_Struct1 *unk18;
} func_802415DC_Struct3;

extern void func_800058DC(s32, void *);
extern void func_80241630(void);

void func_802415DC(func_802415DC_Struct0 *arg0, func_802415DC_Struct3 *arg1) {
    s32 temp_v0;
    u16 temp_t0;
    func_802415DC_Struct2 *temp_v0_2;

    temp_t0 = 0x14;
    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk18->unk30;
        temp_v0_2->unk4B += 0xC;
        return;
    }
    arg0->unk92 = temp_t0;
    func_800058DC((s32) arg0, func_80241630);
}
