#include "common.h"
extern u8 D_801BBBF0[];
#define H(o) (*(u16 *)(D_801BBBF0 + (o)))
extern s32 func_800058DC(s32, void *);
u8 func_80126944(void);
extern void func_801C3B10(s32);


typedef struct func_80127374_StructObj {
    u8 pad[0x2C];
    s32 unk2C;
} func_80127374_StructObj;
extern void func_80133980(s32);
extern void func_801E5010(void);
extern void D_800058DC(void *, void *);

void func_80127374(func_80127374_StructObj *arg0, s32 arg1) {
    u16 temp;
    s32 p;

    if (func_80126944() == 0) {
        temp = H(0x3A4);
        if (temp != 0) {
            func_80133980(temp + (arg1 & 0));
        }
        H(0x3A4) = 0;
        temp = H(0x3A2);
        if (temp != 0) {
            H(0x2) = temp;
        }
        H(0x3A2) = 0;
        H(0xEF0) &= 0xFFEF;
        p = *(s32 *)(D_801BBBF0 + 0xF8);
        if (p == 0) {
            arg0->unk2C |= 0xE0;
            func_801C3B10(0);
            func_800058DC((s32)arg0, func_801E5010);
            return;
        }
        D_800058DC(arg0, (void *)p);
        *(s32 *)(D_801BBBF0 + 0xF8) = 0;
    }
}
