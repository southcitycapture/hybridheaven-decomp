#include "context.h"
struct func_80247380_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x5C - 0x3E];
    s32 unk5C;
    u8 pad2[0x92 - 0x60];
    u16 unk92;
};
extern struct func_802466A4_Vec D_802529B8;
void func_80247380(struct func_80247380_Struct *arg0, volatile s32 arg1);

extern s32 func_80011140(s32, s32, struct func_802466A4_Vec, s32);

void func_802472D4(struct func_80247380_Struct *arg0, volatile s32 arg1) {
    s32 value = arg0->unk5C;
    if (func_80011140(arg1, value, D_802529B8, 10) != 0) {
        func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        arg0->unk92 = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80247380);
    }
}
