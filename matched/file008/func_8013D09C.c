#include "context.h"

struct func_8013D09C_Struct {
    u8 pad[0x2D4];
    u8 *unk2D4;
    u8 pad2[1];
    u8 unk2D9;
    u8 pad3[0x375-0x2DA];
    u8 unk375;
    u8 pad4;
    u8 unk377;
    u8 pad5[8];
    u8 *unk380;
};

void func_8013D09C(struct func_8013D09C_Struct *arg0) {
    u8 t;
    if (arg0->unk377 == 0) {
        arg0->unk375 = arg0->unk375 + 1;
        arg0->unk380 = arg0->unk380 + 1;
        t = *arg0->unk380;
        arg0->unk2D9 = t;
        arg0->unk2D4 = D_801842A0 + (arg0->unk2D9 & 0xFF) * 0x1C;
        return;
    }
    arg0->unk375 = arg0->unk375 + 1;
    arg0->unk380 = arg0->unk380 + 1;
    *arg0->unk380 = arg0->unk2D9;
    arg0->unk2D4 = D_801842A0 + arg0->unk2D9 * 0x1C;
}
