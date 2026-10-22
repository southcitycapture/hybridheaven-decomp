#include "context.h"

struct func_801FA248_StructInner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_801FA248_Struct {
    u8 pad[0x10];
    struct func_801FA248_Struct *unk10;
    u8 pad14[0x22 - 0x14];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FA248_StructInner *unk30;
};

s32 func_801FA248(void *arg0, s32 arg1) {
    void *data;
    s16 temp;
    s32 result;

    *(s32 *)((u8 *)&data + 8) = arg1;
    arg1 &= 0xFF;
    result = 1;
    if (arg0 != NULL) {
        do {
            temp = ((struct func_801FA248_Struct *)arg0)->unk30->unk4B;
            temp = temp - arg1 * 1;
            if (temp < 0) {
                ((struct func_801FA248_Struct *)arg0)->unk22 = 0;
                result = 0;
            }
            ((struct func_801FA248_Struct *)arg0)->unk30->unk4B = temp;
            arg0 = ((struct func_801FA248_Struct *)arg0)->unk10;
        } while (arg0 != NULL);
    }
    return result;
}
