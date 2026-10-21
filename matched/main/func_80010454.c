#include "context.h"

typedef struct func_80010454_StructVec {
    s32 x, y, z;
} func_80010454_StructVec;
typedef struct func_80010454_StructArg {
    u8 pad[0xC];
    u16 unkC;
    u8 padE[0x44 - 0xE];
    func_80010454_StructVec unk44;
} func_80010454_StructArg;
extern u16 func_800101D8(u16, u32 **, u16);
extern void func_8000F458(u32 **, void *);
extern u8 D_800631F0[];
extern u16 D_80063DF0[];
extern func_80010454_StructVec D_801BC028;

u16 func_80010454(u32 **arg0, func_80010454_StructArg *arg1, u32 arg2) {
    s32 prev;
    u16 first;
    u16 count;
    u16 i;
    u16 value;

    count = func_8000FD0C(arg0, arg1->unkC, D_800631F0, D_80063DF0, arg2);
    if (count == 0xFFFF) {
        return 0;
    }
    for (i = 0; i < count; i++) {
        value = func_800101D8(i, arg0, arg1->unkC);
        if (i == 0) {
            first = value;
        }
    }
    if (arg2 & 1) {
        func_8000F458(arg0, arg1);
        D_801BC028 = arg1->unk44;
    }
    return first;
}
