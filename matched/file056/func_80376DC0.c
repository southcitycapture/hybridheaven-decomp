#include "common.h"
extern u16 D_801BBBF8;
typedef struct func_8037769C_Glob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037769C_Glob;
extern struct func_8037769C_Glob D_80216B90;
extern void func_800058DC(void *, void *);
extern void func_80011140(s32, void *, func_8037769C_Glob, s32);
extern void func_8014B4A0(u16, f32 *);
struct func_80376B80_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
};

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8014C194(u16, void *);
extern u8 D_8038910C[];
extern f64 D_80389370;
extern void func_80376F84();

struct func_80376DC0_Struct {
    u8 pad0[0x5C];
    struct func_80376B80_Obj *unk5C;
};

struct func_80376DC0_Pos {
    f32 v[4];
    f32 y;
    f32 x;
};

void func_80376DC0(struct func_80376DC0_Struct *arg0, s32 arg1) {
    struct func_80376B80_Obj *obj;
    struct { f32 f[3]; s16 h; u8 pad[0xA]; } sp6C;
    struct func_80376DC0_Pos pos;

    obj = arg0->unk5C;
    func_80011140(arg1, obj, D_80216B90, 5);
    if (obj->unk1C == 0x01680041) {
        func_8014C194(D_801BBBF8, obj);
        func_8014B4A0(D_801BBBF8, (f32 *)&sp6C);
        pos.x = sp6C.f[0] + func_8001EAD0(sp6C.h + 0xC00) * 9.5;
        pos.y = sp6C.f[1] + 17.0;
        func_8011AAF4(D_8038910C, 0x17A, (s32)arg0, 0, 1, 10.0f, pos.x, pos.y,
                      sp6C.f[2] + func_8001EB64(sp6C.h + 0xC00) * 9.5, 10.0f, sp6C.f[0],
                      sp6C.f[1] + D_80389370, sp6C.f[2], 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80376F84);
    }
}
