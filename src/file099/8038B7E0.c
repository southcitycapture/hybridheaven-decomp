#include "common.h"

#define D_800892B0 D_800892B0__func_8038B7E0
#define D_80089474 D_80089474__func_8038B7E0
#define D_801BBBF0 D_801BBBF0__func_8038B7E0
#define D_8038BD30 D_8038BD30__func_8038B7E0
#define D_8038D2B4 D_8038D2B4__func_8038B7E0
#define D_8038D2C4 D_8038D2C4__func_8038B7E0
#define D_8038D2D4 D_8038D2D4__func_8038B7E0
#define D_8038D2E8 D_8038D2E8__func_8038B7E0
#define D_8038D2EC D_8038D2EC__func_8038B7E0
#define D_8038D2F0 D_8038D2F0__func_8038B7E0
#define D_8038D300 D_8038D300__func_8038B7E0
#define D_8038D310 D_8038D310__func_8038B7E0
#define D_8038D324 D_8038D324__func_8038B7E0
#define D_8038D338 D_8038D338__func_8038B7E0
#define func_800023A8 func_800023A8__func_8038B7E0
#define func_800058DC func_800058DC__func_8038B7E0
#define func_8001B204 func_8001B204__func_8038B7E0
#define func_80123934 func_80123934__func_8038B7E0
#define func_80152230 func_80152230__func_8038B7E0


typedef struct func_8038B7E0_StructState {
    u8 pad0[2];
    u16 unk2;
    u16 unk4;
    u8 pad6[0x2E];
    u16 unk34;
    u16 unk36;
} func_8038B7E0_StructState;

typedef struct func_8038B7E0_StructInput {
    u8 pad0[0x1C8];
    u16 unk1C8;
    u8 pad1CA[6];
    u16 unk1D0;
} func_8038B7E0_StructInput;

typedef struct func_8038B7E0_StructInput2 {
    u8 pad0[4];
    u16 unk4;
} func_8038B7E0_StructInput2;

extern func_8038B7E0_StructState D_801BBBF0;
extern func_8038B7E0_StructInput D_800892B0;
extern func_8038B7E0_StructInput2 D_80089474;
extern char *D_8038BD30[];
extern char D_8038D2B4[];
extern char D_8038D2C4[];
extern char D_8038D2D4[];
extern char D_8038D2E8[];
extern char D_8038D2EC[];
extern char D_8038D2F0[];
extern char D_8038D300[];
extern char D_8038D310[];
extern char D_8038D324[];
extern char D_8038D338[];
extern void func_800023A8(s32);
extern void func_800058DC(s32, void (*)(void));
extern void func_8001B204(s32, s32, s32, char *, ...);
extern void func_80152230(void);
extern void func_80123934(void);

void func_8038B7E0(s32 arg0, s32 arg1) {
    if (D_801BBBF0.unk36 == 0) {
        func_8001B204(0, 0x64, 0x50, D_8038D2B4);
        if (((D_800892B0.unk1C8 & 0x800) || (D_800892B0.unk1D0 & 0x800)) && (D_801BBBF0.unk4 != 0)) {
            D_801BBBF0.unk4--;
        }
        if (((D_800892B0.unk1C8 & 0x400) || (D_800892B0.unk1D0 & 0x400)) && (D_801BBBF0.unk4 < 0x12B)) {
            D_801BBBF0.unk4++;
        }
    }
    if (D_801BBBF0.unk36 == 1) {
        func_8001B204(0, 0x64, 0x50, D_8038D2C4);
        if (((D_800892B0.unk1C8 & 0x800) || (D_800892B0.unk1D0 & 0x800)) && ((s32) D_801BBBF0.unk4 >= 0xA)) {
            D_801BBBF0.unk4 = D_801BBBF0.unk4 - 0xA;
        }
        if (((D_800892B0.unk1C8 & 0x400) || (D_800892B0.unk1D0 & 0x400)) && ((s32) D_801BBBF0.unk4 < 0x122)) {
            D_801BBBF0.unk4 = D_801BBBF0.unk4 + 0xA;
        }
    }
    if (D_801BBBF0.unk36 == 2) {
        func_8001B204(0, 0x64, 0x50, D_8038D2D4);
        if (((D_800892B0.unk1C8 & 0x800) || (D_800892B0.unk1D0 & 0x800)) && ((s32) D_801BBBF0.unk4 >= 0x64)) {
            D_801BBBF0.unk4 = D_801BBBF0.unk4 - 0x64;
        }
        if (((D_800892B0.unk1C8 & 0x400) || (D_800892B0.unk1D0 & 0x400)) && ((s32) D_801BBBF0.unk4 < 0xC8)) {
            D_801BBBF0.unk4 = D_801BBBF0.unk4 + 0x64;
        }
    }
    if (((D_800892B0.unk1C8 & 0x200) || (D_800892B0.unk1D0 & 0x200)) && ((s32) D_801BBBF0.unk36 < 2)) {
        D_801BBBF0.unk36 = D_801BBBF0.unk36 + 1;
    }
    if (((D_800892B0.unk1C8 & 0x100) || (D_800892B0.unk1D0 & 0x100)) && ((s32) D_801BBBF0.unk36 > 0)) {
        D_801BBBF0.unk36 = D_801BBBF0.unk36 - 1;
    }
    func_8001B204(1, 0x50, 0x64, D_8038D2E8, D_8038BD30[D_801BBBF0.unk4]);
    func_8001B204(2, 0x8C, 0x78, D_8038D2EC, D_801BBBF0.unk4);
    if (D_801BBBF0.unk34 == 0) {
        func_8001B204(3, 0x64, 0x28, D_8038D2F0);
        if ((D_800892B0.unk1C8 & 8) && (D_801BBBF0.unk2 != 0)) {
            D_801BBBF0.unk2 = D_801BBBF0.unk2 - 1;
        }
        if ((D_800892B0.unk1C8 & 4) && ((s32) D_801BBBF0.unk2 < 0xFFFF)) {
            D_801BBBF0.unk2 = D_801BBBF0.unk2 + 1;
        }
    }
    if (D_801BBBF0.unk34 == 1) {
        func_8001B204(3, 0x64, 0x28, D_8038D300);
        if ((D_800892B0.unk1C8 & 8) && ((s32) D_801BBBF0.unk2 >= 0x10)) {
            D_801BBBF0.unk2 = D_801BBBF0.unk2 - 0x10;
        }
        if ((D_800892B0.unk1C8 & 4) && ((s32) D_801BBBF0.unk2 < 0xFFF1)) {
            D_801BBBF0.unk2 = D_801BBBF0.unk2 + 0x10;
        }
    }
    if (D_801BBBF0.unk34 == 2) {
        func_8001B204(3, 0x64, 0x28, D_8038D310);
        if ((D_800892B0.unk1C8 & 8) && ((s32) D_801BBBF0.unk2 >= 0x100)) {
            D_801BBBF0.unk2 = D_801BBBF0.unk2 - 0x100;
        }
        if ((D_800892B0.unk1C8 & 4) && ((s32) D_801BBBF0.unk2 < 0xFF01)) {
            D_801BBBF0.unk2 = D_801BBBF0.unk2 + 0x100;
        }
    }
    if (D_801BBBF0.unk34 == 3) {
        func_8001B204(3, 0x64, 0x28, D_8038D324);
        if ((D_800892B0.unk1C8 & 8) && ((s32) D_801BBBF0.unk2 >= 0x1000)) {
            D_801BBBF0.unk2 = D_801BBBF0.unk2 - 0x1000;
        }
        if ((D_800892B0.unk1C8 & 4) && ((s32) D_801BBBF0.unk2 < 0xF001)) {
            D_801BBBF0.unk2 = D_801BBBF0.unk2 + 0x1000;
        }
    }
    if ((D_800892B0.unk1C8 & 1) && ((s32) D_801BBBF0.unk34 < 3)) {
        D_801BBBF0.unk34 = D_801BBBF0.unk34 + 1;
    }
    if ((D_800892B0.unk1C8 & 2) && ((s32) D_801BBBF0.unk34 > 0)) {
        D_801BBBF0.unk34 = D_801BBBF0.unk34 - 1;
    }
    func_8001B204(4, 0x8C, 0x32, D_8038D338, D_801BBBF0.unk2);
    if (D_800892B0.unk1C8 & 0x7000) {
        func_800023A8(0);
        func_80152230();
        func_800058DC(arg0, func_80123934);
    }
    if (D_800892B0.unk1C8 & 0x8000) {
        func_800023A8(0);
        func_80152230();
        func_800058DC(arg0, func_80123934);
    }
}
#undef D_800892B0
#undef D_80089474
#undef D_801BBBF0
#undef D_8038BD30
#undef D_8038D2B4
#undef D_8038D2C4
#undef D_8038D2D4
#undef D_8038D2E8
#undef D_8038D2EC
#undef D_8038D2F0
#undef D_8038D300
#undef D_8038D310
#undef D_8038D324
#undef D_8038D338
#undef func_800023A8
#undef func_800058DC
#undef func_8001B204
#undef func_80123934
#undef func_80152230
