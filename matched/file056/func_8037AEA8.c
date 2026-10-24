#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_8037AEA8 D_8037AEA8
#define func_8037AC08 LP(fA_, __LINE__)
#define func_8037B118 LP(fB_, __LINE__)
#include "context.h"
#undef func_8037AEA8
#undef func_8037AC08
#undef func_8037B118

typedef struct func_8037AEA8_StructU {
    u32 w0;
    u16 h4;
} func_8037AEA8_StructU;
typedef struct func_8037AEA8_StructP {
    u8 pad[0x1C];
    union {
        func_8037A320_StructE e;
        func_8037AEA8_StructU u;
    } x;
} func_8037AEA8_StructP;

extern void func_8037AFD0();
extern void func_8037B86C();

void func_8037AEA8(func_8037A320_StructA *arg0, s32 arg1, s32 arg2) {
    func_8037AEA8_StructP *sp24;
    s32 n;
    u16 sp1E;
    func_8037A320_StructE *v;

    n = (s32)arg0->unk5C;
    sp24 = (func_8037AEA8_StructP *)n;
    sp1E = func_80010550(arg1, n, arg2);
    n = 0;
    if (func_8037B9F0((func_8037B9F0_StructB *)arg0) == 0) {
        v = &sp24->x.e;
        sp24 = NULL;
        if (((func_8037AEA8_StructU *)v)->h4 >= 0x15) {
            if (func_80020DAC(0x308) == 0) {
                if (func_80020DAC(0x309) == 0) {
                    if (func_80020DAC(0x30A) == 0) {
                        func_801DFAA4(arg0, 0);
                    }
                }
            }
        }
        sp24 = NULL;
        if (sp1E != 0) {
            if (D_8017DC42 > 0) {
                v->w0 = 0x0190001A;
                v->h4 = 0;
                v->h6 = 0;
                func_8013A28C(arg1, *v);
                func_800058DC(arg0, func_8037AFD0);
                return;
            }
            D_8038A93C = 0;
            func_80020744(0xA);
            func_800058DC(arg0, func_8037B86C);
        }
    }
}
