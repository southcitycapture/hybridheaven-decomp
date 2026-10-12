#include "context.h"

struct func_8000659C_Struct {
    struct func_8000659C_Struct *unk0;
    struct func_8000659C_Struct *unk4;
    struct func_8000659C_Struct *unk8;
    struct func_8000659C_Struct *unkC;
};

void func_8000659C(void *arg0) {
    struct func_8000659C_Struct *a;
    struct func_8000659C_Struct *temp_v0;

    a = (struct func_8000659C_Struct *) arg0;
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
