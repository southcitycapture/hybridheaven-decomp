#include "context.h"

extern u8 D_801CEEB0[];
extern u8 D_801CEEBC[];
extern u8 D_801CEEC8[];
extern u8 D_801CEED4[];
extern u8 D_801CEEE0[];

void func_801C4AA8(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 2;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 2) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 0xA + 0x8A), D_801CEEB0);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        if (D_801CC8C8 == 0) goto c0;
        if (D_801CC8C8 == 1) goto c1;
        if (D_801CC8C8 != 2) goto end;
        if (1) goto c2;
c0:
        func_80020718(5);
        func_8001B204(1, 0x7D0, 0x8A, D_801CEEBC, 2);
        func_8001B204(2, 0x7D0, 0x94, D_801CEEC8, 6);
        D_801BBF0A[0x32] = 0;
        goto end;
c1:
        func_80020718(6);
        func_8001B204(1, 0x7D0, 0x8A, D_801CEED4, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEEE0, 2);
        D_801BBF0A[0x32] = 1;
        goto end;
c2:
        func_800058DC(arg0, (void *)func_801C56B8);
    }
end:
    return;
}
