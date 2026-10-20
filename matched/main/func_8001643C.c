#include "context.h"


typedef struct func_8001643C_StructEntry {
    s16 value;
    s16 unk2;
    s16 next;
} func_8001643C_StructEntry;

extern func_8001643C_StructEntry D_8008DCA8[];
extern s32 D_8008DFA8;

s32 func_8001643C(func_8001643C_Struct *arg0, s32 arg1) {
    if (arg0->unk8 == 15) {
        arg1 = ((arg1 >> 5) & 0x3FF) + ((arg1 & 0x1F) << 10);
        D_8008DFA8 = D_8008DCA8[D_8008DFA8].next;
        D_8008DCA8[D_8008DFA8].value = arg1;
        return arg1 * 2;
    } else {
        arg1 = ((arg1 & 0xFFC0) >> 5) | ((arg1 & 0x3E) << 10) | (arg1 & 1);
        D_8008DFA8 = D_8008DCA8[D_8008DFA8].next;
        D_8008DCA8[D_8008DFA8].value = arg1;
    }
    return arg1;
}
