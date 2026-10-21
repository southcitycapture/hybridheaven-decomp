#include "context.h"
extern u8 func_801DAAF0[];
extern void func_80005670(void *, void *);
extern void func_801CFD28(s32);
extern void func_801CFD34(s32);
extern void func_801CC530(void);

struct func_801E3814_StructNode {
    u8 pad[8];
    struct func_801E3814_StructNode *next;
};

extern void func_801D367C(s32);
extern u8 D_801DADE8[];
extern u8 D_801DB300[];
extern u8 D_801DB320[];
extern u8 D_801DB340[];
extern u8 D_801DB360[];
extern u8 D_801DB594[];

#define BASE (((struct func_801E3814_StructNode **)func_801DAAF0)[9])
#define B2 (*(struct func_801E3814_StructNode **)(func_801DAE70 - 0x35C))

s32 func_801E3814(s32 arg0, s32 arg1) {
    extern u8 func_801DAAF0[];
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(BASE, func_801DAE70 + 0x48);
    func_80005670(B2->next, D_801DB300);
    func_80005670(BASE->next->next, D_801DB320);
    func_80005670(B2->next->next->next, D_801DB340);
    func_801D367C(1);
    func_80005670(BASE->next->next->next->next, D_801DB360);
    func_80005670(B2->next->next->next->next->next, D_801DADE8);
    func_80005670(BASE->next->next->next->next->next->next, D_801DB594);
    func_801CC530();
    return 2;
}
