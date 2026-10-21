#include "context.h"

struct func_80006088_Struct {
    struct func_80006088_Struct *unk0;
    u8 pad4[4];
    struct func_80006088_Struct *unk8;
};
struct func_800064C4_Struct;
struct func_80006248_Struct;
extern struct func_80006248_Struct *D_8008D8F8[];
void func_800064C4(struct func_800064C4_Struct *arg0);

void func_80006088(void *arg0) {
    s32 var_s2;
    struct func_80006088_Struct *temp_s1;
    struct func_80006088_Struct *var_s0;

    var_s2 = 0;
    func_800064C4(arg0);
    if (((struct func_80006088_Struct *)arg0)->unk8 != NULL) {
        var_s0 = ((struct func_80006088_Struct *)arg0)->unk8;
        while (var_s0 != NULL) {
            temp_s1 = var_s0->unk0;
            func_800064C4((struct func_800064C4_Struct *)var_s0);
            if (var_s0->unk8 != NULL) {
                if (temp_s1 != NULL) {
                    D_8008D8F8[var_s2] = (struct func_80006248_Struct *)temp_s1;
                    var_s2 += 1;
                }
                var_s0 = var_s0->unk8;
            } else {
                if (temp_s1 == NULL && var_s2 != 0) {
                    var_s0 = (struct func_80006088_Struct *)D_8008D8F8[--var_s2];
                } else {
                    var_s0 = temp_s1;
                }
            }
        }
    }
}
