#include "context.h"

typedef struct func_8021B560_StructC { u8 pad[0x63]; u8 unk63; } func_8021B560_StructC;
typedef struct func_8021B560_StructG {
    u8 pad0[0x2C]; u16 unk2C;
    u8 pad1[0xDC - 0x2E]; func_8021B560_StructC *unkDC;
    u8 pad1b[0xEC - 0xE0]; func_8021B560_StructC *unkEC;
    u8 pad1c[0x450 - 0xF0]; s16 unk450; s16 unk452;
    u8 pad2[0x4A2 - 0x454]; s16 unk4A2;
    u8 pad3[0x7EC - 0x4A4]; s16 unk7EC; s16 unk7EE;
    u8 pad4[0x83E - 0x7F0]; s16 unk83E;
    u8 pad5[0x1031 - 0x840]; u8 unk1031; u8 pad6[2]; u8 unk1034;
} func_8021B560_StructG;
typedef struct func_8021B560_StructO { u8 pad[0x90]; u8 unk90; u8 pad2[0x9C-0x91]; s32 unk9C; } func_8021B560_StructO;

extern s32 func_80005670(void *, void *);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s8 D_8023C264;
extern u8 D_8023C924[];
extern u8 func_8021B870[];
extern void func_8022C7A4(void *);
extern void func_8022CABC();
extern void func_8022CAFC(void *);
extern s16 func_8022D954(void *);
extern void func_80232820();
extern void func_80232FEC(void *);
extern s32 func_80236C9C();
extern void func_80244410(void *);

#define G ((func_8021B560_StructG *)D_801BBBF0)

void func_8021B560(func_8021B560_StructO *arg0, s32 arg1) {
    s32 v;

    if (arg0->unk90 == 0) {
        if ((G->unk2C == 0xA) || (G->unk2C == 0xB)) {
            arg0->unk90 = func_80126A0C((s32)arg0, 0x111, 0);
            return;
        }
        arg0->unk90 = func_80126A0C((s32)arg0, 0x10F, 0);
        return;
    }
    v = arg0->unk90;
    if (v == 1) {
        if ((func_80236C9C() != 0) || (G->unk2C == 0xA) || (G->unk2C == 0xB)) {
            if (func_80126A0C((s32)arg0, 0x110, 0) != 0) {
                arg0->unk90 = 3;
            }
        } else {
            arg0->unk90 = 3;
        }
    } else if ((G->unkDC->unk63 != 0) && (G->unkEC->unk63 != 0) && (v == 3)) {
        arg0->unk9C = func_80005670(arg0, D_8023C924);
        if ((G->unk2C == 0xA) || (G->unk2C == 0xB)) {
            func_8022C7A4(D_801BC3D8);
            func_80244410(D_801BC03C);
            func_80244410(D_801BC3D8);
            func_80232FEC(G->unkDC);
            func_80232FEC(G->unkEC);
        } else {
            func_80232FEC(G->unkDC);
            func_8022CABC();
            func_8022CAFC(G->unkEC);
            func_80232820();
        }
        G->unk4A2 = func_8022D954(D_801BC03C);
        G->unk83E = func_8022D954(D_801BC3D8);
        v = G->unk1034;
        if (v == 1) {
            G->unk7EE = G->unk7EC;
        }
        if ((v == 2) || (func_80151BC4() == 2)) {
            G->unk452 = G->unk450;
        }
        arg0->unk90 = 0;
        D_8023C264 = 0;
        func_800058DC(arg0, func_8021B870);
        G->unk1031 = 2;
    }
}
