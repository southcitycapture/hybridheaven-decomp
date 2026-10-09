#include "context.h"

typedef struct func_80152F7C_Struct {
    u8 pad0[0x12];
    u16 unk12;
    u8 pad1[2];
    u8 unk16;
    u8 pad2[1];
    u16 unk18[3];
    u8 pad3[4];
    u8 unk22;
} func_80152F7C_Struct;

extern s32 func_80152890(s32 arg0);
extern u16 func_80152980(s32 arg0, s32 arg1);
extern u16 D_80183AD0;

#define D_STRUCT (*(func_80152F7C_Struct *) &D_8017DD7C)

void func_80152F7C(void) {
    if (D_STRUCT.unk16 == 2) {
        if (func_80152890(0) < 3) {
            D_STRUCT.unk12 = D_80183AD0;
            return;
        }
        D_STRUCT.unk12 = func_80152980(0, (D_STRUCT.unk22 + 2) & 0xFF);
        return;
    }
    D_STRUCT.unk12 = D_STRUCT.unk18[D_STRUCT.unk22];
}
