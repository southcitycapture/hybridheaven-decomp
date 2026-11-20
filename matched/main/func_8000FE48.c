#include "common.h"
typedef struct func_8000FCD0_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8000FCD0_Struct;
u16 func_8000FC60(struct func_8000FCD0_Struct *arg0, u16 arg1, void *arg2);
void func_8000FCD0(u16 *arg0, func_8000FCD0_Struct *arg1, func_8000FCD0_Struct *arg2);
extern void func_800279F0(void *, s32);


struct func_8000FE48_StructObj {
    u8 pad[0x2C];
    u8 *unk2C;
};

u16 func_8000FE48(struct func_8000FE48_StructObj **arg0, u16 arg1, func_8000FCD0_Struct *arg2, u16 *arg3) {
    s32 i;
    u16 count;
    u16 *out;
    u8 *data;
    struct func_8000FE48_StructObj **obj;

    count = 0;
    func_800279F0(arg2, 0x240);
    {
        s32 j;

        for (j = 0; j < 0x30; j++) {
            arg3[j] = 0xFFFF;
        }
        arg3[1] = count;
    }
    data = arg0[1]->unk2C;
    func_8000FCD0(&count, (func_8000FCD0_Struct *)(data + 0x5C), arg2);
    i = 2;
    if (arg1 >= 3) {
        out = arg3 + 2;
        obj = arg0 + 2;
        do {
            data = (*obj)->unk2C + 0x5C;
            *out = func_8000FC60((func_8000FCD0_Struct *)data, count, arg2);
            if (count == *out) {
                func_8000FCD0(&count, (func_8000FCD0_Struct *)data, arg2);
            }
            i++;
            out++;
            obj++;
        } while (i != arg1);
    }
    return count;
}
