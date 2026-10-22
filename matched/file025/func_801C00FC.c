#include "context.h"

typedef struct func_801C00FC_StructValue {
    s32 a;
    s32 b;
    s32 c;
} func_801C00FC_StructValue;

typedef struct func_801C00FC_StructObject {
    u8 pad[0x1E8];
    func_801C00FC_StructValue value;
} func_801C00FC_StructObject;

s32 func_801C00FC(s32 arg0, void *arg1) {
    *(func_801C00FC_StructValue *) arg1 =
        ((func_801C00FC_StructObject *) D_801D8D04[arg0])->value;
    return 1;
}
