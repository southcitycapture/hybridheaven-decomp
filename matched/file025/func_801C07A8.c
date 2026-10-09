#include "context.h"

typedef struct func_801C07A8_Struct {
    u8 pad[4];
    u16 unk4;
} func_801C07A8_Struct;

extern s32 func_8012FE50(s32, u16, s32, s32, s32);
extern s32 func_801C0334(s32);
extern void func_801C0438(void);
extern void func_801C088C(void);
extern void func_801C08F0(void);
extern void func_801C0914(void);

extern func_801C07A8_Struct D_801BBBF0;
extern s32 D_801D8CE4;
extern s32 D_801D8CFC;

void func_801C07A8(void) {
    func_801C07A8_Struct *p;

    if ((D_801D8CFC == 0) && (func_801C0334(D_801D8CE4) != 0)) {
        func_801C088C();
        func_801C08F0();
        func_801C0914();
        return;
    }
    func_801C0438();
    p = &D_801BBBF0;
    p->unk4 = 0xC2;
    func_8012FE50(0xF, (u16)p->unk4, 1, 6, 2);
}
