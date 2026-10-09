#include "context.h"
extern s32 D_801CC8A8;
extern void func_800058DC(s32, void *);
extern void func_8001B204();
extern s32 func_801C1334();

extern void func_80020718(s32);
extern void func_801C5A00();
extern void func_801C18FC();
extern void func_801C2050();
extern void func_801C27DC();
extern u8 D_801CEB9C[];

struct func_801C184C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801C184C(struct func_801C184C_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_8001B204(0, 0x7D0, 0xA2, D_801CEB9C, 4);
        func_800058DC(D_801CC8A8, (void *) func_801C27DC);
        func_800058DC((s32) arg0, (void *) func_801C18FC);
        arg0->unk3C = 0x1E;
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        func_80020718(8);
        func_801C5A00();
        func_800058DC((s32) arg0, (void *) func_801C2050);
    }
}
