#include "context.h"
struct func_80246CDC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x90 - 0x60];
    s16 unk90;
};
void func_80246CDC(struct func_80246CDC_Struct *arg0, s32 arg1);

extern struct func_802466A4_Vec D_80252970;

struct func_80246C20_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};

void func_80246C20(struct func_80246C20_Struct *arg0, volatile s32 arg1) {
    s32 t = arg0->unk5C;

    func_80011140(arg1, t, D_80252970, 0xF);
    if (arg0->unk90++ >= 0x1E) {
        func_8013A1B4(arg1, D_8025297C, 0xFFFFFF);
        func_800058DC(arg0, func_80246CDC);
    }
}
