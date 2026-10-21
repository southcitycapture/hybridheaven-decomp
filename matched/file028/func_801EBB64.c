#include "context.h"

struct func_801EBB64_StructNode {
    u8 pad[8];
    struct func_801EBB64_StructNode *next;
};

extern void func_801CC530(void);
extern void func_801CFD28(s32);
extern void func_801CFD34(s32);
extern void func_801D517C(s32);
extern void func_801D5188(s32);
extern u8 D_801DB150[];
extern u8 D_801DB300[];
extern u8 D_801DB320[];
extern u8 D_801DB340[];
extern u8 D_801DB64C[];

#define FUNC_801EBB64_A (*(struct func_801EBB64_StructNode **)(func_801DAAF0 + 0x24))
#define FUNC_801EBB64_B ((struct func_801EBB64_StructNode *)D_801DAB14)
#define FUNC_801EBB64_C (*(struct func_801EBB64_StructNode **)(func_801DAE70 - 0x35C))

s32 func_801EBB64(s32 arg0, s32 arg1) {
    func_80005670(FUNC_801EBB64_A, D_801DB300);
    func_80005670(FUNC_801EBB64_B->next, D_801DB320);
    func_80005670(FUNC_801EBB64_C->next->next, D_801DB340);
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(FUNC_801EBB64_A->next->next->next, func_801DAE70 + 0x48);
    func_80005670(FUNC_801EBB64_B->next->next->next->next, D_801DB150);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(FUNC_801EBB64_C->next->next->next->next->next, D_801DB64C);
    func_801CC530();
    return 2;
}
