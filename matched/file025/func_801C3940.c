#include "context.h"
extern void func_800058DC(void *, void *);

typedef struct func_801C3940_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    u16 unk98;
    u8 pad9A[2];
    u16 unk9C;
} func_801C3940_Struct;

extern void func_801C39E0(void);

void func_801C3940(func_801C3940_Struct *arg0, s32 arg1) {
    arg0->unk90 = D_801DF790;
    arg0->unk91 = D_801DF791;
    arg0->unk92 = D_801DF792;
    arg0->unk93 = D_801DF793;
    arg0->unk94 = D_801DF794;
    arg0->unk95 = D_801DF795;
    arg0->unk96 = D_801DF796;
    arg0->unk97 = D_801DF797;
    arg0->unk98 = *(u16 *) &D_801DF798;
    arg0->unk9C = D_801DF79A;
    func_800058DC(arg0, func_801C39E0);
}
