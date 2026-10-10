#include "context.h"

struct func_80005B48_Struct {
    struct func_80005B48_Struct *unk0;
    struct func_80005B48_Struct *unk4;
    struct func_80005B48_Struct *unk8;
    struct func_80005B48_Struct *unkC;
};

void func_80005B48(void *arg0) {
    struct func_80005B48_Struct *a;
    struct func_80005B48_Struct *temp_v0;

    a = (struct func_80005B48_Struct *) arg0;
    temp_v0 = a->unk4;
    if (temp_v0 != NULL) {
        temp_v0->unk0 = a->unk0;
    }
    temp_v0 = a->unk0;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = a->unk4;
    }
    temp_v0 = a->unkC;
    if ((temp_v0 != NULL) && (a == temp_v0->unk8)) {
        temp_v0->unk8 = a->unk0;
    }
}
