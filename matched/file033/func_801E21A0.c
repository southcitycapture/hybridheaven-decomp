#include "context.h"
extern s32 func_801C1B1C(void);
typedef struct func_801E295C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E295C_Struct;

s32 func_801E21A0(s32 arg0, s32 arg1) {
    struct func_801E295C_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 8 || func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}
