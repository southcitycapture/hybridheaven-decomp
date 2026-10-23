#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80248AD0 D_80248AD0
#define func_80247754 LP(fA, __LINE__)
#include "context.h"
#undef func_80248AD0
#undef func_80247754

typedef struct func_80248AD0_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80248AD0_StructInner;

typedef struct func_80248AD0_StructOuter {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80248AD0_StructInner *unk30;
} func_80248AD0_StructOuter;

extern void func_80248B4C();

void func_80248AD0(void *arg0, func_80248AD0_StructOuter **arg1) {
    if (D_8025C708 != 0) {
        if (D_8025C6F0 != 0) {
            (*arg1)->unk22 = 1;
            (*arg1)->unk30->unk4 = 0.0f;
            (*arg1)->unk30->unk8 = 200.0f;
            (*arg1)->unk30->unkC = 0.0f;
        }
        func_800058DC(arg0, func_80248B4C);
    }
}
