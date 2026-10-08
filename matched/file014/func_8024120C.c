#include "context.h"

typedef struct func_8024120C_StructB {
    u8 pad0[2];
    u16 unk2;
} func_8024120C_StructB;

typedef struct func_8024120C_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    func_8024120C_StructB *unk38;
} func_8024120C_Struct;

extern void func_80005700(void *);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80127014(void);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_802412A0(void);

void func_8024120C(func_8024120C_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x47) != 0) {
        func_80005700(arg0);
        return;
    }
    if (func_80126CC0(arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_802412A0);
    }
}
