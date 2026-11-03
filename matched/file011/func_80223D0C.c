#include "common.h"
f32 func_8002FC20(f32, f32);


extern f32 D_8001EAD0(s16);
extern f32 D_8001EB64(s16);

typedef struct {
    u8 pad[8];
    f32 unk8;
    f32 unkC;
} func_80223D0C_Struct;

f32 func_80223D0C(void *arg0, s16 arg1) {
    f32 b2;
    f32 a2;
    f32 sum;

    b2 = ((func_80223D0C_Struct *)arg0)->unkC * ((func_80223D0C_Struct *)arg0)->unkC;
    a2 = ((func_80223D0C_Struct *)arg0)->unk8 * ((func_80223D0C_Struct *)arg0)->unk8;
    sum = b2 * (D_8001EAD0(arg1) * D_8001EAD0(arg1)) + a2 * (D_8001EB64(arg1) * D_8001EB64(arg1));
    if ((f64)sum <= 0.0) {
        return 0.0f;
    }
    return func_8002FC20((b2 * a2) / sum, sum);
}
