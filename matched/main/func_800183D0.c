#include "context.h"

extern u16 func_80002BE0(u8);
extern u16 func_80002D00(u8);
extern u16 func_80002DBC(u8, s32, u8 *);
extern u16 func_8000303C(u8, u8);
extern u16 func_80003118(u8, u8 *);
extern void func_80017820(u16);
extern void func_80141108(void);
extern u16 func_801414B0(s32);
extern u16 func_80141934(u8);
extern u8 D_8008EBC5;
extern u8 D_8008EBC7;

void func_800183D0(u32 arg0) {
    u8 sp1F;

    switch ((arg0 >> 16) & 0xF) {
    case 0: D_8008EBC4 = func_80002BE0(D_8008EBC5); break;
    case 1: D_8008EBC4 = func_80002D00(D_8008EBC5); break;
    case 2: D_8008EBC4 = func_801414B0(1); break;
    case 3: D_8008EBC4 = func_8000303C(D_8008EBC5, D_8008EBC7); break;
    case 4:
        D_8008EBC4 = func_80003118(D_8008EBC5, &sp1F);
        D_8008EBC6 = sp1F;
        break;
    case 5: func_80017820(D_8008EBC4); return;
    case 6: func_80141108(); return;
    case 7: func_801414B0(0); return;
    case 8: D_8008EBC4 = func_801414B0(2); break;
    case 9: D_8008EBC4 = func_80002DBC(D_8008EBC5, 0, &sp1F); break;
    case 10: D_8008EBC4 = func_80141934(D_8008EBC5); break;
    }
}
