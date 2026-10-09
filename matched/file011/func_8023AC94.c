#include "context.h"
extern struct func_8023A2BC_Struct D_80240880;
extern s32 func_801453CC(s32, s32, s32, u8, s32, s32, s32);


struct func_8023AC94_Obj {
    u8 pad0[0x10];
    struct func_8023AC94_Obj *unk10;
    u8 pad14[0x22 - 0x14];
    u8 unk22;
};

struct func_8023AC94_Top {
    u8 pad0[0x4];
    struct func_8023AC94_Obj *unk4;
    u8 pad8[0x20 - 0x8];
    u8 unk20;
    u8 unk21;
    u8 unk22;
};

void func_8023AC94(void) {
    func_801453CC((s32)((struct func_8023AC94_Top *)&D_80240880)->unk4, 0x180, 5, 0x1A, 1, 3, 0x1A);
    func_801453CC((s32)((struct func_8023AC94_Top *)&D_80240880)->unk4->unk10, 0, 5, 0x1A, 1, 3, 0x1A);
    if (((struct func_8023AC94_Top *)&D_80240880)->unk20 == 0) {
        ((struct func_8023AC94_Top *)&D_80240880)->unk4->unk22 = 0;
    } else {
        ((struct func_8023AC94_Top *)&D_80240880)->unk4->unk22 = 1;
    }
    if (((struct func_8023AC94_Top *)&D_80240880)->unk20 == ((struct func_8023AC94_Top *)&D_80240880)->unk22) {
        ((struct func_8023AC94_Top *)&D_80240880)->unk4->unk10->unk22 = 0;
        return;
    }
    ((struct func_8023AC94_Top *)&D_80240880)->unk4->unk10->unk22 = 1;
}
