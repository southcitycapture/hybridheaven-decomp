#include "context.h"

typedef struct func_80003F44_Struct {
    u8 pad[0x42BC];
    u8 *unk42BC;
    u8 pad42C0[0xC];
    u32 unk42CC;
    u8 pad42D0[4];
    u8 *unk42D4;
    u8 *unk42D8;
    u32 unk42DC;
    u8 unk42E0;
    u8 unk42E1;
    u16 unk42E2;
    u16 unk42E4;
    u8 pad42E6[2];
    u32 unk42E8;
    u8 unk42EC;
    u8 pad42ED[3];
    u32 unk42F0;
    u8 pad42F4[4];
    u8 *unk42F8;
} func_80003F44_Struct;

extern func_80003F44_Struct D_800892B0;
extern s8 D_8008D59C;
extern u8 *D_8008D5A8;

u8 *func_80003F44(u32 arg0, u8 *arg1, s32 arg2) {
    u8 *result;
    if (D_800892B0.unk42EC == 0) {
        D_800892B0.unk42D8 = NULL;
        D_800892B0.unk42DC = 0;
        D_800892B0.unk42E0 = 0;
        D_800892B0.unk42E1 = 0;
        D_800892B0.unk42E2 = 0;
        D_800892B0.unk42E4 = 0;
        D_800892B0.unk42E8 = 0;
        D_800892B0.unk42F8 = arg1;
        D_800892B0.unk42F0 = D_8005D034 = D_8005D030 = arg0;
        D_8005D038 = D_8005D03C = arg2;
        D_8005D03C--;
        D_800892B0.unk42D4 = D_8008B518;
        func_80003EB8();
    }
    result = D_800892B0.unk42F8;
    D_800892B0.unk42BC = result;
    if (D_8005D03C > 0 || D_800892B0.unk42EC != 0) {
      do {
        if (D_800892B0.unk42EC == 0) {
            D_800892B0.unk42E8 = *D_800892B0.unk42D4 << 24;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            D_800892B0.unk42E8 += *D_800892B0.unk42D4 << 16;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            D_800892B0.unk42E8 += *D_800892B0.unk42D4 << 8;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            D_800892B0.unk42E8 += *D_800892B0.unk42D4;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            D_800892B0.unk42DC = D_8005D034 + D_800892B0.unk42E8 - 4;
        }
        D_800892B0.unk42EC = 0;
        while (D_8005D034 < D_800892B0.unk42DC) {
            if (D_800892B0.unk42CC < D_8005D034 - D_800892B0.unk42F0) {
                D_800892B0.unk42F0 = D_8005D034;
                D_800892B0.unk42EC = 1;
                return NULL;
            }
            D_800892B0.unk42E0 = *D_800892B0.unk42D4;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            if (D_800892B0.unk42E0 < 0x80) {
                D_800892B0.unk42E2 = (D_800892B0.unk42E0 >> 2) + 2;
                D_800892B0.unk42E4 = (*D_800892B0.unk42D4 + (D_800892B0.unk42E0 << 8)) & 0x3FF;
                D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
                D_800892B0.unk42D8 = D_800892B0.unk42F8 - D_800892B0.unk42E4;
                for (; D_800892B0.unk42E2--; D_800892B0.unk42F8++, D_800892B0.unk42D8++) {
                    *D_800892B0.unk42F8 = *D_800892B0.unk42D8;
                }
            } else if (D_800892B0.unk42E0 < 0xA0) {
                D_800892B0.unk42E2 = D_800892B0.unk42E0 & 0x1F;
                while (D_800892B0.unk42E2--) {
                    *D_800892B0.unk42F8 = *D_800892B0.unk42D4;
                    D_800892B0.unk42F8++;
                    D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
                }
            } else {
                if (D_800892B0.unk42E0 < 0xE0) {
                    D_800892B0.unk42E2 = (D_800892B0.unk42E0 & 0x1F) + 2;
                    D_800892B0.unk42E1 = *D_800892B0.unk42D4;
                    D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
                } else if (D_800892B0.unk42E0 < 0xFF) {
                    D_800892B0.unk42E2 = (D_800892B0.unk42E0 & 0x1F) + 2;
                    D_800892B0.unk42E1 = 0;
                } else {
                    D_800892B0.unk42E2 = *D_800892B0.unk42D4 + 2;
                    D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
                    D_800892B0.unk42E1 = 0;
                }
                for (; D_800892B0.unk42E2--; D_800892B0.unk42F8++) {
                    *D_800892B0.unk42F8 = D_800892B0.unk42E1;
                }
            }
        }
        while (D_800892B0.unk42DC++ & 0xF) {
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
        }
      } while (D_8005D03C > 0 || D_800892B0.unk42EC != 0);
      result = D_8008D5A8;
    }
    D_8008D59C = 0;
    return result;
}
