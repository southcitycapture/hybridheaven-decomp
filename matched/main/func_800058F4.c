#include "context.h"

struct func_800058F4_Inner {
    u8 pad0[8];
    void *unk8;
};

struct func_800058F4_Struct {
    s32 unk0;
    struct func_800058F4_Struct *unk4;
    u8 pad8[4];
    struct func_800058F4_Inner *unkC;
    u8 pad10[4];
    s32 unk14;
};

extern void func_80005A04(void *, void *);
extern void func_80005B48(void *);
extern u8 D_80089378[];
extern s32 D_8008D5D0;

void func_800058F4(struct func_800058F4_Struct *arg0, s32 arg1) {
    struct func_800058F4_Struct *v1;
    struct func_800058F4_Struct *v0;
    struct func_800058F4_Struct *sp1C;
    struct func_800058F4_Inner *temp_v0;

    if ((s32) arg0 == D_8008D5D0) {
        v0 = arg0->unk4;
        v1 = v0;
    } else {
        v1 = NULL;
        v0 = arg0->unk4;
    }
    if ((v0 != NULL) || (arg0->unk0 != 0)) {
        sp1C = v1;
        func_80005B48(arg0);
        temp_v0 = arg0->unkC;
        arg0->unk14 = arg1;
        if (temp_v0 == NULL) {
            sp1C = v1;
            func_80005A04(D_80089378, arg0);
        } else {
            sp1C = v1;
            func_80005A04(temp_v0->unk8, arg0);
        }
        if (sp1C != NULL) {
            D_8008D5D0 = sp1C->unk0;
        }
    }
}
