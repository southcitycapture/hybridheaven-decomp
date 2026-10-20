#include "context.h"

extern u16 D_8008D5AC;
extern s16 D_8008E7C0[];
extern s16 D_8008E9C0[];

s32 func_80017594(u16 arg0) {
    s32 i;

    for (i = 0; i <= (s32) D_8008D5AC; i++) {
        if (arg0 == D_8008E7C0[i]) {
            D_8008E9C0[i]++;
            return 1;
        }
    }
    return 0;
}
