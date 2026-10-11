#include "context.h"

struct func_801E23EC_Struct {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[8];
    s32 unk10;
    u8 pad14[8];
    s32 unk1C;
};

extern void func_801C2420(s32 a0, void *a1);
extern s32 func_801C2570(s32 a0, void *a1);
extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern u8 D_8038DD90[];
extern struct func_801E23EC_Struct D_8038DF70;
extern s32 D_8038DF98;
extern u8 D_8038DF94[];
struct func_801E23EC_Struct2 {
    u8 pad0[4];
    s32 unk4;
};
extern struct func_801E23EC_Struct2 func_8038DFA0;
extern s32 D_8038DFA4;

s32 func_801E23EC(s32 arg0, s32 arg1) {
    func_801C2420(0x470, D_8038DD90);
    D_8038BA70();
    D_8038DF70.unk4 = 0x200;
    if (func_801C2570(0x372, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70.unk10 = 0x1000;
    if (func_801C2570(0x471, (u8 *)&D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    D_8038DF70.unk1C = 0x4000;
    if (func_801C2570(0x473, (u8 *)&D_8038DF70 + 0x18) != 0) {
        func_8038BA8C();
    }
    D_8038DF98 = 0x4000;
    if (func_801C2570(0x474, D_8038DF94) != 0) {
        func_8038BA8C();
    }
    D_8038DFA4 = 0x1000;
    if (func_801C2570(0x475, &func_8038DFA0) != 0) {
        func_8038BA8C();
    }
    return 1;
}
