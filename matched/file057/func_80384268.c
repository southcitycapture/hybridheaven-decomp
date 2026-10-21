#include "context.h"
extern u8 func_80378D84();
extern s32 func_80378E3C();
extern u8 D_80389B64[];
extern u8 D_8038CAE0[];
extern u8 D_8038CB00[];
typedef struct func_80384268_Struct {
    u8 pad0[0x90];
    u16 unk90[6];
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[8];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_80384268_Struct;
extern func_80384268_Struct *D_80005670(void *, void *);
struct func_80384484_Struct;
void func_80384484(struct func_80384484_Struct *arg0, s32 arg1);

void func_80384268(func_80384268_Struct *arg0, s32 arg1) {
    u8 sp67;
    u16 sp58[6];
    s32 v;
    u8 pad;
    u8 sp52;
    s32 w;
    func_80384268_Struct *p;

    sp58[0] = arg0->unk90[0];
    sp58[1] = arg0->unk90[1];
    sp58[2] = arg0->unk90[2];
    sp58[3] = arg0->unk90[3];
    sp58[4] = arg0->unk90[4];
    sp58[5] = arg0->unk90[5];
    v = arg0->unkA9;
    if ((1 << v) & arg0->unkA0) {
        func_80381F40(arg0, 0x2E, (s16)(v * 14 + 0x64), 0xC0, 0xC0, 0xC0, v + 6, &sp67);
        sp52 = func_80378D84(arg0->unkA9);
        arg1 = func_80378E3C(arg0->unkA9);
        w = arg0->unkA9;
        func_8001B204(w, 0x75, (s16)(w * 14 + 0x64), D_8038CAE0, 1, 2, sp52, 0, 0, sp58[w], 1, 2, arg1);
        p = D_80005670(arg0, D_80389B64);
        p->unkA9 = arg0->unkA9 + 3;
        p->unkB0 = 2;
    } else {
        func_80381F40(arg0, 0x2E, (s16)(v * 14 + 0x64), 0x60, 0x60, 0x60, v + 6, &sp67);
        sp52 = func_80378D84(arg0->unkA9);
        arg1 = func_80378E3C(arg0->unkA9);
        w = arg0->unkA9;
        func_8001B204(w, 0x75, (s16)(w * 14 + 0x64), D_8038CB00, 1, 0, sp52, 0, arg1);
    }
    arg0->unkB0 = 0xA;
    func_800058DC(arg0, func_80384484);
}
