#include "context.h"

typedef struct func_80236700_StructData {
    u8 bytes[2];
} func_80236700_StructData;

extern func_80236700_StructData D_8023E4FC;

void func_80236700(struct func_802380EC_Struct *arg0, s32 arg1) {
    func_80236700_StructData sp24;

    sp24 = D_8023E4FC;
    ((u8 *)arg0)[0xA1] = 0;
    ((s8 *)arg0)[0xA3] = 2;
    func_80234ED4(arg0, arg1, &sp24, 0, 0);
}
