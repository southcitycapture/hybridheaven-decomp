#include "context.h"
typedef struct func_80004D20_Struct { u8 pad[0xC]; s32 unkC; u8 pad2[0x1C]; } func_80004D20_Struct;
extern s32 func_80001060();
extern u8 *func_80004EE8(s32, u8 *);
extern u32 func_80004F98(s32, s32);
extern void func_80015420(u8 *, func_80004D20_Struct *);
extern void func_80015488(u8 *, u8 *, func_80004D20_Struct *);
extern u8 *func_8001F290(s32);
extern void func_8001F540(u8 *);
extern void func_80028A90(u8 *, s32);
extern void func_80030640(u8 *, s32);
extern void func_800306C0(u8 *, s32);
extern s16 D_80089350;
extern s16 D_80089354;
extern u8 D_8038F800[];
extern u8 D_80400000[];

u8 func_80004D20(s32 arg0, u8 *arg1) {
    u8 *s0;
    u8 *e;
    u8 sp67;
    u8 *a2;
    func_80004D20_Struct sp34;
    s16 sp32;
    u32 i;

    a2 = arg1;
    if (func_80004F98(arg0, 0) < 0x2001U) {
        s0 = func_8001F290(0x2000);
        sp67 = 0;
    } else {
        if (func_80001060() != 0) {
            s0 = D_80400000 + (D_80089350 << 20);
        } else {
            s0 = D_8038F800 + D_80089350 * 0x25800;
        }
        sp67 = 1;
        sp32 = D_80089354;
        D_80089354 = 1;
    }
    e = func_80004EE8(arg0, s0);
    if (s0[0] == 0x50 && s0[1] == 0x49 && s0[2] == 0x43) {
        func_80015420(s0, &sp34);
        func_80015488(s0, arg1, &sp34);
        a2 = arg1 + sp34.unkC;
    } else {
        i = 0;
        if ((u32)(e - s0)) {
            do {
                *a2 = s0[i];
                i++;
                a2++;
            } while (e - s0 > i);
        }
    }
    i = a2 - arg1;
    if (a2) {}
    func_80028A90(arg1, i);
    func_80030640(arg1, i);
    func_800306C0(arg1, i);
    if (sp67 == 0) {
        func_8001F540(s0);
    } else {
        D_80089354 = sp32;
    }
    return sp67;
}
