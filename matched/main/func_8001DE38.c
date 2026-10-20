#include "context.h"

typedef struct func_8001DE38_StructSub {
    u8 pad[4];
    u8 *unk4;
} func_8001DE38_StructSub;
typedef struct func_8001DE38_Struct {
    u8 pad[0x2C];
    func_8001DE38_StructSub *unk2C;
} func_8001DE38_Struct;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_800058DC(s32, void (*)(void));
extern void func_8001DF40();
extern u8 D_8004480C[];
extern u8 D_80090E50[];
extern u8 D_80090E56[];
extern u8 D_80090EAC[];
extern u8 D_80090F02[];
extern u8 D_80090F58[];
extern u8 D_80091CC8[];

void func_8001DE38(s32 arg0, func_8001DE38_Struct **arg1) {
    u8 *p0;
    u8 *p1;
    u8 *p2;
    u8 *p3;
    s32 i;
    u8 *p;
    func_8001DE38_Struct **q;
    func_8001DE38_Struct *t;
    u8 *data;

    for (i = 0; i < 40; i++) {
        func_80005E44(arg0, D_8004480C);
    }
    func_80006214(arg0);
    for (i = 0; i < 40; i++) {
        D_80090E50[i * 0x56] = 0;
        arg1[i]->unk2C->unk4 = &D_80090E56[i * 0x56];
    }
    func_800058DC(arg0, func_8001DF40);
}
