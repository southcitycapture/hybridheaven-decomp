#include "context.h"
struct func_80005CDC_Struct;
extern struct func_80005CDC_Struct D_800892B0;
extern void func_80006088(void *);

void func_80005ACC(void *arg0) {
    void *s0;

    if ((s32) arg0 == D_8008D5D0) {
        D_8008D5D0 = *(s32 *) arg0;
    }
    func_80005B48(arg0);
    ((void **) arg0)[0] = *(void **) ((u8 *) &D_800892B0 + 0xAC);
    *(void **) ((u8 *) &D_800892B0 + 0xAC) = arg0;
    s0 = ((void **) arg0)[9];
    if (s0 != NULL) {
        do {
            func_80006088(s0);
            s0 = ((void **) arg0)[9];
        } while (s0 != NULL);
    }
}
