#include "common.h"
extern s16 D_800CBAD8[];
extern s32 D_800CBB48;
extern u8 *D_800CBB50[];
extern u8 D_800CBBD8[];
extern u32 D_801B5520;
extern void (*D_80047E0C[])(void);
void func_80021C10(void);
extern s32 func_80021D50(s32);
extern void func_80022214();


typedef struct func_80021968_Se {
    u8 prio;
    u8 flags;
    u8 pad2[2];
    u8 *data;
} func_80021968_Se;

typedef struct func_80021968_State {
    u8 kind, track, prio, bank, delay, f;
    u8 pad6[2];
    u8 **data;
} func_80021968_State;

typedef struct func_80021968_Track {
    u32 id;
    u8 prio;
    u8 pad5[0xD8 - 5];
} func_80021968_Track;

extern func_80021968_Se *D_800479A4[];

#define S ((func_80021968_State *)D_800CBAD8)
#define T ((func_80021968_Track *)&D_801B5520)

void func_80021968(s32 arg0) {
    s32 i;
    u8 selected;
    s32 found;
    u16 id;
    func_80021968_Se *row;

    id = D_800CBB48 & 0x7FFF;
    if (id >= 0x634) {
        func_80021C10();
        return;
    }
    if (id >= 0x607) {
        D_800CBBD8[0] = 2;
    }
    if (id >= 0x300) {
        if (id < 0x634) {
            row = D_800479A4[id >> 8];
            S->prio = row[id & 0xFF].prio;
            S->prio &= 0x1F;
            selected = row[id & 0xFF].flags;
            S->bank = selected & 0xF;
            selected = selected >> 4;
            if (selected == 0) {
                for (i = 5; i != 0x10; i++) {
                    if (id == (T[i].id & 0x7FFF)) {
                        selected = i;
                        break;
                    }
                }
                found = selected;
                if (found == 0) {
                    selected = func_80021D50(1);
                }
            }
            if (S->prio >= T[selected].prio) {
                S->track = selected;
                S->kind = 1;
                S->data = D_800CBB50;
                D_800CBB50[0] = row[id & 0xFF].data;
                goto common;
            }
        }
    } else {
        row = D_800479A4[id >> 8];
        selected = row[id & 0xFF].prio;
        S->prio = selected & 0x1F;
        S->kind = (selected >> 5) + 1;
        selected = row[id & 0xFF].flags;
        S->bank = selected & 0xF;
        selected = selected >> 4;
        if (S->kind == 2) {
            if (selected == 0) {
                for (i = 14; i != 4; i -= 2) {
                    if (id == (T[i].id & 0x7FFF)) {
                        selected = i;
                        break;
                    }
                }
                found = selected;
                if (found == 0) {
                    selected = func_80021D50(2);
                }
            }
            if (S->prio < T[selected].prio) {
                return;
            }
            if (S->prio < T[selected + 1].prio) {
                return;
            }
        }
        S->track = selected;
        S->data = (u8 **)row[id & 0xFF].data;
    common:
        S->delay = 6;
        S->f = 0;
        func_80022214(arg0);
    }
}
