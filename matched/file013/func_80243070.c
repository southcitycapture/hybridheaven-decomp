#include "common.h"
extern void func_8001F74C(void *);
extern s32 func_80126CC0(void *, void *);


typedef struct func_80243070_StructB {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[12];
    u32 unk10;
} func_80243070_StructB;

typedef struct func_80243070_StructA {
    u8 pad0[0x38];
    func_80243070_StructB *unk38;
} func_80243070_StructA;
extern void func_80127014(void);
extern void func_8024310C();
extern void func_8024388C();
extern s32 func_8013B570();

void func_80243070(func_80243070_StructA *arg0, s32 arg1) {
    func_8001F74C(arg0);
    if (func_80126CC0(arg0, func_80127014) != 0) {
        switch (arg0->unk38->unk10 >> 16) {
        case 0:
            func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_8024310C);
            break;
        case 1:
            func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_8024388C);
            break;
        }
    }
}
