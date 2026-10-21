#include "context.h"

typedef struct func_801CD878_Struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_801CD878_Struct;

extern void func_801CD668(void *, void **, f32);
extern void func_801CD7B0(void *, void **, f32);

void func_801CD878(void *arg0, void **arg1)
{
    f32 ratio;

    ratio = (((func_801CD878_Struct *)arg0)->unk92 + 1.0) /
            (((func_801CD878_Struct *)arg0)->unk90 + 1.0);
    func_801CD668(arg0, arg1, ratio);
    func_801CD7B0(arg0, arg1, ratio);
}
