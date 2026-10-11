#include "context.h"
extern void func_80005700(void *);
extern s8 D_801BBD76;
struct func_80126F4C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x90 - 0x38];
    s16 unk90;
};

/* The 20-byte D_80164E80 is passed BY VALUE to func_8012C4D0 (copied into a1..a3 and the
   two stack arg slots), then the literal 3 goes in the next stack slot. */
typedef struct func_80126EAC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80126EAC_Struct;

extern void *func_8012C4D0(void *, func_80126EAC_Struct, s32);
extern func_80126EAC_Struct D_80164E80;

void func_80126EAC(struct func_80126F4C_Struct *arg0, s32 arg1) {
    s32 sp2C;
    u16 sp2A;
    struct func_80126F4C_Struct *temp_v0;

    D_801BBD76 = 1;
    sp2A = arg0->unk36;
    func_80005700(arg0);
    if (sp2A != 0) {
        temp_v0 = func_8012C4D0(arg0, D_80164E80, 3);
        if (temp_v0 != NULL) {
            temp_v0->unk36 = sp2A;
            temp_v0->unk90 = 5;
        }
    }
}
