#include "common.h"

struct func_80240C80_Inner {
    s16 pad0;
    u16 unk2;
};

struct func_80240C80_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x14];
    struct func_80240C80_Inner *unk38;
};

extern s32 func_80126CC0(void *, void *);
extern void func_8001F74C();
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80127014();
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80240CF8();

void func_80240C80(void *arg0, s32 arg1) {
    struct func_80240C80_Struct *s;

    if (func_80126CC0(arg0, func_80127014) != 0) {
        func_8001F74C(arg0);
        s = arg0;
        s->unk18 = func_8012E5B0;
        s->unk20 = func_8012E6BC;
        func_8013B570(arg0, s->unk38->unk2, 2, 4, func_80240CF8);
    }
}
