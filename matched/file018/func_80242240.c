#include "context.h"

extern void func_80126968(void);
extern u8 D_80257D5C[];
extern s32 D_80203830(s32, void *);
void func_80242310(s32 arg0, s32 arg1);

typedef struct func_80242240_Struct1 {
    u8 pad[2];
    u16 unk2;
} func_80242240_Struct1;

typedef struct func_80242240_Struct0 {
    u8 pad0[0x18];
    void (*unk18)(void);
    u8 pad1[4];
    void (*unk20)(void);
    u8 pad2[0x14];
    func_80242240_Struct1 *unk38;
} func_80242240_Struct0;

void func_80242240(func_80242240_Struct0 *arg0, s32 arg1) {
    register struct func_80242178_Struct *globals;
    if ((D_801BBCCC[0x63] != 0) &&
        (func_80133A24(0x145) == 0) &&
        (func_80126CC0((s32)arg0, func_80127014) != 0)) {
        func_80126968();
        func_8001F74C(arg0);
        func_8013B570(arg0, arg0->unk38->unk2, 2, 3, func_80242310);
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        D_80203830((s32)arg0, D_80257D5C);
        globals = &D_801BBBF0;
        globals->unk1088 = (s32)arg0;
        globals->unk10A0 = globals->unk40;
    }
}
