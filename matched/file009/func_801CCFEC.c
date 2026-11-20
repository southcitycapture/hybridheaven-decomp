#include "common.h"
extern void func_800058DC(void *, void *);
struct func_801CD1CC_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern void *func_801CE1C8(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, s32);
extern f32 D_801E3430;
struct func_801CD1CC_Struct;
void func_801CD1CC(struct func_801CD1CC_Struct *arg0, s32 arg1);
extern s16 D_8001EF38(f32, f32);
struct func_801CCFEC_Struct { u8 pad[0x4E]; s16 unk4E; u8 pad2[0x1C]; f32 unk6C; f32 unk70; f32 unk74; u8 pad3[4]; f32 unk7C; u8 pad4[4]; f32 unk84; s16 unk88; };
struct func_801CCFEC_StructObj { u8 pad[0x98]; s16 unk98; };
struct func_801CCFEC_StructEffect { f32 directionX, directionZ, scale; f32 z, y, x; f32 lifetime; };

void func_801CCFEC(struct func_801CCFEC_Struct *arg0, s32 arg1) {
    struct func_801CCFEC_StructEffect effect;
    s16 sp82;
    struct func_801CCFEC_StructObj *o;
    effect.x = arg0->unk6C;
    effect.y = arg0->unk70;
    effect.z = arg0->unk74;
    effect.directionX = arg0->unk7C;
    effect.directionZ = arg0->unk84;
    sp82 = D_8001EF38(effect.directionX, effect.directionZ);
    effect.scale = D_801E3430;
    arg0->unk88 = sp82;
    arg0->unk4E = 0;
    effect.lifetime = 5.0f;
    o = func_801CE1C8(arg0, 0x18, effect.x, effect.y, effect.z, 0xFF, 0xFF, 0xFF, 0xC0, 0x40, 0x40, 0x40, 0x40, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0x18, effect.scale, effect.scale, effect.scale, effect.lifetime, 1);
    if (o != NULL) o->unk98 = sp82;
    o = func_801CE1C8(arg0, 0x17, effect.x, effect.y, effect.z, 0xFF, 0xFF, 0, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0, 0, 0, 0, 0, 0, sp82, 1, 0xA, 0.15625f, 0.15625f, 0.15625f, 0.0f, 4);
    if (o != NULL) o->unk98 = sp82;
    func_800058DC(arg0, func_801CD1CC);
}
