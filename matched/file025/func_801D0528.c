#include "common.h"
extern s32 D_801E12F0;
extern f64 func_80034C24();
extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C();
struct func_801D0498_Struct {
    u8 pad[0x80];
    u64 value;
};

typedef struct {
    f32 time;
    s32 type;
} func_801D0528_Struct;
extern func_801D0528_Struct D_801DAF48[];
#define LAST (((struct func_801D0498_Struct *)&D_801E1268)->value)
#define IDX (*(u32 *)&D_801E12F0)

void func_801D0528(void *arg0) {
    u64 d;

    d = func_801C0B2C() - LAST;
    if (D_801DAF48[IDX].time <= func_80034C24(d) / 1000000.0) {
        switch (D_801DAF48[IDX].type) {
        case 0:
            func_8012D844(arg0, 0x57, 0);
            break;
        case 1:
            func_8012D844(arg0, 0x57, 1);
            break;
        case 2:
            func_8012D844(arg0, 0x57, 2);
            break;
        }
        IDX += 1;
        if (IDX >= 15) {
            LAST = func_801C0B2C(IDX);
        }
        IDX = IDX % 15;
    }
}
