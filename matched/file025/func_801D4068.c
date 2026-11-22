#include "common.h"

extern f32 D_801DB3F4;
extern f32 D_801DB3F8;
extern f32 D_801DB3FC;
extern f32 D_801DB400;
void func_80006214();
struct func_801D4068_Struct3 { u8 pad[8]; f32 unk8; };
struct func_801D4068_StructB { u8 pad[0x2C]; struct func_801D4068_Struct3 *unk2C; };
struct func_801D4068_StructA { u8 pad[0x24]; struct func_801D4068_StructB *unk24; };
void func_801D4068(struct func_801D4068_StructA *arg0) {
    f32 t;

    t = D_801DB3F8;
    D_801DB3F8 += D_801DB3FC;
    D_801DB3FC -= D_801DB400;
    if ((t * D_801DB3F8) < 0.0f) {
        if (D_801DB3F8 < 0.0f) {
            D_801DB3FC = (-0.150000006f);
            D_801DB400 = (-0.0149999997f);
        } else {
            D_801DB3FC = 0.150000006f;
            D_801DB400 = 0.0149999997f;
        }
    }
    func_80006214((s32)arg0);
    arg0->unk24->unk2C->unk8 = D_801DB3F8 + D_801DB3F4;
}
