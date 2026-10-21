#include "context.h"

typedef struct func_801BF7A0_StructValue {
    u32 flags;
    s32 value;
    s32 extra;
} func_801BF7A0_StructValue;

typedef struct func_801BF7A0_StructObject {
    u8 pad[0x1E8];
    func_801BF7A0_StructValue data;
} func_801BF7A0_StructObject;

s32 func_801BF7A0(arg0, arg1)
    s32 arg0;
    func_801BF7A0_StructValue arg1;
{
    func_801BF7A0_StructObject **entry;
    func_801BF7A0_StructObject *object;

    if (arg1.flags & 0x80000000) {
        entry = (func_801BF7A0_StructObject **) &D_801D8D04[arg0];
        (*entry)->data = arg1;
        object = *entry;
        object->data.flags &= 0x7FFF0000;
        return 1;
    }
    object = (func_801BF7A0_StructObject *) D_801D8D04[arg0];
    if (object->data.flags < arg1.flags) {
        object->data = arg1;
        return 1;
    }
    return 0;
}
