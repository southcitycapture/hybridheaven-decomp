#include "context.h"

struct func_801C84FC_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0xEF0 - 6];
    u16 unkEF0;
    u8 padEF2[0xEFC - 0xEF2];
    s32 unkEFC;
};
struct func_801C84FC_StructActor {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xE];
    u8 unk3E;
    u8 unk3F;
    u8 pad40[0xC];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 pad50[4];
    s32 unk54;
};
extern u8 D_801E0BD0[];
extern void *func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern void func_8001F74C(s32);
extern void func_801C4A5C(void *, s32);
extern s32 func_8012FF4C(void);
extern void func_803771E8();
struct func_801C8608_Outer;
extern void func_801C8608(struct func_801C8608_Outer *, s32);

void func_801C84FC(struct func_801C84FC_StructActor *arg0, s32 arg1) {
    if ((((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unk4 == 0x4D) ||
        (((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unk4 == 0x50) ||
        (((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unk4 == 0x51)) {
        func_80005670(arg0, D_801E0BD0);
    }
    arg0->unk3E = 5;
    arg0->unk3F = 0;
    arg0->unk2C |= 0x3E0;
    arg0->unk4C = 3;
    arg0->unk4D = 0x12;
    arg0->unk4E = 3;
    arg0->unk4F = 1;
    ((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unkEFC = 0xE7F;
    if (((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unkEF0 & 0x100) {
        arg0->unk54 = 0xF181;
    } else {
        arg0->unk54 = ((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unkEFC;
    }
    func_801C4A5C(arg0, 0);
    func_8001F74C((s32)arg0);
    if (func_8012FF4C() == 0x18) {
        func_800058DC(arg0, (void *)func_803771E8);
        return;
    }
    func_800058DC(arg0, (void *)func_801C8608);
}
