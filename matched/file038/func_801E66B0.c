#include "context.h"
extern void func_801C18CC(s32, void *);
extern u8 D_801E6D38[];

typedef struct func_801E66B0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E66B0_Struct;

s32 func_801E66B0(s32 arg0, s32 arg1) {
    func_801E66B0_Struct sp18;

    sp18 = *(func_801E66B0_Struct *) D_801E6D38;
    func_801C18CC(2, &sp18);
    return 0xF;
}
