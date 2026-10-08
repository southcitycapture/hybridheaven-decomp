#include "common.h"

void func_801C250C(void *);
void func_801C25B0(void *);
void func_8038BB6C(void);
extern s32 D_8038D870;
extern s32 D_8038D874;
extern u8 D_8038DD90[];
extern u8 D_8038DF70[];

s32 func_8038BAA8(void) {
    s32 i;
    u8 *p;

    if (D_8038D870 != 0) {
        i = 0;
        if (D_8038D870 > 0) {
            p = D_8038DD90;
            do {
                func_801C250C(p);
                i += 1;
                p += 0x18;
            } while (i < D_8038D870);
        }
        D_8038D870 = 0;
    }
    if (D_8038D874 != 0) {
        i = 0;
        if (D_8038D874 > 0) {
            p = D_8038DF70;
            do {
                func_801C25B0(p);
                i += 1;
                p += 0xC;
            } while (i < D_8038D874);
        }
        D_8038D874 = 0;
    }
    func_8038BB6C();
    return 1;
}
