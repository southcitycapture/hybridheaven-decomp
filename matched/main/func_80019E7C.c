#include "context.h"

extern u8 D_8008EBC3;

typedef struct func_80019E7C_Struct {
    u8 pad0[0x10];
    u8 unk10;
    u8 unk11;
    u8 pad12[0xA];
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    u8 pad26[0x26 - 0x26];
} func_80019E7C_Struct;

extern func_80019E7C_Struct D_8008EC18[];

void func_80019E7C(s32 arg0, s32 arg1) {
    func_80019E7C_Struct *p;
    s16 a;
    s16 b;
    u16 i;
    s32 d = 10;

    switch (*(u16 *)&D_8008EBD2) {
    case 0:
        i = D_8008EBC2;
        p = &D_8008EC18[i];
        p->unk1C -= (p->unk10 * 16) / d;
        a = p->unk1C;
        p->unk1E -= (p->unk11 * 16) / d;
        if (a <= 0 || (b = p->unk1E) <= 0) {
            p->unk1C = 0;
            p->unk1E = 0;
            p->unk20 = 0;
            p->unk22 = 0;
            p->unk24 = 0;
            func_8001A804(i & 0xFF, "sx sy sf wa fa", 0, 0, 0, 0, 0);
            func_800058DC(arg0, func_80017BB8);
            return;
        }
        {
            extern void func_8001A804();
            func_8001A804(i & 0xFF, "wa fa", a >> 4, b >> 4);
        }
        return;
    case 1:
        func_8001A804(D_8008EBC3, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_800058DC(arg0, func_80017BB8);
        return;
    }
}
