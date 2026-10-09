#include "context.h"

typedef struct func_801C7264_StructInner {
    u8 pad[0xB];
    u8 unkB;
} func_801C7264_StructInner;

typedef struct func_801C7264_Struct {
    u8 pad[0x30];
    func_801C7264_StructInner *unk30;
} func_801C7264_Struct;

extern void (*D_801CCB00)(void *, s32, u8, void **);
extern u8 D_801CD0E4[];
extern void *D_801CFDA0;
extern u8 D_801CFDC0;
extern void func_801C70E8(void);

void func_801C7264(s32 arg0, s32 arg1) {
    void func_800058DC();
    s16 temp_v0;
    func_801C7264_StructInner *temp_v1;

    temp_v1 = ((func_801C7264_Struct *) D_801CFDA0)->unk30;
    temp_v0 = temp_v1->unkB;
    temp_v0 += 0x14;
    if (temp_v0 >= 0x100) {
        temp_v1->unkB = 0;
        D_801CCB00(D_801CFDA0, 0x229, D_801CD0E4[D_801CFDC0], &D_801CFDA0);
        func_800058DC(arg0, func_801C70E8);
        return;
    }
    temp_v1->unkB = (u8) temp_v0;
}
