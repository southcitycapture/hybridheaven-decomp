#include "context.h"
#if __LINE__ < 50
#define func_80223CB8_V func_802261CC_V
#else
struct func_80223CB8_V { s32 a, b, c; };
extern void func_80223B2C();
#endif
struct func_80223CB8_P { u8 pad0[0xC8]; struct func_80223CB8_V v0; struct func_80223CB8_V v1; };
struct func_80223CB8_Arg { u8 pad0[0x5C]; struct func_80223CB8_P *unk5C; };
void func_80223CB8(void *arg0, void *arg1) {
    struct func_80223CB8_P *p = ((struct func_80223CB8_Arg *)arg0)->unk5C;
    func_80223B2C(arg0, arg1, p->v0, p->v1);
}
