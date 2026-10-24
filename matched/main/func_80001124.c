#include "context.h"
#if __LINE__ == 2
void func_80001124_alignment(void) {
}
void func_80001124_alignment2(void) {
}
void func_80001124_alignment3(void) {
}
#endif

extern void func_8002AC60(s32, void *, void *, s32);
extern void func_80030B60(s32, s32);
extern void func_800011B0(void *);
extern u8 D_8005BF30[];
extern u8 D_8005BF48[];

void func_80001124(void *arg0) {
    func_8002AC60(0x96, D_8005BF30, D_8005BF48, 0xC8);
    func_80028260(D_80059D80, 5, func_800011B0, arg0, D_8005BF30, 0xA);
    func_80034C90(D_80059D80);
    func_80030B60(0, 0);
    for (;;) {
    }
}
