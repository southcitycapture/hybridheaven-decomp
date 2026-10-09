#include "context.h"

struct func_80020078_Struct {
    u8 unk0;
    u8 pad[3];
    s32 unk4;
    void *unk8;
};

extern struct func_80020078_Struct D_80096020;
extern u8 D_80096030[];
extern void func_8001FEFC(void);

void *func_80020078(void **arg0) {
    if (D_80096020.unk0 == 0) {
        D_80096020.unk4 = 0;
        D_80096020.unk8 = D_80096030;
        D_80096020.unk0 = 1;
    }
    *arg0 = &D_80096020;
    return func_8001FEFC;
}
