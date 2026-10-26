#include "common.h"
extern f32 D_8002FC20(f32);
extern s32 D_8013A334(f32 *, s32, s32, s32);
typedef struct func_8024C58C_StructGlobal {
    u8 pad0[0x104];
    u16 unk104;
    u8 pad106[0xBA2 - 0x106];
    u8 unkBA2;
} func_8024C58C_StructGlobal;
extern func_8024C58C_StructGlobal D_801BBBF0;
extern u8 D_801BBF7C[];
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern struct func_80246E60_StructGlobal D_80258F48;
extern s8 D_8025C704;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
extern s32 D_80244AB0();
#define func_80244AB0 D_80244AB0
typedef struct func_80244AB0_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80244AB0_Node;
typedef struct func_80244AB0_Mid {
    u8 pad0[0x2C];
    func_80244AB0_Node *unk2C;
} func_80244AB0_Mid;


typedef struct func_80245F84_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245F84_StructInner;
typedef struct func_80245F84_Struct {
    u8 pad0[0x24];
    func_80244AB0_Mid *unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x28];
    func_80245F84_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
    u8 pad96[0x6];
    s32 unk9C;
} func_80245F84_Struct;
extern s32 func_8010854C(f32, f32, f32, f32, f32, f32);
extern void func_801300B0(f32, s32, s32, f32, f32);
extern u8 D_8025C0D4[];
extern f32 D_8025C5A4;
extern u8 D_8025C6F4[];
void func_80246814();
void func_802472C8();
void func_80247420();

#define N (arg0->unk24->unk2C)

void func_80245F84(func_80245F84_Struct *arg0, s32 arg1) {
    func_80245F84_StructInner *sp8C;
    f32 sp80[3];
    f32 x, z;
    f32 sp74;
    f32 y;
    f32 s;

    sp8C = arg0->unk5C;
    if (func_80244AB0() == 0 && func_8012CE9C(arg1, sp8C, D_80258F48, 0xA) == 0) {
        func_80010550(arg1, sp8C);
        if (!(arg0->unk9C & 0x88)) {
            sp74 = func_8001EAD0(N->unk12);
            if (func_8010854C((x = N->unk4), (y = N->unk8 + 20.0f), (z = N->unkC), sp74 * 50.0f + x, y, func_8001EB64(N->unk12) * 50.0f + z) != 0) {
                s = *(f32 *)((u8 *)&D_801BBBF0 + 0x368) - N->unk4;
                z = *(f32 *)((u8 *)&D_801BBBF0 + 0x370) - N->unkC;
                if (s * s + z * z > 1600.0f) {
                    D_8013A334(sp80, arg1, (s32)sp8C, 6);
                    x = N->unk4;
                    z = N->unkC;
                    s = D_8002FC20(x * x + z * z);
                    func_8011AAF4(D_8025C0D4, 0x310, arg0, 0, 1, 4.0f, (x = N->unk4) / s * -150.0f + x, 230.0f, (z = N->unkC) / s * -150.0f + z, 4294967296.0f, sp80[0], sp80[1], sp80[2], 0.0f, 35.0f, -1, -1);
                    D_8025C704 = 0;
                    if (*(s32 *)D_801BBF7C == *(s32 *)D_8025C6F4) {
                        func_800058DC(arg0, func_80246814);
                        return;
                    }
                }
            }
            if (arg0->unk30 & 0x50) {
                sp8C->unk78 = 1;
                func_80127430(N->unk4, N->unk8, *(s32 *)&N->unkC, 0x337, D_8025C5A4, 1.0f);
                func_801300B0(2.0f, 0, 0x1E, 0.7f, 5.0f);
                func_800058DC(arg0, func_802472C8);
                return;
            }
        }
        {
            s32 f;
            arg0->unk9C = arg0->unk30;
            f = arg0->unk94-- == 0;
            if (f) {
                sp8C->unk78 = 1;
                func_800058DC(arg0, func_80247420);
            }
        }
    }
}
