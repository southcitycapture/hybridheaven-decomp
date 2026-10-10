#include "context.h"

/* Same signature as context.h's func_801BF680, spelled with the struct tag so it
   works before the typedef func_801C1CF0_Struct is declared later in the source file. */
struct func_801C1CF0_Struct;
extern void func_801BF680(s32, struct func_801C1CF0_Struct **);

s32 func_801C1C90(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp24;
    s32 temp_v1;
    s32 var_v0;

    func_801BF680(arg0, (struct func_801C1CF0_Struct **)&sp24);
    temp_v1 = *(s32 *)((u8 *)sp24 + (arg1 * 0x18) + 0xC);
    var_v0 = arg2 + 1;
    return (arg2 == temp_v1) || (var_v0 == temp_v1);
}
