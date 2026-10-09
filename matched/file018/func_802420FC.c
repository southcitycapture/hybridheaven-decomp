#include "context.h"
s32 func_80126CC0(s32, void *);
extern void func_80127014(void);
void func_80242178(s32 arg0, s32 arg1);

extern u8 D_8025C6FB;
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_8013B570(void *, u16, s32, s32, void *);

typedef struct func_802420FC_Struct1 {
    u8 pad0[0x2];
    u16 unk2;
} func_802420FC_Struct1;

typedef struct func_802420FC_Struct0 {
    u8 pad0[0x18];
    void (*unk18)(void);
    u8 pad1[0x4];
    void (*unk20)(void);
    u8 pad2[0x14];
    func_802420FC_Struct1 *unk38;
} func_802420FC_Struct0;

void func_802420FC(func_802420FC_Struct0 *arg0, s32 arg1) {
    if (D_8025C6FB == 0x64 && func_80126CC0((s32)arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_80242178);
    }
}
