#include "common.h"
extern u16 D_80037A30[];
u8 func_80004D20(s32 arg0, u8 *arg1);


extern u16 D_80037A32[];

typedef struct func_80004ADC_Node {
    s32 unk0;
    u8 *unk4;
} func_80004ADC_Node;

extern func_80004ADC_Node *D_800429B8[];
extern u8 D_80037744[];

/* stripped debug print: the flag test stays in the source, the print itself compiles to nothing */
#define DPRINT(args) ((void)(args))

s32 func_80004ADC(u16 arg0, s32 arg1) {
    s32 i;
    func_80004ADC_Node *p;
    s32 v;
    s32 off;

    i = 0;
    p = D_800429B8[arg0];
    if (D_80037744[0] != 0) {
        DPRINT((arg0, arg1));
    }
    while (arg0 >= D_80037A30[i]) {
        i += 2;
        if (D_80037A30[i] == 0) {
            return 0;
        }
    }
    v = p->unk0;
    off = arg1 - (D_80037A32[i] << 24);
    while (v != 0) {
        func_80004D20(v, p->unk4 + off);
        v = p[1].unk0;
        p++;
    }
    return 1;
}
