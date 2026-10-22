#include "context.h"

typedef struct func_80247C54_Struct5 {
    s32 a, b, c, d, e;
} func_80247C54_Struct5;
typedef struct func_80247C54_StructObj {
    u8 pad0[0x24];
    func_802474E4_StructMid *unk24;
    u8 pad28[0x34];
    void *unk5C;
} func_80247C54_StructObj;
typedef struct func_80247C54_StructE {
    u8 unk0;
    u8 pad1[3];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80247C54_StructE;
typedef struct func_80247C54_StructT {
    u8 pad0[0x78];
    s16 unk78;
    u8 pad7A[0x16];
    s16 unk90;
} func_80247C54_StructT;
extern void *func_8012C4D0(void *, func_80247C54_Struct5, s32);
extern func_80247C54_Struct5 D_80258EA4;
extern f32 D_8025C5D0;
extern f32 D_8025C70C;
extern f32 D_8025C710;
extern f32 D_8025C714;
extern f32 D_8025C718;
extern u8 func_80247EB0[];

void func_80247C54(void *arg0, s32 arg1) {
    s32 i;
    s32 ang;
    func_802474E4_StructNode *n;
    void *sp38;
    func_80247C54_StructE *e;
    func_80247C54_StructT *t;
    f32 dx, dz;

    sp38 = ((func_80247C54_StructObj *)arg0)->unk5C;
    D_8025C708 = 1;
    if (func_80244AB0(arg0) == 0 && func_8012CE9C(arg1, sp38, D_80258F3C, 10) == 0) {
        func_80010550(arg1, sp38);
        n = ((func_80247C54_StructObj *)arg0)->unk24->unk2C;
        ang = (((func_80247C54_StructObj *)arg0)->unk24->unk2C->unk12 -func_8001EF38(D_8025C70C - n->unk4, D_8025C714 - n->unkC)) & 0x1FFF & 0xFFFF;
        if (ang < 0x280 || (ang >= 0x1D81 && ang < 0x1FFF)) {
            ((func_80247C54_StructT *)sp38)->unk78 = 1;
            dx = D_8025C70C - D_801BBCD0->unk2C->unk4;
            dz = D_8025C714 - D_801BBCD0->unk2C->unkC;
            if (dx * dx + dz * dz < D_8025C5D0) {
                for (i = 0, e = (func_80247C54_StructE *)D_8025C728; i != 8; i++) {
                    if (e->unk0 == 0) break;
                    e++;
                }
                if (i != 8) {
                    t = func_8012C4D0(arg0, D_80258EA4, 3);
                    if (t != NULL) {
                        t->unk90 = i;
                        e->unk4 = D_8025C70C;
                        e->unk8 = D_8025C710;
                        e->unkC = D_8025C714;
                        e->unk10 = D_8025C718;
                        e->unk0 = 1;
                        func_800058DC(arg0, func_80247EB0);
                        return;
                    }
                }
            }
        }
        func_8012A94C(arg0, 0x80);
    }
}
