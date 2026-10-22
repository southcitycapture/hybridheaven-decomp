#include "context.h"

typedef struct func_80239E80_StructQ {
    u8 pad[0x31];
    u8 high : 1;
    u8 middle : 4;
    u8 low : 3;
    u8 pad2[0x2D8 - 0x32];
    u8 unk2D8;
} func_80239E80_StructQ;
typedef struct func_80239E80_StructG {
    u8 pad[0x2D4];
    u8 *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
} func_80239E80_StructG;
typedef struct func_80239E80_StructR {
    u8 pad[0x74];
    u8 unk74;
} func_80239E80_StructR;
typedef struct func_80239E80_Struct {
    u8 pad[0x90];
    func_80239E80_StructR *unk90;
    u8 pad2[0x4];
    func_80239E80_StructQ *unk98;
} func_80239E80_Struct;

extern u8 D_801842A0[];
extern u8 D_801BCC25;

void func_80239E80(func_80239E80_Struct *arg0, s32 arg1) {
    func_80239E80_StructG *p;
    func_80239E80_StructQ *q;
    func_80239E80_StructR *r;
    u8 u;

    r = arg0->unk90;
    p = (r->unk74 == 0 || r->unk74 == 2) ? (func_80239E80_StructG *)D_801BC03C : (func_80239E80_StructG *)D_801BC3D8;
    if (p->unk2D8 == 0xA) {
        func_8013CD04(p, p->unk2D9, 0, arg0);
        func_800058DC(arg0, func_8023A09C);
        return;
    }
    if (p->unk2D8 != 0xB && p->unk2D8 != 0xC) {
        p->unk2D4 = D_801842A0 + p->unk2D9 * 0x1C;
        func_80231CE4(p);
        func_800058DC(arg0, func_8023A09C);
        return;
    }
    q = arg0->unk98;
    u = q->unk2D8;
    if (u == 0xB || u == 0xC) {
        D_801BCC25 = 1;
        q->low = 0;
        q->high = 1;
    }
    func_800058DC(arg0, func_8023A0EC);
}
