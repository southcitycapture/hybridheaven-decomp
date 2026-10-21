#include "context.h"

typedef struct func_8037AC08_StructCam { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; } func_8037AC08_StructCam;
typedef struct func_8037AC08_StructHolder { u8 pad[0x2C]; func_8037AC08_StructCam *unk2C; } func_8037AC08_StructHolder;
typedef struct func_8037AC08_StructP { u8 pad[0x20]; u16 unk20; } func_8037AC08_StructP;
typedef struct func_8037AC08_StructW { s32 a; s32 b; s32 c; } func_8037AC08_StructW;
typedef struct func_8037AC08_StructO { u8 pad[0x30]; s32 unk30; u8 pad34[0xC]; f32 unk40; f32 unk44; f32 unk48; u8 pad4C[0x10]; func_8037AC08_StructP *unk5C; } func_8037AC08_StructO;

extern u8 D_80388A6C;
extern func_8037AC08_StructHolder *D_801BBCD0;
extern void func_801518D4(s32, s32, s32);
extern void func_8013A28C(s32, func_8037AC08_StructW);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_801CD228(void *, s32);
extern u8 func_8037AEA8[];
extern u8 func_8037B118[];

void func_8037AC08(func_8037AC08_StructO *arg0, s32 arg1) {
    func_8037AC08_StructP *p;
    s32 pad1;
    u16 s;
    s32 pad2;
    u8 *v;
    s32 r;
    func_8037AC08_StructCam *cam;

    p = arg0->unk5C;
    if (p->unk20 == 0) {
        arg0->unk48 = 0.0f;
        arg0->unk44 = 0.0f;
        arg0->unk40 = 0.0f;
        (*(func_8037AC08_StructHolder **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C->unk8 -= 5.0;
        if (D_80388A6C == 2) {
            cam = (*(func_8037AC08_StructHolder **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C;
            cam->unk12 = (s16)(cam->unk12 - 0x800) & 0x1FFF;
        } else if (D_80388A6C == 3) {
            cam = (*(func_8037AC08_StructHolder **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C;
            cam->unk12 = (s16)(cam->unk12 - 0x800) & 0x1FFF;
        }
    }
    s = func_80010550(arg1, (s32)p, (s32)arg0);
    if (func_8037B9F0((void *)arg0) == 0 && s != 0) {
        if (arg0->unk30 & 4) {
            if (D_80388A6C < 4) {
                func_801518D4(0, 7, 6);
            } else {
                func_801518D4(0, 3, 5);
            }
            v = (u8 *)p + 0x1C;
            if (D_80388A6C == 1 || D_80388A6C == 2) {
                *(s32 *)v = 0x190006E;
            } else {
                *(s32 *)v = 0x190006B;
            }
            *(u16 *)(v + 4) = 0;
            *(u16 *)(v + 6) = 0;
            func_8013A28C(arg1, *(func_8037AC08_StructW *)v);
            cam = D_801BBCD0->unk2C;
            r = func_801C5A1C(cam->unk4, cam->unk8 + 0.5, cam->unkC, cam->unk4, cam->unk8 - 1.0, cam->unkC);
            if (r == 0 || !(((*(u16 *)((u8 *)&D_801BBBF0 + 4) == 0x4D || *(u16 *)((u8 *)&D_801BBBF0 + 4) == 0x50) && *((u8 *)&D_801BBBF0 + 0x35B) >= 2) || (*(u16 *)((u8 *)&D_801BBBF0 + 4) == 0x51 && *((u8 *)&D_801BBBF0 + 0x35B) == 2))) {
                func_801CD228(arg0, arg1);
            }
            if (D_80388A6C == 1 || D_80388A6C == 2) {
                func_800058DC(arg0, func_8037AEA8);
            } else {
                func_800058DC(arg0, func_8037B118);
            }
        }
    }
}
