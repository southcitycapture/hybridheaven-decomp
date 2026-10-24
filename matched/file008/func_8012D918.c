#include "context.h"

typedef struct func_8012D918_StructB { u8 pad[0x2C]; s32 unk2C; } func_8012D918_StructB;
typedef struct func_8012D918_StructA { u8 pad[0x24]; func_8012D918_StructB *unk24; } func_8012D918_StructA;

void func_8012D918(func_8012D918_StructA *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 pad;
    s32 sp20;
    u16 a0;
    u8 *v1;
    func_8012C97C_Struct *v0;

    *(s32 *)((u8 *)&sp20 + 0xC) = arg1;
    *(s32 *)((u8 *)&sp20 + 0x14) = arg3;
    arg3 &= 0xFF;
    arg1 &= 0xFFFF;
    if (arg0->unk24->unk2C != 0) {
        if (arg4 == 0) {
            v1 = (u8 *)D_8008DA88[arg3]->unk2C + 0x40;
        } else {
            v1 = (u8 *)D_8008DA88[arg3]->unk2C + 0x44;
        }
    } else if (arg4 == 0) {
        v1 = (u8 *)D_8008DA88[arg3]->unk30 + 0x40;
    } else {
        v1 = (u8 *)D_8008DA88[arg3]->unk30 + 0x44;
    }
    v0 = D_80171CEC[arg1];
    sp20 = v0->unk4[arg2];
    if ((sp20 & 0x0F000000) == 0x0D000000) {
        a0 = v0->unk0[1];
        func_80017064(a0, (u8 *)arg1, (u8 *)arg2, (u8 *)arg3);
        goto l1;
l1:
        *(s32 *)v1 = (func_80005204(a0) + sp20 + 0x80000000) & 0xFFFFFF;
    } else {
        a0 = v0->unk0[0];
        func_80017064(a0, (u8 *)arg1, (u8 *)arg2, (u8 *)arg3);
        goto l2;
l2:
        *(s32 *)v1 = (func_80005204(a0) + sp20 + 0x80000000) & 0xFFFFFF;
    }
}
