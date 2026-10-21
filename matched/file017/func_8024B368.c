#include "context.h"
struct func_8024B444_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_8024B444_Sub {
    u8 pad[0x22];
    u8 unk22;
};
struct func_8024B444_Arg1 {
    u8 pad[0x18];
    struct func_8024B444_Sub *unk18;
};
extern s32 D_8025DDE0;
void func_8024CF18(s32 arg0, u8 arg1);
extern void func_8015115C(s32, void *);
extern u8 D_80258DCC[];
extern void D_801C4058(void *, f32, f32, s32);
extern void func_80133980(s32 arg0);
extern s32 func_801516CC(s32 arg0);
struct func_8024B444_Struct;
struct func_8024B444_Arg1;
void func_8024B444(struct func_8024B444_Struct *arg0, struct func_8024B444_Arg1 *arg1);

void func_8024B368(func_8024B2A4_Struct *arg0)
{
    s32 i;
    u16 t;
    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    func_8024CCC4();
    D_801C4058(arg0, 0.0f, -0.4f, 0);
    if ((s32)t >= 0x2D) {
        func_80133980(0x131);
        arg0->unk3C = 0;
        for (i = 1; i < func_801516CC(D_8025DDE0); i++) {
            func_8024CF18(D_8025DDE0, i);
        }
        func_8015115C(D_8025DDE0, D_80258DCC);
        func_80020718(0x185);
        func_800058DC((s32)arg0, (void (*)())func_8024B444);
    }
}
