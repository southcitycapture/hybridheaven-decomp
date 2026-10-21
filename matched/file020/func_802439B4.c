#include "context.h"

extern void func_801514B0(s32, s32);
extern void func_801FA2E0(void);
extern u8 D_80244454[];
extern u8 D_80244460[];
void func_80243A74(s32 arg0, s32 arg1);

struct func_802439B4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_802439B4(struct func_802439B4_Struct *arg0, s32 arg1) {
    s32 temp;

    temp = arg0->unk3C++;
    if (temp == 0x3C) goto c3C;
    if (temp == 0x3D) goto end;
    if (temp == 0x87) goto c87;
    if (temp == 0xF0) goto cF0;
    if (temp != 0x10E) goto end;
    if (1) goto c10E;
c3C:
    func_8015115C(D_80246C70, D_80244454);
    func_801514B0(D_80246C70, -0x9C7);
    if (1) goto end;
c87:
    func_8015122C(D_80246C70, D_80244460, 0x14);
    if (1) goto end;
cF0:
    func_801FA2E0();
    if (1) goto end;
c10E:
    func_800058DC(arg0, (void *)func_80243A74);
end:
    ;
}
