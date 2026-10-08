#include "context.h"

typedef struct func_8024386C_Leaf {
    u8 pad0[0x8];
    f32 unk8;
} func_8024386C_Leaf;

typedef struct func_8024386C_Mid {
    u8 pad0[0x30];
    func_8024386C_Leaf *unk30;
} func_8024386C_Mid;

typedef struct func_8024386C_Arg0 {
    u8 pad0[0x24];
    func_8024386C_Mid *unk24;
} func_8024386C_Arg0;

extern f64 D_802570B8;
extern f64 D_802570C0;
extern void func_802438E0(void);

void func_8024386C(func_8024386C_Arg0 *arg0, s32 arg1) {
    func_8024386C_Leaf *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_802570B8);
    if (!((f64) arg0->unk24->unk30->unk8 < D_802570C0)) {
        func_800058DC((s32) arg0, (void *) func_802438E0);
    }
}
