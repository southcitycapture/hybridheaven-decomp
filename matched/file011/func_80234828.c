#include "common.h"

extern void func_80145310(s32, s32, s32);

typedef struct func_80234828_Struct0 {
    u8 pad0[0xA9];
    u8 unkA9;
} func_80234828_Struct0;

typedef struct func_80234828_Struct1 {
    s32 unk0;
    s32 unk4;
} func_80234828_Struct1;

void func_80234828(func_80234828_Struct0 *arg0, func_80234828_Struct1 *arg1) {
    if (arg0->unkA9 & 1) {
        func_80145310(arg1->unk4, 1, 3);
    } else {
        func_80145310(arg1->unk4, 0xF, 2);
    }
    if (arg0->unkA9 & 2) {
        func_80145310(arg1->unk0, 1, 3);
        return;
    }
    func_80145310(arg1->unk0, 0xF, 2);
}
