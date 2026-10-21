#include "context.h"
extern u8 D_801BBBF0[];
void func_8024CF9C(f32 arg0, f32 arg1, f32 arg2);
extern s16 func_8001EF38(f32, f32);
extern void func_80020718(s32);
extern void func_800058DC(s32, void (*)());
extern s32 func_801512CC(s32, f32, f32, f32);
extern void func_80151430(s32, s32);
extern void func_801515B0(s32, u8, s32);
extern void D_80151700(s32, u8, void *);
extern s32 func_801516CC(s32);
extern void func_80151700(s32, s32, void *);
extern s32 func_801517CC(s32);
extern u8 D_8017BAD8[];
extern f32 D_8025CFC8;
extern f64 D_8025CFD0;
extern f64 D_8025CFD8;
extern s32 D_8025DDE0;
extern void func_8024B0E0();

typedef struct { u8 pad[0x2C]; func_8024A610_Inner *unk2C; } func_8024AF30_E0;
typedef struct { u8 pad[0xE0]; func_8024AF30_E0 *unkE0; } func_8024AF30_G;
typedef struct { u8 pad[0x3C]; u16 unk3C; } func_8024AF30_Struct;

void func_8024AF30(func_8024AF30_Struct *arg0, s32 arg1) {
    u16 t;
    s32 i;
    func_8024A610_Inner *p;

    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t == 0) {
        func_8024CF9C(-128.0f, D_8025CFC8, 150.0f);
        p = ((func_8024AF30_G *)D_801BBBF0)->unkE0->unk2C;
        ((func_8024AF30_G *)D_801BBBF0)->unkE0->unk2C->unk12 = func_8001EF38(-128.0 - p->unk4, D_8025CFD0 - p->unkC);
        func_80020718(0x182);
    }
    if (t >= 0x1E && func_801517CC(D_8025DDE0) != 0) {
        func_801512CC(D_8025DDE0, -128.0f, 0.0f, 150.0f);
        p = ((func_8024AF30_G *)D_801BBBF0)->unkE0->unk2C;
        func_80151430(D_8025DDE0, func_8001EF38(p->unk4 - -128.0, p->unkC - D_8025CFD8) & 0xFFFF);
        i = 0;
        if (func_801516CC(D_8025DDE0) > 0) {
            do {
                D_80151700(D_8025DDE0, (u8)i, D_8017BAD8);
                func_801515B0(D_8025DDE0, (u8)i, 0);
                i++;
            } while (i < func_801516CC(D_8025DDE0));
        }
        arg0->unk3C = 0;
        func_800058DC((s32)arg0, func_8024B0E0);
    }
}
