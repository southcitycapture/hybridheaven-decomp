#include "context.h"

typedef struct func_80237768_Struct {
    u8 pad[8];
    s32 unk8;
} func_80237768_Struct;

extern s32 func_80148E80(void);
extern void func_800058DC();
struct func_8023A0EC_Struct;
void func_8023A0EC(struct func_8023A0EC_Struct *arg0, s32 arg1);

void func_80237768(s32 arg0, s32 arg1) {
    if ((func_80148E80() != 0) && (func_80236A48(arg0) != 0)) {
        func_80236BC8(1);
        if (((func_80237768_Struct *)arg0)->unk8 == 0) {
            func_800058DC(arg0, func_8023A0EC);
        }
    }
}
