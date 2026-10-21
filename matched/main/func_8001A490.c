#include "context.h"

typedef struct func_8001A490_StructTable {
    void *values[10];
} func_8001A490_StructTable;

typedef struct func_8001A490_StructEnt {
    u8 flag;
    u8 pad1;
    s16 x;
    s16 y;
    u8 b6, b7, b8, b9, bA, bB, bC, bD;
    u16 w0E;
    u16 w10;
    u16 w12;
} func_8001A490_StructEnt;

extern func_8001A490_StructTable D_800442E8;
extern void func_80005E44(s32, void *);
extern void func_800058DC(s32, void (*)(void));
struct func_8001A584_StructObj;
struct func_8001A584_StructEnt;
extern struct func_8001A584_StructEnt D_8008EEA0[];
void func_8001A584(s32 arg0, struct func_8001A584_StructObj **a1);

#define E(i) ((func_8001A490_StructEnt *)D_8008EEA0)[i]

void func_8001A490(s32 arg0, s32 arg1) {
    s32 pad;
    func_8001A490_StructTable table;
    s32 i;

    table = D_800442E8;
    for (i = 0; i < 10; i++) {
        E(i).flag = 0;
        E(i).x = 0;
        E(i).y = 0;
        E(i).b6 = 0;
        E(i).b7 = 0;
        E(i).b8 = 0;
        E(i).b9 = 0;
        E(i).bA = 0;
        E(i).bB = 0;
        E(i).bC = 0;
        E(i).bD = 0;
        E(i).w0E = 0;
        E(i).w10 = 0;
        E(i).w12 = 0;
        func_80005E44(arg0, table.values[i]);
    }
    func_80005E44(arg0, table.values[3]);
    func_800058DC(arg0, (void (*)(void))func_8001A584);
}
