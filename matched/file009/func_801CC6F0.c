#include "common.h"

extern s32 D_80006214(void *);
extern u8 D_8008DA88[];
extern u16 D_801BCAE0;
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
struct func_801CC6F0_Act {
    u8 pad0[0x34];
    u8 unk34;
    u8 unk35;
    u8 unk36;
};
struct func_801CC6F0_Out {
    s32 unk0;
    s32 unk4;
    f32 unk8;
};
extern void func_801CC830(u8 *arg0, s32 arg1);
extern s32 func_801CE3F8(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
void func_801CC6F0(void *arg0, s32 arg1) {
    s32 sp64;
    struct func_801CC6F0_Out out;
    s32 a3;
    void *temp_a0;

    temp_a0 = *(void **)((u8 *)arg0 + 0xC);
    sp64 = *(s32 *)((u8 *)temp_a0 + 0x5C);
    func_80006214(temp_a0);
    if ((func_80126944() == 0) && (D_801BCAE0 & 0x100)) {
        a3 = 6;
    } else {
        a3 = 3;
    }
    func_8013A334((s32 *)&out, D_8008DA88, sp64, a3);
    D_80006214(arg0);
    if (func_801CE3F8(arg0, 0, out.unk0, out.unk4, out.unk8, 0xFF, 0xFF, 0xFF, 0xFF, ((struct func_801CC6F0_Act *)D_801E4080)->unk34, ((struct func_801CC6F0_Act *)D_801E4080)->unk35, ((struct func_801CC6F0_Act *)D_801E4080)->unk36, 0xFF, 0xA, 0x1E, 0.00999999978f, 8) != 0) {
        func_80020718(0x10C);
        D_801E4080->unk4C = 1;
    } else {
        D_801E4080->unk4C = 2;
    }
    func_800058DC(arg0, func_801CC830);
}
