#include "common.h"
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void func_800058DC(s32 arg0, void *arg1);
void func_80222370(s32 arg0, s32 arg1);
extern void func_80222B08();


typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u8 b0;
            u8 top : 1;
            u8 mode : 2;
            u8 low : 5;
            u8 d : 3;
            u8 r : 5;
        } b;
    } u30;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[0x2F1 - 0x2D9];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x375 - 0x2FA];
    u8 unk375;
    u8 pad376[0x392 - 0x376];
    u8 unk392;
} func_80222210_Struct;
extern void func_80225540(s32);
extern void func_80367460(s32, s32, void *);

void func_80222210(s32 arg0, s32 arg1) {
    s32 id;
    func_80222210_Struct *p;
    func_80222210_Struct *q;
    s32 kind;

    id = D_801BBBF0.unkDC;
    p = (arg0 == id) ? (func_80222210_Struct *)&D_801BC03C : (func_80222210_Struct *)&D_801BC3D8;
    q = (arg0 != id) ? (func_80222210_Struct *)&D_801BC03C : (func_80222210_Struct *)&D_801BC3D8;
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        p->u30.b.d = 0;
        if (p->unk2 <= 0 || p->u30.f.b != 0) {
            func_800058DC(arg0, func_80222B08);
        }
        func_80367460(arg0, arg1, q);
        kind = q->unk2D8;
        if (kind == 9 || kind == 10) {
            if (q->unk375 <= 0) {
                return;
            }
            p->unk2F1 = 0;
        } else if (q->u30.b.b0 & 1) {
            return;
        }
        func_80225540(arg0);
        if (p->u30.f.c == 0) {
            p->u30.b.mode = p->unk2F9 + 2;
        }
        func_800058DC(arg0, func_80222370);
    }
}
