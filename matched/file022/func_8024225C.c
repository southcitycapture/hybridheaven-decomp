#include "context.h"

typedef struct func_8024225C_Leaf {
    u8 pad0[8];
    f32 unk8;
} func_8024225C_Leaf;

typedef struct func_8024225C_Inner {
    u8 pad0[0x30];
    func_8024225C_Leaf *unk30;
} func_8024225C_Inner;

typedef struct func_8024225C_Struct {
    u8 pad0[0x24];
    func_8024225C_Inner *unk24;
} func_8024225C_Struct;

extern void func_802422C8(void);
extern void func_800058DC(void *, void *);

void func_8024225C(void *arg0, void *arg1) {
    func_8024225C_Leaf *temp_v0;

    temp_v0 = ((func_8024225C_Struct *) arg0)->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - 1.0f;
    temp_v0 = ((func_8024225C_Struct *) arg0)->unk24->unk30;
    if (temp_v0->unk8 < 210.0f) {
        temp_v0->unk8 = 210.0f;
        func_800058DC(arg0, (void *) func_802422C8);
    }
}
