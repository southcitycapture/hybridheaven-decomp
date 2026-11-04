#include "common.h"
extern s32 D_80037C5C[];
typedef struct func_80004310_Struct {
    u8 pad[0x1BD];
    u8 unk1BD;
} func_80004310_Struct;
extern func_80004310_Struct D_800892B0;
s32 func_80004838(s32, s32);
extern s32 func_8001F290();


typedef struct func_80004560_StructEntry {
    s32 start;
    s32 end;
} func_80004560_StructEntry;

typedef struct func_80004560_StructState {
    u8 pad[0x42A8];
    s32 data;
} func_80004560_StructState;

extern s32 D_8008D558;
extern void func_8001752C(u16, s32);

s32 func_80004560(s32 arg0) {
    func_80004560_StructEntry *entry;

    if (D_8008D558 == 0) {
        entry = (func_80004560_StructEntry *) ((s32) &D_80037C5C[arg0 * 2] - 8);
        ((func_80004560_StructState *) &D_800892B0)->data =
            func_8001F290(entry->end - entry->start);
        func_8001752C(arg0, ((func_80004560_StructState *) &D_800892B0)->data);
    }
    if (func_80004838(arg0, ((func_80004560_StructState *) &D_800892B0)->data) == 0) {
        return 0;
    }
    return ((func_80004560_StructState *) &D_800892B0)->data;
}
