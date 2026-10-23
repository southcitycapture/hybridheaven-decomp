#include "context.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80020718(s32);
extern u8 D_801BBBF0[];
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
