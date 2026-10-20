#include "context.h"
extern s16 D_80089354;
void func_8001E830(s32 arg0, s32 arg1);
void func_8001E87C(s32 arg0, struct func_8001E87C_Struct **arg1);

extern void func_800058DC(s32, void (*)(void));

struct func_8001E768_Struct {
    u8 pad[0x154];
    u16 unk154;
    u16 unk156;
    u16 unk158;
    u8 pad2[3];
    u8 unk15D;
};

void func_8001E768(void *arg0, struct func_8001E87C_Struct **arg1) {
    u16 temp_t0;
    u8 temp_t9;

    if ((((struct func_8001E768_Struct *)&D_801BBBF0)->unk15D & 0xF) == 1) {
        D_80089354 = 2;
        func_800058DC(arg0, func_8001E830);
        return;
    }
    if (((struct func_8001E768_Struct *)&D_801BBBF0)->unk156 != 0) {
        if (++((struct func_8001E768_Struct *)&D_801BBBF0)->unk158 >= (s32)((struct func_8001E768_Struct *)&D_801BBBF0)->unk156) {
            func_80006214((s32)arg0);
            (*arg1)->unk30->unk10 = 0x1002;
            ((struct func_8001E768_Struct *)&D_801BBBF0)->unk158 = ((struct func_8001E768_Struct *)&D_801BBBF0)->unk154;
            ((struct func_8001E768_Struct *)&D_801BBBF0)->unk15D &= 0xF;
            ((struct func_8001E768_Struct *)&D_801BBBF0)->unk15D |= 0xA0;
            func_800058DC(arg0, func_8001E87C);
        }
    }
}
