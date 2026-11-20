#include "common.h"
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
extern void func_8013A334(f32 *, s32, s32, s32);


typedef struct func_802453E0_StructInner {
    u8 pad0[0x78];
    u16 unk78;
} func_802453E0_StructInner;

typedef struct func_802453E0_Struct {
    u8 pad0[0x5C];
    func_802453E0_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_802453E0_Struct;

extern func_80246E60_StructGlobal D_80258F3C;
extern u8 D_8025C7E8;
extern void func_80247FEC();

void func_802453E0(func_802453E0_Struct *arg0, s32 arg1) {
    f32 pos[4];
    func_802453E0_StructInner *inner;
    s32 timer;

    inner = arg0->unk5C;
    func_8013A334(pos, arg1, (s32) inner, 6);
    D_8025C71C = pos[0];
    D_8025C720 = pos[1];
    D_8025C724 = pos[2];
    if (func_8012CE9C(arg1, inner, D_80258F3C, 10) == 0) {
        func_80010550(arg1, inner);
        timer = arg0->unk94--;
        if (timer == 0) {
            inner->unk78 = 1;
            D_8025C7E8 = 1;
            func_800058DC(arg0, (void *) func_80247FEC);
            return;
        }
    }
}
