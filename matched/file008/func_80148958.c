#include "common.h"
extern u8 D_80181ABC[];
extern u8 D_80181ABD[];
extern u8 D_801BBBF0[];
extern s32 func_8001B204(s32, s32, s32, void *);
extern u8 func_8013D4A0(u8, s32);
void func_80147DCC(u8 arg0);
typedef struct func_80148270_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
} func_80148270_Struct;
s32 func_80148270(func_80148270_Struct *arg0);
typedef struct func_80148820_StructC {
    u8 pad[0x33];
    s8 f : 1;
} func_80148820_StructC;
typedef struct func_80148820_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
    u8 pad2[6];
    func_80148820_StructC *unk98;
    s32 unk9C;
} func_80148820_Struct;
s32 func_80148820(func_80148820_Struct *arg0);

extern s32 func_8013D5F4(u8);
extern u8 D_8018F9C0[];
extern u8 D_8018F9C8[];
extern u8 D_8018F9CC[];
extern u8 D_8018F9D4[];
extern u8 D_8018F9E0[];

typedef struct func_80148958_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
    s8 unk92;
    u8 pad2[5];
    void *unk98;
} func_80148958_Struct;

void func_80148958(func_80148958_Struct *arg0) {
    s32 v;
    u8 sp2B;
extern s32 func_8001B204();

    v = (s32)arg0->unk98;
    if (v == (s32)D_801BBBF0 + 0x44C) {
        v = 0;
    } else {
        v = 1;
    }
    sp2B = func_8013D4A0(D_80181ABD[arg0->unk91 * 0x78 + arg0->unk90 * 6], v & 0xFF);
    if (sp2B != 0 && func_80148270((func_80148270_Struct *)arg0) != 0) {
        func_8001B204(3, 0xA2, 0x94, D_8018F9C0, 0, func_8013D5F4(D_80181ABD[arg0->unk91 * 0x78 + arg0->unk90 * 6]));
        func_8001B204(4, 0xFA, 0xA3, D_8018F9C8, 0);
        func_8001B204(5, 0x104, 0xA3, D_8018F9CC, 1, sp2B);
        if ((D_80181ABC[arg0->unk91 * 0x78 + arg0->unk90 * 6] & (v = 0, arg0->unk92)) && func_80148820((func_80148820_Struct *)arg0) != 0) {
            func_8001B204(6, 0xEB, 0xB9, D_8018F9D4, 0, 0);
            return;
        }
        func_8001B204(6, 0xCF, 0xB9, D_8018F9E0, 0, 1);
        return;
    }
    func_80147DCC(3);
}
