#include "context.h"

typedef struct func_80246F24_StructNode {
    u8 pad[4];
    f32 x, y;
    s32 z;
} func_80246F24_StructNode;
typedef struct func_80246F24_StructMid {
    u8 pad[0x2C];
    func_80246F24_StructNode *unk2C;
} func_80246F24_StructMid;
typedef struct func_80246F24_Struct {
    u8 pad[0x24];
    func_80246F24_StructMid *unk24;
    u8 pad28[0x34];
    func_80246E60_StructInner *unk5C;
} func_80246F24_Struct;
extern f32 D_8025C5B8;
extern s32 D_8012A94C(void *, s32);
extern void func_8024700C();

void func_80246F24(func_80246F24_Struct *arg0, s32 arg1) {
    func_80246E60_StructInner *sp2C;
    func_80246F24_StructNode *temp_v0;

    sp2C = arg0->unk5C;
    if (func_80244AB0(arg0) == 0) {
        D_8025C708 = 0;
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 5) == 0) {
            func_80010550(arg1, sp2C);
            if (D_8012A94C(arg0, 0x40) == 0) {
                temp_v0 = arg0->unk24->unk2C;
                func_80127430(temp_v0->x, temp_v0->y, temp_v0->z, 0x66D, D_8025C5B8, 1.0f);
                sp2C->unk78 = 1;
                func_800058DC(arg0, func_8024700C);
            }
        }
    }
}
