#include "context.h"
typedef struct func_8035F544_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8035F544_Globals;
typedef struct func_8035F544_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035F544_Copy;
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);

typedef struct func_8035D3C8_StructBF {
    u8 pad0[0x30];
    u32 b0 : 1;
    u32 bf2 : 2;
    u32 b1 : 6;
    u32 bf1 : 2;
    u32 b2 : 21;
    u8 pad1[0x38 - 0x34];
    u32 hi : 3;
    u32 flag : 1;
    u32 rest : 28;
} func_8035D3C8_StructBF;

typedef struct func_8035D3C8_Hw {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x5C - 4];
    s32 unk5C;
} func_8035D3C8_Hw;

extern func_8035F544_Copy D_80385668;
extern func_8035F544_Copy D_80385674;
extern void func_8035DD80();
extern void func_8035D660();

void func_8035D3C8(void *arg0, s32 arg1) {
    void *sp54;
    s32 temp_a1;
    s32 sp4C;
    u8 *var_v1;
    u8 *var_v0;
    func_8035F544_Copy sp38;
    func_8035F544_Copy sp2C;
    u8 sp2B;

    if (arg0 != ((func_8035F544_Globals *)D_801BBBF0)->unkDC) {
        sp54 = ((func_8035F544_Globals *)D_801BBBF0)->unkDC;
    } else {
        sp54 = *(void **)(D_801BBBF0 + 0xEC);
    }
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x5C);
    sp4C = *(s32 *)((u8 *)sp54 + 0x5C);
    if (arg0 == ((func_8035F544_Globals *)D_801BBBF0)->unkDC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 == ((func_8035F544_Globals *)D_801BBBF0)->unkDC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    sp38 = D_80385668;
    sp2C = D_80385674;
    if ((((func_8035D3C8_Hw *)var_v1)->unk2 <= 0) || (((func_8035D3C8_StructBF *)var_v1)->bf2 != 0)) {
        func_802233B0(arg0, arg1);
        func_80006214(sp54);
        func_8022310C(sp54, (s32)D_8008DA88);
        func_80006214(arg0);
        return;
    }
    if ((((func_8035D3C8_Hw *)var_v0)->unk2 <= 0) || (((func_8035D3C8_StructBF *)var_v0)->bf2 != 0)) {
        func_80006214(sp54);
        func_802233B0(sp54, D_8008DA88);
        func_80006214(arg0);
        func_8022310C(arg0, arg1);
        return;
    }
    if (((func_8035F544_Globals *)D_801BBBF0)->unk1031 != 0xF) {
        if (!((func_8035D3C8_StructBF *)var_v1)->flag) {
            sp38.unk0 = 0x019000B1;
            sp2C.unk0 = 0x019000B0;
        } else {
            sp38.unk0 = 0x019000C2;
            sp2C.unk0 = 0x019000C3;
        }
        if (((func_8035D3C8_StructBF *)var_v1)->bf1 == 3) {
            ((u16 *)&sp2C)[3] = ((u16 *)&sp38)[3] = ((u16 *)&sp2C)[3] ^ 0x10;
        }
        sp2B = func_80011140(arg1, temp_a1, sp38, 3);
        func_80006214(sp54);
        sp2B += func_80011140((s32)D_8008DA88, sp4C, sp2C, 3);
        func_8035DD80(sp54, 1);
        func_80006214(arg0);
        if (sp2B == 2) {
            func_800058DC(arg0, func_8035D660);
        }
    }
}
