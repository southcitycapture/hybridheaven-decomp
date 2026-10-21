#include "context.h"

struct func_8000FE48_StructObj {
    u8 pad[0x2C];
    u8 *unk2C;
};

#define A0 (*(struct func_8000FE48_StructObj ***)&arg0)
#define A3 (*(u16 **)&arg3)

u16 func_8000FE48(struct func_8000FE48_StructObj **arg0, u16 arg1, func_8000FCD0_Struct *arg2, u16 *arg3) {
    s32 i;
    u16 count;
    u16 *out;
    u8 *data;
    struct func_8000FE48_StructObj **obj;

    count = 0;
    func_800279F0(arg2, 0x240);
    {
        u16 *p;
        s32 j;

        p = A3;
        for (j = 0; j < 0x30; j++) {
            p[j] = 0xFFFF;
        }
        p[1] = count;
    }
    data = A0[1]->unk2C;
    func_8000FCD0(&count, (func_8000FCD0_Struct *)(data + 0x5C), arg2);
    i = 2;
    if (arg1 >= 3) {
        out = A3 + 2;
        obj = A0 + 2;
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
