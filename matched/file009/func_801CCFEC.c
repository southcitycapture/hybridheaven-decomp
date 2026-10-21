#include "context.h"
extern void *func_801CE1C8(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, s32);
extern f32 D_801E3430;
struct func_801CD1CC_Struct;
void func_801CD1CC(struct func_801CD1CC_Struct *arg0, s32 arg1);
extern s16 D_8001EF38(f32, f32);
struct func_801CCFEC_Struct { u8 pad[0x4E]; s16 unk4E; u8 pad2[0x1C]; f32 unk6C; f32 unk70; f32 unk74; u8 pad3[4]; f32 unk7C; u8 pad4[4]; f32 unk84; s16 unk88; };
struct func_801CCFEC_Obj { u8 pad[0x98]; s16 unk98; };

void func_801CCFEC(struct func_801CCFEC_Struct *arg0, s32 arg1) {
    u8 padt[4]; f32 sp98; f32 sp94; f32 sp90; u8 pad[12]; s16 sp82;
    struct func_801CCFEC_Obj *o;
    f32 sc;
    f32 ax, az;
    sp98 = arg0->unk6C;
    sp94 = arg0->unk70;
    sp90 = arg0->unk74;
    ax = arg0->unk7C;
    az = arg0->unk84;
    sp82 = D_8001EF38(ax, az);
    sc = D_801E3430;
    arg0->unk88 = sp82;
    arg0->unk4E = 0;
    o = func_801CE1C8(arg0, 0x18, *(s32 *)&sp98, *(s32 *)&sp94, sp90, 0xFF, 0xFF, 0xFF, 0xC0, 0x40, 0x40, 0x40, 0x40, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0x18, sc, sc, sc, 5.0f, 1);
    if (o != NULL) o->unk98 = sp82;
    o = func_801CE1C8(arg0, 0x17, *(s32 *)&sp98, *(s32 *)&sp94, sp90, 0xFF, 0xFF, 0, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0, 0, 0, 0, 0, 0, sp82, 1, 0xA, 0.15625f, 0.15625f, 0.15625f, 0.0f, 4);
    if (o != NULL) o->unk98 = sp82;
    func_800058DC(arg0, func_801CD1CC);
}
