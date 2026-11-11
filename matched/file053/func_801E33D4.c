#include "common.h"
extern s32 D_801E8184;
s32 func_801C0B8C(u64 time);


typedef struct func_801E33D4_S0 { u8 b[0x230]; } func_801E33D4_S0;
typedef struct func_801E33D4_S2 { u8 b[0x6E0]; } func_801E33D4_S2;
typedef struct func_801E33D4_S4 { u8 b[0x780]; } func_801E33D4_S4;
extern void func_801C6434(void);
extern void func_801C645C(u32, void *);
extern void func_801C64E8(void);
extern void func_801C6C30(u32, void *);
extern void func_801C72B0(void);
extern void func_801C72D0(u32, void *);

extern func_801E33D4_S0 D_801E8188;
extern func_801E33D4_S2 D_801E83B8;
extern func_801E33D4_S4 D_801E8A98;

s32 func_801E33D4(s32 arg0, s32 arg1) {
    func_801E33D4_S0 buf0;
    func_801E33D4_S2 buf2;
    func_801E33D4_S4 buf4;

    switch (D_801E8184) {
    case 0:
        func_801C6434();
        buf0 = D_801E8188;
        func_801C645C(0x14, &buf0);
        D_801E8184 = 1;
        break;
    case 1:
        if (func_801C0B8C(0x50DF20) != 0) {
            func_801C64E8();
            D_801E8184 = 2;
        }
        break;
    case 2:
        buf2 = D_801E83B8;
        func_801C6C30(0x37, &buf2);
        D_801E8184 = 3;
        break;
    case 3:
        if (func_801C0B8C(0x588040) != 0) {
            D_801E8184 = 4;
        }
        break;
    case 4:
        buf4 = D_801E8A98;
        func_801C72B0();
        func_801C72D0(0x3C, &buf4);
        D_801E8184 = 5;
        break;
    case 5:
        return 3;
    }
    return 2;
}
