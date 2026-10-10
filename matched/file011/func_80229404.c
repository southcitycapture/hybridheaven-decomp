#include "context.h"

/* Forward tags and externs matching context.h (no typedef copies, so no redeclaration). */
struct func_8022B4A4_StructBase;
struct func_8022B4A4_StructEntry;
extern struct func_8022B4A4_StructBase D_801BBBF0;
extern struct func_8022B4A4_StructEntry D_801BC03C;
extern struct func_8022B4A4_StructEntry D_801BC3D8;

typedef struct func_80229404_StructSub {
    u8 pad0[0x7F];
    u8 unk7F;
    u8 unk80;
    u8 unk81;
    u8 unk82;
} func_80229404_StructSub;

typedef struct func_80229404_Struct {
    u8 pad0[0x2D9];
    u8 unk2D9;
    u8 pad1[0x334 - 0x2DA];
    func_80229404_StructSub *unk334;
} func_80229404_Struct;

s32 func_80376300();
void func_80376BE4(void *);

void func_80229404(func_80229404_Struct *arg0) {
    u8 *var_v0;

    if (arg0 == (func_80229404_Struct *) ((u8 *) &D_801BBBF0 + 0x44C)) {
        var_v0 = (u8 *) &D_801BC3D8;
    } else {
        var_v0 = (u8 *) &D_801BC03C;
    }
    if ((((*(u32 *) (var_v0 + 0x30)) << 0xB) >> 0x1E) == 1) {
        if (func_80376300() != 0) {
            arg0->unk2D9 = arg0->unk334->unk81;
        } else {
            arg0->unk2D9 = arg0->unk334->unk7F;
        }
    } else if (func_80376300() != 0) {
        arg0->unk2D9 = arg0->unk334->unk80;
    } else {
        arg0->unk2D9 = arg0->unk334->unk82;
    }
    func_80376BE4(arg0);
}
