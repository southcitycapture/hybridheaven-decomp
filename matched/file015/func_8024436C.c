#include "common.h"
typedef struct func_8024148C_StructArg func_8024148C_StructArg;
extern void func_800058DC(void *, void *);
extern s32 func_8013A1B4();
typedef struct func_80244320_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_80244320_Struct;
typedef struct func_8024443C_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024443C_StructArg;
typedef struct func_8024443C_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_8024443C_StructInner;
typedef struct func_8024443C_StructNode {
    u8 pad[0x2C];
    func_8024443C_StructInner *unk2C;
} func_8024443C_StructNode;
void func_8024443C(func_8024443C_StructArg *arg0, func_8024443C_StructNode ** volatile arg1);


typedef struct func_8024436C_StructG { s32 w[3]; } func_8024436C_StructG;
extern func_8024436C_StructG D_8025243C;
extern s32 func_80011140();

void func_8024436C(func_80244320_Struct *arg0, void **arg1) {
    s32 sp2C[1];

    sp2C[0] = arg0->unk5C;
    if ((arg0->unk90++ >= 0x14) && func_80011140(arg1, sp2C[0], D_8025243C, 0x14)) {
        func_8013A1B4(arg1, D_8025243C, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024443C);
    }
}
