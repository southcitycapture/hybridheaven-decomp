#include "context.h"

typedef struct func_80145268_Obj {
    u8 pad0[0xC];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    u8 pad1[0x3C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80145268_Obj;

typedef struct func_80145268_Struct {
    u8 pad0[0x2A];
    u16 unk2A;
    u8 pad1[4];
    func_80145268_Obj *unk30;
} func_80145268_Struct;

void func_80145268(s32 arg0, u8 arg1) {
    func_80145268_Struct *a0 = (func_80145268_Struct *) arg0;
    u8 *temp_v0;

    arg1 = arg1 & 0xFF;
    if (a0->unk2A == 0xC) {
        temp_v0 = (arg1 * 4) + D_801819E8;
        a0->unk30->unk4C = temp_v0[0];
        a0->unk30->unk4D = temp_v0[1];
        a0->unk30->unk4E = temp_v0[2];
        a0->unk30->unk4F = temp_v0[3];
        return;
    }
    if (a0->unk2A == 0xD) {
        temp_v0 = (arg1 * 4) + D_801819E8;
        a0->unk30->unkC = temp_v0[0];
        a0->unk30->unkD = temp_v0[1];
        a0->unk30->unkE = temp_v0[2];
        a0->unk30->unkF = temp_v0[3];
    }
}
