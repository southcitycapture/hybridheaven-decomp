#include "context.h"

struct func_8014B8DC_Inner {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};
struct func_8014B8DC_Struct {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    struct func_8014B8DC_Inner *unk4;
    u8 unk8;
    u8 unk9;
    u8 pad[2];
};
extern s32 func_8012FF58();

void func_8014B8DC(void) {
    struct func_8014B8DC_Struct *p;
    s32 s;
    u8 *end;
    s8 *a;
    struct func_8014B0BC_Struct *b;

    s = func_8012FF58();
    for (p = (struct func_8014B8DC_Struct *)&D_801BEF38; ; ) {
        if (p->unk0 & 1) {
            if (p->unk2 >= 0x8000) {
                a = (s8 *)func_8014B6F8(p->unk2);
                if (a != NULL) {
                    *a = 0;
                }
                b = func_8014B5E8();
                if (b != NULL) {
                    b->unk0 = p->unk0;
                    b->unk1 = p->unk1;
                    b->unk2 = (s32)p->unk4->unk90;
                    b->unk4 = (s32)p->unk4->unk94;
                    b->unk6 = (s32)p->unk4->unk98;
                    b->unk8 = p->unk4->unk9C;
                    b->unkA = p->unk2;
                    b->unkE = s;
                    b->unkC = p->unk8;
                    b->unkD = p->unk9;
                }
            }
        }
        p++;
        if ((u8 *)p == &D_801BF178) break;
    }
}
