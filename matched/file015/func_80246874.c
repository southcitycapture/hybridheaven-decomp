#include "context.h"

struct func_80246874_Obj {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    s16 unk90;
};

extern s32 func_80133A24(s32);
extern void func_801339D0(s32);
extern void func_80246920(void);
extern void func_802469F8(void);
extern struct func_802466A4_Vec D_8025297C;

void func_80246874(void *arg0, s32 arg1) {
    s32 temp;

    temp = ((struct func_80246874_Obj *) arg0)->unk5C;
    if (func_80010550(arg1, temp) != 0) {
        if (func_80133A24(0x73) != 0) {
            func_801339D0(0x73);
            func_8013A1B4((void **) arg1, D_8025297C, 0xFFFFFF);
            func_800058DC(arg0, func_802469F8);
            return;
        }
        ((struct func_80246874_Obj *) arg0)->unk90 = 0;
        func_800058DC(arg0, func_80246920);
    }
}
