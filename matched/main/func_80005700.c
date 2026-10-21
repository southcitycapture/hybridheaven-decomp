#include "context.h"

typedef struct func_80005700_Struct {
    struct func_80005700_Struct *unk0;
    u8 pad4[4];
    struct func_80005700_Struct *unk8;
} func_80005700_Struct;
extern struct func_8000582C_Struct *D_8008D768[];
void func_80005ACC(void *arg0);

void func_80005700(void *arg0) {
    s32 n;
    s32 t;
    func_80005700_Struct *s0;
    func_80005700_Struct *tmp;

    n = 0;
    if (arg0 == D_8008D5D4) {
        D_8008D5D4 = NULL;
    }
    func_80005ACC(arg0);
    tmp = ((func_80005700_Struct *)arg0)->unk8;
    s0 = arg0;
    arg0 = tmp;
    if (tmp != NULL) {
        s0->unk8 = NULL;
        while (arg0 != NULL) {
            s0 = ((func_80005700_Struct *)arg0)->unk0;
            func_80005ACC(arg0);
            if (((func_80005700_Struct *)arg0)->unk8 != NULL) {
                if (s0 != NULL) {
                    D_8008D768[n] = (void *)s0;
                    n++;
                }
                arg0 = ((func_80005700_Struct *)arg0)->unk8;
            } else if (s0 == NULL && (t = n - 1, n != 0)) {
                arg0 = D_8008D768[t];
                n = t;
            } else {
                arg0 = s0;
            }
        }
    }
}
