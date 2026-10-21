#include "context.h"

extern u16 func_80011590();

typedef struct func_801DC700_Struct0 {
    s32 unk0;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
} func_801DC700_Struct0;

typedef struct func_801DC700_Struct1 {
    s32 unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 pad7;
} func_801DC700_Struct1;

#define arg0 ((func_801DC700_Struct0 *)a0)
#define E ((func_801DC700_Struct1 *)a1)

s32 func_801DC700(s32 a0, void *a1) {
    s32 key = arg0->unk0;
    u16 id = arg0->unk4;
    f32 scale = arg0->unk8;

    if (E->unk0 != 0) {
        do {
            if (key == E->unk0) {
                if (id == func_80011590((u16)(u32)(E->unk4 * scale))) {
                    return 1;
                }
                if (id == func_80011590((u16)(u32)(E->unk5 * scale))) {
                    return 2;
                }
                if (id == func_80011590((u16)(u32)(E->unk6 * scale))) {
                    return 3;
                }
                return 0;
            }
            a1 = E + 1;
        } while (E->unk0 != 0);
    }
    return 0;
}

#undef arg0
#undef E
