#include "context.h"

typedef struct func_80234724_StructNode {
    u8 pad[0x22];
    u8 unk22;
} func_80234724_StructNode;

typedef struct func_80234724_StructPair {
    func_80234724_StructNode *unk0;
    func_80234724_StructNode *unk4;
} func_80234724_StructPair;

typedef struct func_80234724_StructState {
    u8 pad[0xA0];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
} func_80234724_StructState;

void func_80234724(arg0, arg1, arg2)
struct func_802380EC_Struct *arg0;
s32 arg1;
s8 arg2;
{
    func_80234724_StructPair *pair = (func_80234724_StructPair *)arg1;
    func_80234724_StructState *state = (func_80234724_StructState *)arg0;

    if (state->unkA2 != 0) {
        pair->unk4->unk22 = 0;
        pair->unk0->unk22 = pair->unk4->unk22;
        goto end;
    }
    {
        if (arg2 != -1) {
            if (arg2 != 0) {
                if (arg2 != 1) goto end;
                goto case1;
            }
            goto case0;
        }
        goto caseM1;
        if (arg2 != 1) goto end;
        goto case1;
    case0:
        pair->unk0->unk22 = 1;
        pair->unk4->unk22 = 1;
        goto end;
    caseM1:
        pair->unk0->unk22 = 0;
        pair->unk4->unk22 = 1;
        goto end;
    case1:
        if (state->unkA0 == state->unkA1) {
            pair->unk0->unk22 = 1;
            pair->unk4->unk22 = 0;
        } else {
            pair->unk0->unk22 = 1;
            pair->unk4->unk22 = 1;
        }
    }
end:
    func_80145310((s32)pair->unk0, 1, 3);
    func_80145310((s32)pair->unk4, 1, 3);
}
