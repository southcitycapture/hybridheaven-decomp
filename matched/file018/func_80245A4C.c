#include "common.h"
extern s32 D_80244AB0();
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern func_80246E60_StructGlobal D_80258F3C;
extern u32 D_8025C708;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern s32 func_8001EF38(f32, f32);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern void func_8012A7F4(void *, f32, f32, s32);
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
typedef struct func_80245A4C_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80245A4C_Node;
typedef struct func_80245A4C_Mid {
    u8 pad0[0x2C];
    func_80245A4C_Node *unk2C;
} func_80245A4C_Mid;
typedef struct func_80245B90_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245B90_StructInner;
typedef struct func_80245A4C_Struct {
    u8 pad0[0x24];
    func_80245A4C_Mid *unk24;
    u8 pad28[0x34];
    func_80245B90_StructInner *unk5C;
} func_80245A4C_Struct;
typedef struct func_80245B90_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x28];
    func_80245B90_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
    u8 pad96[0x6];
    s32 unk9C;
} func_80245B90_Struct;
void func_80245B90(func_80245B90_Struct *arg0, s32 arg1);


extern f32 D_8025C59C;

typedef struct func_80245A4C_StructWork {
    f32 goalX;
    func_80245B90_StructInner *inner;
    func_80245A4C_Node *node;
    s32 angle;
    s32 context;
    f32 goalZ;
} func_80245A4C_StructWork;

void func_80245A4C(func_80245A4C_Struct *arg0, s32 arg1) {
    func_80245A4C_StructWork work;

    work.inner = arg0->unk5C;
    work.context = arg1;
    if (D_80244AB0() == 0) {
        D_8025C708 = 0;
        if (func_8012CE9C(work.context, work.inner, D_80258F3C, 0xA) == 0) {
            func_80010550(work.context, work.inner);
            work.node = arg0->unk24->unk2C;
            work.goalX = 0.0f;
            work.goalZ = 350.0f;
            work.angle = (arg0->unk24->unk2C->unk12 - func_8001EF38(work.goalX - work.node->unk4, work.goalZ - *(f32 *)&work.node->unkC)) & 0x1FFF & 0xFFFF;
            if ((work.angle < 0x200) || ((work.angle >= 0x1E01) && (work.angle < 0x1FFF))) {
                work.inner->unk78 = 1;
                work.node = arg0->unk24->unk2C;
                func_80127430(work.node->unk4, work.node->unk8, work.node->unkC, 0x66A, D_8025C59C, 1.0f);
                func_800058DC(arg0, func_80245B90);
            }
            func_8012A7F4(arg0, work.goalX, work.goalZ, 0x40);
        }
    }
}
