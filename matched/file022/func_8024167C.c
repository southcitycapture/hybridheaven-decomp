#include "context.h"

typedef struct func_8024167C_Sub {
    u8 pad0[0x63];
    u8 unk63;
} func_8024167C_Sub;

typedef struct func_8024167C_Glob {
    u8 pad0[0xDC];
    func_8024167C_Sub *unkDC;
    u8 pad1[0xBA2 - 0xE0];
    u8 unkBA2;
} func_8024167C_Glob;

typedef struct func_8024167C_Obj {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x38 - 0x24];
    u16 *unk38;
} func_8024167C_Obj;

extern s32 func_80126CC0(void *arg0, void *arg1);
extern void func_8013B570(void *arg0, u16 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_80127014(void);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80241708(void);

void func_8024167C(void *arg0, s32 arg1) {
    func_8024167C_Glob *g = (func_8024167C_Glob *)&D_801BBBF0;
    func_8024167C_Obj *obj = arg0;

    g->unkBA2 = 1;
    if (g->unkDC->unk63 != 0 && func_80126CC0(arg0, func_80127014) != 0) {
        obj->unk18 = func_8012E5B0;
        obj->unk20 = func_8012E6BC;
        func_8013B570(obj, obj->unk38[1], 2, 3, func_80241708);
    }
}
