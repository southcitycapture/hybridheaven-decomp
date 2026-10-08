#include "common.h"

struct func_801F57EC_Struct24 {
    u8 pad[0x22];
    u8 unk22;
};

struct func_801F57EC_Struct38 {
    u8 pad[0x18];
    u32 unk18;
};

struct func_801F57EC_Struct {
    u8 pad0[0x24];
    struct func_801F57EC_Struct24 *unk24;
    u8 pad1[0x10];
    struct func_801F57EC_Struct38 *unk38;
    u8 pad2[0x74];
    s32 unkB0;
};

void func_801F4AA0();                               /* extern */
void func_80005670(void *, void *);                 /* extern */
void func_800058DC(void *, s32);                    /* extern */
s32 func_801F5490(void *);                          /* extern */
s32 func_801F5524(void *);                          /* extern */
void func_801F5574(void *, s32);                    /* extern */

extern void (*D_80216D10[])(void *, s32);
extern u8 D_80216E54[];

void func_801F57EC(struct func_801F57EC_Struct *arg0, s32 arg1) {
    u8 sp27;

    sp27 = (u8) (arg0->unk38->unk18 >> 0x18);
    func_801F4AA0();
    arg0->unkB0 = 0;
    if (D_80216D10[sp27] != NULL) {
        D_80216D10[sp27](arg0, arg1);
    }
    if ((func_801F5490(arg0) != 0) && (func_801F5524(arg0) == 0) && (sp27 != 2)) {
        func_801F5574(arg0, 1);
        arg0->unk24->unk22 = 0;
        func_80005670(arg0, D_80216E54);
    }
    func_800058DC(arg0, arg0->unkB0);
}
