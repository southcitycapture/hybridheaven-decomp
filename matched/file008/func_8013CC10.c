#include "context.h"

typedef struct func_8013CC10_Struct {
    u8 value;
    u8 data[6];
} func_8013CC10_Struct;

extern func_8013CC10_Struct D_8017DDB0[];
extern func_8013CC10_Struct D_8017DF14[];
extern func_8013CC10_Struct D_8017DF2C[];
extern u8 D_801BBBF0[];

u8 func_8013CC10(void *arg0, u8 arg1, u8 arg2) {
    u8 count = 0;
    u8 *data;
    u8 i;
    u8 j;
    u8 value;

    if (arg0 == D_801BBBF0 + 0x44C) {
        data = D_8017DF14[arg2].data;
    } else {
        data = D_8017DF2C[arg2].data;
    }
    if (arg1 >= 4) {
        for (i = 0; i < 44; i++) {
            value = D_8017DDB0[i].value;
            for (j = 0; j < 5; j++) {
                if (data[j] == D_8017DDB0[i].data[j]) {
                    count++;
                }
            }
            if (count == 5) {
                return value;
            }
            count = 0;
        }
    }
    return 0;
}
