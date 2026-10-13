#include "context.h"

void func_801475C8(f32);

void func_80147768(void *arg0, f32 arg1) {
    func_801475C8(arg1);
    ((f32 *) arg0)[0] = ((f32 *) arg0)[0] * arg1;
    ((f32 *) arg0)[1] = ((f32 *) arg0)[1] * arg1;
    ((f32 *) arg0)[2] = ((f32 *) arg0)[2] * arg1;
}
