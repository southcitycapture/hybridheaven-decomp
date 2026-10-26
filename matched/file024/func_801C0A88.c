#include "common.h"
extern void func_800058DC(s32, void *);

typedef struct func_801C0A88_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_801C0A88_StructInner;
typedef struct func_801C0A88_StructMid {
    u8 pad[0x2C];
    func_801C0A88_StructInner *unk2C;
} func_801C0A88_StructMid;
typedef struct func_801C0A88_StructArg0 {
    u8 pad[0x24];
    func_801C0A88_StructMid *unk24;
} func_801C0A88_StructArg0;
extern s32 func_8012AAE8(void *, f32, f32, f32, f32);
extern f32 D_801CEAD0;
extern u8 D_801C0AF8[];

void func_801C0A88(func_801C0A88_StructArg0 *arg0, s32 arg1) {
    func_801C0A88_StructInner *p = arg0->unk24->unk2C;
    if ((p->unk12 & 0x1FFF) != 0x1000) {
        p->unk12 -= 0x10;
    }
    if (func_8012AAE8(arg0, 0.0f, -3.0f, -20.0f, D_801CEAD0) == 0) {
        func_800058DC((s32)arg0, D_801C0AF8);
    }
}
