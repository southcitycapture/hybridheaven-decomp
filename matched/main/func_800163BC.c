unsigned short func_80017014(int);
#include "context.h"
typedef struct func_8001643C_StructEntry {
    s16 value;
    s16 unk2;
    s16 next;
} func_8001643C_StructEntry;
extern func_8001643C_StructEntry D_8008DCA8[];
extern s32 D_8008DFA8;

void func_800163BC(void) {
    s32 i;

    for (i = 0; i < 128; i++) {
        D_8008DCA8[i].value = 0;
        D_8008DCA8[i].next = i + 1;
        D_8008DCA8[i].unk2 = i - 1;
    }
    D_8008DCA8[127].next = 0;
    D_8008DCA8[0].unk2 = 127;
    D_8008DFA8 = 0;
}
