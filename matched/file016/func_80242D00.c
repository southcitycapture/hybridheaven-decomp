#include "context.h"

extern void func_8001F74C(void *);
extern void func_801BF1B0(s32);
extern s32 func_801C3D90();
extern u8 func_80242D64[];

typedef struct func_80242D00_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
} func_80242D00_Struct;

void func_80242D00(void *arg0, s32 arg1) {
    if ((func_80126CC0(arg0, func_80126EAC) != 0) && (func_801C3D90() != 0)) {
        ((func_80242D00_Struct *)arg0)->unk3C = 0;
        func_8001F74C(arg0);
        func_801BF1B0(0);
        func_800058DC(arg0, func_80242D64);
    }
}
