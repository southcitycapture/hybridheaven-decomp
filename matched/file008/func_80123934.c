#include "common.h"
extern s32 D_8008D5D4;
typedef struct func_80124C0C_Struct {
    u8 pad[0x164];
    u8 unk164;
    u8 pad2[0x3];
    s16 unk168;
    u8 pad3[0x13];
    u8 unk17D;
    u8 unk17E;
} func_80124C0C_Struct;
extern struct func_80124C0C_Struct D_801BBBF0;
extern s8 D_801BBD6E;
extern u8 D_8038F800[];
extern s32 func_80004484(s32);
extern void func_80005444(s32, s32, s32, s32, s32);
extern s32 func_80005624(void *);
extern void func_80016DF0(void);
extern void func_80016E40(s32);
extern void func_8001F204(void *, s32);
extern s32 func_8012FF4C(void *);
extern void func_8014AC60();
extern u8 func_801BF1A0[];


typedef struct func_80123934_Struct {
    u8 pad0[2];
    u16 unk2;
    u16 unk4;
    u8 pad6[0x1A];
    s32 unk20;
    u8 pad24[0x112C];
    s32 unk1150;
} func_80123934_Struct;
extern void func_80028A90(void *, s32);
extern void func_800306C0(void *, s32);
extern void func_80030640(void *, s32);
extern void func_801251BC(u16);
extern void func_800172F4(void);
extern void func_8001EA74(void);
extern void func_80383888(s32);
extern void func_801256C4(void);
extern u8 *D_80089470;
extern s16 D_80089354;
extern u8 D_80164E58[];

#define S (*(func_80123934_Struct *)&D_801BBBF0)

void func_80123934(s32 arg0, s32 arg1)
{
extern s32 func_8012FF4C();

    D_801BBD6E = 3;
    func_80016DF0();
    S.unk20 = 0;
    func_80028A90(func_801BF1A0, (s32)D_8038F800 - (s32)func_801BF1A0);
    func_800306C0(func_801BF1A0, (s32)D_8038F800 - (s32)func_801BF1A0);
    func_80030640(func_801BF1A0, (s32)D_8038F800 - (s32)func_801BF1A0);
    func_801251BC(S.unk4);
    func_8001F204(D_80089470, (s32)D_8038F800 - (s32)D_80089470);
    S.unk1150 = 0;
    func_800172F4();
    func_80016E40(0xC000);
    func_80004484(0x37);
    switch (S.unk4) {
    case 20:
        D_80089354 = 2;
        break;
    case 24:
        func_8001EA74();
        break;
    case 21: case 22: case 23: case 25: case 26: case 27:
        break;
    }
    if (func_8012FF4C() != 24) {
        switch (S.unk4) {
        case 0x0:
            S.unk2 = 1;
        case 0x1: case 0x2: case 0x3: case 0x4: case 0x5:
            func_8014AC60();
            func_80383888(0);
            break;
        case 0xA:
            S.unk2 = 1;
        case 0xB: case 0xC: case 0xD: case 0xE: case 0xF:
        case 0x10: case 0x11: case 0x12: case 0x13:
            func_8014AC60();
            func_80383888(1);
            break;
        case 0x14:
            S.unk2 = 1;
        case 0x15: case 0x18: case 0x19: case 0x1A: case 0x1B:
            func_8014AC60();
            func_80383888(2);
            break;
        case 0x1E:
            S.unk2 = 1;
        case 0x1F: case 0x20: case 0x21: case 0x22: case 0x23:
        case 0x24: case 0x25:
            func_8014AC60();
            func_80383888(3);
            break;
        case 0x28:
            S.unk2 = 1;
        case 0x29: case 0x2A: case 0x2B: case 0x2C: case 0x2D:
        case 0x2E: case 0x2F: case 0x30: case 0x31:
            func_8014AC60();
            func_80383888(4);
            break;
        case 0x32:
            S.unk2 = 1;
        case 0x33: case 0x34: case 0x35: case 0x36: case 0x37: case 0x38:
            func_8014AC60();
            func_80383888(5);
            break;
        case 0x3C:
        case 0x3F:
            S.unk2 = 1;
            func_8014AC60();
            func_80383888(6);
            break;
        case 0x4C:
            S.unk2 = 1;
        case 0x46: case 0x47: case 0x48: case 0x4B: case 0x4D:
            func_8014AC60();
            func_80383888(7);
            break;
        case 0x50:
            S.unk2 = 1;
        case 0x51: case 0x52:
            func_8014AC60();
            func_80383888(8);
            break;
        case 0x5A:
            S.unk2 = 1;
        case 0x5B: case 0x5C: case 0x5D:
            func_8014AC60();
            func_80383888(9);
            break;
        }
    }
    func_8012FF4C();
    func_800172F4();
    func_801256C4();
    func_80005444(150, 500, 400, 250, 300);
    D_8008D5D4 = func_80005624(D_80164E58);
}
