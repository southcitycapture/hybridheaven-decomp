#include "context.h"

struct func_80151700_Struct1;
extern void func_80006214(void *);
extern void *D_8008D5D4;
extern struct func_80151700_Struct1 *D_8008DA88[];

typedef struct func_801515B0_Struct3 {
    u8 pad[0xC];
    u16 unkC;
} func_801515B0_Struct3;

typedef struct func_801515B0_Struct0 {
    u8 pad[0x5C];
    func_801515B0_Struct3 *unk5C;
} func_801515B0_Struct0;

typedef struct func_801515B0_Struct2 {
    u8 pad[0x4B];
    u8 unk4B;
} func_801515B0_Struct2;

typedef struct func_801515B0_Struct1 {
    u8 pad[0x2C];
    func_801515B0_Struct2 *unk2C;
} func_801515B0_Struct1;

s32 func_801515B0(func_801515B0_Struct0 *arg0, u8 arg1, u8 arg2) {
    func_801515B0_Struct3 *sp1C;

    sp1C = arg0->unk5C;
    if ((func_801517CC((void *)arg0) != 0) && ((s32) arg1 < (s32) sp1C->unkC)) {
        func_80006214(arg0);
        ((func_801515B0_Struct1 **)D_8008DA88)[arg1]->unk2C->unk4B = arg2;
        func_80006214(D_8008D5D4);
        return 1;
    }
    return 0;
}
