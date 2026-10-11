#include "context.h"

s32 func_80002B44(u8);
extern u16 D_80183334[];
extern u8 D_801BF194[];

s32 func_80151990(u8 arg0) {
    if (arg0 < 2) {
        if (((u16 *) D_801BF190)[arg0] != 0) {
            if (((u16 *) D_801BF190)[arg0] == 1) {
                if (func_80002BAC(arg0) == 0) {
                    ((u16 *) D_801BF190)[arg0] = 0;
                    return 1;
                }
                return 0;
            }
            if (((s32) D_80183334[D_801BF194[arg0]] >> ((s32) (((u16 *) D_801BF190)[arg0] - 2) % 16)) & 1) {
                func_80002B44(arg0);
            } else {
                func_80002BAC(arg0);
            }
            if ((s32) ((u16 *) D_801BF190)[arg0] >= 2) {
                ((u16 *) D_801BF190)[arg0] = ((u16 *) D_801BF190)[arg0] - 1;
            }
            return 1;
        }
        return 1;
    }
    return 0;
}
