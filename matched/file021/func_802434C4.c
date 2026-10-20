#include "context.h"

struct func_8024358C_StructArg0;
struct func_8024358C_StructArg1;
extern void func_8024358C(struct func_8024358C_StructArg0 *, struct func_8024358C_StructArg1 *);

struct func_802434C4_StructArg0 {
    u8 pad[0x90];
    u16 unk90;
};

void func_802434C4(struct func_802434C4_StructArg0 *arg0, s32 arg1) {
    D_801BBBF0.unkF23++;
    D_801BBBF0.unkF24 = (u8)(D_801BBBF0.unkF24 - 2);
    D_801BBBF0.unkF25 = (u8)(D_801BBBF0.unkF25 - 2);
    if (D_801BBBF0.unkF23 >= 0x96) {
        D_801BBBF0.unkF23 = 0x96U;
    }
    if ((s32)D_801BBBF0.unkF24 < 3) {
        D_801BBBF0.unkF24 = 2U;
    }
    if ((s32)D_801BBBF0.unkF25 < 3) {
        D_801BBBF0.unkF25 = 2U;
    }
    if ((D_801BBBF0.unkF23 == 0x96) && (D_801BBBF0.unkF24 == 2) && (D_801BBBF0.unkF25 == 2)) {
        arg0->unk90 = 0x96;
        func_800058DC((s32)arg0, func_8024358C);
    }
}
