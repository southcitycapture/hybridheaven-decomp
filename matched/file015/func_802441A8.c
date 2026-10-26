#include "common.h"
typedef struct func_8024148C_StructArg func_8024148C_StructArg;
struct func_80243290_StructTriple { int a; int b; int c; };
typedef struct func_80242F38_SG { int a; } func_80242F38_StructGlobal;
extern struct func_80243290_StructTriple D_80252418;
extern void func_800058DC(void *, void *);
extern void func_801339D0(s32);
extern s32 func_80133A24(s32);
extern s32 func_8013A1B4();
typedef struct func_80244240_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x90 - 0x60];
    s16 unk90;
} func_80244240_Struct;
void func_80244240(func_80244240_Struct *arg0, s32 arg1);


extern u8 D_80252510[];
extern s32 D_80010550(s32, s32);

void func_802441A8(void *arg0, s32 volatile arg1) {
    s32 t = *(s32 *)((u8 *)arg0 + 0x5C);
    D_80010550(arg1, t);
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_80252418, 0xFFFFFF);
        func_800179B0(D_80252510);
        func_800058DC(arg0, (void *) func_80244240);
    }
}
