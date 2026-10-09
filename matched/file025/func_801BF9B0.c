#include "context.h"

typedef struct func_801BF9B0_Struct {
    u8 pad[8];
    struct func_801BF9B0_Struct *unk8;
} func_801BF9B0_Struct;

extern void func_80005670(void *, void *);
extern u8 D_80044090[];
extern u8 D_801DAB94[];
extern u8 D_801DAB00[];
extern u8 D_801DABD4[];
extern u8 D_8038D81C[];
extern u8 func_8038D830[];

void func_801BF9B0(s32 arg0) {
    func_801BF9B0_Struct *p = (func_801BF9B0_Struct *)arg0;

    func_80005670((void *)p, D_80044090);
    func_80005670((void *)p->unk8, D_801DAB94);
    func_80005670((void *)p->unk8->unk8, D_8038D81C);
    func_80005670((void *)p->unk8->unk8->unk8, func_8038D830 + 0x48);
    func_80005670((void *)p->unk8->unk8->unk8->unk8, D_801DABD4);
    func_80005670((void *)p->unk8->unk8->unk8->unk8->unk8, D_801DAB00);
}
