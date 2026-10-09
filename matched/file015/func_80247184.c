#include "context.h"

struct func_80247184_Arg0 {
    u8 pad0[0x92];
    s16 unk92;
};

extern struct func_802466A4_Vec D_802529AC;
extern void func_8024723C(void);

void func_80247184(void *arg0, struct func_802466A4_Obj **arg1) {
    (*arg1)->unk2C->unk4 = -300.0f;
    (*arg1)->unk2C->unk8 = -114.0f;
    (*arg1)->unk2C->unkC = 378.0f;
    (*arg1)->unk2C->unk12 = 0;
    func_8013A1B4((void **)arg1, D_802529AC, 0xFFFFFF);
    ((struct func_80247184_Arg0 *)arg0)->unk92 = 0;
    func_800058DC(arg0, (void *)func_8024723C);
}
