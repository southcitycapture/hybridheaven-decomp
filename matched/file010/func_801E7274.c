#include "context.h"

typedef struct func_801E7274_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E7274_Sub;
typedef struct func_801E7274_Arg2 {
    u8 pad[0x1C];
    func_801E7274_Sub unk1C;
} func_801E7274_Arg2;
typedef struct func_801E7274_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E7274_Arg0;
typedef struct func_801E7274_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E7274_Inner;
typedef struct func_801E7274_Outer {
    u8 pad[0x2C];
    func_801E7274_Inner *unk2C;
} func_801E7274_Outer;
typedef struct func_801E7274_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7274_Table;

extern void D_80011140(s32, void *, func_801E7274_Table, s32);
extern void D_8013A28C(s32, func_801E7274_Sub);
extern void func_800111E0(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

/* globals reached from an earlier-declared symbol */
#define GOUTER (((func_801E7274_Outer **)&D_801BBCCC)[1])
#define GTABLE (*(func_801E7274_Table *)((u8 *)&D_801BBCCC + 0x5AED0))
#define GSCALE D_8021AFB0

void func_801E7274(func_801E7274_Arg0 *arg0, s32 arg1, func_801E7274_Arg2 *arg2, s32 arg3) {
    func_801E7274_Sub *p = &arg2->unk1C;
    s32 t = p->unk0;

    if (t == 0x168003E) goto a;
    if (t == 0x168003F) goto def;
    if (t == 0x1680040) goto def;
    if (t != 0x1680041) goto def;
    goto def;
a:
    if ((f64)p->unk8 != 1.0) {
        p->unk8 = 1.0f;
    }
    D_8013A28C(arg1, *p);
    arg0->unk2C = (arg0->unk2C | 0x60);
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_800111E0(arg1, (u8 *)p + 6);
    arg0->unk40 = (f32)(((f64)func_8001EAD0(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
    arg0->unk48 = (f32)(((f64)func_8001EB64(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
    return;
def:
    D_80011140(arg1, arg2, GTABLE, 5);
    arg0->unk2C = arg0->unk2C & ~0x80;
    arg0->unk40 = (f32)(((f64)func_8001EAD0(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
    arg0->unk48 = (f32)(((f64)func_8001EB64(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
}
#undef GOUTER
#undef GTABLE
#undef GSCALE
