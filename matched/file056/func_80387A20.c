#include "common.h"
extern u16 D_8017DC40;
s32 func_803879D0(u8 arg0, u16 arg1);


typedef struct func_80387A20_Struct {
    u8 pad[0x90];
    u16 amount;
    u16 kind;
    u8 pad94[4];
    u8 boost;
    u8 pad99[1];
    u16 duration;
} func_80387A20_Struct;

typedef struct func_80387A20_StructStats {
    u16 maximum;
    u16 current;
    u8 pad04[0x3C];
    u16 boost40;
    u16 boost42;
    u16 pad44;
    u16 boost46;
} func_80387A20_StructStats;

#define STATS ((func_80387A20_StructStats *)&D_8017DC40)

extern u8 D_80388F00[];
extern func_80387A20_Struct *func_80005670(s32, s32);
extern s32 func_8022B640(s32);

#define HEALTH_CASE(n, percent, limit) \
    amount = func_803879D0(percent, limit); \
    ptr = func_80005670(arg0, (s32)D_80388F00); \
    if (amount < STATS->maximum - STATS->current) { ptr->amount = amount; } \
    else { ptr->amount = STATS->maximum - STATS->current; } \
    ptr->kind = n

#define BOOST_CASE(n, field) \
    ptr = func_80005670(arg0, (s32)D_80388F00); \
    ptr->kind = ptr->amount = 0; \
    ptr->boost = n; \
    ptr->duration = (u16)(func_8022B640(5) + 16); \
    STATS->field = STATS->field + ptr->duration

void func_80387A20(register s32 arg0, u8 arg1) {
    func_80387A20_Struct *ptr;
    u16 amount;

    switch (arg1) {
    case 1:
        amount = func_803879D0(25, 100);
        ptr = func_80005670(arg0, (s32)D_80388F00);
        if (amount < STATS->maximum - STATS->current) {
            ptr->amount = amount;
        } else {
            ptr->amount = STATS->maximum - STATS->current;
        }
        ptr->kind = 1;
        break;
    case 2:
        amount = func_803879D0(50, 500);
        ptr = func_80005670(arg0, (s32)D_80388F00);
        if (amount < STATS->maximum - STATS->current) {
            ptr->amount = amount;
        } else {
            ptr->amount = STATS->maximum - STATS->current;
        }
        ptr->kind = 2;
        break;
    case 3:
        amount = func_803879D0(75, 1000);
        ptr = func_80005670(arg0, (s32)D_80388F00);
        if (amount < STATS->maximum - STATS->current) {
            ptr->amount = amount;
        } else {
            ptr->amount = STATS->maximum - STATS->current;
        }
        ptr->kind = 3;
        break;
    case 4:
        ptr = func_80005670(arg0, (s32)D_80388F00);
        ptr->amount = 0xFFFF;
        ptr->kind = 4;
        break;
    case 9:
        amount = func_803879D0(25, 100);
        ptr = func_80005670(arg0, (s32)D_80388F00);
        if (amount < STATS->maximum - STATS->current) {
            ptr->amount = amount;
        } else {
            ptr->amount = STATS->maximum - STATS->current;
        }
        ptr->kind = 9;
        break;
    case 10:
        amount = func_803879D0(50, 500);
        ptr = func_80005670(arg0, (s32)D_80388F00);
        if (amount < STATS->maximum - STATS->current) {
            ptr->amount = amount;
        } else {
            ptr->amount = STATS->maximum - STATS->current;
        }
        ptr->kind = 10;
        break;
    case 11:
        amount = func_803879D0(75, 1000);
        ptr = func_80005670(arg0, (s32)D_80388F00);
        if (amount < STATS->maximum - STATS->current) {
            ptr->amount = amount;
        } else {
            ptr->amount = STATS->maximum - STATS->current;
        }
        ptr->kind = 11;
        break;
    case 12:
        ptr = func_80005670(arg0, (s32)D_80388F00);
        ptr->amount = 0xFFFF;
        ptr->kind = 12;
        break;
    case 16:
        ptr = func_80005670(arg0, (s32)D_80388F00);
        ptr->amount = ptr->kind = 0;
        ptr->boost = 1;
        ptr->duration = (u16)(func_8022B640(5) + 16);
        STATS->boost40 = STATS->boost40 + ptr->duration;
        break;
    case 17:
        ptr = func_80005670(arg0, (s32)D_80388F00);
        ptr->amount = ptr->kind = 0;
        ptr->boost = 2;
        ptr->duration = (u16)(func_8022B640(5) + 16);
        STATS->boost42 = STATS->boost42 + ptr->duration;
        break;
    case 18:
        ptr = func_80005670(arg0, (s32)D_80388F00);
        ptr->amount = ptr->kind = 0;
        ptr->boost = 3;
        ptr->duration = (u16)(func_8022B640(5) + 16);
        STATS->boost46 = STATS->boost46 + ptr->duration;
    }
}
