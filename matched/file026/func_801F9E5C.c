#include "context.h"

s32 func_801F9E5C(s32 arg0, s32 arg1) {
    s32 temp_v1;

    if (D_801FBB08 != 0) {
        if (D_801FBB08 != 1) {
            if (D_801FBB08 != 2) {
                goto block_10;
            }
            goto case2;
        }
        goto case1;
    }
    goto case0;

case0:
    if (func_801C0B8C(0x031AFB9F) == 0) {
        goto block_10;
    }
    func_8038D28C(0x1F0);
    D_801FBB08 = 1;
    goto block_10;

case1:
    if (func_801C0B8C(0x0339801F) == 0) {
        goto block_10;
    }
    func_8038D28C(0x1E7);
    D_801FBB08 = 2;
    goto block_10;

case2:
    if (func_801C0B8C(0x036746DF) == 0) {
        goto block_10;
    }
    func_8038D28C(0x1F2);
    D_801FBB08 = 0;
    return 0xB;

block_10:
    temp_v1 = D_801FBB0C++;
    if (temp_v1 == 0x0) {
        goto sub0;
    }
    if (temp_v1 == 0x1E) {
        goto sub1;
    }
    if (temp_v1 == 0x36) {
        goto sub2;
    }
    if (temp_v1 == 0x54) {
        goto sub3;
    }
    if (temp_v1 == 0x72) {
        goto sub4;
    }
    if (temp_v1 == 0xAE) {
        goto sub5;
    }
    if (temp_v1 == 0xD5) {
        goto sub6;
    }
    if (temp_v1 == 0x192) {
        goto sub7;
    }
    return 0xA;

sub0:
    func_8038D28C(0x1E9);
    return 0xA;

sub1:
    func_8038D28C(0x1EA);
    return 0xA;

sub2:
    func_8038D28C(0x1EB);
    return 0xA;

sub3:
    func_8038D28C(0x1EC);
    return 0xA;

sub4:
    func_8038D28C(0x1ED);
    return 0xA;

sub5:
    func_8038D28C(0x1EE);
    return 0xA;

sub6:
    func_8038D28C(0x1EF);
    return 0xA;

sub7:
    func_8038D28C(0x1F1);
    return 0xA;
}
