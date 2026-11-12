#include "common.h"
extern u16 D_80037754;
extern u8 D_801BBC0D;
extern u8 D_801CC8C4;
extern void func_800058DC(s32, void *);
extern void func_8001B204();
extern void func_80020718(s32);
s32 func_801C1334(void);
u16 func_801C1340(void);

extern void func_800023A8(s32);
extern void func_801BF1A0(void);
extern void func_801C2050(s32, s32);
extern void func_801C3940(s32, s32);
extern void func_801C3CDC(s32, s32);
extern void func_801C40F8(s32, s32);
extern void func_801C4960(s32, s32);
extern void func_801C5108(s32, s32);
extern void func_801C5A00(void);

extern u8 D_801BBD54;
extern u16 D_800892B0[];
extern u8 D_801CED0C[];
extern u8 D_801CECFC[];
extern u8 D_801CECEC[];


typedef struct func_801C1DB8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C1DB8_Struct;

void func_801C1DB8(arg0, arg1)
func_801C1DB8_Struct *arg0;
s32 arg1;
{
    s32 var_s0;

    if (D_801BBD54 == 0) {
        if (((D_800892B0[0xE3] & 0xF) == 0xF) && ((D_800892B0[0xF3] & 0xF) == 0xF) && ((D_800892B0[0x103] & 0xF) == 0xF)) {
            func_8001B204(0xA, 0x14, 0x14, D_801CECEC);
        }
        if (func_801C1340() & 0x800) {
            if (D_801CC8C4 == 0) {
                D_801CC8C4 = 4;
            } else {
                D_801CC8C4--;
            }
            arg0->unk3C = 0x384;
        }
        if (func_801C1340() & 0x400) {
            if (D_801CC8C4 == 4) {
                D_801CC8C4 = 0;
            } else {
                D_801CC8C4++;
            }
            arg0->unk3C = 0x384;
        }
        func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 10) + 0x76), D_801CECFC);
        if (func_801C1334() & 0xB000) {
            switch (D_801CC8C4) {
            case 0:
                D_801BBC0D = 0;
                func_800058DC((s32)arg0, (void *)func_801C3940);
                break;
            case 1:
                func_800023A8(0);
                func_80020718(8);
                func_800058DC((s32)arg0, (void *)func_801C3CDC);
                break;
            case 2:
                func_800058DC((s32)arg0, (void *)func_801C40F8);
                break;
            case 3:
                func_800058DC((s32)arg0, (void *)func_801C4960);
                break;
            case 4:
                if (D_80037754 & 1) {
                    func_800058DC((s32)arg0, (void *)func_801C5108);
                }
                break;
            case 5:
                var_s0 = 0;
                do {
                    func_8001B204(var_s0 & 0xFF, 0, 0, D_801CED0C);
                    var_s0++;
                } while (var_s0 != 6);
                func_801BF1A0();
                func_800058DC((s32)arg0, (void *)func_801C2050);
                break;
            default:
                D_801CC8C4 = 0;
                break;
            }
        }
        if (arg0->unk3C--) {
        } else {
            func_80020718(8);
            func_801C5A00();
            func_800058DC((s32)arg0, (void *)func_801C2050);
        }
    }
}
