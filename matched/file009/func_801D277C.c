#define func_801D277C func_801D277C_ctx
#include "context.h"
#undef func_801D277C

extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);

typedef struct func_801D277C_StructConfig {
    u8 pad[0x4C];
    u16 flags;
} func_801D277C_StructConfig;
typedef struct func_801D277C_Struct {
    u8 pad0[0xC];
    func_801D277C_StructConfig *config;
    u8 pad10[0x50];
    f32 value;
    u8 pad64[0x2E];
    u16 timer;
    u8 count;
} func_801D277C_Struct;
typedef struct func_801D277C_StructData {
    u8 pad[0x18];
    f32 x, y, z;
} func_801D277C_StructData;
typedef struct func_801D277C_StructEntry {
    u8 pad[0x22];
    u8 active;
    u8 pad23[0xD];
    func_801D277C_StructData *data;
} func_801D277C_StructEntry;

void func_801D277C(func_801D277C_Struct *arg0, func_801D277C_StructEntry **arg1) {
    f32 fade;
    f32 value;
    f64 fadeD;
    f64 inverse;
    s32 i;
    u32 timer;
    func_801D277C_StructEntry **entry;
    func_801D277C_StructData *data;

    fade = 1.0 - ((f64) (f32) (u32) arg0->timer / 20.0);
    i = 0;
    entry = arg1;
    if (arg0->count > 0) {
        fadeD = fade;
        inverse = 1.0 - fadeD;
        do {
            data = (*entry)->data;
            D_801CD5E0(arg0, data, fade);
            D_801CD728(arg0, data, fade);
            value = ((f64) arg0->value + inverse) - 1.0;
            data->x = data->y = data->z = value;
            if (fadeD <= 0.0) {
                (*entry)->active = 0;
            }
            i++;
            entry++;
        } while (i < arg0->count);
    }
    D_801CD924(0x30, 0x80, 0xA0, fade);
    if (((s32) arg0->timer++ >= 0x15) || (arg0->config->flags & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *) arg0, (s32 *) arg1);
        func_800058DC(arg0, (s32) func_801CE898);
    }
}
