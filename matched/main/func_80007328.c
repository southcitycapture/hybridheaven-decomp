#include "context.h"

struct func_80007328_StructVec {
    s32 x;
    s32 y;
    s32 z;
};

struct func_80007328_StructData {
    u8 pad[0x98];
    struct func_80007328_StructVec vec;
};

struct func_80007328_StructObject {
    u8 pad[0x2C];
    struct func_80007328_StructData *data;
};

extern void func_80007114();

void func_80007328(s32 arg0, struct func_80007328_StructObject **arg1) {
    func_80007114(arg0, (*arg1)->data->vec);
}
