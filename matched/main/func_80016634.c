#include "context.h"

extern s32 D_8008DC94;
extern s32 D_8008DC98;
extern s32 D_8008DFAC;

struct func_80016634_Struct {
    u8 pad[8];
    s32 unk8;
};

void func_80016634(struct func_80016634_Struct *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    if ((arg1 >= 0) && (arg1 < D_8008DC94) && (arg2 >= 0) && (D_8008DC98 >= arg2)) {
        if (arg0->unk8 == 0x10) {
            var_v1 = arg3 & 1;
        } else {
            var_v1 = 1;
        }
        *(u16 *)(D_8008DFAC + (D_8008DC94 * arg2 * 2) + (arg1 * 2)) = (((arg3 & 0x3E) >> 1) << 11) | (((arg3 & 0x7C0) >> 6) << 6) | (((arg3 & 0xF800) >> 11) << 1) | var_v1;
    }
}
