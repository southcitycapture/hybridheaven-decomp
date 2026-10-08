#include "common.h"

struct func_8024115C_Sub {
    u8 pad0[2];
    u16 unk2;
};

struct func_8024115C_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    struct func_8024115C_Sub *unk38;
};

extern s32 func_80126CC0(void *, void *);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80020744(s32);
extern void func_80127014(void);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_802411D0(void);

void func_8024115C(struct func_8024115C_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80127014) != 0) {
        arg0->unk18 = (void *)func_8012E5B0;
        arg0->unk20 = (void *)func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, (void *)func_802411D0);
        func_80020744(0x5C4);
    }
}
