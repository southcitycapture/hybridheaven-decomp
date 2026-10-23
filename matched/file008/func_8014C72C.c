#include "context.h"

typedef struct func_8014C72C_Struct_Pos {
    u8 pad[6];
    s16 x, y, z;
} func_8014C72C_Struct_Pos;
typedef struct func_8014C72C_Struct_Arg {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *sub;
    u8 pad28[4];
    s32 flags;
    u8 pad30[8];
    func_8014C72C_Struct_Pos *pos;
    u8 pad3C[0x54];
    u8 index, flags91, state, state93;
    f32 value;
    u8 pad98[4];
    u8 id;
} func_8014C72C_Struct_Arg;
typedef struct func_8014C72C_Struct_Data {
    u8 pad0[4];
    f32 x, y, z;
    s16 pad10, angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_8014C72C_Struct_Data;
typedef struct func_8014C72C_Struct_Obj {
    u8 pad[0x2C];
    func_8014C72C_Struct_Data *data;
} func_8014C72C_Struct_Obj;
typedef struct func_8014C72C_Struct_G {
    u8 pad0[0xE0];
    func_8014C72C_Struct_Obj *obj;
    u8 padE4[4];
    func_8014C72C_Struct_Obj *cam;
    u8 padEC[0xAC];
    f32 x, y, z;
    u8 pad1A4[0xC];
    s16 id;
    u8 pad1B2[0x176];
    f32 cx, cy, cz;
    u8 pad334[0x101];
    u8 flags;
} func_8014C72C_Struct_G;
typedef struct func_8014C72C_Struct_Table {
    u16 value;
    u8 pad[18];
} func_8014C72C_Struct_Table;
#define FG ((func_8014C72C_Struct_G *)D_801BBBF0)

void func_8014C72C(func_8014C72C_Struct_Arg *arg0) {
    s16 angle;
    void (*callback)(void);
    func_8014C2B0_Struct_Table *table;
    func_8014C72C_Struct_Pos *pos;
    func_8014C72C_Struct_Data *data;
    f64 height, playerHeight;
    u16 type;
    f32 trig;
    extern void (*D_80181FA0[])(void);
    extern func_8014C72C_Struct_Table D_80182958[];
    extern u8 D_801902C8[];
    extern f64 D_80190670, D_80190678;
    extern s32 D_801BF180;
    extern s16 func_8001EF38(f32, f32);
    extern s32 func_80126944(void);
    extern void func_801C3B10(s32);
    extern void func_801C3B2C(s32);
    extern void func_801C3B70(void);
    extern void func_801C3BC8(void);
    extern s32 func_801C3D20(f32, f32, f32);
    extern s32 D_801C3B5C(void);
    extern s32 D_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
    extern s32 func_801C3B88();
    extern void func_801C3B7C(s32);
    extern s32 func_8014F330(s32 arg0);
    extern float func_8001EAD0(short);
    extern float func_8001EB64(short);
    extern void func_801506EC();
    extern void func_8014CDA0();

    callback = D_80181FA0[D_8018294C[arg0->index].unk4];
    if (callback != NULL) {
        callback();
    }
    pos = arg0->pos;
    if (func_801C3D20((f32)pos->x / 10.0, (f32)pos->z / 10.0, (f32)(u32)*(u16 *)D_8018294C[arg0->index].pad6 + 12.0f) &&
        (playerHeight = FG->obj->data->y, height = (f32)arg0->pos->y / 10.0, height - 5.0 <= playerHeight) &&
        playerHeight < height + 40.0 && func_80126944() == 0) {
        arg0->flags |= 0x800;
    } else {
        arg0->flags &= ~0x800;
    }
    if (func_8014F330((s32)arg0) != 0 && func_80126944() != 1) {
        func_801C3B88();
        func_801C3B7C(0);
        if (arg0->flags91 & 0x40) {
            func_801C3B70();
            return;
        }
        FG->flags |= 1;
        FG->id = arg0->id;
        arg0->value = 0.0f;
        type = D_8018294C[arg0->index].unk4;
        if (type == 0 || type == 0x22) {
            arg0->state = 2;
        } else {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801C3BC8();
            arg0->state = D_801C3B5C();
            arg0->state93 = 1;
            D_8011AAF4(D_801902C8, 0x4EC, (s32)arg0, 0, 1, 0.0f,
                FG->cam->data->a, FG->cam->data->b, FG->cam->data->c, 0.0f,
                FG->cam->data->d, FG->cam->data->e, FG->cam->data->f, 0.0f, 35.0f, -1, -1);
            D_801BF180 = 1;
            if (arg0->state == 1) {
                angle = (s16)(arg0->sub->unk30->unk12 + 0x1000) & 0x1FFF;
            } else {
                angle = arg0->sub->unk30->unk12;
            }
            trig = func_8001EAD0(angle);
            FG->x = (((f32)(u32)D_80182958[arg0->index].value * 0.5 + 22.0) * trig) + arg0->sub->unk30->unk4;
            trig = func_8001EB64(angle);
            FG->z = (((f32)(u32)D_80182958[arg0->index].value * 0.5 + 22.0) * trig) + arg0->sub->unk30->unkC;
            FG->y = arg0->sub->unk30->unk8;
            data = FG->obj->data;
            FG->obj->data->angle = func_8001EF38(FG->x - data->x, FG->z - data->z);
            trig = func_8001EAD0(angle);
            FG->cx = (((f32)(u32)D_80182958[arg0->index].value * 0.5 + 5.0 + D_80190670) * trig) + (f32)arg0->pos->x / 10.0;
            FG->cy = (f32)arg0->pos->y / 10.0 + 17.0;
            trig = func_8001EB64(angle);
            FG->cz = (((f32)(u32)D_80182958[arg0->index].value * 0.5 + 5.0 + D_80190678) * trig) + (f32)arg0->pos->z / 10.0;
        }
        if (arg0->flags91 & 0x20) {
            func_800058DC(arg0, func_801506EC);
            return;
        }
        func_800058DC(arg0, func_8014CDA0);
    }
}
