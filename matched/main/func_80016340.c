#include "context.h"
typedef struct func_8001643C_Struct {
    u8 pad[8];
    s32 unk8;
} func_8001643C_Struct;
s32 func_8001643C(func_8001643C_Struct *arg0, s32 arg1);

extern s32 func_80016500(void *, s32);

s32 func_80016340(void *arg0) {
    s32 temp_a1;

    temp_a1 = ((func_8001643C_Struct *)arg0)->unk8;
    if (temp_a1 >= 0xF) {
        if (func_80016CE4() != 0) {
            return func_80016500(arg0, func_80016D50(7));
        }
        return func_8001643C(arg0, func_80016D50(((func_8001643C_Struct *)arg0)->unk8));
    }
    return func_80016D50(temp_a1);
}
