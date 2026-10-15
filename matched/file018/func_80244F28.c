#include "context.h"

typedef struct func_80244F28_StructMid {
    u8 pad0[0x2C];
    u8 *unk2C;
} func_80244F28_StructMid;

extern u8 D_8025C000[];
extern f32 D_8025C584;

s32 func_80244F28(s32 arg0) {
    if (*(f32 *)((*(func_80244F28_StructMid **)(D_8025C000 - 0xA0330))->unk2C + 8) < 199.0f) {
        func_8011AAF4(D_8025C000, 0x182, arg0, 0, 1, 4.0f, 37.0f, 352.0f, D_8025C584, 4294967296.0f, 28.0f, 324.0f, 346.0f, 0.0f, 35.0f, -1, -1);
        return 1;
    }
    return 0;
}
