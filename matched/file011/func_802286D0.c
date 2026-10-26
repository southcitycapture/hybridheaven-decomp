#include "common.h"
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
extern void func_800058DC(void *, void *);


struct func_802286D0_Struct { u8 pad[0x3C]; u16 unk3C; };
extern u8 func_80228710[];

void func_802286D0(struct func_802286D0_Struct *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    if (arg0->unk3C >= 0x12) {
        func_800058DC(arg0, func_80228710);
    }
}
