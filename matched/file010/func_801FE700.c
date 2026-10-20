#include "context.h"
struct func_801FE790_Struct {
    u8 pad[0xAB];
    u8 unkAB;
    u8 padAC[4];
    s16 unkB0;
};
struct func_801FE790_StructObj {
    u8 pad[0x30];
    s16 *unk30;
};
void func_801FE790(struct func_801FE790_Struct *arg0, struct func_801FE790_StructObj **arg1);

struct func_801FE700_Struct {
    u8 pad0[0xAB];
    u8 unkAB;
    u8 pad1[4];
    s16 unkB0;
};
struct func_801FE700_Inner {
    u8 pad0[0x30];
    s16 *unk30;
};

void func_801FE700(struct func_801FE700_Struct *arg0, u8 *arg1) {
    u8 i;
    s16 *p;

    if (arg0->unkB0++ < 6) {
        i = 2;
        do {
            p = (*(struct func_801FE700_Inner **)((s32)arg1 + arg0->unkAB * 4 + i * 4))->unk30;
            i++;
            p[1] += 1;
        } while (i < 10);
        return;
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_801FE790);
}
