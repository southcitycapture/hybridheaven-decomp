#include "common.h"

typedef struct func_80241F50_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    struct func_80241F50_StructB *unk38;
} func_80241F50_Struct;

typedef struct func_80241F50_StructB {
    u8 pad0[2];
    u16 unk2;
} func_80241F50_StructB;

extern s32 func_80126CC0(void *, void *);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern u8 func_80127014[];
extern u8 func_8012E5B0[];
extern u8 func_8012E6BC[];
extern u8 func_80241FBC[];

void func_80241F50(func_80241F50_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_80241FBC);
    }
}
