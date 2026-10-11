#include "context.h"

extern void D_8038BA70(void);
extern void func_801C2420(s32, void *);
extern s32 func_801C2570(s32, void *);
extern void func_8038BA8C(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DF94[];
extern s32 D_8038DF98;

typedef struct func_801E379C_Struct {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad1[0x8];
    s32 unk10;
    u8 pad2[0x8];
    s32 unk1C;
} func_801E379C_Struct;

extern func_801E379C_Struct D_8038DF70;

s32 func_801E379C(s32 arg0, s32 arg1) {
    func_801C2420(0x464, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x465, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x373, D_8038DDC0);
    D_8038BA70();
    D_8038DF70.unk4 = 0x800;
    if (func_801C2570(0x375, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70.unk10 = 0x800;
    if (func_801C2570(0x378, (u8 *) &D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    D_8038DF70.unk1C = 0x200;
    if (func_801C2570(0x372, (u8 *) &D_8038DF70 + 0x18) != 0) {
        func_8038BA8C();
    }
    D_8038DF98 = 0xE000;
    if (func_801C2570(0x2DD, D_8038DF94) != 0) {
        func_8038BA8C();
    }
    return 1;
}
