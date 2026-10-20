#include "context.h"

typedef struct func_801DE6F4_StructVec {
    f32 x, y, z;
} func_801DE6F4_StructVec;
typedef struct func_801DE6F4_StructTable {
    u16 values[2][2];
} func_801DE6F4_StructTable;

extern s32 func_801DC700(s32, void *);
extern void func_801DC9C4(func_801DE6F4_StructVec, u16, f32);
extern u8 D_801E1FD0[];
extern func_801DE6F4_StructTable D_801E2008;

u16 func_801DE6F4(s32 arg0, func_801DE6F4_StructVec arg1, f32 *arg4, u8 arg5) {
    func_801DE6F4_StructTable table = D_801E2008;
    u8 result;

    result = func_801DC700(arg0, D_801E1FD0);
    if (result == 0) {
        return 0;
    }
    arg5 &= 1;
    if (result == 3) {
        func_801DC9C4(arg1, table.values[arg5][0], *arg4);
    }
    *arg4 = (f64)*arg4 * 1.5;
    return table.values[arg5][result - 1];
}
