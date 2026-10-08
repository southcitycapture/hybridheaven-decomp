#include "common.h"

extern u16 D_801BBE08[];
extern void (*D_80217120[])(void);

typedef struct func_801FC4C0_Struct0 {
    u8 pad[0];
} func_801FC4C0_Struct0;

void func_801FC4C0(func_801FC4C0_Struct0 arg0, s32 arg1) {
    void (*temp_v0)(void);

    temp_v0 = D_80217120[*(u16 *)((u8 *)D_801BBE08 + 4)];
    if (temp_v0 != NULL) {
        temp_v0();
    }
}
