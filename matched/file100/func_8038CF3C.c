#include "common.h"

typedef struct func_8038CF3C_Struct {
    void (*unk0)();
    void (*unk4)();
    void (*unk8)();
} func_8038CF3C_Struct;

extern void func_8038CD6C(s32 arg0);
extern void func_8038CFCC();
extern void func_8038CFE8();
extern void func_8038D020();
extern func_8038CF3C_Struct D_8038DBBC;
extern s32 D_8038DBC8;
extern s32 D_8038DBD0;

void func_8038CF3C(s32 arg0, s32 arg1) {
    D_8038DBBC.unk0 = func_8038CFCC;
    D_8038DBBC.unk4 = func_8038CFE8;
    D_8038DBBC.unk8 = func_8038D020;
    D_8038DBC8 = 0;
    D_8038DBD0 = arg1;
    func_8038CD6C(arg0);
}
