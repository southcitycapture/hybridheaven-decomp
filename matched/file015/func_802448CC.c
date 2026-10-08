#include "context.h"

typedef struct func_802448CC_StructInner {
    u8 pad0[0x8];
    f32 unk8;
} func_802448CC_StructInner;

typedef struct func_802448CC_StructNode {
    u8 pad0[0x30];
    func_802448CC_StructInner *unk30;
} func_802448CC_StructNode;

typedef struct func_802448CC_StructArg {
    u8 pad0[0x94];
    f32 unk94;
} func_802448CC_StructArg;

void func_802448CC(func_802448CC_StructArg *arg0, func_802448CC_StructNode **arg1) {
    f64 temp_fv0;

    (*arg1)->unk30->unk8 = (f32) ((*arg1)->unk30->unk8 + arg0->unk94);
    temp_fv0 = (f64) (*arg1)->unk30->unk8;
    if (temp_fv0 >= 20.0) {
        (*arg1)->unk30->unk8 = (f32) (temp_fv0 - 20.0);
    }
}
