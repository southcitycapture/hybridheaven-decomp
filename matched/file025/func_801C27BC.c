#include "common.h"
extern void func_80004ADC(u16, s32);
extern s32 func_80017064(u16);

extern s32 func_80016F90(void);
extern s32 func_80017014(s32);
extern void func_80016EAC(u16, s32);
extern s32 func_8001F290(s32);
extern u16 **D_80171CEC[];

typedef struct func_801C27BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C27BC_Struct;

s32 func_801C27BC(s32 arg0, func_801C27BC_Struct *arg1, s32 arg2) {
    u16 id;
    s32 temp_v0;

    func_80017014(func_80016F90());
    id = (*D_80171CEC[arg0])[arg2] & 0x0FFFFFFF;
    if (func_80017064(id) == -1) {
        if (id) {
            if (arg1->unk4 != 0) {
                temp_v0 = arg1->unk4;
                arg1->unk0 = id;
                arg1->unk8 = func_8001F290(temp_v0);
                func_80016EAC(id, arg1->unk8);
                func_80004ADC(id, arg1->unk8);
                return 1;
            }
        }
    }
    return 0;
}
