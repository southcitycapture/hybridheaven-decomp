#include "context.h"

extern u8 D_801BBF0A[];
void func_801C9DF8();
void func_801C9F24();
typedef struct func_801C9D0C_Inner { u8 pad[0xB]; u8 unkB; } func_801C9D0C_Inner;
typedef struct func_801C9D0C_Obj { u8 pad[0x30]; func_801C9D0C_Inner *unk30; } func_801C9D0C_Obj;

void func_801C9D0C(u8 *arg0, func_801C9D0C_Obj **arg1) {
    s32 pad;
    s16 v;
    s32 i;

    v = arg1[0]->unk30->unkB + 6;
    if (v >= 0x100) {
        *(u16 *)(arg0 + 0x3C) = 0x64;
        v = 0xFF;
        if (D_801BBF0A[0x33] == 0) {
            func_800058DC(arg0, func_801C9F24);
        } else {
            func_800058DC(arg0, func_801C9DF8);
        }
    }
    for (i = 0; i < 5; i++) {
        arg1[i]->unk30->unkB = v;
    }
}
