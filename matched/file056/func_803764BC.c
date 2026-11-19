#include "common.h"
extern u8 D_80389EE0;
extern u8 D_80389EE1;
extern void *func_80005670(s32, void *);
extern void func_800058DC(void *, void *);
extern s32 func_803757E0(void *, s32, s32, s32);
struct func_803768AC_S24 {
    u8 pad0[0x2C];
    f32 *unk2C;
};
struct func_803768AC_Sub {
    u8 pad0[0x10];
    u32 unk10;
};
struct func_803768AC_Struct {
    u8 pad0[0x24];
    struct func_803768AC_S24 *unk24;
    u8 pad28[0x10];
    struct func_803768AC_Sub *unk38;
    u8 pad3C[0x20];
    u8 *unk5C;
    u8 pad60[0x32];
    s16 unk92;
};
void func_803768AC(struct func_803768AC_Struct *arg0, s32 arg1);


struct func_803764BC_Inner {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
};

struct func_803764BC_O78 {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_803764BC_Ctx {
    u8 pad0[0x38];
    struct func_803764BC_Inner *unk38;
    u8 pad3C[0x20];
    struct func_803764BC_O78 *unk5C;
    u8 pad60[0x30];
    s16 unk90;
    s16 unk92;
};
extern s32 func_80133A24(s32);
extern s32 func_80133980(s32);
extern s32 func_8013D520(s32, s32);
extern s32 func_800179B0(s32);
extern s32 func_80375B6C(void *, s32);
extern s16 D_801BBF42[];
extern u8 D_801BBC06;
extern u32 D_803884B8[];
extern u8 D_803884A4[];

void func_803764BC(struct func_803764BC_Ctx *arg0, s32 arg1) {
    struct func_803764BC_O78 *sp24 = arg0->unk5C;

    switch (arg0->unk38->unk10 >> 24) {
    case 1:
        if (func_80133A24(arg0->unk38->unk14 & 0xFFFF) != 0) {
            if (func_803757E0(arg0, arg1, 3, arg0->unk38->unk10 & 0xFF) != 0) {
                return;
            }
        } else if (func_803757E0(arg0, arg1, 2, arg0->unk38->unk10 & 0xFF) != 0) {
            return;
        }
        break;
    case 0:
    case 2:
        if ((arg0->unk38->unk14 & 0xFFFF) != 0) {
            if (func_80133A24(arg0->unk38->unk14 & 0xFFFF) != 0) {
                if (func_803757E0(arg0, arg1, 3, arg0->unk38->unk10 & 0xFF) != 0) {
                    return;
                }
            } else if (func_803757E0(arg0, arg1, 2, arg0->unk38->unk10 & 0xFF) != 0) {
                return;
            }
        } else if (arg0->unk90 != 0) {
            if (func_803757E0(arg0, arg1, 3, (u8)(arg0->unk38->unk10 & 0xFF)) != 0) {
                return;
            }
        } else if (func_803757E0(arg0, arg1, 2, (u8)(arg0->unk38->unk10 & 0xFF)) != 0) {
            return;
        }
        break;
    }

    arg0->unk92 = 1;
    if ((arg0->unk38->unk10 >> 24) == 2) {
        arg0->unk92 = 0x1E;
    }
    if ((arg0->unk38->unk10 >> 24) == 2) {
        D_80389EE1 = func_80375B6C(arg0, 1);
    } else {
        D_80389EE1 = func_80375B6C(arg0, 0);
    }

    switch (arg0->unk38->unk10 >> 24) {
    case 1:
        if (func_80133A24(arg0->unk38->unk14 & 0xFFFF) != 0) {
            D_801BBF42[0] = 0;
            func_800179B0(D_803884B8[arg0->unk38->unk14 >> 16]);
        } else {
            D_801BBF42[0] = 1;
            func_800179B0(D_803884B8[arg0->unk38->unk14 >> 16]);
            func_80133980(arg0->unk38->unk14 & 0xFFFF);
            D_801BBC06 = 1;
            func_8013D520(0x27, 1);
            arg0->unk92 = 0x5A;
            D_80389EE0 = 0x27;
            func_80005670((s32) arg0, D_803884A4);
        }
        break;
    case 0:
    case 2:
        if ((arg0->unk38->unk14 & 0xFFFF) != 0) {
            if (func_80133A24(arg0->unk38->unk14 & 0xFFFF) != 0) {
                D_801BBF42[0] = 0;
                func_800179B0(D_803884B8[arg0->unk38->unk14 >> 16]);
            } else {
                D_801BBF42[0] = 1;
                func_800179B0(D_803884B8[arg0->unk38->unk14 >> 16]);
                func_80133980(arg0->unk38->unk14 & 0xFFFF);
            }
        } else if (arg0->unk90 != 0) {
            D_801BBF42[0] = 0;
            func_800179B0(D_803884B8[arg0->unk38->unk14 >> 16]);
        } else {
            D_801BBF42[0] = 1;
            func_800179B0(D_803884B8[arg0->unk38->unk14 >> 16]);
            arg0->unk90 = 1;
        }
        break;
    }

    sp24->unk78 = 1;
    func_800058DC(arg0, (void *) func_803768AC);
}
