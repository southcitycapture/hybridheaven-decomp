#include "context.h"

/* Exact declaration from context.h (line 237); needed so the in-file build can see the name. */
extern struct func_801EC5B4_Struct0 *D_801DAB14;

extern f32 D_801FBE10;
extern f32 D_801FBE14;
extern f32 D_801FBE18;
extern f32 D_801FBE1C;
extern f32 D_801FBE20;

#define FUNC_801E2CAC_NODE ((u8 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 8) + 0x24) + 0x2C)))

s32 func_801E2CAC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06E80930) != 0) {
        func_8038BE98(D_801FBE10);
        func_8038BD50(D_801FBE14, D_801FBE18, 22.8f);
        D_8038BD88(D_801FBE1C, D_801FBE20, -3.5f);
        *(f32 *)(FUNC_801E2CAC_NODE + 4) = 24.0f;
        *(f32 *)(FUNC_801E2CAC_NODE + 8) = 0.0f;
        *(f32 *)(FUNC_801E2CAC_NODE + 0xC) = 0.0f;
        *(s16 *)(FUNC_801E2CAC_NODE + 0x12) = 0x1800;
        return 0xB;
    }
    return 0xA;
}
