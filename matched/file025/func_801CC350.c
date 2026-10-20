#include "context.h"

extern void func_800279F0(void *, s32);
extern void func_801C250C(void *);
extern void func_801C25B0(void *);
extern u8 D_801BD980[];
extern u8 D_801BEB00[];

typedef struct func_801CC350_StructBuffer {
    u8 pad[0xE0];
} func_801CC350_StructBuffer;

s32 func_801CC350(void) {
    func_801CC350_StructBuffer *p;
    u8 *q;
    s32 i;
    s32 k;
    u8 *entry;

    if (D_801DAAC0 != 0) {
        i = 0;
        if (D_801DAAC0 > 0) {
            entry = D_801E0A48;
            do {
                func_801C250C(entry);
                i++;
                entry += 0x18;
            } while (i < D_801DAAC0);
        }
        D_801DAAC0 = 0;
    }
    if (D_801DAAC4 != 0) {
        i = 0;
        if (D_801DAAC4 > 0) {
            entry = D_801E0B38;
            do {
                func_801C25B0(entry);
                i++;
                entry += 0xC;
            } while (i < D_801DAAC4);
        }
        D_801DAAC4 = 0;
    }
    func_801CC9FC();
    func_801CCA44();
    func_801CCAB0();
    for (k = 0; k < 20; k++) {
        D_801BEB00[k] = 0;
        func_800279F0(D_801BD980 + k * 0xE0, 0xE0);
    }
    return 1;
}
