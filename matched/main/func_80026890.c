#include "context.h"

struct func_80026890_Struct {
    struct func_80026890_Struct *unk0;
    struct func_80026890_Struct *unk4;
};

void func_80026890(struct func_80026890_Struct *arg0) {
    struct func_80026890_Struct *temp_v0;

    temp_v0 = arg0->unk0;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = arg0->unk4;
    }
    temp_v0 = arg0->unk4;
    if (temp_v0 != NULL) {
        temp_v0->unk0 = arg0->unk0;
    }
}
