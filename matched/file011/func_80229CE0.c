#include "common.h"
typedef struct func_8022B4A4_StructBase {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8022B4A4_StructBase;
extern struct func_8022B4A4_StructBase D_801BBBF0;
typedef struct func_8022B4A4_StructEntry {
    u8 pad0[0x30];
    u32 unk30;
} func_8022B4A4_StructEntry;
extern struct func_8022B4A4_StructEntry D_801BC03C;
extern struct func_8022B4A4_StructEntry D_801BC3D8;
s32 func_8022B640(u8, void *);                      /* extern */


extern u8 D_801842AA[];
extern u8 D_80184432[];
extern u8 D_801846D2[];
typedef struct func_80229CE0_Struct {
    u8 pad0[0x30];
    struct { u32 padbits:9; u32 mode:2; u32 rest:21; } b30;
    u8 pad34[4];
    u32 flag:1;
    u32 skip:2;
    u32 flag2:1;
    u32 rest38:28;
    u8 pad3c[0x86-0x3c];
    u16 a,b,c,d;
    u8 pad8e[0x2bc-0x8e];
    s16 limb0,limb1,limb2,limb3;
    u8 pad2c4[0x2d8-0x2c4];
    u8 state,choice;
    u8 pad2da[0x2fc-0x2da];
    u8 flags;
    u8 pad2fd[0x334-0x2fd];
    u8 *data;
    u8 pad338[0x385-0x338];
    u8 n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
} func_80229CE0_Struct;
#define RAND(x) func_8022B640(x, arg1)
void func_80229CE0(s16 *arg0, func_80229CE0_Struct *arg1, u8 arg2)
{
    s16 *stats;
    u8 *list;
    u8 count;
    u8 roll;
    u8 side;
    u8 bad;
    s32 idx;

    stats = (arg1 == (func_80229CE0_Struct *)((u8 *)&D_801BBBF0 + 0x44c)) ? (s16 *)&D_801BC3D8 : (s16 *)&D_801BC03C;
    count = 0;
    bad = 0;
    if (arg1->state == 2 && arg1->flag && arg1->flag2) {
        idx = RAND(arg1->n9);
        arg1->choice = arg1->data[idx + 0x7d];
        arg0[0x4d] |= 4;
        return;
    }
    if (arg1->state != 2) {
        if (arg1->limb0 < 0 && arg1->limb1 < 0) arg1->state = 1;
        if (arg1->limb2 < 0 && arg1->limb3 < 0) arg1->state = 0;
        if (arg1->state == 0) {
            if ((stats[1] < stats[0]/5 && arg1->n2) || arg2 == 2) { count=arg1->n2; list=arg1->data+0x6c; }
            else if (arg2 == 1 && arg1->n1) { count=arg1->n1; list=arg1->data+0x69; }
            else if (!arg2 && arg1->n0) { count=arg1->n0; list=arg1->data+0x66; }
            else if (arg1->n1) { count=arg1->n1; list=arg1->data+0x69; }
            else if (arg1->n0) { count=arg1->n0; list=arg1->data+0x66; }
            else { count=1; list=D_801842AA; }
        } else if (arg1->state == 1) {
            if ((stats[1] < stats[0]/5 && arg1->n5) || arg2 == 2) { count=arg1->n5; list=arg1->data+0x76; }
            else if (arg2 == 1 && arg1->n4) { count=arg1->n4; list=arg1->data+0x72; }
            else if (!arg2 && arg1->n3) { count=arg1->n3; list=arg1->data+0x6d; }
            else if (arg1->n4) { count=arg1->n4; list=arg1->data+0x72; }
            else if (arg1->n3) { count=arg1->n3; list=arg1->data+0x6d; }
            else { count=1; list=D_80184432; }
        }
    } else {
        if ((stats[1] < stats[0]/5 && arg1->n8) || arg2 == 2) { count=arg1->n8; list=arg1->data+0x7c; }
        else if (arg2 == 1 && arg1->n7) { count=arg1->n7; list=arg1->data+0x7a; }
        else if (!arg2 && arg1->n6) { count=arg1->n6; list=arg1->data+0x77; }
        else if (arg1->n7) { count=arg1->n7; list=arg1->data+0x7a; }
        else if (arg1->n6) { count=arg1->n6; list=arg1->data+0x77; }
        else { count=1; list=D_801846D2; }
    }
    roll = RAND(100);
    switch (count) {
    case 1:
        arg1->choice = list[0];
        break;
    case 2:
        if (roll < 67) arg1->choice = list[0];
        else arg1->choice = list[1];
        break;
    case 3:
        if (roll < 50) arg1->choice = list[0];
        else if (roll < 84) arg1->choice = list[1];
        else arg1->choice = list[2];
        break;
    case 4:
        if (roll < 40) arg1->choice = list[0];
        else if (roll < 70) arg1->choice = list[1];
        else if (roll < 90) arg1->choice = list[2];
        else arg1->choice = list[3];
        break;
    case 5:
        if (roll < 33) arg1->choice = list[0];
        else if (roll < 60) arg1->choice = list[1];
        else if (roll < 80) arg1->choice = list[2];
        else if (roll < 93) arg1->choice = list[3];
        else arg1->choice = list[4];
        break;
    case 6:
        if (roll < 50) arg1->choice = list[0];
        else if (roll < 70) arg1->choice = list[1];
        else if (roll < 80) arg1->choice = list[2];
        else if (roll < 88) arg1->choice = list[3];
        else if (roll < 95) arg1->choice = list[4];
        else arg1->choice = list[5];
        break;
    case 7:
        if (roll < 25) arg1->choice = list[0];
        else if (roll < 46) arg1->choice = list[1];
        else if (roll < 64) arg1->choice = list[2];
        else if (roll < 78) arg1->choice = list[3];
        else if (roll < 89) arg1->choice = list[4];
        else if (roll < 96) arg1->choice = list[5];
        else arg1->choice = list[6];
        break;
    case 8:
        if (roll < 22) arg1->choice = list[0];
        else if (roll < 41) arg1->choice = list[1];
        else if (roll < 58) arg1->choice = list[2];
        else if (roll < 72) arg1->choice = list[3];
        else if (roll < 83) arg1->choice = list[4];
        else if (roll < 91) arg1->choice = list[5];
        else if (roll < 97) arg1->choice = list[6];
        else arg1->choice = list[7];
        break;
    case 9:
        if (roll < 20) arg1->choice = list[0];
        else if (roll < 38) arg1->choice = list[1];
        else if (roll < 54) arg1->choice = list[2];
        else if (roll < 67) arg1->choice = list[3];
        else if (roll < 78) arg1->choice = list[4];
        else if (roll < 87) arg1->choice = list[5];
        else if (roll < 94) arg1->choice = list[6];
        else if (roll < 98) arg1->choice = list[7];
        else arg1->choice = list[8];
        break;
    case 10:
        if (roll < 18) arg1->choice = list[0];
        else if (roll < 34) arg1->choice = list[1];
        else if (roll < 49) arg1->choice = list[2];
        else if (roll < 62) arg1->choice = list[3];
        else if (roll < 73) arg1->choice = list[4];
        else if (roll < 82) arg1->choice = list[5];
        else if (roll < 89) arg1->choice = list[6];
        else if (roll < 94) arg1->choice = list[7];
        else if (roll < 98) arg1->choice = list[8];
        else arg1->choice = list[9];
        break;
    }
    if (arg1->state == 0 || arg1->state == 1) {
        if (arg1->state == 0) {
            if (arg1->limb0 < 0) bad = 1;
            else if (arg1->limb1 < 0) bad = 2;
            else if (arg1->a >= arg1->b) side = 0;
            else side = 1;
        } else {
            if (arg1->limb2 < 0) bad = 1;
            else if (arg1->limb3 < 0) bad = 2;
            else if (arg1->c >= arg1->d) side = 0;
            else side = 1;
        }
        if (bad) {
            if (bad == 1) {
                arg1->choice++;
            }
        } else {
            switch (arg1->data[0x4c]) {
            case 0:
                arg1->choice += side;
                break;
            case 1:
                if (RAND(4) < 3) arg1->choice += side;
                else arg1->choice += side ^ 1;
                break;
            case 2:
                if (RAND(5) < 3) arg1->choice += side;
                else arg1->choice += side ^ 1;
                break;
            case 3:
                if (RAND(5) < 4) arg1->choice += side;
                else arg1->choice += side ^ 1;
                break;
            case 4:
                if (arg1->flags & 1) arg1->choice++;
                break;
            case 5:
                if (RAND(2)) arg1->choice++;
                break;
            case 6:
                if (arg1->b30.mode == 2) {
                    arg1->choice |= 1;
                    bad = 0;
                }
                if (3 == arg1->b30.mode) {
                    arg1->choice &= 0xffe;
                }
                break;
            }
        }
    }
}
