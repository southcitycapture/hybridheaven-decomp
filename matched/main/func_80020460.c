#include "common.h"
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
extern u8 D_800CBAB0;
extern u8 D_800CBAB1;
extern u16 D_800CBAB2;
extern s32 D_800CBB48;
extern u16 D_800CBB4C;
extern u8 D_800CBDB0[];
extern u8 D_800CBDB3;
extern u8 D_800CBDD0;
extern void (*D_80047E0C[])(void);
void func_8002059C(void);
void func_800211B4(void);
void func_800213DC(void);
extern s32 func_80021EB8();
void func_80022044(void);
void func_80022778(u8 arg0);
void func_80022DC0(void);


s32 func_80020460(s32 arg0) {
    u32 w;
    u8 *end;
    u8 *p;

    if (D_800CBAB0 != 0) {
        if (D_800CBAB0 == 8) {
            func_8002059C();
        }
        D_800CBAB0--;
    } else {
        p = D_800CBDB0;
        if (D_800CBB4C != 0) {
            func_80022044();
        } else {
            end = D_800CBDB0 + 3;
loop:
            if (*p != 0) {
                if ((s32)(w = *p) < 0xF0) {
                    D_800CBB48 = *p;
                    func_80021EB8(end, w);
                } else {
                    func_80022778(w & 0xF);
                }
                *p = 0;
            } else {
                p++;
                if (p != end) {
                    goto loop;
                }
            }
        }
        if (D_800CBDB3 != 0) {
            func_800211B4();
        }
        if (D_800CBDD0 != 0) {
            func_800213DC();
        }
        if (D_800CBAB1 == 0) {
            func_80020F60();
        }
        func_80022DC0();
        D_800CBAB2++;
    }
    return 0x1388;
}
