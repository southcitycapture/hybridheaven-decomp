#include "context.h"

#define E8044_P8(p) (*(u8 **)((u8 *)(p) + 8))
#define E8044_NODE (*(u8 **)(*(u8 **)(E8044_P8(E8044_P8(E8044_P8(E8044_P8(*(u8 **)&D_801DAB14)))) + 0x24) + 0x2C))

s32 func_801E8044(s32 arg0, s32 arg1) {
    s32 v = D_801FB394;

    if (v != 0) {
        if (v == 1) goto c1;
        if (v != 2) goto join;
        goto c2;
    }
    if (D_8038C17C(0.0f, 2.0f, -214.0f, 11.5f, -8.0f, -212.3f, 16.2f, -8.5f, -165.0f, 14.4f, -9.3f, -165.1f, 13.5f, -9.3f, 41.5f, 41.5f) != 0) {
        D_8038C158();
        D_801FB394 = 1;
    }
    goto e1;
c1:
    if (D_8038C17C(0.0f, 2.0f, -216.8f, 16.6f, -10.5f, -213.2f, 17.6f, -10.5f, -194.1f, 16.1f, -10.0f, -194.1f, 17.1f, -10.1f, 8.8f, 8.8f) != 0) {
        D_801FB394 = 2;
    }
e1:
    goto e2;
c2:
    if (func_801C0B8C(0x4B05BAA) != 0) {
        *(f32 *)(E8044_NODE + 4) = -197.0f;
        *(f32 *)(E8044_NODE + 8) = 0.0f;
        *(f32 *)(E8044_NODE + 0xC) = 4.4f;
        *(s16 *)(E8044_NODE + 0x12) = 0x1000;
        func_801CC470(3, 0x1B8001F, 0, 0, 10.0f);
        D_801FB394 = 0;
        func_8038BE98(39.6f);
        func_8038BD50(-191.6f, 6.9f, -18.2f);
        D_8038BD88(-194.3f, 13.9f, -5.3f);
        D_8038C158();
        return 0xE;
    }
e2:
    goto join;
join:
    return 0xD;
}
