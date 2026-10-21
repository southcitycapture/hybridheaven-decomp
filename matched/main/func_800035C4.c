#include "context.h"

typedef struct {
    u8 entries[16][32];
    u8 unk200;
    u8 unk201;
} func_800035C4_Struct;

extern void func_80003118(u8, u8 *);
extern void func_800033CC(u8, void *);
extern void func_80003550(u8, void *);

void func_800035C4(u8 arg0, func_800035C4_Struct *arg1) {
    u8 status;
    u8 j;
    u8 value;
    u8 i;

    status = func_80002BE0(arg0);
    if (status != 0) {
        for (i = 0; i < 16; i++) {
            func_80003550(i, arg1);
        }
        arg1->unk201 = 0;
        arg1->unk200 = status;
        return;
    }
    for (j = 0; j < 16; j++) {
        if (func_80032DD0(&D_8005CE70[arg0 * 0x68], j, arg1->entries[j]) == 0) {
            func_800033CC(j, arg1);
        } else {
            func_80003550(j, arg1);
        }
    }
    func_80003118(arg0, &value);
    arg1->unk201 = value;
    arg1->unk200 = 0;
}
