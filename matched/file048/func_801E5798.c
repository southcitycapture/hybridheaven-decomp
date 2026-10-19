#include "context.h"

typedef struct func_801E5798_Sub { u8 pad[0x4B]; u8 unk4B; } func_801E5798_Sub;
typedef struct func_801E5798_Obj { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; func_801E5798_Sub *unk30; } func_801E5798_Obj;
typedef struct func_801E5798_Top { func_801E5798_Obj *e[23]; } func_801E5798_Top;

s32 func_801E5798(s32 arg0, s32 arg1) {
    u32 v;
    f32 q;
    if (func_801C1088(3, 5, 0x3C) != 0) {
        func_801C10D8(3, 5);
        return 4;
    }
    q = (f32)func_801C1134(3, 5) / 60.0f;
    v = (u32)(127.0f * q);
#define U ((func_801E5798_Top *)D_8038D8D0)
    U->e[6]->unk30->unk4B = v;
    U->e[8]->unk30->unk4B = v;
    U->e[8]->unk22 = 1;
    func_801E560C(&D_8038D8D0);
    return 3;
}
