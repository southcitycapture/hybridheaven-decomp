#include "context.h"


typedef struct func_8013A7D4_Entry {
    u16 id;
    u16 count;
    u16 unk4;
} func_8013A7D4_Entry;

typedef struct func_8013A7D4_Input {
    u8 pad0[4];
    u16 buttons;
} func_8013A7D4_Input;

typedef struct func_8013A7D4_Sub2 {
    u8 pad0[0x60];
    u16 unk60;
} func_8013A7D4_Sub2;

typedef struct func_8013A7D4_Sub1 {
    u8 pad0[0x2C];
    func_8013A7D4_Sub2 *unk2C;
} func_8013A7D4_Sub1;

typedef struct func_8013A7D4_Arg0 {
    s32 unk0;
    func_8013A7D4_Sub1 *unk4;
} func_8013A7D4_Arg0;

extern void func_8000F2B8(s32, s32, s32, s32);
extern void func_8001DFFC(s32, s32, s32, void *, s32, s32);
extern void func_8013A2E0();
extern func_8013A7D4_Input D_80089474;
extern func_8013A7D4_Entry D_801636B0[];
extern func_8013A7D4_Entry D_801636E6[];
extern func_8013A7D4_Entry D_801636EC[];
extern u8 D_8018DF54[];
extern u8 D_8018DF68[];

void func_8013A7D4(func_8013A7D4_Arg0 *arg0, func_8013A7D4_Struct *arg1) {
    u16 id;
    u16 count;
    s32 i;
    func_8013A7D4_Entry *p;
    extern void func_8013A28C();

    id = (u16)((arg1->x & 0xFFFF0000) >> 16);
    if (D_80089474.buttons & 0x1000) {
        for (i = 0; i < 10; i++) {
            if (id == D_801636B0[i].id) {
                break;
            }
        }
        if (i >= 9) {
            i = 0;
        } else {
            i++;
        }
        arg1->x = D_801636B0[i].id << 16;
        arg1->unk4 = 0;
        func_8013A28C(arg0, *arg1);
        id = (u16)((arg1->x & 0xFFFF0000) >> 16);
    }
    p = D_801636B0;
    while (p->id != id) {
        p++;
    }
    count = p->count;
    func_8001DFFC(9, 0x14, 0xA0, D_8018DF54, arg1->x, count);
    func_8001DFFC(0xA, 0x14, 0xAA, D_8018DF68, arg1->unk4, (u16)(arg1->unk8 * 100.0f));
    if (D_80089474.buttons & 0x800) {
        if (arg1->x & 0xFFFF) {
            arg1->x--;
        } else {
            arg1->x = (id << 16) | (count - 1);
        }
        arg1->unk4 = 0;
        func_8013A2E0(arg0, *arg1);
    } else if (D_80089474.buttons & 0x400) {
        if ((arg1->x & 0xFFFF) < count - 1) {
            arg1->x++;
        } else {
            arg1->x = id << 16;
        }
        arg1->unk4 = 0;
        func_8013A2E0(arg0, *arg1);
    }
    if (D_80089474.buttons & 0x10) {
        arg1->unk6 ^= 2;
        func_8000F2B8(arg0->unk0, 2, 3, 0);
    }
    if (D_80089474.buttons & 0x4000) {
        arg1->unk6 ^= 0x10;
        func_8000F2B8(arg0->unk0, 0x10, 3, 0);
    }
    if (D_80089474.buttons & 0x8000) {
        arg1->unk6 ^= 1;
        func_8000F2B8(arg0->unk0, 1, 3, 0);
    }
    if (arg1->unk6 & 1) {
        arg1->unk4 = arg0->unk4->unk2C->unk60;
        if (D_80089474.buttons & 0x200) {
            if (arg1->unk4 != 0) {
                arg1->unk4 = arg1->unk4 - 1;
            } else {
                arg1->unk4 = 0;
            }
        } else if (D_80089474.buttons & 0x100) {
            arg1->unk4++;
        }
        func_8013A2E0(arg0, *arg1);
    }
    if (D_80089474.buttons & 2) {
        if (arg1->unk8 > 0.0f) {
            arg1->unk8 -= 0.015625;
        }
        func_8013A2E0(arg0, *arg1);
    } else if (D_80089474.buttons & 1) {
        if (arg1->unk8 <= 0.0f) {
            arg1->unk8 = 0.00390625f;
        } else if (arg1->unk8 > 0.0f) {
            arg1->unk8 += 0.015625;
        }
        func_8013A2E0(arg0, *arg1);
    }
    if (D_80089474.buttons & 8) {
        if (arg1->unk8 > 0.0f) {
            arg1->unk8 *= 0.5;
        }
        func_8013A2E0(arg0, *arg1);
    } else if (D_80089474.buttons & 4) {
        if (arg1->unk8 <= 0.0f) {
            arg1->unk8 = 0.00390625f;
        } else if (arg1->unk8 > 0.0f) {
            arg1->unk8 = 2.0 * arg1->unk8;
        }
        func_8013A2E0(arg0, *arg1);
    }
    if (D_80089474.buttons & 0x2000) {
        arg1->unk8 = 1.0f;
        func_8013A2E0(arg0, *arg1);
    }
}
