#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
extern u16 D_800CBAC2;
extern s16 D_800CBAD8[];
extern s8 D_800CBB21;
extern s32 D_800CBB48;
extern u16 D_800CBB4C;
extern u8 D_800CBB4E;
extern u8 D_80153070[];
extern u32 D_801B5520;
extern void (*D_80047E0C[])(void);
extern void func_80022128(u16, s32);
extern void func_80022214();
extern void func_80022528(void);
void func_80022694(void);
void func_800227EC(u8 arg0);


typedef struct func_80021EB8_StructEntry {
    u8 a, b, c, d;
} func_80021EB8_StructEntry;
typedef struct func_80021EB8_StructEvent {
    u8 a, b;
    u8 pad[2];
    s32 value;
} func_80021EB8_StructEvent;
typedef struct func_80021EB8_StructState {
    u8 a, b, c, d, e, f;
    u8 pad[2];
    s32 value;
} func_80021EB8_StructState;
extern func_80021EB8_StructEvent D_8015327C[];
#define state ((func_80021EB8_StructState *) D_800CBAD8)
#define event ((func_80021EB8_StructEvent *) entry)

void func_80021EB8(void) {
    u16 id;
    func_80021EB8_StructEntry *entry;

    id = D_800CBB48 & 0x7FFF;
    if (id < 0xC0) {
        if (id < 0x93) {
            entry = (func_80021EB8_StructEntry *) D_80153070 + id - 0x10;
            if (entry->d == 0) {
                if (D_800CBAC2 != 0) {
                    func_80022528();
                } else {
                    func_80022694();
                }
                goto loaded;
            }
            if (id != (*(u32 *)((u8 *)&D_801B5520 + entry->d * 0xD8) & 0x7FFF)) {
                func_800227EC(entry->c);
                D_800CBB4E = 4;
                D_800CBB4C = id;
            }
            return;
loaded:
            if (id != (u8) D_800CBB21) {
                D_800CBB4C = id;
                D_800CBB4E = 4;
                return;
            }
            func_80022128(id, 6);
            return;
        }
    } else if (id < 0xC1) {
        id = id - 0xC0;
        entry = (func_80021EB8_StructEntry *) &D_8015327C[id];
        state->a = event->a;
        state->d = event->b;
        state->value = event->value;
        state->b = 0;
        state->c = 0x1E;
        state->e = 6;
        state->f = 0;
        func_80022214(0);
    }
}
