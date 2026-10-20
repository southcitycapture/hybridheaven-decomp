#include "context.h"
extern struct func_802466A4_Vec D_802529C4;
extern void func_80247568();
typedef struct { u8 pad[0x3C]; s16 h3C; u8 pad2[0x1C]; s32 f5C; } func_80247498_Struct;

void func_80247498(func_80247498_Struct *arg0, s32 arg1) {
    s32 t = arg0->f5C;
    if (func_80011140(arg1, t, D_802529C4, 0xA) != 0) {
        func_8013A1B4(arg1, D_802529C4, 0xFFFFFF);
        arg0->h3C = 0;
        func_800058DC(arg0, (void *)func_80247568);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024770C);
    }
}
