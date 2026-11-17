#include "common.h"
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void D_80226710(s32, u16, f32);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_80011198(s32 arg0, void *arg1);
void func_8021E414(s32 arg0, s32 arg1);
typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;


typedef struct func_8021D8D0_StructActor {
    u8 pad0[0x2C];
    s32 flags;
    u8 pad30[6];
    u16 id;
    u8 pad38[0x54-0x38];
    s32 state;
    u8 pad58[4];
    func_8021E59C_Struct3C *data;
    u8 pad60[8];
    void *table;
} func_8021D8D0_StructActor;
typedef struct func_8021D8D0_StructDev {
    u8 pad0[4]; u16 id;
    u8 pad6[0x2C-6]; u16 mode;
    u8 pad2E[0xDC-0x2E];
    func_8021D8D0_StructActor *actor;
    u8 padE0[0xEC-0xE0];
    func_8021D8D0_StructActor *other;
    u8 padF0[0x444-0xF0];
    void *data; void *otherData;
    u8 pad44C[0x1031-0x44C];
    u8 phase; u8 pad1032[2]; u8 selected;
} func_8021D8D0_StructDev;
typedef struct func_8021D8D0_StructArg {
    u8 *data;
} func_8021D8D0_StructArg;
typedef struct func_8021D8D0_StructFlags {
    u8 pad[0x30];
    u8 top : 3;
    u8 mode : 4;
    u8 bottom : 1;
    u8 pad31[2];
    u8 flag33 : 1;
    u8 rest33 : 7;
} func_8021D8D0_StructFlags;
enum func_8021D8D0_EnumFlag { func_8021D8D0_Zero = 0, func_8021D8D0_One = 1, func_8021D8D0_High = 0x80000000U };
typedef struct func_8021D8D0_StructWordFlags {
    u8 pad[0x30];
    u32 unused : 24;
    u16 flag33 : 1;
    u32 rest33 : 7;
} func_8021D8D0_StructWordFlags;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern u8 D_80089474[];
extern void func_80374254(void);
extern void func_801C4A5C(void *, s32);
extern void func_80225410(void *);
extern void func_8013AE20(void *, void *, s32);
extern void func_80226780(void *);
extern void func_803704DC(void *);
extern void func_8037573C(void *, void *);
extern void func_8021DC6C(s32, s32);
#define G ((func_8021D8D0_StructDev *)&D_801BBBF0)
#define B(o) (*(u8 *)(p+(o)))
#define H(o) (*(u16 *)(p+(o)))
void func_8021D8D0(func_8021D8D0_StructActor *arg0, func_8021D8D0_StructArg *arg1)
{
    func_8021E59C_Struct3C *data;
    u8 *p;
    data = arg0->data;
    if (arg0 == G->actor) p = (u8 *)&D_801BC03C;
    else p = (u8 *)&D_801BC3D8;
    arg1->data[0x22] = 1;
    do {} while (0);
    switch ((u32)data->unk74) {
      case 0:
      case 2:
        G->actor = arg0;
        G->data = data;
        arg0->table = D_801BBC8C;
        break;
      case 1:
      case 3:
        G->other = arg0;
        G->otherData = data;
        arg0->table = D_801BBCAC;
        break;
      default:
        goto common_default;
      case 4:
      common_default:
        G->other = arg0;
        G->otherData = data;
        arg0->table = D_80089474;
        break;
    }
    arg0->flags |= 0x60;
    arg0->flags &= ~0x80;
    if (G->phase >= 3) {
        if (data->unk74 == 0) {
            func_80374254();
            arg0->state = 0x1F;
            func_801C4A5C(arg0, 0);
            func_80225410(arg0);
        } else {
            arg0->state = 0x1E1;
            if (data->unk74 == 1) func_80225410(arg0);
        }
        func_8013AE20(arg0, arg1, 0);
        H(0x32E) = 0;
        B(0x30) &= ~0x60;
        B(0x30) &= 0xFE;
        B(0x31) &= ~0x80;
        B(0x31) &= 0xE7;
        B(0x31) &= 0xF8;
        B(0x32) &= ~0x10;
        B(0x32) &= 0xF3;
        B(0x32) &= 0xFC;
        B(0x33) &= ~0x18;
        B(0x33) &= 0xBF;
        B(0x33) &= 0xDF;
        B(0x38) &= ~0x80;
        B(0x38) &= 0x9F;
        B(0x38) &= 0xEF;
        B(0x38) &= 0xF3;
        H(0x38) &= ~0x380;
        H(0x330) = 0;
        H(0x312) = 0;
        B(0x328) = 0;
        B(0x329) = 0;
        B(0x2FA) = 0;
        B(0x374) = 0;
        B(0x390) = 0;
        *(f32 *)(p+0x2EC) = 1.0;
        data->unk9C = 0;
        B(0x393) = 0;
        B(0x396) = 0;
        H(0xA0) = 0;
        if (G->mode != 10 && data->unk74 == 3) {
            if (arg0->id == 0x11B) {
                D_80226710((s32)arg0, 0x506, 1.0);
                func_80226780(arg0);
            } else if (arg0->id == 0x148) {
                func_803704DC(arg0);
            }
        }
        func_8037573C(arg0, arg1);
        if (G->id == 0x8D) G->selected = 2;
        func_80011198((s32)arg1, data);
        if ((G->selected == 1 && arg0 == G->actor) ||
            (G->selected == 2 && arg0 == G->other)) {
            B(0x30) = (B(0x30) & ~0x1E) | 6;
            ((func_8021D8D0_StructWordFlags *)p)->flag33 = -1;
            G->selected = 0;
            func_800058DC((s32)arg0, func_8021DC6C);
        } else {
            H(0x312) = 0;
            B(0x30) &= ~0x1E;
            B(0x33) &= ~0x80;
            func_800058DC((s32)arg0, func_8021E414);
        }
    }
}
