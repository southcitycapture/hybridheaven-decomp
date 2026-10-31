#include "common.h"

extern f32 D_801906F0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_80190688;
extern f64 D_80190690;
extern f64 D_80190698;
extern f64 D_801906A0;
extern f64 D_801906A8;
extern f64 D_801906B0;
extern f64 D_801906B8;
extern s16 func_801FD284(s16, s16, s32, void *);
extern s32 D_801BF180;
extern s32 func_800178E8();
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80126880(s32 arg0);
extern s32 func_80126CC0(void *, void *);
extern s32 func_8012C97C(u16, u16);
extern s32 func_8012FFC0();
extern s32 func_80150584();
extern s32 func_801C3044();
extern s32 func_801C3B88();                                /* extern */
extern s32 func_801C3D90(u64 arg0);                          /* extern */
extern u16 D_801BBDA0;
extern u16 D_801BBFA8;
extern u32 D_801BBFAC[];
extern u8 D_8017AF38[];
extern u8 D_801826AC[];
extern u8 D_801826D8[];
extern u8 D_801826E0[];
extern u8 D_80182734[];
extern u8 D_801BBBF0[];
extern u8 D_801BC025;
extern void *D_801BBCD0;
extern void func_80005670(void *, void *);
extern void func_800058DC();
extern void func_80006214(void *);
extern void func_800179B0();
extern void func_8001F74C(void *);
extern void func_8001F7D4(void *);
extern void func_80020718(s32);
extern void func_8012636C(void *, s32);
extern void func_80126820(u16);
extern void func_80126EAC(void);
extern void func_8012C89C(void *, s32, s16, s32);
extern void func_8014BC18();
extern void func_8014C6F4();
extern void func_8014C72C();
extern void func_8014CE54();
extern void func_8014D070();
extern void func_8014D190();
extern void func_8014D204();
extern void func_8014F400();
extern void func_8014FF14();
extern void func_801501C0();
extern void func_80150734();
extern void func_80150794();
extern void func_801509D8();
extern void func_80150AB4();
extern void func_80150B74();
extern void func_80150BAC();
extern void func_80150C8C();
extern void func_801C3B7C(s32);


typedef struct func_8014C2B0_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014C2B0_Struct_Data;

typedef struct func_8014C2B0_Struct_Sub {
    u8 pad0[0x30];
    func_8014C2B0_Struct_Data *unk30;
} func_8014C2B0_Struct_Sub;

typedef struct func_8014C2B0_Struct_Info {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_8014C2B0_Struct_Info;

typedef struct func_8014C2B0_Struct {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x2C - 0x28];
    s32 unk2C;
    u8 pad30[0x36 - 0x30];
    u16 unk36;
    func_8014C2B0_Struct_Info *unk38;
    u8 pad3C[0x74 - 0x3C];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92;
    u8 unk93;
    f32 unk94;
    u8 pad98[0x9C - 0x98];
    u8 unk9C;
    u8 pad9D;
    s16 unk9E;
    s16 unkA0;
    s16 unkA2;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
} func_8014C2B0_Struct;

typedef struct func_8014C2B0_Struct_ObjSub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8014C2B0_Struct_ObjSub;

typedef struct func_8014C2B0_Struct_Obj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_8014C2B0_Struct_ObjSub *unk30;
} func_8014C2B0_Struct_Obj;

typedef struct func_8014C2B0_Struct_Pair {
    s16 unk0;
    u16 unk2;
} func_8014C2B0_Struct_Pair;

typedef struct func_8014C2B0_Struct_Table {
    func_8014C2B0_Struct_Pair *unk0;
    u16 unk4;
    u8 pad6[0xE - 0x6];
    u16 unkE;
    u16 unk10;
    u8 pad12[2];
} func_8014C2B0_Struct_Table;

typedef struct func_8014C2B0_Struct_G {
    u8 pad0[0x3A6];
    u8 unk3A6;
    u8 pad3A7[0x3B8 - 0x3A7];
    u16 unk3B8;
    u8 pad3BA[2];
    void *unk3BC[30];
    u8 pad434[0xF32 - 0x434];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_8014C2B0_Struct_G;

typedef struct func_8014C2B0_Struct_Arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_8014C2B0_Struct_Arg;

extern void func_80005E44(void *, func_8014C2B0_Struct_Arg *);
extern func_8014C2B0_Struct_Arg D_80164F40;
extern void (*D_80182268[])(func_8014C2B0_Struct *, func_8014C2B0_Struct_Obj **);
extern void (*D_80182694[])(func_8014C2B0_Struct *, func_8014C2B0_Struct_Obj **);
extern func_8014C2B0_Struct_Table D_8018294C[];

#define G ((func_8014C2B0_Struct_G *)D_801BBBF0)

void func_8014C2B0(func_8014C2B0_Struct *arg0, func_8014C2B0_Struct_Obj **arg1) {
    func_8014C2B0_Struct_Arg s;
    func_8014C2B0_Struct_Pair *list;
    s32 j;
    s32 i;

    if (func_80126CC0(arg0, func_8014D204) != 0) {
        func_8001F7D4(arg0);
        arg0->unk90 = arg0->unk38->unk10 >> 24;
        arg0->unk91 = (arg0->unk38->unk10 >> 16) & 0xFF;
        arg0->unkA4 = arg0->unk38->unk14 >> 24;
        arg0->unkA5 = (arg0->unk38->unk14 >> 16) & 0xFF;
        arg0->unk9E = arg0->unk38->unk14 & 0xFFFF;
        arg0->unkA0 = arg0->unk38->unk18 >> 16;
        arg0->unkA2 = arg0->unk38->unk18 & 0xFFFF;
        arg0->unkA6 = arg0->unk38->unk10 & 0xFF;
        arg0->unk9C = 0;
        for (j = 0; j < 30; j++) {
            if (G->unk3BC[j] == NULL) {
                G->unk3BC[j] = arg0;
                arg0->unk9C = j;
                G->unk3B8 = 30;
                break;
            }
        }
        list = D_8018294C[arg0->unk90].unk0;
        s = D_80164F40;
        s.unk4 = 0x80000C00;
        for (i = 0; list[i].unk0 != -1; i++) {
            func_80005E44(arg0, &s);
        }
        func_80006214(arg0);
        for (i = 0; list[i].unk0 != -1; i++) {
            if (!(list[i].unk2 & 0x8000)) {
                func_8012636C(arg0, i);
            }
            if (D_8018294C[arg0->unk90].unk4 == 0 || D_8018294C[arg0->unk90].unk4 == 0x22) {
                arg1[i]->unk22 = 0;
                arg1[i]->unk30->unk30 = (s32)D_801826D8;
            } else {
                arg1[i]->unk30->unk24 |= 0x400;
                arg1[i]->unk30->unk30 = (s32)D_8017AF38 | 0x40000000;
                arg1[i]->unk30->unk4C = G->unkF32;
                arg1[i]->unk30->unk4D = G->unkF33;
                arg1[i]->unk30->unk4E = G->unkF34;
                arg1[i]->unk30->unk4F = G->unkF35;
                func_8012C89C(arg0, i, list[i].unk0, list[i].unk2 & ~0x8000);
            }
        }
        func_8001F74C(arg0);
        arg0->unk2C |= 0x800;
        arg0->unk78 = arg0->unk24->unk30->unk4;
        arg0->unk7C = arg0->unk24->unk30->unk8;
        arg0->unk80 = arg0->unk24->unk30->unkC;
        arg0->unk84 = arg0->unk24->unk30->unk10;
        arg0->unk86 = arg0->unk24->unk30->unk12;
        arg0->unk88 = arg0->unk24->unk30->unk14;
        arg0->unk93 = 0;
        arg0->unk94 = 0.0f;
        if (arg0->unk91 & 2) {
            arg0->unk74 = func_8012C97C(arg0->unk36, D_8018294C[arg0->unk90].unk10);
        } else {
            arg0->unk74 = func_8012C97C(arg0->unk36, D_8018294C[arg0->unk90].unkE);
        }
        if (arg0->unkA4 == G->unk3A6) {
            if (D_80182694[(arg0->unk38->unk10 >> 8) & 0xFF] != NULL) {
                D_80182694[(arg0->unk38->unk10 >> 8) & 0xFF](arg0, arg1);
            }
        }
        if (arg0->unk91 & 0x10) {
            if (D_80182268[D_8018294C[arg0->unk90].unk4] != NULL) {
                D_80182268[D_8018294C[arg0->unk90].unk4](arg0, arg1);
            }
            func_800058DC((s32)arg0, func_8014D070);
        } else {
            func_800058DC((s32)arg0, func_8014C6F4);
        }
    }
}



void func_8014C6F4(u64 arg0) {
    if (func_801C3D90(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_8014C72C);
    }
}

#define func_8014CDA0 func_8014CDA0__func_8014C72C
#define func_8014CDA0_Struct func_8014CDA0_Struct__func_8014C72C
#define func_8014F330 func_8014F330__func_8014C72C
#define func_801506EC func_801506EC__func_8014C72C
typedef struct func_8014CDA0_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0xA0 - 0x93];
    u16 unkA0;
    u16 unkA2;
    u8 unkA4;
    u8 unkA5;
} func_8014CDA0_Struct;
extern void func_8014CDA0(func_8014CDA0_Struct *arg0, s32 arg1);
extern s32 func_8014F330(s32 arg0);
extern void func_801506EC(s32 arg0, s32 arg1);

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
    extern f64 D_80190670;
    extern f64 D_80190678;
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
#undef FG
#undef func_8014CDA0
#undef func_8014CDA0_Struct
#undef func_8014F330
#undef func_801506EC


typedef struct func_8014CDA0_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0xA0 - 0x93];
    u16 unkA0;
    u16 unkA2;
    u8 unkA4;
    u8 unkA5;
} func_8014CDA0_Struct;


void func_8014CDA0(func_8014CDA0_Struct *arg0, s32 arg1) {
    if ((D_801BBBF0[0x182] == 0) && (D_801BBBF0[0x187] == 0)) {
        if (arg0->unkA5 != 0) {
            if (arg0->unk92 == 1) {
                *(u16 *)(D_801BBBF0 + 6) = arg0->unkA0;
            } else {
                *(u16 *)(D_801BBBF0 + 6) = arg0->unkA2;
            }
        } else if (arg0->unk92 == 1) {
            func_80126820(arg0->unkA0);
        } else {
            func_80126820(arg0->unkA2);
        }
        func_800058DC(arg0, func_8014CE54);
    }
}

#define D_80182950 D_80182950__func_8014CE54
#define func_8014D070_Struct_Table func_8014D070_Struct_Table__func_8014CE54
typedef struct func_8014D070_Struct_Table {
    u16 unk0;
    u8 pad[18];
} func_8014D070_Struct_Table;
extern func_8014D070_Struct_Table D_80182950[];

typedef struct func_8014CE54_Struct_Pos {
    u8 pad[6];
    s16 x, y, z;
} func_8014CE54_Struct_Pos;
typedef struct func_8014CE54_Struct {
    u8 pad0[0x38];
    func_8014CE54_Struct_Pos *pos;
    u8 pad3C[0x74 - 0x3C];
    s32 unk74;
    u8 pad78[0x90 - 0x78];
    u8 unk90, unk91, unk92, unk93;
    f32 unk94;
    s32 unk98;
    u8 pad9C[2];
    u16 unk9E;
    u8 padA0[5];
    u8 unkA5;
} func_8014CE54_Struct;
extern s32 (*D_80182104[])(func_8014CE54_Struct *, s32);
extern u16 D_801BBBF4;
extern u8 D_801BBF96;
extern u8 D_801BBF97;
extern s32 func_80126950(void);
extern void func_801FC830(f32, f32, f32, f32, s32);
extern void func_8012FE50(s32, u16, u8, s32, s32);

void func_8014CE54(func_8014CE54_Struct *arg0, s32 arg1) {
    s32 flag;
    u8 bits;
    u8 mode;
    s32 (*callback)(func_8014CE54_Struct *, s32);
    func_8014C2B0_Struct_Table *table;
    u16 sound;
    func_8014CE54_Struct_Pos *pos;
    void (*callback2)(func_8014C2B0_Struct *, func_8014C2B0_Struct_Obj **);
    s32 action;
    s32 enabled;
    s32 old;

    callback = D_80182104[D_80182950[arg0->unk90].unk0];
    flag = 0;
    if (callback == NULL) {
        flag = 1;
    } else if (callback(arg0, arg1) == 0) {
        flag = 1;
    }
    if (flag && func_80126950() == 0) {
        table = &D_8018294C[arg0->unk90];
        sound = *(u16 *)table->pad12;
        if (sound != 0) {
            pos = arg0->pos;
            func_801FC830((f32)pos->x / 10.0, (f32)pos->y / 10.0,
                         (f32)pos->z / 10.0, 500.0f, sound);
            table = &D_8018294C[arg0->unk90];
        }
        arg0->unk94 = 0.0f;
        callback2 = D_80182268[table->unk4];
        if (callback2 != NULL) {
            callback2((func_8014C2B0_Struct *)arg0, (func_8014C2B0_Struct_Obj **)arg1);
        }
        if (arg0->unkA5 != 0) {
            action = 9;
            D_801BBBF4 = arg0->unk9E;
            mode = 1;
            enabled = 1;
            if (arg0->unk91 & 4) {
                mode = 6;
            }
            if (arg0->unk91 & 8) {
                func_80020718(10);
                action = 16;
                enabled = 0;
            }
            func_8012FE50(action, D_801BBBF4, mode, 1, enabled);
            D_801BBF96 = arg0->unkA5;
            D_801BBF97 = arg0->unk92;
        }
        arg0->unk98 = arg0->unk74;
        arg0->unk74 = 0;
        func_800058DC(arg0, func_8014D070);
    }
}
#undef D_80182950
#undef func_8014D070_Struct_Table


typedef struct func_8014D070_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014D070_Struct_Data;

typedef struct func_8014D070_Struct_Sub {
    u8 pad0[0x30];
    func_8014D070_Struct_Data *unk30;
} func_8014D070_Struct_Sub;

typedef struct func_8014D070_Struct {
    u8 pad0[0x24];
    func_8014D070_Struct_Sub *unk24;
    u8 pad1[0x74 - 0x28];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad2[0x90 - 0x8A];
    u8 unk90;
    u8 pad3[0x98 - 0x91];
    s32 unk98;
} func_8014D070_Struct;

typedef struct func_8014D070_Struct_Table {
    u16 unk0;
    u8 pad[18];
} func_8014D070_Struct_Table;

extern s32 (*D_801823CC[])(func_8014D070_Struct *, s32);
extern s32 (*D_80182530[])(func_8014D070_Struct *, s32);
extern func_8014D070_Struct_Table D_80182950[];

void func_8014D070(func_8014D070_Struct *arg0, s32 arg1) {
    arg0->unk78 = arg0->unk24->unk30->unk4;
    arg0->unk7C = arg0->unk24->unk30->unk8;
    arg0->unk80 = arg0->unk24->unk30->unkC;
    arg0->unk84 = arg0->unk24->unk30->unk10;
    arg0->unk86 = arg0->unk24->unk30->unk12;
    arg0->unk88 = arg0->unk24->unk30->unk14;
    if ((D_801823CC[D_80182950[arg0->unk90].unk0] != NULL) &&
        (D_801823CC[D_80182950[arg0->unk90].unk0](arg0, arg1) == 0)) {
        arg0->unk74 = arg0->unk98;
        func_801C3B7C(0);
        func_8014BC18();
        if (D_80182530[D_80182950[arg0->unk90].unk0] != NULL) {
            D_80182530[D_80182950[arg0->unk90].unk0](arg0, arg1);
        }
        func_800058DC((s32) arg0, func_8014D190);
    }
}


typedef struct func_8014D190_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad1[0xA0 - 0x93];
    u16 unkA0;
    u16 unkA2;
} func_8014D190_Struct;


void func_8014D190(func_8014D190_Struct *arg0, s32 arg1) {
    u16 var_v0;
    u8 *base;

    if (arg0->unk92 == 2) {
        var_v0 = arg0->unkA0;
    } else {
        var_v0 = arg0->unkA2;
    }
    if (func_80126880(var_v0 & 0xFFFF) != 0) {
        base = (u8 *) &D_801BBBF0;
        base[0x435] = (u8) (base[0x435] & 0xFFFE);
        func_800058DC(arg0, func_8014C72C);
    }
}



void func_8014D204(void *arg0, s32 arg1) {
    *((u32 *) ((u8 *) arg0 + 0x2C)) &= 0xFFFF7FFF;
    D_801BBFAC[*((u8 *) arg0 + 0x9C)] = 0;
    func_800058DC((s32) arg0, func_80126EAC);
}



struct func_8014D254_Struct {
    u8 pad[0x93];
    u8 unk93;
    f32 unk94;
};

s32 func_8014D254(struct func_8014D254_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = (s32) arg0->unk94;
    arg0->unk94 += 1.0f;
    if (temp_v0 == 0) {
        func_8014F400();
        return 1;
    }
    if (D_801BF180 == 0) {
        arg0->unk93 = 1;
        arg0->unk94 = 0.0f;
        return 0;
    }
    return 1;
}


void func_8014D2D0(void *arg0, s32 arg1) {
    ((u8 *)arg0)[0x93] = 4;
}

#ifndef GG
#endif

typedef struct func_8014D2E0_Struct_Table {
    u8 pad[6];
    u16 limit;
    f32 speed;
    u8 padC[8];
} func_8014D2E0_Struct_Table;
typedef struct func_8014D2E0_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014D2E0_Struct_P;
typedef struct func_8014D2E0_Struct_G {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad19C[4];
    f32 unk1A0;
} func_8014D2E0_Struct_G;
typedef struct func_8014D2E0_Struct {
    u8 pad[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x10];
    func_8014D2E0_Struct_P *unk38;
    u8 pad3C[0x54];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    f32 unk94;
} func_8014D2E0_Struct;
extern s32 func_8014F358(f32, f32);
extern void func_8014F940();
extern void func_801C2F0C();
typedef struct func_8014D2E0_Struct_Speed {
    f32 speed;
    u8 pad[16];
} func_8014D2E0_Struct_Speed;
extern func_8014D2E0_Struct_Speed D_80182954[];
#define DTI(i) (*(func_8014D2E0_Struct_Table *)((u8 *)D_8018294C + (i) * 20))
#define GD ((func_8014D2E0_Struct_G *)D_801BBBF0)

s32 func_8014D2E0(func_8014D2E0_Struct *arg0, s32 arg1) {
    u8 state;
    s32 flag;
    f32 sum;
    func_8014D2E0_Struct_Table *entry;
    state = arg0->unk93;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    return 1;
    state1: {
        arg0->unk24->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
        arg0->unk24->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
        entry = &DTI(arg0->unk90);
        sum = (f64)arg0->unk94 + (f64)entry->speed;
        arg0->unk94 = sum;
        if (sum >= (f32)(u32)entry->limit) {
            if (func_8014F358(GD->unk198, GD->unk1A0)) {
                arg0->unk93 = 2;
                arg0->unk94 = 0.0f;
            }
        }
    }
    goto done;
    state2: {
        flag = arg0->unk94 == 5.0f;
        arg0->unk94 += 1.0f;
        if (flag) {
            func_8014F940(arg0);
        }
        if (func_801C3044() == 0) {
            func_801C2F0C(1, NULL);
            if (arg0->unk91 & 1) {
                arg0->unk93 = 3;
                arg0->unk94 = 0.0f;
            } else {
                arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
                arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
                return 0;
            }
        }
    }
    goto done;
    state3: {
        arg0->unk24->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
        arg0->unk24->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
        entry = &DTI(arg0->unk90);
        sum = (f64)arg0->unk94 + (f64)entry->speed;
        arg0->unk94 = sum;
        if (sum >= (f32)(u32)entry->limit) {
            arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
            arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
            return 0;
        }
    }
done:
    return 1;
}
#undef DTI
#undef GD

#define GD ((func_8014D2E0_Struct_G *)D_801BBBF0)

typedef struct func_8014D6BC_Struct_Table {
    u8 pad[6];
    u16 unk6;
    f32 unk8;
    u8 padC[8];
} func_8014D6BC_Struct_Table;


s32 func_8014D6BC(func_8014C2B0_Struct *arg0, s32 arg1) {
    func_8014C2B0_Struct_Data *p;
    func_8014D6BC_Struct_Table *t;
    s32 flag;
    u8 state;
    f32 total;

    state = arg0->unk93;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    return 1;
    state1:
    {
        p = arg0->unk24->unk30;
        p->unk8 += (f64)((func_8014D6BC_Struct_Table *)D_8018294C)[arg0->unk90].unk8;
        t = &((func_8014D6BC_Struct_Table *)D_8018294C)[arg0->unk90];
        total = (f64)arg0->unk94 + (f64)t->unk8;
        arg0->unk94 = total;
        if ((f32)(u32)t->unk6 <= total) {
            if (func_8014F358(GD->unk198, GD->unk1A0)) {
                arg0->unk93 = 2;
                arg0->unk94 = 0.0f;
            }
        }
    }
    goto done;
    state2:
    {
        flag = 0;
        if (arg0->unk94 == 5.0f) {
            flag = 1;
        }
        arg0->unk94 += 1.0f;
        if (flag) {
            func_8014F940(arg0);
        }
        if (func_801C3044() == 0) {
            func_801C2F0C(1, NULL);
            if (arg0->unk91 & 1) {
                arg0->unk93 = 3;
                arg0->unk94 = 0.0f;
            } else {
                arg0->unk24->unk30->unk8 = (f32)((func_8014D2E0_Struct_P *)arg0->unk38)->unk8 / 10.0;
                return 0;
            }
        }
    }
    goto done;
    state3:
    {
        p = arg0->unk24->unk30;
        p->unk8 = (f64)p->unk8 - (f64)((func_8014D6BC_Struct_Table *)D_8018294C)[arg0->unk90].unk8;
        t = &((func_8014D6BC_Struct_Table *)D_8018294C)[arg0->unk90];
        total = (f64)arg0->unk94 + (f64)t->unk8;
        arg0->unk94 = total;
        if ((f32)(u32)t->unk6 <= total) {
            arg0->unk24->unk30->unk8 = (f32)((func_8014D2E0_Struct_P *)arg0->unk38)->unk8 / 10.0;
            return 0;
        }
    }
    done:
    return 1;
}
#undef GD

#define func_8014F940_Struct_A func_8014F940_Struct_A__func_8014D978
#define func_8014F940_Struct_P func_8014F940_Struct_P__func_8014D978
#define DTI(i) (*(func_8014D2E0_Struct_Table *)((u8 *)D_8018294C + (i) * 20))
#define GD ((func_8014D2E0_Struct_G *)D_801BBBF0)
typedef struct func_8014F940_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F940_Struct_P;
typedef struct func_8014F940_Struct_A {
    u8 pad0[0x38];
    func_8014F940_Struct_P *unk38;
} func_8014F940_Struct_A;

s32 func_8014D978(func_8014D2E0_Struct *arg0, func_8014C2B0_Struct_Sub **arg1)
{
    s32 flag;
    u8 state;
    f32 progress;
    func_8014D2E0_Struct_Table *table;

    state = arg0->unk93;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    return 1;
state1:
    {
        arg1[0]->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
        arg1[0]->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
        arg1[1]->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
        arg1[1]->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
        table = &DTI(arg0->unk90);
        progress = arg0->unk94 + (f64)table->speed;
        arg0->unk94 = progress;
        if ((f32)(u32)table->limit <= progress) {
            if (func_8014F358(GD->unk198, GD->unk1A0)) {
                arg0->unk93 = 2;
                arg0->unk94 = 0.0f;
            }
        }
    }
    goto end;
state2:
    {
        flag = arg0->unk94 == 5.0f;
        arg0->unk94 += 1.0f;
        if (flag) {
            func_8014F940((func_8014F940_Struct_A *)arg0);
        }
        if (func_801C3044() == 0) {
            func_801C2F0C(1, 0);
            if (arg0->unk91 & 1) {
                arg0->unk93 = 3;
                arg0->unk94 = 0.0f;
            } else {
                arg1[0]->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
                arg1[0]->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
                arg1[1]->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
                arg1[1]->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
                return 0;
            }
        }
    }
    goto end;
state3:
    {
        arg1[0]->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
        arg1[0]->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
        arg1[1]->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
        arg1[1]->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
        table = &DTI(arg0->unk90);
        progress = arg0->unk94 + (f64)table->speed;
        arg0->unk94 = progress;
        if ((f32)(u32)table->limit <= progress) {
            arg1[0]->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
            arg1[0]->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
            arg1[1]->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
            arg1[1]->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
            return 0;
        }
    }
end:
    return 1;
}
#undef DTI
#undef GD
#undef func_8014F940_Struct_A
#undef func_8014F940_Struct_P

#define func_8014F940_Struct_A func_8014F940_Struct_A__func_8014DF54
#define func_8014F940_Struct_P func_8014F940_Struct_P__func_8014DF54
#define DTI(i) (*(func_8014D2E0_Struct_Table *)((u8 *)D_8018294C + (i) * 20))
#define GD ((func_8014D2E0_Struct_G *)D_801BBBF0)
typedef struct func_8014F940_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F940_Struct_P;
typedef struct func_8014F940_Struct_A {
    u8 pad0[0x38];
    func_8014F940_Struct_P *unk38;
} func_8014F940_Struct_A;

s32 func_8014DF54(func_8014D2E0_Struct *arg0, func_8014C2B0_Struct_Sub **arg1)
{
    register func_8014D2E0_Struct_Table *table;
    s32 flag;
    f32 value;
    f32 state2value;

    if (arg0->unk93 == 1) goto state1;
    if (arg0->unk93 == 2) goto state2;
    if (arg0->unk93 == 3) goto state3;
    return 1;
state1:
    {
        arg1[0]->unk30->unk8 += (f64)DTI(arg0->unk90).speed / 3.0;
        arg1[1]->unk30->unk8 += 2.0 * (f64)DTI(arg0->unk90).speed / 3.0;
        arg1[2]->unk30->unk8 += (f64)DTI(arg0->unk90).speed;
        table = &DTI(arg0->unk90);
        arg0->unk94 = value = (f32)((f64)arg0->unk94 + (f64)table->speed);
        if ((f32)(u32)table->limit <= value) {
            if (func_8014F358(GD->unk198, GD->unk1A0)) {
                arg0->unk93 = 2;
                arg0->unk94 = 0.0f;
            }
        }
    }
    goto end;
state2:
    {
        if (arg0->unk94++ == 5.0f) {
            func_8014F940((func_8014F940_Struct_A *)arg0);
        }
        if (func_801C3044() == 0) {
            func_801C2F0C(1, 0);
            if (arg0->unk91 & 1) {
                arg0->unk93 = 3;
                arg0->unk94 = 0.0f;
            } else {
                arg1[0]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
                arg1[1]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
                arg1[2]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
                return 0;
            }
        }
    }
    goto end;
state3:
    {
        arg1[0]->unk30->unk8 -= (f64)DTI(arg0->unk90).speed / 3.0;
        arg1[1]->unk30->unk8 -= 2.0 * (f64)DTI(arg0->unk90).speed / 3.0;
        arg1[2]->unk30->unk8 -= (f64)DTI(arg0->unk90).speed;
        value = (f64)arg0->unk94 + (f64)((func_8014D6BC_Struct_Table *)&DTI(arg0->unk90))->unk8;
        arg0->unk94 = value;
        if ((f32)(u32)DTI(arg0->unk90).limit <= value) {
            arg1[0]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
            arg1[1]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
            arg1[2]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
            return 0;
        }
    }
end:
    return 1;
}
#undef DTI
#undef GD
#undef func_8014F940_Struct_A
#undef func_8014F940_Struct_P

#define D_8018294C D_8018294C__func_8014E3C8
#define func_8014C2B0_Struct_Data func_8014C2B0_Struct_Data__func_8014E3C8
#define func_8014C2B0_Struct_Pair func_8014C2B0_Struct_Pair__func_8014E3C8
#define func_8014C2B0_Struct_Sub func_8014C2B0_Struct_Sub__func_8014E3C8
#define func_8014C2B0_Struct_Table func_8014C2B0_Struct_Table__func_8014E3C8
typedef struct func_8014C2B0_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014C2B0_Struct_Data;
typedef struct func_8014C2B0_Struct_Sub {
    u8 pad0[0x30];
    func_8014C2B0_Struct_Data *unk30;
} func_8014C2B0_Struct_Sub;
typedef struct func_8014C2B0_Struct_Pair {
    s16 unk0;
    u16 unk2;
} func_8014C2B0_Struct_Pair;
typedef struct func_8014C2B0_Struct_Table {
    func_8014C2B0_Struct_Pair *unk0;
    u16 unk4;
    u8 pad6[0xE - 0x6];
    u16 unkE;
    u16 unk10;
    u8 pad12[2];
} func_8014C2B0_Struct_Table;
extern func_8014C2B0_Struct_Table D_8018294C[];

typedef struct func_8014E3C8_Struct_Pos {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014E3C8_Struct_Pos;
typedef struct func_8014E3C8_Struct {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x10];
    func_8014E3C8_Struct_Pos *unk38;
    u8 pad3C[0x38];
    s32 unk74;
    u8 pad78[0x18];
    u8 unk90, unk91, unk92, unk93;
    f32 unk94;
    s32 unk98;
} func_8014E3C8_Struct;
typedef struct func_8014E3C8_Struct_Table {
    u8 pad0[6];
    u16 unk6;
    f32 unk8;
    u8 padC[6];
    u16 unk12;
} func_8014E3C8_Struct_Table;
#define ET ((func_8014E3C8_Struct_Table *)D_8018294C)
#define MOVE(i, field, op, fn) arg1[i]->unk30->field op (f64)fn(arg0->unk24->unk30->unk12) * (f64)ET[arg0->unk90].unk8

s32 func_8014E3C8(func_8014E3C8_Struct *arg0, func_8014C2B0_Struct_Sub **arg1) {
    s32 saved;
    u16 sound;
    f32 cur;
    func_8014E3C8_Struct_Table *table;
    s32 state;
    state = arg0->unk93;
    if (state == 1) goto opening;
    if (state == 2) goto waiting;
    if (state == 3) goto closing;
                if (state == 4 && D_801BBBF0[0x434] == 1) {
                    D_801BBBF0[0x434] = 2;
                    arg0->unk93 = 1;
                    arg0->unk94 = 0.0f;
                    arg0->unk98 = arg0->unk74;
                    arg0->unk74 = 0;
                    sound = ET[arg0->unk90].unk12;
                    if (sound != 0) func_80020718(sound);
                }
                goto done;
opening:
    MOVE(0, unk4, +=, func_8001EB64);
    MOVE(0, unkC, -=, func_8001EAD0);
    MOVE(1, unk4, -=, func_8001EB64);
    MOVE(1, unkC, +=, func_8001EAD0);
    if (arg0->unk94 >= 6.0f) {
        MOVE(2, unk4, +=, func_8001EB64);
        MOVE(2, unkC, -=, func_8001EAD0);
        MOVE(3, unk4, -=, func_8001EB64);
        MOVE(3, unkC, +=, func_8001EAD0);
    }
    table = &ET[arg0->unk90];
    cur = (f64)arg0->unk94 + (f64)table->unk8;
    arg0->unk94 = cur;
    if ((f32)(u32)table->unk6 + 6.0f <= cur) {
        D_801BBBF0[0x434] = 3;
        arg0->unk93 = 2;
        arg0->unk94 = 0.0f;
    }
    goto done;
waiting:
        if (D_801BBBF0[0x434] == 4) {
            D_801BBBF0[0x434] = 5;
            arg0->unk93 = 3;
            arg0->unk94 = 0.0f;
            arg0->unk74 = arg0->unk98;
            sound = ET[arg0->unk90].unk12;
            if (sound != 0) func_80020718(sound);
        }
        goto done;
closing:
            MOVE(0, unk4, -=, func_8001EB64);
            MOVE(0, unkC, +=, func_8001EAD0);
            MOVE(1, unk4, +=, func_8001EB64);
            MOVE(1, unkC, -=, func_8001EAD0);
            table = &ET[arg0->unk90];
            if (arg0->unk94 < (f32)(u32)table->unk6) {
                MOVE(2, unk4, -=, func_8001EB64);
                MOVE(2, unkC, +=, func_8001EAD0);
                MOVE(3, unk4, +=, func_8001EB64);
                MOVE(3, unkC, -=, func_8001EAD0);
            }
            table = &ET[arg0->unk90];
            cur = (f64)arg0->unk94 + (f64)table->unk8;
            arg0->unk94 = cur;
            if ((f32)(u32)table->unk6 + 6.0f <= cur) {
                D_801BBBF0[0x434] = 0;
                arg0->unk93 = 4;
                arg0->unk94 = 0.0f;
                arg1[0]->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
                arg1[0]->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
                arg1[1]->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
                arg1[1]->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
                arg1[2]->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
                arg1[2]->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
                arg1[3]->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
                arg1[3]->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
                return 0;
            }
done:
    return 1;
}
#undef ET
#undef MOVE
#undef D_8018294C
#undef func_8014C2B0_Struct_Data
#undef func_8014C2B0_Struct_Pair
#undef func_8014C2B0_Struct_Sub
#undef func_8014C2B0_Struct_Table

#define DTI(i) (*(func_8014D2E0_Struct_Table *)((u8 *)D_8018294C + (i) * 20))
#define GD ((func_8014D2E0_Struct_G *)D_801BBBF0)

s32 func_8014ECD0(func_8014D2E0_Struct *arg0, s32 arg1) {
    f32 t;
    func_8014D2E0_Struct_Table *p;

    if (arg0->unk93 == 1) goto c1;
    if (arg0->unk93 == 2) goto c2;
    if (arg0->unk93 == 3) goto c3;
    return 1;
c1:
    arg0->unk24->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
    arg0->unk24->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
    p = &DTI(arg0->unk90);
    t = (f64)arg0->unk94 + (f64)p->speed;
    arg0->unk94 = t;
    if (p->limit <= t) {
        if (func_8014F358(GD->unk198, GD->unk1A0) != 0) {
            arg0->unk93 = 2;
            arg0->unk94 = 0.0f;
        }
    }
    goto end;
c2:
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        if (arg0->unk91 & 1) {
            arg0->unk93 = 3;
            arg0->unk94 = 0.0f;
        } else {
            arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
            arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
            return 0;
        }
    }
    goto end;
c3:
    arg0->unk24->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
    arg0->unk24->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
    p = &DTI(arg0->unk90);
    t = (f64)arg0->unk94 + (f64)p->speed;
    arg0->unk94 = t;
    if (p->limit <= t) {
        arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
        return 0;
    }
end:
    return 1;
}
#undef DTI
#undef GD

#define D_801C3B5C D_801C3B5C__func_8014F070
#define func_8014C2B0_Struct_Data func_8014C2B0_Struct_Data__func_8014F070
#define func_8014C2B0_Struct_Sub func_8014C2B0_Struct_Sub__func_8014F070
#define func_8014F940_Struct_P func_8014F940_Struct_P__func_8014F070
typedef struct func_8014C2B0_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014C2B0_Struct_Data;
typedef struct func_8014C2B0_Struct_Sub {
    u8 pad0[0x30];
    func_8014C2B0_Struct_Data *unk30;
} func_8014C2B0_Struct_Sub;
typedef struct func_8014F940_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F940_Struct_P;

typedef struct func_8014F070_Struct_Table {
    u8 pad[6];
    u16 unk6;
    f32 unk8;
    u8 padC[8];
} func_8014F070_Struct_Table;
typedef struct func_8014F070_Struct_G {
    u8 pad[0x198];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
} func_8014F070_Struct_G;
typedef struct func_8014F070_Struct {
    u8 pad[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x10];
    struct func_8014F940_Struct_P *unk38;
    u8 pad3C[0x54];
    u8 unk90, unk91, unk92, unk93;
    f32 unk94;
} func_8014F070_Struct;
extern s32 D_801C3B5C(void);

s32 func_8014F070(func_8014F070_Struct *arg0, s32 arg1) {
    func_8014C2B0_Struct_Data *data;
    func_8014F070_Struct_Table *entry;
    s32 flag;
    u8 state;
    f32 value;

    state = arg0->unk93;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    return 1;
state1:
    {
        data = arg0->unk24->unk30;
        data->unk8 += (f64)((func_8014F070_Struct_Table *)D_8018294C)[arg0->unk90].unk8;
        entry = &((func_8014F070_Struct_Table *)D_8018294C)[arg0->unk90];
        value = (f64)arg0->unk94 + (f64)entry->unk8;
        arg0->unk94 = value;
        if (value >= (f32)(u32)entry->unk6) {
            if (func_8014F358(((func_8014F070_Struct_G *)D_801BBBF0)->unk198, ((func_8014F070_Struct_G *)D_801BBBF0)->unk1A0)) {
                arg0->unk93 = 2;
                arg0->unk94 = 0.0f;
            }
        }
    }
    goto done;
state2:
    {
        flag = 0;
        if (arg0->unk94 == 5.0f) {
            flag = 1;
        }
        arg0->unk94 += 1.0f;
        if (flag) {
            func_8014F940(arg0);
        }
        if (D_801C3B5C() == 4) {
            func_801C2F0C(1, 0);
            if (arg0->unk91 & 1) {
                arg0->unk93 = 3;
                arg0->unk94 = 0.0f;
                goto done;
            }
            arg0->unk24->unk30->unk8 = (f64)(f32)arg0->unk38->unk8 / 10.0;
            return 0;
        }
    }
    goto done;
state3:
    {
        data = arg0->unk24->unk30;
        data->unk8 -= (f64)((func_8014F070_Struct_Table *)D_8018294C)[arg0->unk90].unk8;
        entry = &((func_8014F070_Struct_Table *)D_8018294C)[arg0->unk90];
        value = (f64)arg0->unk94 + (f64)entry->unk8;
        arg0->unk94 = value;
        if (value >= (f32)(u32)entry->unk6) {
            arg0->unk24->unk30->unk8 = (f64)(f32)arg0->unk38->unk8 / 10.0;
            return 0;
        }
    }
done:
    return 1;
}
#undef D_801C3B5C
#undef func_8014C2B0_Struct_Data
#undef func_8014C2B0_Struct_Sub
#undef func_8014F940_Struct_P



s32 func_8014F330(s32 arg0) {
    return func_801C3B88() == arg0;
}

#define D_80190680 D_80190680__func_8014F358
#define D_801C2F0C D_801C2F0C__func_8014F358
#define func_801C3C3C func_801C3C3C__func_8014F358
extern s32 D_801C2F0C(s32, void *);

typedef struct func_8014F358_Struct_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x14];
    f32 unk44;
} func_8014F358_Struct_Obj;

typedef struct func_8014F358_Struct_G {
    u8 pad0[0xDC];
    func_8014F358_Struct_Obj *unkDC;
} func_8014F358_Struct_G;

typedef struct func_8014F358_Struct_Arg {
    f32 x;
    f32 y;
    f32 z;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 unk1C;
} func_8014F358_Struct_Arg;
extern void func_801C3C3C(s32);
extern f32 D_80190680;

s32 func_8014F358(f32 arg0, f32 arg1) {
    func_8014F358_Struct_Arg s;

    s.x = arg0;
    s.y = arg1;
    s.unkC = 0x1100;
    s.unk10 = 0x0168003F;
    s.unk18 = 0;
    s.unk1A = 0x3C;
    s.z = D_80190680;
    s.unk14 = 1.0f;
    if (D_801C2F0C(2, &s) != 0) {
        func_801C3C3C(0);
        ((func_8014F358_Struct_G *)D_801BBBF0)->unkDC->unk2C &= ~0x40;
        ((func_8014F358_Struct_G *)D_801BBBF0)->unkDC->unk44 = 0.0f;
        return 1;
    }
    return 0;
}
#undef D_80190680
#undef D_801C2F0C
#undef func_801C3C3C


typedef struct func_8014F400_Struct_Pos {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F400_Struct_Pos;

typedef struct func_8014F400_Struct {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x38 - 0x28];
    func_8014F400_Struct_Pos *unk38;
    u8 pad3C[0x90 - 0x3C];
    u8 unk90;
    u8 unk91;
    u8 unk92;
} func_8014F400_Struct;

typedef struct func_8014F400_Struct_Table {
    u8 pad0[0x6];
    u16 unk6;
    u8 pad8[0xC - 0x8];
    u16 unkC;
    u8 padE[0x14 - 0xE];
} func_8014F400_Struct_Table;

typedef struct func_8014F400_Struct_Mtx {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8014F400_Struct_Mtx;

typedef struct func_8014F400_Struct_Obj {
    u8 pad0[0x2C];
    func_8014F400_Struct_Mtx *unk2C;
} func_8014F400_Struct_Obj;

typedef struct func_8014F400_Struct_G {
    u8 pad0[0xE8];
    func_8014F400_Struct_Obj *unkE8;
    u8 padEC[0x1E8 - 0xEC];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad200[0x334 - 0x200];
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
    u8 pad34C[0x380 - 0x34C];
    f32 unk380;
    f32 unk384;
    f32 unk388;
} func_8014F400_Struct_G;

#define GG ((func_8014F400_Struct_G *)D_801BBBF0)
#define TBL ((func_8014F400_Struct_Table *)D_8018294C)


void func_8014F400(arg0)
    func_8014F400_Struct *arg0;
{
    s32 angle;

    if (arg0->unk92 == 2) {
        GG->unk334 = (f32)arg0->unk38->unk6 / 10.0 -
                     func_8001EAD0(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_80190688 + 50.0);
        GG->unk33C = (f32)arg0->unk38->unkA / 10.0 -
                     func_8001EB64(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_80190690 + 50.0);
    } else {
        GG->unk334 = func_8001EAD0(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_80190698 + 50.0) +
                     (f32)arg0->unk38->unk6 / 10.0;
        GG->unk33C = func_8001EB64(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_801906A0 + 50.0) +
                     (f32)arg0->unk38->unkA / 10.0;
    }
    GG->unk338 = arg0->unk24->unk30->unk8 + 20.0f;
    if (arg0->unk92 == 2) {
        angle = (s16)(arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF;
    } else {
        angle = arg0->unk24->unk30->unk12;
    }
    GG->unk340 = func_8001EAD0(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + D_801906A8) +
                 (f32)arg0->unk38->unk6 / 10.0;
    GG->unk344 = (f32)TBL[arg0->unk90].unk6 * D_801906B0 + 10.0f + (f32)arg0->unk38->unk8 / 10.0;
    GG->unk348 = func_8001EB64(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + D_801906B8) +
                 (f32)arg0->unk38->unkA / 10.0;
    if (func_8010843C(GG->unk340, GG->unk344, GG->unk348, GG->unk334, GG->unk338, GG->unk33C) != 0) {
        GG->unk334 = GG->unk380;
        GG->unk338 = GG->unk384;
        GG->unk33C = GG->unk388;
    }
    GG->unk1E8 = GG->unkE8->unk2C->unk30;
    GG->unk1EC = GG->unkE8->unk2C->unk34;
    GG->unk1F0 = GG->unkE8->unk2C->unk38;
    GG->unk1F4 = GG->unkE8->unk2C->unk3C;
    GG->unk1F8 = GG->unkE8->unk2C->unk40;
    GG->unk1FC = GG->unkE8->unk2C->unk44;
    func_80005670(arg0, D_801826AC);
}


typedef struct func_8014F940_Struct_Cam {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8014F940_Struct_Cam;
typedef struct func_8014F940_Struct_E8 {
    u8 pad0[0x2C];
    func_8014F940_Struct_Cam *unk2C;
} func_8014F940_Struct_E8;
typedef struct func_8014F940_Struct_G {
    u8 pad0[0xE8];
    func_8014F940_Struct_E8 *unkE8;
    u8 pad1[0x198 - 0xEC];
    f32 unk198;
    u8 pad2[0x1A0 - 0x19C];
    f32 unk1A0;
    u8 pad3[0x1E8 - 0x1A4];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    f32 unk200;
    u8 pad4[0x328 - 0x204];
    f32 unk328;
    f32 unk32C;
    f32 unk330;
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
} func_8014F940_Struct_G;
typedef struct func_8014F940_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F940_Struct_P;
typedef struct func_8014F940_Struct_A {
    u8 pad0[0x38];
    func_8014F940_Struct_P *unk38;
} func_8014F940_Struct_A;

#define GF ((func_8014F940_Struct_G *)D_801BBBF0)
extern f32 func_8002FC20(f32);
extern u8 D_801826C0[];

void func_8014F940(func_8014F940_Struct_A *arg0)
{
  func_8014F940_Struct_Cam *c;
  func_8014F940_Struct_P *p;
  f32 dx;
  f32 dz;
  f32 dy;
  f64 a;
  f64 b;
  f64 a2;
  f64 b2;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1E8 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk30;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1EC = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk34;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1F0 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk38;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1F4 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk3C;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1F8 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk40;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1FC = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk44;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk334 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk328;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk338 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk32C;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk33C = ((func_8014F940_Struct_G *) D_801BBBF0)->unk330;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk340 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk198;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk344 = (((f64) ((f32) arg0->unk38->unk8)) / 10.0) + 15.0;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk348 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk1A0;
  c = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C;
  p = arg0->unk38;
  a = c->unk30;
  b = ((f64) ((f32) p->unk6)) / 10.0;
  if (a < b)
  {
    dx = -(a - b);
  }
  else
  {
    b2 = b;
    dx = a - b2;
  }
  a2 = c->unk34;
  b2 = ((f64) ((f32) p->unk8)) / 10.0;
  if (b2 > a2)
  {
    dy = -(a2 - b2);
  }
  else
  {
    dy = a2 - b2;
  }
  a = c->unk38;
  b = ((f64) ((f32) p->unkA)) / 10.0;
  if (a < b)
  {
    dz = -(a - b);
  }
  else
  {
    dz = a - b;
  }
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk200 = func_8002FC20(((dx * dx) + (dy * dy)) + (dz * dz)) / 12.0;
  func_80005670(arg0, D_801826C0);
}
#undef GF

#define D_801904A0 D_801904A0__func_8014FB38
#define D_801906C0 D_801906C0__func_8014FB38
#define D_801906C8 D_801906C8__func_8014FB38
#define func_8011AAF4 func_8011AAF4__func_8014FB38
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_8014FB38_Struct_G {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0x198 - 0x34];
    f32 unk198, unk19C, unk1A0;
    u8 pad1A4[0x328 - 0x1A4];
    f32 unk328, unk32C, unk330;
    u8 pad334[0x3A7 - 0x334];
    u8 unk3A7;
    f32 unk3A8, unk3AC, unk3B0, unk3B4;
} func_8014FB38_Struct_G;
extern u8 D_801904A0[];
extern f64 D_801906C0;
extern f64 D_801906C8;
#define FBG ((func_8014FB38_Struct_G *)D_801BBBF0)
#define FBT(i) (*(u16 *)&D_80182950[i].pad[6])

void func_8014FB38(func_8014F400_Struct *arg0, s32 arg1) {
    u16 angle;
    f32 distance;

    if (D_80182950[arg0->unk90].unk0 == 0) {
        distance = 10.0f;
    } else {
        distance = 25.0f;
    }
    if (FBG->unk3A7 == 1 || FBG->unk3A7 == 2) {
        if (FBG->unk3A7 == 1) {
            angle = (s16)(arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF & 0xFFFF;
        } else {
            angle = arg0->unk24->unk30->unk12;
        }
        FBG->unk198 = func_8001EAD0((s16)angle) * distance + arg0->unk24->unk30->unk4;
        FBG->unk1A0 = func_8001EB64((s16)angle) * distance + arg0->unk24->unk30->unkC;
        FBG->unk19C = arg0->unk24->unk30->unk8;
        FBG->unk32 = angle;
        FBG->unk328 = (f64)func_8001EAD0((s16)angle) * ((f64)(f32)FBT(arg0->unk90) * 0.5 + 5.0 + D_801906C0) + (f64)(f32)arg0->unk38->unk6 / 10.0;
        FBG->unk32C = (f64)(f32)arg0->unk38->unk8 / 10.0 + 15.0;
        FBG->unk330 = (f64)func_8001EB64((s16)angle) * ((f64)(f32)FBT(arg0->unk90) * 0.5 + 5.0 + D_801906C8) + (f64)(f32)arg0->unk38->unkA / 10.0;
        func_8011AAF4(D_801904A0, 0x85A, (s32)arg0, 2, 1, 0.0f, FBG->unk328, FBG->unk32C, FBG->unk330, 0.0f, FBG->unk198, FBG->unk19C + 18.0f, FBG->unk1A0, 0.0f, 35.0f, -1, -1);
    }
    FBG->unk3A8 = arg0->unk24->unk30->unk4;
    FBG->unk3AC = arg0->unk24->unk30->unk8;
    FBG->unk3B0 = arg0->unk24->unk30->unkC;
    FBG->unk3B4 = arg0->unk24->unk30->unk12;
}
#undef FBG
#undef FBT
#undef D_801904A0
#undef D_801906C0
#undef D_801906C8
#undef func_8011AAF4



void func_8014FEE0(s32 arg0, s32 arg1) {
    D_801BF180 = 1;
    func_800058DC(arg0, (void *) func_8014FF14);
}

#ifndef GG
#endif

extern u8 D_801904E8[];
extern f64 D_801906D0;
extern f64 D_801906D8;
extern f64 D_801906E0;
extern void func_80005700(s32);
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_8014FF14_Struct {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad200[0x2AC - 0x200];
    u8 unk2AC;
    u8 pad2AD[0x334 - 0x2AD];
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
} func_8014FF14_Struct;

#define S ((func_8014FF14_Struct *)D_801BBBF0)

void func_8014FF14(s32 arg0, s32 arg1) {
    f32 x;
    f32 a;
    f32 b;
    f32 c;
    f32 r;
    f32 r2;
    f32 r3;

    x = S->unk1E8;
    a = S->unk1EC;
    b = S->unk1F0;
    S->unk1E8 = x + (S->unk334 - x) * D_801906D0;
    S->unk1EC = a + (S->unk338 - a) * D_801906D8;
    S->unk1F0 = b + (S->unk33C - b) * D_801906E0;
    S->unk1F4 = S->unk1F4 + (S->unk340 - S->unk1F4) * 0.5;
    S->unk1F8 = S->unk1F8 + (S->unk344 - S->unk1F8) * 0.5;
    c = S->unk1FC;
    S->unk1FC = c + (S->unk348 - c) * 0.5;
    func_8011AAF4(D_801904E8, 0x88B, arg0, 0, 1, 0.0f, S->unk1E8, S->unk1EC, S->unk1F0, 0.0f, S->unk1F4, S->unk1F8, S->unk1FC, 0.0f, 35.0f, -1, -1);
    x = S->unk1E8;
    if (x < S->unk334) {
        r = -(x - S->unk334);
    } else {
        r = x - S->unk334;
    }
    if ((s32)r == 0) {
        a = S->unk1EC;
        if (a < S->unk338) {
            r2 = -(a - S->unk338);
        } else {
            r2 = a - S->unk338;
        }
        if ((s32)r2 == 0) {
            b = S->unk1F0;
            if (b < S->unk33C) {
                r3 = -(b - S->unk33C);
            } else {
                r3 = b - S->unk33C;
            }
            if ((s32)r3 == 0) {
                S->unk2AC = 1;
                D_801BF180 = 0;
                func_80005700(arg0);
            }
        }
    }
}
#undef S



void func_80150198(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801501C0);
}

#define D_8011AAF4 D_8011AAF4__func_801501C0
#define D_80190548 D_80190548__func_801501C0
#define D_80190580 D_80190580__func_801501C0
#define GF ((func_8014F940_Struct_G *)D_801BBBF0)
#define S ((func_8014FF14_Struct *)D_801BBBF0)

extern u8 D_80190548[];
extern u8 D_80190580[];
extern s32 D_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_801501C0(s32 arg0, s32 arg1) {
    if (D_8011AAF4(D_80190548, 0x8AF, arg0, 0, 2,
        GF->unk200, GF->unk334, GF->unk338, GF->unk33C,
        GF->unk200, GF->unk340, GF->unk344, GF->unk348,
        0.0f, 35.0f, -1, -1) == 0) {
        GF->unk1E8 = GF->unk334;
        GF->unk1EC = GF->unk338;
        GF->unk1F0 = GF->unk33C;
        func_8011AAF4(D_80190580, 0x8B8, arg0, 2, 1,
            0.0f, GF->unk334, GF->unk338, GF->unk33C,
            0.0f, GF->unk340, GF->unk344, GF->unk348,
            0.0f, 35.0f, -1, -1);
        S->unk2AC = 1;
        func_80005700(arg0);
    }
}
#undef GF
#undef S
#undef D_8011AAF4
#undef D_80190548
#undef D_80190580


struct func_80150314_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[2];
    u8 unk93;
    f32 unk94;
};

void func_80150314(struct func_80150314_Struct *arg0, s32 arg1) {
    s32 *p;
    f32 temp;

    p = &arg1;
    temp = 0.0f;
    arg0->unk90 = arg1;
    arg0->unk93 = 0;
    arg0->unk94 = temp;
}

#ifndef GG
#endif

typedef struct func_8015032C_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
} func_8015032C_Struct_P;
typedef struct func_8015032C_Struct_O {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x38 - 0x28];
    func_8015032C_Struct_P *unk38;
} func_8015032C_Struct_O;
typedef struct func_8015032C_Struct_R {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s16 unkE;
} func_8015032C_Struct_R;
extern f32 D_801906E8;

s32 func_8015032C(f32 arg0, f32 arg1, f32 arg2, func_8015032C_Struct_R *arg3) {
    f32 pad;
    f32 sp78, sp74, sp70, sp6C;
    f32 dx, dz, d, best;
    s32 found;
    s32 idx;
    s32 i;
    func_8015032C_Struct_O *o;
    func_8014C2B0_Struct_Data *v;
    func_8015032C_Struct_P *p;
    f64 t;
    f64 a;

    found = 0;
    best = D_801906E8;
    idx = 0;
    for (i = 0; i < G->unk3B8; i++) {
        o = (func_8015032C_Struct_O *)G->unk3BC[i];
        v = o->unk24->unk30;
        if (arg0 < v->unk4) {
            dx = -(arg0 - v->unk4);
        } else {
            dx = arg0 - v->unk4;
        }
        if (arg2 < v->unkC) {
            dz = -(arg2 - v->unkC);
        } else {
            dz = arg2 - v->unkC;
        }
        d = func_8002FC20(dx * dx + dz * dz);
        if (d <= 30.0f && d < best) {
            p = o->unk38;
            if ((f64)(f32)p->unk8 / 10.0 <= arg1 && arg1 <= (f64)(f32)p->unk8 / 10.0 + 18.0) {
                sp78 = (f32)((f64)(f32)p->unk6 / 10.0);
                best = d;
                idx = i;
                sp74 = (f32)p->unk8 / 10.0;
                found = 1;
                sp70 = (f32)((f64)(f32)p->unkA / 10.0);
                sp6C = (f32)p->unkC;
            }
        }
    }
    if (found != 0) {
        arg3->unk0 = sp78;
        arg3->unk4 = sp74;
        arg3->unk8 = sp70;
        arg3->unkC = (s16)(s32)sp6C;
        arg3->unkE = idx;
    }
    return found;
}



s32 func_80150584(void) {
    s32 ret;

    ret = 0;
    return (D_801BC025 & 1) ? 1 : ret;
}


struct func_801505AC_Struct {
    u8 pad[0x3B8];
    u16 unk3B8;
    s32 unk3BC[1];
};


s32 func_801505AC(s32 arg0) {
    struct func_801505AC_Struct *ptr;
    s32 *argp;

    argp = &arg0;
    ptr = &D_801BBBF0;
    arg0 = arg0 & 0xFFFF;
    if (arg0 < ptr->unk3B8) {
        return ptr->unk3BC[arg0];
    }
    return 0;
}



s32 func_801505E4(void) {
    if (func_80150584() != 0) {
        return D_801BBDA0;
    }
    return -1;
}


struct func_80150614_Struct {
    u8 pad[0x92];
    u8 unk92;
};

s32 func_80150614(void) {
    struct func_80150614_Struct *obj;

    if (func_80150584() != 0) {
        obj = (struct func_80150614_Struct *)func_801505AC(func_801505E4() & 0xFFFF);
        if (obj->unk92 == 1) {
            return 1;
        }
        if (obj->unk92 == 2) {
            return 2;
        }
    }
    return 0;
}



s32 func_8015067C(u16 arg0, u16 arg1) {
    void *temp_v0;

    arg0 &= 0xFFFF;
    if (arg0 < (s32) D_801BBFA8) {
        temp_v0 = (void *) func_801505AC(arg0);
        if (arg1 == 1) {
            return *(u16 *) ((u8 *) temp_v0 + 0xA0);
        }
        if (arg1 == 2) {
            return *(u16 *) ((u8 *) temp_v0 + 0xA2);
        }
        goto block_5;
    }
block_5:
    return 0xFFFF0000U;
}



void func_801506EC(s32 arg0, s32 arg1) {
    func_8014F400();
    func_800179B0(D_801826E0);
    func_8012FFC0();
    func_800058DC(arg0, func_80150734);
}



void func_80150734(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        if (func_8012FFC0() == 0) {
            func_800058DC(arg0, func_80150BAC);
            return;
        }
        func_800058DC(arg0, func_80150794);
    }
}

#undef TBL
#define D_801906EC D_801906EC__func_80150794
#define func_8014C2B0_Struct_Data func_8014C2B0_Struct_Data__func_80150794
#define func_8014C2B0_Struct_Sub func_8014C2B0_Struct_Sub__func_80150794
#define func_8014F400_Struct func_8014F400_Struct__func_80150794
#define func_8014F400_Struct_Pos func_8014F400_Struct_Pos__func_80150794
#define func_8014F400_Struct_Table func_8014F400_Struct_Table__func_80150794
#define func_80150970 func_80150970__func_80150794
typedef struct func_8014F400_Struct_Table {
    u8 pad0[0x6];
    u16 unk6;
    u8 pad8[0xC - 0x8];
    u16 unkC;
    u8 padE[0x14 - 0xE];
} func_8014F400_Struct_Table;
#define TBL ((func_8014F400_Struct_Table *)D_8018294C)
typedef struct func_8014C2B0_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014C2B0_Struct_Data;
typedef struct func_8014C2B0_Struct_Sub {
    u8 pad0[0x30];
    func_8014C2B0_Struct_Data *unk30;
} func_8014C2B0_Struct_Sub;
typedef struct func_8014F400_Struct_Pos {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F400_Struct_Pos;
typedef struct func_8014F400_Struct {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x38 - 0x28];
    func_8014F400_Struct_Pos *unk38;
    u8 pad3C[0x90 - 0x3C];
    u8 unk90;
    u8 unk91;
    u8 unk92;
} func_8014F400_Struct;
extern void func_80150970(s32 arg0, s32 arg1);

typedef struct func_80150794_Struct_Local {
    f32 x;
    f32 z;
    f32 y;
    s16 kind;
    s32 flags;
    f32 scale;
    s16 a;
    s16 b;
} func_80150794_Struct_Local;
extern f32 D_801906EC;

void func_80150794(func_8014F400_Struct *arg0, s32 arg1) {
    s32 pad;
    func_80150794_Struct_Local sp28;
    s16 angle;

    if (func_800178E8() != 0) {
        if (arg0->unk92 == 1) {
            angle = arg0->unk24->unk30->unk12;
        } else {
            angle = (s16)(arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF;
        }
        sp28.x = func_8001EAD0(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + 2.5) + arg0->unk24->unk30->unk4;
        sp28.z = func_8001EB64(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + 2.5) + arg0->unk24->unk30->unkC;
        sp28.kind = 0x1100;
        sp28.flags = 0x01680003;
        sp28.a = 0;
        sp28.b = 0x5A;
        sp28.y = D_801906EC;
        sp28.scale = 1.0f;
        func_801C2F0C(2, &sp28);
        func_800058DC(arg0, func_80150970);
    }
}
#undef TBL
#undef D_801906EC
#undef func_8014C2B0_Struct_Data
#undef func_8014C2B0_Struct_Sub
#undef func_8014F400_Struct
#undef func_8014F400_Struct_Pos
#undef func_8014F400_Struct_Table
#undef func_80150970
#define TBL ((func_8014F400_Struct_Table *)D_8018294C)


struct func_80150970_Struct {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    s16 d;
    s16 pad1;
};

extern void func_801C2F0C(s32 arg0, struct func_80150970_Struct *arg1);

void func_80150970(s32 arg0, s32 arg1) {
    u8 pad[0x10];
    struct func_80150970_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0;
        sp18.b = 0x0168002D;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(3, &sp18);
        func_800058DC(arg0, &func_801509D8);
    }
}


struct func_801509D8_Struct {
    u8 pad0[0x24];
    struct func_801509D8_StructC *unk24;
    u8 pad1[0x92 - 0x28];
    u8 unk92;
};

struct func_801509D8_StructA {
    u8 pad0[0x2C];
    struct func_801509D8_StructB *unk2C;
};

struct func_801509D8_StructB {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_801509D8_StructC {
    u8 pad0[0x30];
    struct func_801509D8_StructB *unk30;
};

struct func_801509D8_StructLocal {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    u8 pad1[0x14];
};


void func_801509D8(struct func_801509D8_Struct *arg0, s32 arg1) {
    struct func_801509D8_StructLocal sp20;
    s16 var_a1;

    if (arg0->unk92 == 1) {
        var_a1 = (s16) (arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF;
    } else {
        var_a1 = arg0->unk24->unk30->unk12;
    }
    ((struct func_801509D8_StructA *) D_801BBCD0)->unk2C->unk12 = func_801FD284(((struct func_801509D8_StructA *) D_801BBCD0)->unk2C->unk12, var_a1, 0x3DCCCCCD, arg0);
    if (func_801C3044() == 0) {
        sp20.a = 0x1000;
        sp20.b = 0x0168002D;
        sp20.c = 3.0f;
        func_801C2F0C(4, (struct func_80150970_Struct *) &sp20);
        func_800058DC((s32) arg0, func_80150AB4);
    }
}

#define func_80150B30 func_80150B30__func_80150AB4
extern void func_80150B30(s32 arg0, s32 arg1);
#ifndef GG
#endif

extern void func_801C3B5C();
extern s32 D_8012FFC0();

void func_80150AB4(func_8014C2B0_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_80020718(0x3DE);
        if (D_8012FFC0() >= (s32)arg0->unkA6) {
            func_801C3B5C();
            func_800058DC(arg0, func_8014CDA0);
            return;
        }
        func_800058DC(arg0, func_80150B30);
    }
}
#undef func_80150B30



void func_80150B30(s32 arg0, s32 arg1) {
    func_80020718(0x3DD);
    func_800179B0(D_80182734);
    func_800058DC(arg0, func_80150B74);
}



void func_80150B74(u64 arg0) {
    if (func_800178E8(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80150BAC);
    }
}


typedef struct func_80150BAC_StructB {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
} func_80150BAC_StructB;

typedef struct func_80150BAC_StructA {
    u8 pad0[0x2C];
    func_80150BAC_StructB *unk2C;
} func_80150BAC_StructA;

typedef struct func_80150BAC_StructC {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    u8 pad1C[0x4];
} func_80150BAC_StructC;


void func_80150BAC(s32 arg0, s32 arg1) {
    func_80150BAC_StructC sp20;

    sp20.unk0 = ((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unk4 - (func_8001EAD0(((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unk12) * 8.0f);
    sp20.unk4 = ((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unkC - (func_8001EB64(((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unk12) * 8.0f);
    sp20.unkC = 0x1102;
    sp20.unk10 = 0x01680003;
    sp20.unk18 = 0x1000;
    sp20.unk1A = 0x5A;
    sp20.unk8 = D_801906F0;
    sp20.unk14 = 1.0f;
    func_801C2F0C(2, (struct func_80150970_Struct *)&sp20);
    func_800058DC(arg0, (void *)func_80150C8C);
}

#define func_8001EAD0 func_8001EAD0__func_80150C8C
#define func_8001EB64 func_8001EB64__func_80150C8C
#define func_8011AAF4 func_8011AAF4__func_80150C8C
#ifndef GG
float func_8001EAD0(short);
float func_8001EB64(short);
#endif

extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80190634[];
extern s32 D_801C2F0C(s32, void *);
extern func_8014F400_Struct_Obj *D_801BBCD8;

void func_80150C8C(s32 arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        D_801C2F0C(1, NULL);
        func_8011AAF4(D_80190634, 0xA20, arg0, 2, 1, 0.0f,
                     D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f,
                     D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f,
                     35.0f, -1, -1);
        D_801BBBF0[0x435] &= 0xFFFE;
        func_800058DC(arg0, func_8014C72C);
    }
}
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8011AAF4


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8014C2B0[] = {
    0xC8, 0xE2, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0x20, 0x20, 0xBC, 0xEF, 0xCE, 0xE0, 0x20, 0x3A,
    0x20, 0x25, 0x64, 0x20, 0x20, 0xB4, 0xC9, 0xCD, 0xFD, 0xC8, 0xD6, 0xB9, 0xE6, 0x20, 0x3A, 0x20,
    0x25, 0x64, 0x0A, 0x00, 0xC8, 0xE2, 0xC5, 0xF6, 0xA4, 0xBF, 0xA4, 0xEA, 0xC8, 0xAF, 0xC0, 0xB8,
    0x20, 0x3A, 0x20, 0x47, 0x4F, 0x42, 0x4A, 0x20, 0x41, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x20,
    0x3A, 0x20, 0x25, 0x78, 0x20, 0x20, 0xB4, 0xC9, 0xCD, 0xFD, 0xC8, 0xD6, 0xB9, 0xE6, 0x20, 0x3A,
    0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F,
    0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61,
    0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63,
    0x65, 0x2F, 0x67, 0x72, 0x6F, 0x75, 0x6E, 0x64, 0x2F, 0x64, 0x6F, 0x6F, 0x72, 0x2E, 0x63, 0x00,
    0xC8, 0xE2, 0xA5, 0xD7, 0xA5, 0xED, 0xA5, 0xBB, 0xA5, 0xB9, 0xC0, 0xDA, 0xA4, 0xEA, 0xC2, 0xD8,
    0xA4, 0xA8, 0x0A, 0x00, 0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF, 0xA5, 0xC8, 0xA4, 0xE2,
    0xA4, 0xB7, 0xA4, 0xAF, 0xA4, 0xCF, 0xA5, 0xC7, 0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF,
    0xA5, 0xC8, 0xC3, 0xE6, 0xA4, 0xCA, 0xA4, 0xCE, 0xA4, 0xC7, 0xC8, 0xE2, 0xC4, 0xCC, 0xB2, 0xE1,
    0xA4, 0xCB, 0xA4, 0xE8, 0xA4, 0xEB, 0xCA, 0xAC, 0xB3, 0xE4, 0xC5, 0xBE, 0xC1, 0xF7, 0xA4, 0xF2,
    0xBC, 0xC2, 0xB9, 0xD4, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00,
    0xC8, 0xE2, 0xC4, 0xCC, 0xB2, 0xE1, 0xA4, 0xCB, 0xA4, 0xE8, 0xA4, 0xEB, 0xCA, 0xAC, 0xB3, 0xE4,
    0xC5, 0xBE, 0xC1, 0xF7, 0xB3, 0xAB, 0xBB, 0xCF, 0x0A, 0x00, 0x00, 0x00, 0xC9, 0xBD, 0xC2, 0xA6,
    0x20, 0x4C, 0x45, 0x56, 0x45, 0x4C, 0x20, 0x25, 0x78, 0x68, 0x0A, 0x00, 0xCE, 0xA2, 0xC2, 0xA6,
    0x20, 0x4C, 0x45, 0x56, 0x45, 0x4C, 0x20, 0x25, 0x78, 0x68, 0x0A, 0x00, 0xC9, 0xBD, 0xC2, 0xA6,
    0x20, 0x4C, 0x45, 0x56, 0x45, 0x4C, 0x20, 0x25, 0x78, 0x68, 0x0A, 0x00, 0xCE, 0xA2, 0xC2, 0xA6,
    0x20, 0x4C, 0x45, 0x56, 0x45, 0x4C, 0x20, 0x25, 0x78, 0x68, 0x0A, 0x00, 0x0A, 0xA5, 0xB9, 0xA5,
    0xC6, 0xA1, 0xBC, 0xA5, 0xB8, 0xC0, 0xDA, 0xC2, 0xD8, 0xCD, 0xD7, 0xB5, 0xE1, 0xC8, 0xAF, 0xB9,
    0xD4, 0x0A, 0x0A, 0x00, 0xC8, 0xE2, 0xC4, 0xCC, 0xB2, 0xE1, 0xBB, 0xFE, 0xA5, 0xC7, 0xA5, 0xB9,
    0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF, 0xA5, 0xC1, 0xA5, 0xE3, 0xB5, 0xAF, 0xC6, 0xB0, 0x0A, 0x00,
    0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF, 0xA5, 0xC8, 0xA4, 0xE2, 0xA4, 0xB7, 0xA4, 0xAF,
    0xA4, 0xCF, 0xA5, 0xC7, 0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF, 0xA5, 0xC8, 0xC3, 0xE6,
    0xA4, 0xCA, 0xA4, 0xCE, 0xA4, 0xC7, 0xC8, 0xE2, 0xC4, 0xCC, 0xB2, 0xE1, 0xBB, 0xFE, 0xA5, 0xC7,
    0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF, 0xA5, 0xC1, 0xA5, 0xE3, 0xA4, 0xF2, 0xBC, 0xC2,
    0xB9, 0xD4, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0xC8, 0xE2, 0xA5, 0xC7,
    0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF, 0xA5, 0xC8, 0x20, 0x20, 0xBC, 0xEF, 0xCE, 0xE0,
    0x20, 0x3A, 0x20, 0x25, 0x64, 0x20, 0x20, 0xB4, 0xC9, 0xCD, 0xFD, 0xC8, 0xD6, 0xB9, 0xE6, 0x20,
    0x3A, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xA8, 0xA5, 0xEC, 0xA5, 0xD9, 0xA1, 0xBC,
    0xA5, 0xBF, 0xA1, 0xBC, 0xA5, 0xC9, 0xA5, 0xA2, 0xA3, 0xCF, 0xA3, 0xD0, 0xA3, 0xC5, 0xA3, 0xCE,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xA8, 0xA5, 0xEC, 0xA5, 0xD9, 0xA1, 0xBC, 0xA5, 0xBF, 0xA1, 0xBC,
    0xA5, 0xC9, 0xA5, 0xA2, 0xA3, 0xC3, 0xA3, 0xCC, 0xA3, 0xCF, 0xA3, 0xD3, 0xA3, 0xC5, 0x0A, 0x00,
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x67, 0x72, 0x6F, 0x75, 0x6E, 0x64,
    0x2F, 0x64, 0x6F, 0x6F, 0x72, 0x2E, 0x63, 0x00, 0xC8, 0xE2, 0xC1, 0xB0, 0xA5, 0xAB, 0xA5, 0xE1,
    0xA5, 0xE9, 0xBC, 0xC2, 0xB9, 0xD4, 0x0A, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F,
    0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61,
    0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63,
    0x65, 0x2F, 0x67, 0x72, 0x6F, 0x75, 0x6E, 0x64, 0x2F, 0x64, 0x6F, 0x6F, 0x72, 0x2E, 0x63, 0x00,
    0xC8, 0xE2, 0xC1, 0xB0, 0xA5, 0xAB, 0xA5, 0xE1, 0xA5, 0xE9, 0xBD, 0xAA, 0xCE, 0xBB, 0x0A, 0x00,
    0xC8, 0xE2, 0xC4, 0xCC, 0xA4, 0xEA, 0xC8, 0xB4, 0xA4, 0xB1, 0xA5, 0xAB, 0xA5, 0xE1, 0xA5, 0xE9,
    0xBC, 0xC2, 0xB9, 0xD4, 0x0A, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F,
    0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61,
    0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63,
    0x65, 0x2F, 0x67, 0x72, 0x6F, 0x75, 0x6E, 0x64, 0x2F, 0x64, 0x6F, 0x6F, 0x72, 0x2E, 0x63, 0x00,
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x67, 0x72, 0x6F, 0x75, 0x6E, 0x64,
    0x2F, 0x64, 0x6F, 0x6F, 0x72, 0x2E, 0x63, 0x00, 0xC8, 0xE2, 0xC4, 0xCC, 0xA4, 0xEA, 0xC8, 0xB4,
    0xA4, 0xB1, 0xA5, 0xAB, 0xA5, 0xE1, 0xA5, 0xE9, 0xBD, 0xAA, 0xCE, 0xBB, 0x0A, 0x00, 0x00, 0x00,
    0xC8, 0xE2, 0xA4, 0xCE, 0xBC, 0xEF, 0xCE, 0xE0, 0xA4, 0xF2, 0xCA, 0xD1, 0xB9, 0xB9, 0xA4, 0xB7,
    0xA4, 0xDE, 0xA4, 0xB9, 0x20, 0xC8, 0xE2, 0xC8, 0xD6, 0xB9, 0xE6, 0x20, 0x3A, 0x20, 0x25, 0x64,
    0x0A, 0x00, 0x00, 0x00, 0xC8, 0xE2, 0xA4, 0xCE, 0xA5, 0xB3, 0xA1, 0xBC, 0xA5, 0xC9, 0xA5, 0xEC,
    0xA5, 0xD9, 0xA5, 0xEB, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0xB8, 0xBD, 0xBA, 0xDF, 0xA4, 0xCE, 0xA5, 0xB3, 0xA1, 0xBC, 0xA5, 0xC9,
    0xA5, 0xAD, 0xA1, 0xBC, 0xA5, 0xEC, 0xA5, 0xD9, 0xA5, 0xEB, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75,
    0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69,
    0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x67, 0x72,
    0x6F, 0x75, 0x6E, 0x64, 0x2F, 0x64, 0x6F, 0x6F, 0x72, 0x2E, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0x84, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B, 0x3F, 0x84, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B,
    0x3F, 0x19, 0x99, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x3F, 0x84, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B,
    0x3F, 0xC9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x3F, 0x84, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B,
    0x3F, 0x84, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B, 0x3F, 0x84, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B,
    0x3F, 0xD3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0xD9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x3F, 0xD3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x4E, 0x6E, 0x6B, 0x28, 0x3E, 0x4C, 0xCC, 0xCD,
    0x3E, 0x4C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
