#include "context.h"
extern func_8024EF6C_Vec D_80254B0C;
extern void func_800058DC(void *, void *);
extern s32 func_80010550(void **, s32, void **);
extern s32 func_800178E8(void);
extern void func_80017990(void *);
extern void func_8013A1B4();

void func_8024FFF4(struct func_802433D4_Struct *arg0, s32 arg1);

typedef struct func_8024FF60_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FF60_Struct;

extern u8 D_80255324[];

void func_8024FF60(func_8024FF60_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550(arg1, val, arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80254B0C, 0xFFFFFF);
        func_80017990(D_80255324);
        func_800058DC(arg0, (void *)func_8024FFF4);
    }
}
