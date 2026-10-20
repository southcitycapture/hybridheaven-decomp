#include "context.h"

extern void func_80006214(void *);
extern void *D_8008D5D4;

typedef struct func_80151640_StructValue {
    u8 pad[0x4B];
    u8 unk4B;
} func_80151640_StructValue;

typedef struct func_80151640_StructCount {
    u8 pad[0xC];
    u16 unkC;
} func_80151640_StructCount;

typedef struct func_80151640_StructObject {
    u8 pad[0x5C];
    func_80151640_StructCount *unk5C;
} func_80151640_StructObject;

typedef struct func_80151640_StructMid {
    u8 pad[0x2C];
    func_80151640_StructValue *unk2C;
} func_80151640_StructMid;

u16 func_80151640(void *arg0, u8 arg1) {
    func_80151640_StructCount *sp1C;
    u8 sp1B;

    sp1C = ((func_80151640_StructObject *)arg0)->unk5C;
    if ((func_801517CC(arg0) != 0) && ((s32)arg1 < (s32)sp1C->unkC)) {
        func_80006214(arg0);
        sp1B = ((func_80151640_StructMid **)D_8008DA88)[arg1]->unk2C->unk4B;
        func_80006214(D_8008D5D4);
        return sp1B;
    }
    return 0xFFFF;
}
