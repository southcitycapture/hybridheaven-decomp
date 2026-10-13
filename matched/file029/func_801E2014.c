#include "context.h"
struct func_801E25A4_Struct {
    u8 pad[0xC];
    s32 unkC;
};
struct func_801E25A4_Struct *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

typedef struct func_801E2014_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2014_Struct;

s32 func_801E2014(s32 arg0, s32 arg1) {
    if ((((func_801E2014_Struct *)func_801BF6B0(7))->unkC < 7) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 8;
}
