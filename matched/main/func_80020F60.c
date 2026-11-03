#include "common.h"
extern u8 D_800CBB22;
extern s32 D_800CBB48;
extern void (*D_80047E0C[])(void);
void func_80021EB8(void);


extern u32 D_800CBB28[];
extern u8 D_800CBB20;
void func_80021094(void);
void func_80021968(s32);
void func_80022C8C(void);
void func_80020A7C(s32);

/* GGA: sndServeRequests */
void func_80020F60(void) {
    s32 i = 0;
    u16 id;

    while (D_800CBB22 != 0) {
        D_800CBB48 = D_800CBB28[i++];
        D_800CBB22--;
        id = D_800CBB48 & 0xFFFF;
        if (id < 0x100) {
            if (id < 0x10) {
                D_80047E0C[id - 1]();
            } else {
                func_80021EB8();
            }
        } else if (id < 0x8000) {
            func_80021968(0);
        } else {
            func_80022C8C();
        }
    }
    i = 0;
    func_80021094();
    while (D_800CBB20 != 0) {
        func_80020A7C(i);
        i++;
        D_800CBB20--;
    }
}
