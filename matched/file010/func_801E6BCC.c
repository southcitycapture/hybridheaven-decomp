#include "common.h"
typedef struct func_801E7274_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7274_Table;
extern void D_80011140(s32, void *, func_801E7274_Table, s32);
extern s32 D_80011258(s32, void *);
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern func_801EFD14_Table D_80216B9C;
extern func_801EFD14_Table D_80216BA8;
extern void func_800111E0(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
typedef struct func_801E7274_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E7274_Arg0;


extern u16 D_80216BF4;
extern u8 D_8021AFC2;
extern func_801EFD14_Table D_80216BE4;
extern s32 func_8012C6B4(s32);
extern void D_80011198(s32, void *);
extern s32 func_80011140__func_801E6BCC(s32, void *, func_801EFD14_Table, s32);

typedef struct func_801E6BCC_StructState {
    s32 id;
    u16 frame;
    u16 flags;
    f32 speed;
} func_801E6BCC_StructState;

#define ARG2 (*arg2Ref)
#define STATE ((func_801E6BCC_StructState *)((u8 *)ARG2 + 0x1C))
#define PLAY() func_8013A28C(arg1, *(func_801E74DC_Sub *)state)
#define MOVE(table, time) D_80011140(arg1, ARG2, *(func_801E7274_Table *)&(table), time)
#define FLAGS actor->unk2C
#define X actor->unk40
#define Z actor->unk48

void func_801E6BCC(arg0, arg1, arg2, arg3)
s32 arg0;
s32 arg1;
void *arg2;
u16 arg3;
{
    f64 divisor;
    func_801E6BCC_StructState *state;
    u16 var_a3 = arg3;
    func_801E7274_Arg0 *actor = (func_801E7274_Arg0 *)arg0;
    void **arg2Ref = &arg2;

    FLAGS |= 0x40;
    switch (STATE->id) {
    case 0x1680041:
        state = STATE;
        if (1.0 != state->speed) {
            state->speed = 1.0f;
            PLAY();
        }
        FLAGS |= 0x60;
        if (D_80216BF4 >= 301) {
            D_80216BF4 = 0;
            D_8021AFC2 = 0;
            if (func_8012C6B4(4) == 3) {
                state->id = 0x1680054;
                state->frame = 0;
                state->flags = 0;
                state->speed = 1.0f;
                PLAY();
            } else {
                D_80011198(arg1, ARG2);
                D_8021AFC2 = 1;
                MOVE(D_80216BE4, 10);
            }
            X = 0.0f;
            Z = 0.0f;
        } else if (D_8021AFC2 != 0) {
            if (func_80011140__func_801E6BCC(arg1, ARG2, D_80216BE4, 10)) {
                D_8021AFC2 = 0;
            }
        } else {
            func_800111E0(arg1, &state->flags);
            FLAGS |= 0x80;
            X = 0.0f;
            Z = 0.0f;
            D_80216BF4++;
        }
        break;
    case 0x1680057:
        FLAGS &= ~0x80;
        Z = 0.0f;
        X = 0.0f;
        if (var_a3) {
            state = STATE;
            if (state->flags & 2) {
                D_80216BF4 = 0;
                MOVE(D_80216B90, 10);
            } else {
                state->id = 0x1680058;
                state->frame = 0;
                state->flags = 0x1100;
                state->speed = 2.0f;
                PLAY();
            }
        }
        break;
    case 0x1680058:
        FLAGS &= ~0x80;
        if (D_80216BF4 >= 301 && ((state = STATE)->flags & 0x100)) {
            D_80011258(arg1, &state->flags);
        }
        if (var_a3) {
            state = STATE;
            state->id = 0x1680057;
            state->frame = 27;
            state->flags = 0x1002;
            state->speed = 1.0f;
            PLAY();
        } else {
            D_80216BF4++;
        }
        Z = 0.0f;
        X = 0.0f;
        break;
    case 0x1680054:
        if (var_a3) {
            D_80216BF4 = 0;
            state = STATE;
            state->id = 0x1680055;
            state->flags = 0x100;
            state->frame = 0;
            state->speed = 3.0f;
            PLAY();
        }
        break;
    case 0x1680056:
        if (var_a3) {
            D_80216BF4 = 0;
            state = STATE;
            state->id = 0x1680041;
            state->flags = 0;
            state->frame = 0;
            state->speed = 1.0f;
            PLAY();
        }
        break;
    case 0x1680055:
        if (D_80216BF4 >= 301 && ((state = STATE)->flags & 0x100)) {
            D_80011258(arg1, &state->flags);
        }
        if (var_a3) {
            state = STATE;
            state->id = 0x1680056;
            state->frame = 0;
            state->flags = 0;
            state->speed = 1.0f;
            PLAY();
        } else {
            D_80216BF4++;
        }
        break;
    case 0x1680040:
        divisor = 1.1;
        MOVE(D_80216BA8, 5);
        X /= divisor;
        Z /= divisor;
        break;
    case 0x168003F:
        MOVE(D_80216B9C, 5);
        FLAGS |= 0x80;
        divisor = 1.3;
        X /= divisor;
        Z /= divisor;
        break;
    case 0x168003E:
    default:
        MOVE(D_80216B90, 5);
        FLAGS |= 0x80;
        divisor = 1.2;
        X /= divisor;
        Z /= divisor;
        break;
    }
}
