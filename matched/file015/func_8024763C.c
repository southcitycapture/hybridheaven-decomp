#include "context.h"
extern struct func_802466A4_Vec D_802529B8;
typedef struct { u8 pad[0x5C]; s32 f5C; u8 pad2[0x32]; s16 h92; } func_8024763C_Struct;

void func_8024763C(func_8024763C_Struct *arg0, s32 arg1) {
    s32 t = arg0->f5C;
    if (func_80011140(arg1, t, D_802529B8, 0xA) != 0) {
        func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        arg0->h92 = 0;
        func_800058DC(arg0, (void *)func_80247380);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024770C);
    }
}
