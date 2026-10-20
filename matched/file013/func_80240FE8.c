#include "context.h"
extern void func_801264D4(void *, s32, f32, f32, f32, s32);
void func_802410F4(u8 *arg0, void *arg1);
extern f32 D_80249AA8;
extern f32 D_80249AAC;
struct func_80240FE8_Self { u8 pad[0x2C]; s32 unk2C; };
void func_80240FE8(struct func_80240FE8_Self *arg0, struct func_80240D94_Outer **arg1) {
    struct func_80240D94_Inner *t;
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_801264D4(arg0, 0, 676.3f, 0.0f, D_80249AA8, 0);
    func_801264D4(arg0, 1, 676.3f, 0.0f, D_80249AAC, 0);
    arg0->unk2C |= 0x20;
    func_8012C89C(arg0, 0, 0x80, 0);
    func_8012C89C(arg0, 1, 0x80, 2);
    t = (*arg1)->unk30;
    t->unk8 = t->unk8 + 1.0;
    func_800058DC(arg0, (void *)func_802410F4);
}
