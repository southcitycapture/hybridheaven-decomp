#include "context.h"

extern u8 D_80181ABD[];

typedef struct func_80148270_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
} func_80148270_Struct;

s32 func_80148270(func_80148270_Struct *arg0) {
    if (D_80181ABD[(arg0->unk91 * 0x78) + (arg0->unk90 * 6)] == 0) {
        return 0;
    }
    return 1;
}
