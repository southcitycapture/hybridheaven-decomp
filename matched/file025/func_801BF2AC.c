#include "context.h"
extern s32 D_8038BD3C();
extern s32 D_8038CAE0();
extern s32 func_8038B8C0();
extern s32 func_8038BA64();
extern s32 func_8038C968();
extern s32 func_8038D278();
extern s32 func_801CCE00();
extern s32 func_801CDD14();
extern void func_801C0A30();
extern void func_801C0C44();
void func_801BF388(void);

void func_801BF2AC(s32 arg0, s32 arg1) {
    s32 ok;

    ok = D_8038BD3C() && func_8038B8C0() && func_8038BA64() && func_801CCE00() && func_801CDD14() && func_8038C968() && D_8038CAE0() && func_8038D278();
    if (ok) {
        func_801C0A30();
        func_801C0C44();
        func_800058DC(arg0, func_801BF388);
    }
}
