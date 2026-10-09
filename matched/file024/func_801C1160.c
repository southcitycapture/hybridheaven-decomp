#include "context.h"
extern s32 D_801CC8A8;
extern void func_800058DC(s32, void *);

typedef struct func_801C1160_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1160_Struct;

extern void func_80145390(s32);
extern void func_801C258C();

s32 func_801C1160(void) {
    if (D_801CC8A8 != 0) {
        func_80145390(0x1800);
        ((func_801C1160_Struct *) D_801CC8A8)->unk3C = 0;
        func_800058DC(D_801CC8A8, func_801C258C);
        return 1;
    }
    return 0;
}
