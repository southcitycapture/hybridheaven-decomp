#include "context.h"

extern u8 D_800692B0[];
extern u8 D_801CD0D0;
extern u8 D_801CF30C[];
extern u8 D_801CF314[];

typedef struct func_801C7D5C_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x52];
    u8 unk90;
} func_801C7D5C_Struct;
typedef struct func_801C7D5C_StructInput {
    u8 pad0[0x1C8];
    u16 unk1C8;
    u8 pad1CA[6];
    u16 unk1D0;
} func_801C7D5C_StructInput;

void func_801C7D5C(func_801C7D5C_Struct *arg0, s32 arg1) {
    u16 buttons;
    u16 pressed;
    u8 color;
    u8 changed;
    s32 confirm;
    u8 index;
    func_801C7D5C_StructInput *input;
    extern void func_8001B204();
    extern void func_800058DC();

    index = arg0->unk90;
    input = (func_801C7D5C_StructInput *) (D_800692B0 + (index << 5) + 0x20000);
    buttons = input->unk1D0;
    color = 0xFF;
    pressed = input->unk1C8;
    changed = 1;
    if (D_801CFDB8[index] == 0) {
        if ((buttons & 0x800) && (D_801CFDA6[index] >= 2)) {
            D_801CFDA6[index]--;
        } else if ((buttons & 0x400) && (D_801CFDA6[index] < 3)) {
            D_801CFDA6[index]++;
        } else {
            confirm = pressed & 0x8000;
            if (confirm && (D_801CFDA6[index] < 3)) {
                D_801CFDA6[index]++;
            } else if ((buttons & 0x100) && (D_801CFDA6[index] == 3)) {
                D_801CFDA6[index]++;
            } else if ((buttons & 0x200) && (D_801CFDA6[index] == 4)) {
                D_801CFDA6[index]--;
            } else if (confirm && (D_801CFDA6[index] == 3) && (func_801C5AD4(index) == 0)) {
                func_801C5D64(arg0, 1);
                D_801CFDB8[arg0->unk90] = 1;
                D_801CD0D0 = arg0->unk90;
            } else {
                changed = 0;
            }
        }
        index = arg0->unk90;
    }
    if (D_801CFDA6[index] == 2) {
        if ((buttons & 0x100) && (D_801CD0C8[index] < 10)) {
            D_801CD0C8[index]++;
            index = arg0->unk90;
        }
        if ((buttons & 0x200) && (D_801CD0C8[index] >= -9)) {
            D_801CD0C8[index]--;
            index = arg0->unk90;
        }
    } else {
        color = 0x78;
    }
    if (D_801CD0C8[index] > 0) {
        func_8001B204((u8)((u32)index + 4), (s16)((s16)(s32)D_801CCF68[index][0] + 1000), 0xAB, D_801CF30C, color, D_801CD0C8[index]);
    } else {
        func_8001B204((u8)((u32)index + 4), (s16)((s16)(s32)D_801CCF68[index][0] + 1000), 0xAB, D_801CF314, color, D_801CD0C8[index]);
    }
    func_801C5F04(arg0);
    if (changed) {
        func_801C5DAC((u8 *)arg0);
        if (D_801CFDB8[arg0->unk90] != 0) {
            func_80020744(0x104);
            func_800058DC(arg0, func_801C813C);
            return;
        }
        func_80020744(0x300);
        return;
    }
    if ((D_801CFDA6[arg0->unk90] == 4) && (pressed & 0x8000)) {
        D_801CD0CC = 1;
        func_80020744(0x104);
        arg0->unk3C = 0x14;
        func_80020718(7);
        func_800058DC(arg0, func_801C81C8);
    }
}
