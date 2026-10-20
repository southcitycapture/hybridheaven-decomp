#include "context.h"

extern f32 D_801F4744;
extern f32 D_801F4748;
extern f32 D_801F474C;
extern f32 D_801F4750;
extern f32 D_801F4754;
extern f32 D_801F4758;
extern f32 D_801F475C;

struct func_801E34CC_StructC { u8 pad[4]; f32 u4; f32 u8; f32 uC; };
struct func_801E34CC_StructB { u8 pad[0x2C]; struct func_801E34CC_StructC *u2C; };
struct func_801E34CC_StructA { u8 pad[0x24]; struct func_801E34CC_StructB *u24; };
struct func_801E34CC_Struct0 { u8 pad[8]; struct func_801E34CC_StructA *u8; };
#define R34 ((struct func_801E34CC_Struct0 *)D_801DAB14)

s32 func_801E34CC(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 0.5f, 29.9f, -6.2f, -14.5f, D_801F4744, D_801F4748, D_801F474C, -4.5f, D_801F4750, -52.5f, D_801F4754, 17.0f, -52.0f) != 0) {
        func_8038BE98(D_801F4758);
        func_8038BED4();
        return 0x39;
    }
    R34->u8->u24->u2C->u4 = 0.0f;
    R34->u8->u24->u2C->u8 = 0.0f;
    R34->u8->u24->u2C->uC = D_801F475C;
    return 0x38;
}
