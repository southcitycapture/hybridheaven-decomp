#include "context.h"

typedef struct func_803839E8_StructB {
    s16 f0;
    u8 pad[0x26];
    u32 f28;
} func_803839E8_StructB;
typedef struct func_803839E8_StructA {
    u8 pad[0x28];
    s16 f28;
    u8 pad2[2];
    func_803839E8_StructB *f2C;
} func_803839E8_StructA;

extern void func_80006214(s32);
extern s32 func_8001F430(s32);
extern void func_80020744(s32);
extern void func_80032890(s32, void *);
extern u8 D_80164F30[];
void func_80383AD4(s32 arg0, s32 arg1);
void *func_80383E54(void *arg0, void *arg1);
extern s32 D_8038DBB4;
extern s32 D_8038DBC4;

void func_803839E8(s32 arg0, func_803839E8_StructA **arg1) {
    func_80005E44(arg0, D_80164F30);
    func_80006214(arg0);
    D_8038DDC4 = (void *)func_8001F430(0x178);
    (*arg1)->f2C->f28 = (u32)D_8038DDC4 | 0x40000000;
    (*arg1)->f2C->f0 = 0;
    (*arg1)->f28 = 2;
    func_80032890(6, arg1);
    func_80020744(1);
    D_8038DBB0 = 0;
    D_8038DBB4 = 0;
    D_8038DBB8 = 0;
    D_8038DBC0 = 0;
    D_8038DBC4 = 0;
    D_8038DBC8 = 0x14;
    D_8038DBCC = 0;
    D_8038DBD4 = 0;
    func_80383E54(0, D_8038DDC4);
    func_800058DC((void *)arg0, func_80383AD4);
}
