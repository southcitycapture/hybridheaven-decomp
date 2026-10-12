#include "context.h"

struct func_8000736C_Struct4 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct func_8000736C_Struct2 {
    u8 pad0[0xA4];
    struct func_8000736C_Struct4 unkA4;
};

struct func_8000736C_Struct3 {
    u8 pad0[0x2C];
    struct func_8000736C_Struct2 *unk2C;
};

extern void func_80007114(struct func_8000736C_Struct3 **, struct func_8000736C_Struct4);

void func_8000736C(struct func_8000736C_Struct3 **arg0)
{
  struct func_8000736C_Struct2 *temp_t7;
 temp_t7 = (*arg0)->unk2C; func_80007114(arg0, (*(*arg0)->unk2C).unkA4);
}
