#include "context.h"

typedef struct func_801DFE50_StructInfo {
    u8 pad[0xE];
    u16 id;
} func_801DFE50_StructInfo;
typedef struct func_801DFE50_StructArg {
    u8 pad[0x24];
    func_801DFAA4_StructB *unk24;
    u8 pad28[0x34];
    func_801DFE50_StructInfo *unk5C;
} func_801DFE50_StructArg;
extern s32 func_80020DAC(s32);
extern u16 D_801BBBF4;
extern u16 D_801E2010[][2];
extern u16 D_801E202C[][2];
extern u16 D_801E2048[][2];
extern f32 D_801E3FAC;

void func_801DFE50(func_801DFE50_StructArg *arg0, u8 arg1) {
    func_801DFE50_StructInfo *info;
    u32 pad40;
    f32 scale;
    func_801DE6F4_StructVec pos;
    u8 variant;
    u16 id;
    u32 pad24;

    info = arg0->unk5C;
    scale = D_801E3FAC;
    variant = 0;
    pos.x = arg0->unk24->unk2C[1];
    pos.y = arg0->unk24->unk2C[2];
    pos.z = arg0->unk24->unk2C[3];
    if (arg1 != 6) {
        variant = func_801DFE00((s32)arg0);
    } else {
        scale = 1.5f;
        if (D_801BBBF4 == 0x29) {
            variant = 1;
        } else if (D_801BBBF4 == 0x38) {
            if (func_80020DAC(0x238)) {
                variant = 1;
            }
        }
    }
    if (info->id == 0x29) goto a;
    if (info->id == 0x2C) goto a;
    if (info->id == 0x50) goto b;
    if (info->id == 0x11B) goto c;
    if (info->id != 0x11C) goto c;
    goto c;
a:
    func_801DC9C4(pos, D_801E202C[arg1][variant], scale);
    return;
b:
    func_801DC9C4(pos, D_801E2048[arg1][variant], scale);
    return;
c:
    func_801DC9C4(pos, D_801E2010[arg1][variant], scale);
}
