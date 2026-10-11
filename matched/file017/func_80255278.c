#include "context.h"

extern s32 func_801C3044(void);
extern void func_8025799C(void);
extern void func_801C2F0C(s32, void *);
extern void func_802552E4(void);

typedef struct func_80255278_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
} func_80255278_Struct;

void func_80255278(void *arg0) {
    u8 pad[0x14];
    func_80255278_Struct sp18;

    func_8025799C();
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x03480028;
        sp18.unk8 = 4.0f;
        func_801C2F0C(4, &sp18);
        ((s16 *)arg0)[0x92 / 2] = 0;
        func_800058DC(arg0, func_802552E4);
    }
}
