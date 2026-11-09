#include "common.h"
extern u8 D_8008DA88[];
extern u16 D_801BCAE0;
extern s32 D_801CE330(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
typedef struct func_801CC660_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CC660_Struct;
extern func_801CC660_Struct *D_801E4080;
extern void func_800058DC(void *, void *);
extern void func_80006214(void *);
extern void func_80020718(s32);
extern s32 func_80126944(void);
extern void func_8013A334(s32 *, u8 *, s32, s32);


struct func_801CC078_StructInner { u8 pad[0x5C]; s32 unk5C; };
struct func_801CC078_StructOuter { u8 pad[0xC]; struct func_801CC078_StructInner *unkC; };
struct func_801CC078_StructVec { f32 x, y, z; };
extern void func_801CC260(void);

void func_801CC078(struct func_801CC078_StructOuter *arg0, s32 arg1)
{
    s32 data;
    struct func_801CC078_StructVec pos;
    u16 duration;
    u16 kind;
    u8 r, g, b;

    data = arg0->unkC->unk5C;
    switch (((u8 *)D_801E4080)[0x30]) {
    case 9:
    case 10:
    case 11:
    case 12:
        g = (r = 0xFF, 0xC0);
        b = 0;
        break;
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
    default:
        b = (g = 0xA0, 0xFF);
        r = 0;
        break;
    }
    switch (((u8 *)D_801E4080)[0x30]) {
    case 2:
    case 10:
        duration = 10;
        break;
    case 3:
    case 11:
        duration = 15;
        break;
    case 4:
    case 12:
        duration = 20;
        break;
    case 1: case 5: case 6: case 7: case 8: case 9:
    default:
        duration = 5;
        break;
    }
    func_80006214(arg0->unkC);
    if (!func_80126944() && (D_801BCAE0 & 0x100)) {
        arg1 = 6;
    } else {
        arg1 = 3;
    }
    func_8013A334((s32 *)&pos, D_8008DA88, data, arg1);
    func_80006214(arg0);
    if (D_801CE330(arg0, 0, pos.x, pos.y, pos.z, 255, 255, 255, 255, r, g, b, 255, duration, 30, 0.01f, 8)) {
        D_801E4080->unk4C = 1;
        func_80020718(0x10C);
    } else {
        D_801E4080->unk4C = 2;
    }
    func_800058DC(arg0, func_801CC260);
}
