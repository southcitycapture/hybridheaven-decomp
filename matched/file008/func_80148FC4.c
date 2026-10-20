#include "context.h"

extern void func_800058DC(void *, void *);
extern void func_8014AAB4();
extern s32 D_801BED10;
extern u8 D_801BED14;

typedef struct func_80148FC4_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_80148FC4_Struct;

void func_80148FC4(func_80148FC4_Struct *arg0, s32 arg1, u8 arg2, u8 arg3) {
    D_801BED10 = arg1;
    arg0->unk3C = 5;
    (&D_801BED14)[0] = arg2;
    (&D_801BED14)[1] = arg3;
    func_800058DC(arg0, (void *)func_8014AAB4);
}
