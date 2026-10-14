#include "context.h"
typedef struct func_801EFD14_Struct {
    u8 pad[0x5C];
    void *unk5C;
} func_801EFD14_Struct;
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern s32 func_80010550(s32, void *);
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
extern func_801EFD14_Table D_80216BCC;
void func_801EFD14(func_801EFD14_Struct *arg0, s32 arg1);

extern void func_80011258(s32, s32, u16);

void func_801EFC50(void *arg0, s32 arg1) {
    s32 sp24;
    u16 temp_a2;

    sp24 = (s32) *(void **) ((u8 *) arg0 + 0x5C);
    temp_a2 = (u16) func_80010550(arg1, (void *) sp24);
    if ((*(u16 *) &D_80216C10)++ >= 0x1F) {
        func_80011258(arg1, sp24 + 0x22, temp_a2);
    }
    if (temp_a2 != 0) {
        *(u16 *) &D_80216C10 = 0;
        func_80011140(arg1, (void *) sp24, D_80216BCC, 0x14);
        func_800058DC(arg0, &func_801EFD14);
    }
}
