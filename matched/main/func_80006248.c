#include "common.h"

struct func_80006248_Struct {
    struct func_80006248_Struct *unk0;
    u8 pad4[4];
    struct func_80006248_Struct *unk8;
    u8 padC[0x14];
    u16 unk20;
};
extern struct func_80006248_Struct *D_8008D8F8[];

void *func_80006248(s32 arg0, struct func_80006248_Struct *arg1) {
    s32 count;
    struct func_80006248_Struct *child;

    count = 0;
    if (arg1 != NULL) {
loop:
        if (arg0 != arg1->unk20) {
            if (arg1->unk8 != NULL) {
                child = arg1->unk0;
                if (child != NULL) {
                    D_8008D8F8[count] = child;
                    count += 1;
                }
                arg1 = arg1->unk8;
            } else {
                child = arg1->unk0;
                if ((child == NULL) && (count != 0)) {
                    arg1 = D_8008D8F8[--count];
                } else {
                    arg1 = child;
                }
            }
            if (arg1 != NULL) {
                goto loop;
            }
        }
    }
    return arg1;
}
