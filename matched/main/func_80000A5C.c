#include "context.h"
#if __LINE__ == 2
void func_80000A5C_alignment(void) {
    D_80037358[0] = 1;
    D_800374A8[0] = 2;
}
#endif

extern void func_800266B0(void *a0, void *a1, s32 a2);
extern void func_80026B0C(void *a0);
extern void func_80026C9C(void *a0);
extern void func_80029690();
extern s32 func_80030FF0(void *a0);
extern void func_800349E0();

typedef struct func_80000A5C_Struct {
    u8 pad[0x50];
    void *unk50;
    s32 unk54;
} func_80000A5C_Struct;

void func_80000A5C(u8 *arg0) {
    void *sp64;
    func_80000A5C_Struct *sp60;
    u8 *s3;
    u32 s1;
    u8 pad[16];

    sp64 = NULL;
    sp60 = NULL;
    s1 = 0;
    while (1) {
        func_800266B0(arg0 + 8, &sp60, 1);
        func_800349E0();
        s3 = *(u8 **)(arg0 + 0x88C);
        if (s3 != NULL) {
            func_80029690();
            func_800266B0(arg0 + 0xE8, &sp64, 1);
            if (func_80030FF0(s3 + 0x10) != 0) {
                s1 = 1;
            } else {
                s1 = 2;
            }
        }
        *(void **)(arg0 + 0x890) = sp60;
        func_80026B0C((u8 *)sp60 + 0x10);
        func_80026C9C((u8 *)sp60 + 0x10);
        func_800266B0(arg0 + 0xE8, &sp64, 1);
        *(s32 *)(arg0 + 0x890) = 0;
        if (*(s32 *)(arg0 + 0x894) != 0) {
            func_80026300(arg0 + 0x158, &sp64, 1);
        }
        if (s1 == 1) {
            func_80026B0C(s3 + 0x10);
            func_80026C9C(s3 + 0x10);
        } else if (s1 == 2) {
            func_80026300(arg0 + 0xE8, &sp64, 1);
        }
        func_80026300(sp60->unk50, (void *)sp60->unk54, 1);
        s1 = 0;
    }
}
