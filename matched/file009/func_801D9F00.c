#include "common.h"
typedef struct {
    u8 pad0[6];
    u16 unk6;
    f32 unk8;
    u8 pad1[0x14 - 0xC];
} func_801D8948_Struct14;
extern func_801D8948_Struct14 D_8018294C[];
extern void func_80020718(s32 arg0);
s32 func_8012C97C(u16, u16);
extern void func_80133980(s32 arg0);
s32 func_80133A24(s32);
extern s32 func_8014F330(void *);
void func_80150314(void *, s32);
extern void func_801C3B7C(s32);


typedef struct func_801D9F00_StructPos { u8 pad[8]; f32 y; } func_801D9F00_StructPos;
typedef struct func_801D9F00_StructLink { u8 pad[0x30]; func_801D9F00_StructPos *pos; } func_801D9F00_StructLink;
typedef struct func_801D9F00_StructCoords { u8 pad[6]; s16 x, y, z; } func_801D9F00_StructCoords;
typedef struct func_801D9F00_Struct {
    u8 pad[0x24]; func_801D9F00_StructLink *link;
    u8 pad28[0xE]; u16 id; func_801D9F00_StructCoords *coords;
    u8 pad3C[0x54]; u8 kind, flag, pad92, state; f32 timer; s32 handle;
} func_801D9F00_Struct;
typedef struct func_801D9F00_StructEntry {
    u8 pad[6]; u16 limit; f32 speed; u8 padC[2]; u16 anim; u8 pad10[2]; u16 effect;
} func_801D9F00_StructEntry;
extern void func_801FC830(f32, f32, f32, f32, s32);

s32 func_801D9F00(func_801D9F00_Struct *arg0, s32 arg1)
{
    s32 state;
    s32 effect;
    func_801D9F00_StructCoords *coords;
    func_801D9F00_StructEntry *entry;
    func_801D9F00_StructPos *pos;
    f32 value;

    if (arg0->kind == 0x64 && func_80133A24(0x147) != 0) {
        func_80150314(arg0, 0x67);
        arg0->flag = 0;
        arg0->handle = func_8012C97C(arg0->id, ((func_801D9F00_StructEntry *)D_8018294C)[arg0->kind].anim);
        return 0;
    }
    state = arg0->state;
    if (state == 0) goto state0;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    return 1;
state0:
        if (func_8014F330(arg0) != 0) {
            func_801C3B7C(0);
            arg0->state = 1;
            arg0->timer = 0.0f;
            effect = ((func_801D9F00_StructEntry *)D_8018294C)[arg0->kind].effect;
            if (effect != 0) {
                coords = arg0->coords;
                func_801FC830((f32)((f64)(f32)coords->x / 10.0), (f32)((f64)(f32)coords->y / 10.0), (f32)((f64)(f32)coords->z / 10.0), 500.0f, effect);
            }
            if (arg0->kind == 0x65) {
                func_80133980(0x141);
                func_80020718(0x6B9);
            }
        }
        goto done;
state1:
        arg0->link->pos->y += (f64)((func_801D9F00_StructEntry *)D_8018294C)[*(volatile u8 *)&arg0->kind].speed;
        state = (s32)&((func_801D9F00_StructEntry *)D_8018294C)[arg0->kind];
        value = (f64)arg0->timer + (f64)((func_801D9F00_StructEntry *)state)->speed;
        arg0->timer = value;
        if ((f32)(u32)((func_801D9F00_StructEntry *)state)->limit <= value) {
            arg0->state = 2;
            arg0->timer = 0.0f;
            func_801C3B7C(0);
        }
        goto done;
state2:
        if (func_8014F330(arg0) != 0) {
            func_801C3B7C(0);
            arg0->state = 3;
            arg0->timer = 0.0f;
            effect = ((func_801D9F00_StructEntry *)D_8018294C)[arg0->kind].effect;
            if (effect != 0) {
                coords = arg0->coords;
                func_801FC830((f32)((f64)(f32)coords->x / 10.0), (f32)((f64)(f32)coords->y / 10.0), (f32)((f64)(f32)coords->z / 10.0), 500.0f, effect);
            }
        }
        goto done;
state3:
        pos = arg0->link->pos;
        pos->y = (f64)pos->y - (f64)((func_801D9F00_StructEntry *)D_8018294C)[*(volatile u8 *)&arg0->kind].speed;
        state = (s32)&((func_801D9F00_StructEntry *)D_8018294C)[arg0->kind];
        value = (f64)arg0->timer + (f64)((func_801D9F00_StructEntry *)state)->speed;
        arg0->timer = value;
        if ((f32)(u32)((func_801D9F00_StructEntry *)state)->limit <= value) {
            arg0->link->pos->y = (f32)((f64)(f32)arg0->coords->y / 10.0);
            arg0->state = 0;
            arg0->timer = 0.0f;
            func_801C3B7C(0);
        }
done:
    return 1;
}
