#include "context.h"
typedef struct func_8037AA80_Struct { s32 a; s32 b; s32 c; } func_8037AA80_Struct;
typedef struct func_8037AA80_StructA { u8 pad[0x5C]; s32 unk5C; } func_8037AA80_StructA;
extern func_8037AA80_Struct D_80216B90;
extern void func_80011140(s32, s32, func_8037AA80_Struct, s32);
extern void func_8037AB08();
void func_800058DC(void *, void *);

void func_8037AA80(func_8037AA80_StructA *arg0, s32 arg1) {
    s32 sp24;
    extern s32 func_80010550();

    sp24 = arg0->unk5C;
    if ((func_8037B9F0((void *)arg0) == 0) && (func_80010550(arg1, sp24) != 0)) {
        func_80011140(arg1, sp24, D_80216B90, 5);
        func_800058DC(arg0, func_8037AB08);
    }
}
