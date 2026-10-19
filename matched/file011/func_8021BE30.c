#include "context.h"

typedef struct func_8021BE30_Struct {
    u8 pad[0x90];
    u8 unk90;
} func_8021BE30_Struct;
typedef struct func_8021BE30_StructA {
    u8 pad[0x9C];
    func_8021BE30_Struct *unk9C;
} func_8021BE30_StructA;
typedef struct func_8021BE30_StructB {
    u8 pad[0x94];
    void *unk94;
    u8 pad2[0xA8 - 0x98];
    u8 unkA8;
} func_8021BE30_StructB;

extern void func_80229524();
extern u16 D_801BBC1C;
extern void func_8021BF74();
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_803896B4[];
extern u8 D_80389704[];
extern u8 D_80389718[];

void func_8021BE30(func_8021BE30_StructA *arg0, s32 arg1) {
    if (arg0->unk9C->unk90 != 0) {
        if ((D_801BBC1C != 0xA) && (D_801BBC1C != 0xB)) {
            func_80229524(*(s32 *)(D_801BBBF0 + 0xEC));
            if (*(u16 *)(D_801BBBF0 + 0x2C) == 0xF) {
                func_80229524(*(s32 *)(D_801BBBF0 + 0xDC));
            }
        }
        ((func_8021BE30_StructB *)func_80005670(arg0, D_80389704))->unkA8 = 0;
        if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
            ((func_8021BE30_StructB *)func_80005670(arg0, D_80389704))->unkA8 = 1;
        }
        ((func_8021BE30_StructB *)func_80005670(arg0, D_803896B4))->unk94 = D_801BC03C;
        ((func_8021BE30_StructB *)func_80005670(arg0, D_803896B4))->unk94 = D_801BC3D8;
        ((func_8021BE30_StructB *)func_80005670(arg0, D_80389718))->unkA8 = 0;
        ((func_8021BE30_StructB *)func_80005670(arg0, D_80389718))->unkA8 = 1;
        func_800058DC(arg0, func_8021BF74);
        D_801BCC21 = 5;
    }
}
