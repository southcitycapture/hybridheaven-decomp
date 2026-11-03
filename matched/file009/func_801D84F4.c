#include "common.h"
typedef struct {
    u8 pad0[6];
    u16 unk6;
    f32 unk8;
    u8 pad1[0x14 - 0xC];
} func_801D8948_Struct14;
extern func_801D8948_Struct14 D_8018294C[];
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801D8948_Struct30;
typedef struct {
    u8 pad0[0x2C];
    func_801D8948_Struct30 *unk2C;
} func_801D8948_StructE0;
typedef struct {
    u8 pad0[0xE0];
    func_801D8948_StructE0 *unkE0;
    u8 pad1[0x198 - 0xE4];
    f32 unk198;
    u8 pad2[4];
    f32 unk1A0;
    u8 pad3[0x328 - 0x1A4];
    f32 unk328;
    f32 unk32C;
    f32 unk330;
} func_801D8948_StructBBF0;
extern func_801D8948_StructBBF0 D_801BBBF0;
typedef struct {
    u8 pad0[0x30];
    func_801D8948_Struct30 *unk30;
} func_801D8948_Struct24;


typedef struct func_801D84F4_StructPos {
    u8 pad[6];
    s16 x, y, z;
} func_801D84F4_StructPos;
typedef struct func_801D84F4_StructObj {
    u8 pad[0x38];
    func_801D84F4_StructPos *pos;
    u8 pad3C[0x38];
    s32 unk74;
    u8 pad78[0x18];
    u8 unk90;
    u8 pad91[2];
    u8 unk93;
    f32 unk94;
    s32 unk98;
} func_801D84F4_StructObj;
typedef struct func_801D84F4_StructTable {
    u8 pad[6];
    u16 unk6;
    f32 unk8;
    u8 padC[6];
    u16 unk12;
} func_801D84F4_StructTable;
extern void func_801FC830(f32, f32, f32, f32, s32);
typedef struct func_801D84F4_StructGlobal {
    u8 pad[0x434];
    u8 state;
} func_801D84F4_StructGlobal;

#define TABLE ((func_801D84F4_StructTable *) D_8018294C)
#define STATE (((func_801D84F4_StructGlobal *)&D_801BBBF0)->state)
#define STATEX (((func_801D84F4_StructGlobal *)state)->state)

s32 func_801D84F4(func_801D84F4_StructObj *arg0, func_801D8948_Struct24 **arg1) {
    s32 state;
    s32 saved;
    s32 effect;
    func_801D84F4_StructPos *pos;
    func_801D8948_Struct30 *p1;
    func_801D8948_Struct30 *p2;
    func_801D8948_Struct30 *p3;
#define entry ((func_801D84F4_StructTable *)state)
    f32 total;
    s32 one = 1;

    state = arg0->unk93;
    if (state == one) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    if (state != 4) goto done;
                if (STATE != one) goto done; {
                    STATE = 2;
                    arg0->unk93 = 1;
                    arg0->unk94 = 0.0f;
                    arg0->unk98 = arg0->unk74;
                    arg0->unk74 = 0;
                    if ((effect = TABLE[arg0->unk90].unk12) != 0) {
                        func_801FC830((f32)((f64)(f32)arg0->pos->x / 10.0), (f32)((f64)(f32)arg0->pos->y / 10.0), (f32)((f64)(f32)arg0->pos->z / 10.0), 500.0f, effect);
                    }
                }
    goto done;
state1:
        p1 = arg1[0]->unk30;
        p1->unk8 += TABLE[arg0->unk90].unk8 / 3.0;
        p2 = arg1[1]->unk30;
        p2->unk8 += 2.0 * TABLE[arg0->unk90].unk8 / 3.0;
        p3 = arg1[2]->unk30;
        p3->unk8 += (f64)TABLE[arg0->unk90].unk8;
        state = (s32)&TABLE[arg0->unk90];
        total = (f32)((f64)arg0->unk94 + (f64)entry->unk8);
        arg0->unk94 = total;
        if ((f32)(u32)entry->unk6 <= total) {
            STATE = 3;
            arg0->unk93 = 2;
            arg0->unk94 = 0.0f;
        }
    goto done;
state2:
        if (STATE == 4) {
            STATE = 5;
            arg0->unk93 = 3;
            arg0->unk94 = 0.0f;
        }
    if (1) goto done;
state3:
                p1 = arg1[0]->unk30;
                p1->unk8 -= TABLE[arg0->unk90].unk8 / 3.0;
                p2 = arg1[1]->unk30;
                p2->unk8 -= 2.0 * TABLE[arg0->unk90].unk8 / 3.0;
                p3 = arg1[2]->unk30;
                p3->unk8 -= (f64)TABLE[arg0->unk90].unk8;
                state = (s32)&TABLE[arg0->unk90];
                total = (f32)((f64)arg0->unk94 + (f64)entry->unk8);
                arg0->unk94 = total;
                if ((f32)(u32)entry->unk6 <= total) {
                    STATE = 0;
                    arg0->unk93 = 4;
                    arg0->unk94 = 0.0f;
                    arg0->unk74 = arg0->unk98;
                    arg1[0]->unk30->unk8 = (f32)((f64)(f32)arg0->pos->y / 10.0);
                    arg1[1]->unk30->unk8 = (f32)((f64)(f32)arg0->pos->y / 10.0);
                    arg1[2]->unk30->unk8 = (f32)((f64)(f32)arg0->pos->y / 10.0);
                }
done:
    return 1;
}
