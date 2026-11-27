#include "common.h"
struct func_801C157C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_801C157C_Struct D_801DEBF0[];


void func_801C1834(void) {
    s32 i;
    s32 count;

    count = 0;
    for (i = 0; i < 32; i++) {
        if (D_801DEBF0[i].unk0 != -1) {
            count++;
        }
    }
}
