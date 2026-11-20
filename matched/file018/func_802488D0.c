#include "common.h"
extern u8 *D_8025C6F0;
extern void func_800058DC(void *, void *);


struct func_802488D0_StructInner {
    u8 pad0[0x2C];
    u8 *unk2C;
};

struct func_802488D0_Struct {
    u8 pad0[0x24];
    struct func_802488D0_StructInner *unk24;
};
extern void func_80127014();
extern void func_8013E5C4(s32, s32, void *, void *, void *);

void func_802488D0(struct func_802488D0_Struct *volatile arg0, s32 *arg1) {
    u8 *temp_v0;

    s32 a;
    D_8025C6F0 = 0;
    a = *arg1;
    temp_v0 = arg0->unk24->unk2C;
    func_8013E5C4(a, 0, temp_v0 + 4, temp_v0 + 8, temp_v0 + 0xC);
    func_800058DC(arg0, func_80127014);
}
