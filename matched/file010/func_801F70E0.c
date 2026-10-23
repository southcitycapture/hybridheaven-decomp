#include "context.h"

typedef struct func_801F70E0_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[0x20];
    f32 a, b, c;
} func_801F70E0_StructPos;
typedef struct func_801F70E0_StructMid {
    u8 pad[0x2C];
    func_801F70E0_StructPos *pos;
} func_801F70E0_StructMid;
typedef struct func_801F70E0_StructArg {
    u8 pad[0x24];
    func_801F70E0_StructMid *mid;
    u8 pad28[0x34];
    void *data;
    u8 pad60[0x4F];
    u8 flag;
} func_801F70E0_StructArg;
typedef struct func_801F70E0_StructGlobal {
    u8 pad[0xE0];
    func_801F70E0_StructMid *obj;
    u8 padE4[4];
    func_801F70E0_StructMid *other;
} func_801F70E0_StructGlobal;
extern f32 D_80218CC0;
extern void func_80147768(f32 *, f32);
extern s32 func_801FA374();
extern f32 D_8021B028;
extern f32 D_8021B02C;
extern f32 D_8021B030;
extern s32 D_8013A334(f32 *, s32, void *, s32);
extern s32 D_801F3C90(void *, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
extern s32 func_801FA2E0();
extern s32 func_8012C6B4(s32);
extern void func_801F73F0();

#define VEC ((func_801F4620_Struct *)&D_8021B028)
#define GLOBAL ((func_801F70E0_StructGlobal *)&D_801BBBF0)
#define PLAYER ((func_801F70E0_StructMid *)D_801BBCD0)

void func_801F70E0(func_801F70E0_StructArg *arg0, s32 arg1) {
    void *data;
    func_801F4620_Struct sp58;
    f32 sp4C[3];
    u8 flag;
    s8 dir;

    data = arg0->data;
    D_8013A334(sp4C, arg1, data, 6);
    if (D_801F3C90(arg0, 0.8f, D_80218CC0, *(s32 *)&PLAYER->pos->x, PLAYER->pos->y + 25.0f, PLAYER->pos->z, D_80218CC0, sp4C[0], sp4C[1], sp4C[2], D_80218CC0, 30.0f)) {
        flag = arg0->flag;
        if (flag != 0) {
            func_801FA374(flag);
        } else {
            func_801FA2E0(flag);
        }
        func_801F4620(VEC, PLAYER->pos->x, PLAYER->pos->y, PLAYER->pos->z, arg0->mid->pos->x, arg0->mid->pos->y, arg0->mid->pos->z);
        func_80147768(&D_8021B028, 8.0f);
        sp58 = *VEC;
        dir = func_8012C6B4(2) * 2 - 1;
        func_80130AA0(0, dir * 0x71C, 0, &D_8021B028, &D_8021B02C, &D_8021B030);
        VEC->unk0 += GLOBAL->obj->pos->x;
        VEC->unk4 += GLOBAL->obj->pos->y + 5.0;
        VEC->unk8 += GLOBAL->obj->pos->z;
        if (func_8010843C(GLOBAL->other->pos->a, GLOBAL->other->pos->b, GLOBAL->other->pos->c, VEC->unk0, VEC->unk4, VEC->unk8)) {
            dir = -dir;
            func_80130AA0(0, dir * 0x71C, 0, &sp58.unk0, &sp58.unk4, &sp58.unk8);
            VEC->unk0 = sp58.unk0 += PLAYER->pos->x;
            VEC->unk4 = sp58.unk4 += PLAYER->pos->y + 5.0;
            VEC->unk8 = sp58.unk8 += PLAYER->pos->z;
        }
        func_800058DC(arg0, (s32)func_801F73F0);
    }
}
