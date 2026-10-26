#include "common.h"
#define HH_CAT2(a, b) a##b
#define HH_CAT(a, b) HH_CAT2(a, b)
#define func_80254B3C_Ctx HH_CAT(HHCtx_, __LINE__)
#define func_80254B3C_Args HH_CAT(HHArgs_, __LINE__)
#define func_80254B3C_Node HH_CAT(HHNode_, __LINE__)
#define HHCtx_115 func_80254B3C_Ctx
#define HHCtx_124 func_80254B3C_Ctx
#define HHCtx_125 func_80254B3C_Ctx
#define HHCtx_179 func_80254B3C_Ctx
#define HHCtx_217 func_80254B3C_Ctx
#define HHCtx_231 HHCtx2
#define HHCtx_245 func_80254B3C_Ctx
#define HHArgs_116 func_80254B3C_Args
#define HHArgs_140 func_80254B3C_Args
#define HHArgs_217 func_80254B3C_Args
#define HHArgs_232 HHArgs2
#define HHArgs_297 func_80254B3C_Args
#define HHNode_117 func_80254B3C_Node
#define HHNode_233 HHNode2
#define HHNode_245 func_80254B3C_Node
extern u8 D_801BBBF0[];
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct { u8 pad[0x28]; } func_80254B3C_Args;
typedef struct { u8 pad[0x90]; u16 unk90; } func_80254B3C_Ctx;
typedef struct { u8 pad[0x28]; } func_80254B3C_Node;

#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node
extern u8 D_8025D914[];
extern void func_8012FE50(s32, s32, s32, s32, s32);

void func_80254BFC(func_80254B3C_Ctx *arg0, u16 arg1) {
    arg1 = arg0->unk90;
    arg0->unk90 = arg1 + 1;
    if (arg1 < 0x1E) {
        *(f32 *)(D_801BBBF0 + 0x1EC) += -23.0f;
    } else if (arg1 < 0x96) {
        *(f32 *)(D_801BBBF0 + 0x1EC) += -5.0f;
    }
    func_8011AAF4(D_8025D914, 0x3A7, arg0, 0, 1, 0.0f, 120.0f, *(f32 *)(D_801BBBF0 + 0x1EC), 174.0f, 0.0f, -35.0f, -9.0f, -39.0f, 0.0f, 55.0f, -1, -1);
    if (arg1 == 0x96) {
        D_801BBBF0[0x3A6] = 0;
        *(u16 *)(D_801BBBF0 + 4) = 0x29;
        func_8012FE50(9, *(u16 *)(D_801BBBF0 + 4), 1, 1, 1);
    }
}
