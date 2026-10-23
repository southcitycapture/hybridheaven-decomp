#include "context.h"

extern void func_80130254(s32);
extern s32 func_80130264(void);
extern s16 D_80037750;
extern u8 D_801CF088[];
extern u8 D_801CF08C[];
extern u8 D_801CF09C[];
extern u8 D_801CF0B0[];
extern u8 D_801CF0B8[];
extern u8 D_801CF0C8[];
extern u8 D_801CF0DC[];
extern u8 D_801CF0E4[];
extern u8 D_801CF0F4[];
extern u8 D_801CF108[];
void func_801C56AC(s32 arg0, s32 arg1);

void func_801C5378(s32 arg0, s32 arg1) {
    s32 selection;
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 3;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 3) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x6B, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CF088);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, func_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
      do {
        selection = D_801CC8C8;
        if (selection == 0) goto choice0;
        if (selection == 1) goto choice1;
        if (selection == 2) goto choice2;
        if (selection != 3) goto def;
        goto choice3;
        choice0: {
            func_8001B204(2, 0x73, 0x8A, D_801CF08C, 2);
            func_8001B204(3, 0x73, 0x94, D_801CF09C, 6);
            func_8001B204(4, 0x73, 0x9E, D_801CF0B0, 6);
            D_801CFD0E = 1;
            break;
        } choice1: {
            func_8001B204(2, 0x73, 0x8A, D_801CF0B8, 6);
            func_8001B204(3, 0x73, 0x94, D_801CF0C8, 2);
            func_8001B204(4, 0x73, 0x9E, D_801CF0DC, 6);
            D_801CFD0E = 2;
            break;
        } choice2: {
            func_8001B204(2, 0x73, 0x8A, D_801CF0E4, 6);
            func_8001B204(3, 0x73, 0x94, D_801CF0F4, 6);
            func_8001B204(4, 0x73, 0x9E, D_801CF108, 2);
            D_801CFD0E = 0;
            break;
        } choice3: {
            if (((D_801CFD0E == 1) && func_80130290()) ||
                ((D_801CFD0E == 2) && func_801302CC()) ||
                ((D_801CFD0E == 0) && !func_80130264())) {
                func_800058DC(arg0, func_801C56B8);
                return;
            }
            if (D_801CFD0E == 2) {
                func_80130254(1);
                D_801CFD0E = 1;
            } else {
                func_80130254(0);
            }
            D_80037750 = D_801CFD0E + 1;
            func_800058DC(arg0, func_801C56AC);
            break;
        }
      } while (0);
    }
def:;
}
