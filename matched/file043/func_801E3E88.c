#include "context.h"

extern s32 D_801E96B8;
extern f32 D_801E96BC;
extern s32 func_801C0B8C(u64 time);

#define ENTRY(off) (*(struct func_801E3CCC_Struct2 **)((u8 *)D_8038D8D0 + (off)))

s32 func_801E3E88(s32 arg0, s32 arg1) {
    s32 i;
    s32 offset;

    if (func_801C0B8C(0x870A50) != 0) {
        i = 1;
        offset = 4;
        if (D_801E96B8 + 1 >= 2) {
            do {
                ENTRY(offset)->unk30->unk4 = (f32)(i - 1) * D_801E96BC + -51.0f;
                i++;
                ENTRY(offset)->unk30->unk8 = 23.0f;
                ENTRY(offset)->unk30->unkC = 167.0f;
                ENTRY(offset)->unk30->unk12 = 0x1000;
                ENTRY(offset)->unk22 = 1;
                offset += 4;
            } while (D_801E96B8 >= i);
        }
        i--;
        ENTRY(i * 4)->unk30->unk12 = 0;
        return 5;
    }
    return 4;
}
