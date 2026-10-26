#include "common.h"
extern u8 D_8008D558[];
extern u8 D_801BBBF0[];
extern s8 D_8023C264;
extern void func_800058DC(void *obj, void *fn);
extern s32 func_80126A0C(s32, s32, s32);
void func_8021B790(void);


typedef struct func_8021B870_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xEC - 0x2E];
    void *unkEC;
    u8 pad2[0x181 - 0xF0];
    u8 unk181;
    u8 pad3[0x188 - 0x182];
    s32 unk188;
    u8 pad4[0x1031 - 0x18C];
    u8 unk1031;
} func_8021B870_Struct;
extern void func_8022AF94(void *);
extern void func_8021BD00();

#define S (*(u8 *)&D_8023C264)
#define GG ((func_8021B870_Struct *)D_801BBBF0)

void func_8021B870(s32 arg0, s32 arg1) {
    if (S == 0) {
        if (func_80126A0C(arg0, 0x1AA, 0) != 1) return;
        S++;
    }
    if (S == 1) {
        if (func_80126A0C(arg0, 0x1AB, 0) != 1) return;
        S++;
    }
    if (S == 2) {
        if (func_80126A0C(arg0, 0x1AC, 0) != 1) return;
        S++;
    }
    if (S == 3) {
        if (func_80126A0C(arg0, 0x1AD, 0) != 1) return;
        S++;
    }
    if (S == 4) {
        if (func_80126A0C(arg0, 0x1AF, 0) != 1) return;
        S++;
    }
    if (S == 5) {
        if (func_80126A0C(arg0, 0x1B0, 0) != 1) return;
        S++;
    }
    if (S == 6) {
        if (func_80126A0C(arg0, 0x1B1, 0) != 1) return;
        S++;
    }
    if (S == 7) {
        if (func_80126A0C(arg0, 0x1B2, 0) != 1) return;
        S++;
    }
    if (S == 8) {
        if (func_80126A0C(arg0, 0x1B3, 0) != 1) return;
        S++;
    }
    if (S == 9) {
        if (func_80126A0C(arg0, 0x1B4, 0) != 1) return;
        S++;
    }
    if (S == 10) {
        if (func_80126A0C(arg0, 0x1B5, 0) != 1) return;
        S++;
    }
    if (S == 11) {
        if (func_80126A0C(arg0, 0x1B6, 0) != 1) return;
        S++;
    }
    if (S == 12) {
        if (func_80126A0C(arg0, 0x1B7, 0) != 1) return;
        S++;
    }
    if (S == 13) {
        if (func_80126A0C(arg0, 0x1B8, 0) != 1) return;
        S++;
    }
    if (S == 14) {
        if (func_80126A0C(arg0, 0x125, 0) == 0) return;
        S++;
    }
    if (S == 15) {
        if (func_80126A0C(arg0, 0x127, 0) == 0) return;
        S++;
    }
    if (S == 16) {
        if (GG->unk2C == 4 || GG->unk2C == 5 || GG->unk2C == 0xF) {
            if (GG->unk188 != 0) return;
            if (GG->unk181 != 0) return;
            if (*(u32 *)(D_8008D558 + 0x28) > 0x2000) {
                GG->unk181 = 1;
                return;
            }
            GG->unk181 = 1;
            func_8022AF94(GG->unkEC);
        }
        S++;
    }
    func_800058DC((void *)arg0, func_8021BD00);
    GG->unk1031 = 3;
    func_8021B790();
}
