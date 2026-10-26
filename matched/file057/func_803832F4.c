#include "common.h"
typedef struct func_80383210_StructGlobal {
    u8 pad0[0x21];
    u8 unk21;
    u8 unk22;
} func_80383210_StructGlobal;
extern func_80383210_StructGlobal D_80240730;
extern void *func_80005670(void *, void *);
void *func_800058DC(void *, void *);
struct func_803831B8_Struct {
    u8 pad0[0x9C];
    u8 unk9C;
};
u8 func_803831B8(struct func_803831B8_Struct *arg0, u8 *arg1);
typedef struct func_80383210_Struct {
    u8 pad0[0x9C];
    u8 unk9C;
    u8 pad9D[0xA9 - 0x9D];
    u8 unkA9;
    u8 padAA[0xB0 - 0xAA];
    s16 unkB0;
} func_80383210_Struct;
extern void func_803833A8();

extern u8 D_80389B3C[];

void func_803832F4(func_80383210_Struct *arg0, s32 arg1) {
    func_80383210_Struct *sp1C;

    arg0->unkB0--;
    if (arg0->unkB0 < 0) {
        sp1C = func_80005670(arg0, D_80389B3C);
        sp1C->unkA9 = func_803831B8((struct func_803831B8_Struct *)arg0, arg0->unk9C + 0x1A + (u8 *)&D_80240730);
        sp1C->unkB0 = 0;
        arg0->unkA9++;
        if (arg0->unkA9 < D_80240730.unk22) {
            arg0->unkB0 = 0x1F;
            return;
        }
        arg0->unkB0 = 0xC8;
        func_800058DC(arg0, (void *)func_803833A8);
    }
}
