#define ZP(p, l) ZQ(p, l)
#define ZQ(p, l) p##_##l
#define func_800158C0 ZP(zA, __LINE__)
#include "context.h"
#undef func_800158C0

typedef struct func_800192F4_Struct {
    u8 pad[4];
    u16 flags;
} func_800192F4_Struct;

void func_800192F4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    D_8008EBFC = D_800892B0[0x1E8 / 2] | D_800892B0[0x1C8 / 2];
    if (func_80018BD8() != 0) {
        D_8008EE82 = 0;
    } else {
        *(s8 *)&D_8008EE82 = 1;
    }
    temp_v0 = ((func_800192F4_Struct *)D_80044124[D_8008EBC0])->flags;
    if (temp_v0 & 0xF000) {
        if (temp_v0 & 0xB000) {
            D_8008EBEC = 0;
        } else {
            D_8008EBEC = 1;
        }
        if (D_8008EE82 == 0) {
            if (D_8008EBCC == 0) {
                func_800189C8();
            }
        } else {
            D_8008EE82 = 0;
            D_8008EE83 = 1;
            func_800058DC(arg0, func_800193E0);
        }
    }
}
