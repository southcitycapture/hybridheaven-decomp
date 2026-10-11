#include "context.h"

extern struct func_80243290_StructTriple D_80252400;
extern void func_80244060(void);

void func_80243FA8(void *arg0, void **arg1) {
    ((struct func_80243290_StructOuter *)*arg1)->unk2C->unk4 = -56.5f;
    ((struct func_80243290_StructOuter *)*arg1)->unk2C->unk8 = 0.0f;
    ((struct func_80243290_StructOuter *)*arg1)->unk2C->unkC = 274.0f;
    ((struct func_80243290_StructOuter *)*arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_80252400, 0xFFFFFF);
    ((struct func_80243290_StructArg *)arg0)->unk90 = 0;
    func_800058DC(arg0, (void *)func_80244060);
}
