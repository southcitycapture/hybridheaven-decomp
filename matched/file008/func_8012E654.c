#include "common.h"

typedef struct func_8012E654_Struct {
    u8 pad[0x24];
    void *unk24;
} func_8012E654_Struct;

extern void func_8012B1E4(void *, s32);
extern void func_8012BFA0(void *);
extern void func_8012C9C0(void *);
extern void func_8012CD28(void *);
extern void func_8012CE10(void *);
extern void func_8012D7A8();

void func_8012E654(func_8012E654_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != NULL) {
        func_8012D7A8();
        func_8012CD28(arg0);
        func_8012C9C0(arg0);
        func_8012CE10(arg0);
        func_8012B1E4(arg0, 1);
        func_8012BFA0(arg0);
    }
}
