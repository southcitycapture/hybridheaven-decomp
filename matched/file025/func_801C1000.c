#include "common.h"
extern u32 D_801D8DA8;
typedef struct func_801C0C7C_Struct {
    s32 a0, a4;
    u64 a8;
} func_801C0C7C_Struct;
extern func_801C0C7C_Struct D_801DEA38[];
struct func_801C1134_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_801C1134_Struct D_801DEA40[];
extern struct func_801C1134_Struct D_801DEBC0[];


void func_801C1000(s32 arg0, s32 arg1) {
    struct func_801C1134_Struct *p;
    u32 count;
    u32 i;
    u32 duplicates = arg0;
    s32 empty;

    i = 0;
    count = D_801DEA38[0].a0;
    if (count != 0) {
        do {
            if (D_801DEA40[i].unk0 == arg0 && D_801DEA40[i].unk4 == arg1) {
                duplicates++;
            }
            i++;
        } while (i < count);
    }
    empty = -1;
    i = 0;
loop:
    if ((D_801DEA40[i].unk0 != empty) || (D_801DEA40[i].unk4 != empty)) {
        i++;
        if (D_801DEBC0 != &D_801DEA40[i]) {
            goto loop;
        }
    }
    p = &D_801DEA40[i];
    p->unk0 = arg0;
    p->unk4 = arg1;
    p->unk8 = D_801D8DA8;
    D_801DEA38[0].a0 = count + 1;
}
