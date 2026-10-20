#include "context.h"


extern struct func_80373BF0_Struct *D_80171CEC[];

s32 func_80373BF0(u16 arg0, u16 arg1) {
    return D_80171CEC[arg0]->unk4[arg1];
}
