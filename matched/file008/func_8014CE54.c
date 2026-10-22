#include "context.h"

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
