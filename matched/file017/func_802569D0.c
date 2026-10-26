#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80254B3C_Ctx LP(CX, __LINE__)
#define func_80254B3C_Args LP(AX, __LINE__)
#define func_80254B3C_Node LP(NX, __LINE__)
#define CX_125 CX_116
#define CX_126 CX_116
#define CX_130 CX_116
#define CX_184 CX_116
#define CX_222 CX_116
#define CX_250 CX_116
#define AX_145 AX_117
#define AX_222 AX_117
#define NX_250 NX_118
#include "context.h"
#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node

typedef struct func_802569D0_Inner {
    u8 pad0[0x4B];
    u8 unk4B;
} func_802569D0_Inner;
typedef struct func_802569D0_Node {
    u8 pad0[0x30];
    func_802569D0_Inner *unk30;
} func_802569D0_Node;
typedef struct func_802569D0_Args {
    func_802569D0_Node *unk0;
} func_802569D0_Args;

void func_802569D0(s32 arg0, func_802569D0_Args *arg1) {
    func_802569D0_Inner *temp_v0;

    temp_v0 = arg1->unk0->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 2);
    if ((s32) arg1->unk0->unk30->unk4B < 2) {
        func_80005700(arg0, (void **) arg1);
    }
}
