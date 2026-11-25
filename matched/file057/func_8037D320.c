#include "common.h"

extern u8 *func_8013D5F4(u8);
extern u8 *D_80184140[];
extern u8 *D_80389754[];
extern u8 D_8038BBD0[];
extern u8 D_8038BBD8[];
extern u8 D_8038BBE8[];
extern u8 D_8038BBF4[];

struct func_8037D320_Struct {
    u8 pad91[0x91];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
    u8 unk95;
    u8 pad96[0xAC - 0x96];
    u8 unkAC;
    u8 unkAD;
};

struct func_8037D320_Tab { u8 *p[10]; };
union func_8037D320_Suffix { u8 bytes[8]; u32 words[2]; };

#define A ((struct func_8037D320_Struct *)arg0)

s32 func_8037D320(void *arg0, u8 arg1)
{
    u8 buf[0x22] = "";
    u8 i;
    struct func_8037D320_Tab tab = *(struct func_8037D320_Tab *)D_80389754;
    union func_8037D320_Suffix nm = *(union func_8037D320_Suffix *)D_8038BBD0;
    u8 *result;
    u8 n;

    if (arg1 == 0) {
        if (A->unk93 == 0xB || A->unk93 == 0xC) {
            result = func_8013D5F4(A->unk94);
        } else if (A->unk93 == 0x13) {
            result = tab.p[A->unk93 - 0xB];
        } else {
            result = D_80184140[A->unk94];
        }
    } else if (A->unk95 != 0 || A->unk91 == 0 || A->unk91 == 1 || A->unk91 == 2 || A->unk91 == 0xA || A->unk91 == 9) {
        if (A->unk91 == 0x13) {
            result = D_8038BBD8;
        } else {
            result = D_80184140[A->unk92];
        }
    } else if (A->unkAC != 0 || A->unk91 - 0xB == 9) {
        if (A->unkAD != 0 && A->unk91 == 0xE) {
            result = D_8038BBE8;
        } else {
            result = tab.p[A->unk91 - 0xB];
        }
    } else {
        if (A->unkAD != 0 && A->unk91 == 0xE) {
            return (s32)D_8038BBF4;
        }
        for (i = 0; tab.p[A->unk91 - 0xB][i] != 0; i++) {
            buf[i] = tab.p[A->unk91 - 0xB][i];
        }
        n = i;
        for (i = 0; nm.bytes[i] != 0; i++) {
            buf[n + i] = nm.bytes[i];
        }
        return (s32)buf;
    }
    return (s32)result;
}
