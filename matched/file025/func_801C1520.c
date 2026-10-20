#include "context.h"
extern s32 D_801D8DB0;
extern struct func_801C157C_Struct D_801DED70[];

struct func_801C1520_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

void func_801C1520(void) {
    s32 i;
    struct func_801C1520_Struct *p;

    D_801D8DB0 = 0;
    p = (struct func_801C1520_Struct *)((u8 *)D_801DED70 - 0x180);
    for (i = 0; i < 32; i++) {
        p[i].unk0 = -1;
        p[i].unk4 = -1;
        p[i].unk8 = 0;
    }
}
