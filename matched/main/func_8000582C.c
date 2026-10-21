#include "common.h"

typedef struct func_8000582C_Struct {
    struct func_8000582C_Struct *unk0;
    u8 pad4[4];
    struct func_8000582C_Struct *unk8;
    u8 padC[4];
    s32 unk10;
} func_8000582C_Struct;

extern func_8000582C_Struct *D_8008D768[];

func_8000582C_Struct *func_8000582C(s32 arg0, func_8000582C_Struct *arg1) {
    s32 count;
    func_8000582C_Struct *child;

    count = 0;
    while (arg1 != NULL) {
        if (arg0 == arg1->unk10) {
            break;
        }
        if (arg1->unk8 != NULL) {
            child = arg1->unk0;
            if (child != NULL) {
                D_8008D768[count] = child;
                count++;
            }
            arg1 = arg1->unk8;
        } else {
            child = arg1->unk0;
            if (child == NULL && count != 0) {
                arg1 = D_8008D768[--count];
            } else {
                arg1 = child;
            }
        }
    }
    return arg1;
}
