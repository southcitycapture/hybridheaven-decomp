#include "context.h"

struct func_801E5C00_Mid {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad1[0x48 - 0x16];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 pad2;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_801E5C00_Inner {
    u8 pad0[0x30];
    struct func_801E5C00_Mid *unk30;
};

struct func_801E5C00_Top {
    u8 pad0[0x24];
    struct func_801E5C00_Inner *unk24;
};

void func_801E5C00(void) {
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk48 = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk48 + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk49 = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk49 + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4A = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4A + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4C = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4C + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4D = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4D + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4E = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4E + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk10 = (s16) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk10 + 0x71);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk12 = (s16) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk12 + 0x71);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk14 = (s16) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk14 + 0x71);
}
