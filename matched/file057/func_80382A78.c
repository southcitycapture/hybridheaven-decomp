#include "context.h"

extern u8 D_8038CA7C[];
extern u8 D_8038CA80[];
extern u8 D_8038CA84[];
extern u8 D_8038CA88[];
extern u8 D_8038CA8C[];
extern u8 D_80389B14[];

struct func_80382A78_Struct {
    u8 pad0[0xC];
    void *unkC;
};

void func_80382A78(struct func_80382A78_Struct *arg0, s32 arg1) {
    extern void func_80005670();

    func_8001B204(2, 0, 0, D_8038CA7C);
    func_8001B204(3, 0, 0, D_8038CA80);
    func_8001B204(4, 0, 0, D_8038CA84);
    func_8001B204(5, 0, 0, D_8038CA88);
    func_8001B204(6, 0, 0, D_8038CA8C);
    func_80005670(arg0->unkC, D_80389B14);
    func_80005700(arg0);
}
