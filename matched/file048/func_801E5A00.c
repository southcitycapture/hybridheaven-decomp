#include "context.h"

typedef struct func_801E5A00_Sub { u8 pad0[0x4B]; u8 unk4B; } func_801E5A00_Sub;
typedef struct func_801E5A00_Obj { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; func_801E5A00_Sub *unk30; } func_801E5A00_Obj;
typedef struct func_801E5A00_Top { u8 pad0[0x1C]; func_801E5A00_Obj *unk1C; func_801E5A00_Obj *unk20; } func_801E5A00_Top;
#define Q (*(func_801E5A00_Top **)&D_8038D8D0)

s32 func_801E5A00(s32 arg0, s32 arg1) {
    u8 v;
    f32 t;
    if (func_801C1088(3, 5, 0x3C) != 0) {
        func_801C10D8(3, 5);
        Q->unk1C->unk22 = 0;
        Q->unk20->unk22 = 0;
        return 7;
    }
    t = (f32)func_801C1134(3, 5) / 60.0f;
    v = (u32)(-127.0f * t + 127.0f);
    Q->unk1C->unk30->unk4B = v;
    Q->unk20->unk30->unk4B = v;
    func_801E5690();
    return 6;
}
