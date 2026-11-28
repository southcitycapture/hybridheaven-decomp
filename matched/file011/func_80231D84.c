#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
struct func_80230728_Inner {
    u8 pad0[4];
    u8 unk4;
    u8 pad5[5];
    u8 unkA;
    u8 pad0B[0x15 - 0xB];
    s8 unk15[1];
};
struct func_80230728_Struct {
    u8 pad0[0x2D];
    s8 unk2D;
    u8 pad2E[0x38 - 0x2E];
    u32 unk38;
    u8 pad3C[0x52 - 0x3C];
    u16 unk52;
    u16 unk54;
    s16 unk56;
    u8 pad58[0xAA - 0x58];
    s16 unkAA;
    u8 unkAC;
    u8 pad_AD[0x2D4 - 0xAD];
    struct func_80230728_Inner *unk2D4;
    u8 pad2D8[2];
    u8 unk2DA;
    u8 unk2DB;
    u8 pad2DC[0x399 - 0x2DC];
    u8 unk399;
};
#define arg0 ((struct func_80230728_Struct *)a0)
s32 func_8022B640(u16 arg0);

extern s32 func_8013D4A0(u8, s32);
extern void func_8013D5F4(u8);
extern s32 func_8014ADB4(f32, f32, s32, s16, s32, u8, s32);
extern void func_8014B36C(s32);
extern s32 func_80379230(void *, u8);
extern u8 D_8017DD92;
extern u16 D_801BBC1C;
extern s32 D_8022B640(u16, u8 *);

u8 func_80231D84(f32 x, f32 y, s32 z, s16 angle, u8 spawn) {
    u8 tries;
    u8 id;
    s32 v;
    s32 t;

    tries = 0;
    if (D_801BBBF0[0x74B] < 2) {
        if ((*(u16 *)&D_801BBBF0[0x2C] != 0xA && *(u16 *)&D_801BBBF0[0x2C] != 0xB &&
             *(u16 *)&D_801BBBF0[4] != 0x21 && *(u16 *)&D_801BBBF0[4] != 0x1B &&
             *(u16 *)&D_801BBBF0[4] != 0x5F && *(u16 *)&D_801BBBF0[4] < 0xB5) || D_8017DD92 != 0) {
            if (D_801BBBF0[0x74B] == 0) {
                t = D_8022B640(0x25, D_801BBBF0) + 1;
                id = t;
                while (func_80379230(D_801BC03C, t) != 0 && tries < 0x64) {
                    func_8013D5F4(id);
                    t = func_8022B640(0x25) + 1;
                    id = t;
                    tries++;
                }
                if (tries >= 0x64) {
                    id = 0xA;
                    func_8013D5F4(0xA);
                } else {
                    func_8013D5F4(id);
                }
            } else {
                v = *(s16 *)D_801BC03C;
                if (v < 0x1F4) {
                    if ((func_8022B640(v / 100) & 0xFF) < 3) id = 1; else id = 2;
                } else if (v < 0x3E8) {
                    if ((func_8022B640(v / 100 - 4) & 0xFF) < 2) id = 2; else id = 3;
                } else {
                    if ((func_8022B640(v / 100 - 9) & 0xFF) < 2) id = 3; else id = 4;
                }
                func_8013D5F4(id);
            }
            if (id && id < 0x26) {
                if (func_8013D4A0(id, 1) < 0x63) {
                    if (spawn != 0 && D_801BBC1C != 5) {
                        func_8014B36C(func_8014ADB4(x, y, z, angle, 0, id, 0) & 0xFFFF);
                        return 0;
                    }
                    D_801BC03C[id + 0x337]++;
                    return id;
                }
            }
        }
    }
    return 0;
}
