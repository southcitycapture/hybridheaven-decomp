#define func_801CD208 func_801CD208_ctx
#include "context.h"
#undef func_801CD208

struct func_801C83C0_StructActor {
    u8 pad[0x35];
    u8 unk35;
    u16 unk36;
};
extern void func_8013B570(void *, u16, s32, s32, void *);
extern u8 D_801E0960[];
extern void *func_80005670(void *, void *);
void func_801C84FC();
void func_801C86C4();

#define F4 (*(u8 *)((u8 *)&D_801BBBF0 + 0xF4))
#define F7 (*(u8 *)((u8 *)&D_801BBBF0 + 0xF7))
#define C104 (*(u16 *)((u8 *)&D_801BBBF0 + 0x104))

void func_801C83C0(struct func_801C83C0_StructActor *arg0, s32 arg1) {
    s32 state;

    arg0->unk35 = C104;
    C104++;
    if (F7 >= 4) {
        F7 = 0;
    }
    state = F7;
    if (state != 0) {
        if (state == 1) goto c1;
        if (state == 2) goto c2;
        if (state != 3) goto done;
        goto c3;
    }
    arg0->unk36 = F4 ? 0x11C : 0x29;
    goto e1;
c1:
    arg0->unk36 = F4 ? 0x11B : 0x2C;
e1:
    goto e2;
c2:
    arg0->unk36 = F4 ? 0x2D : 0x2D;
e2:
    goto done;
c3:
    arg0->unk36 = F4 ? 0x50 : 0x50;
done:
    func_8013B570(arg0, arg0->unk36, 0, 0, func_801C84FC);
    func_801C86C4((void *)arg0, arg1);
    func_80005670(arg0, D_801E0960);
}
