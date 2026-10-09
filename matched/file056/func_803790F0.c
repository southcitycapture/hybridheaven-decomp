#include "context.h"

typedef struct func_803790F0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_803790F0_Struct2;

extern s32 func_80010550(s32, s32);
extern void func_8001B204(s32, s32, s32, void *);
extern void func_80005700(s32);
extern void func_80011140(s32, s32, func_803790F0_Struct2, s32);
extern func_803790F0_Struct2 D_80216B90;
extern s32 D_803894D0[];
extern s32 D_8038A90C;
extern void func_80379190(void);

void func_803790F0(s32 arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = *(s32 *)(arg0 + 0x5C);
    if (func_80010550(arg1, temp_a1) != 0) {
        func_8001B204(0xF, 0, 0, D_803894D0);
        func_80005700(D_8038A90C);
        func_80011140(arg1, temp_a1, D_80216B90, 5);
        func_800058DC(arg0, func_80379190);
    }
}
