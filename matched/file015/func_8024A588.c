#include "common.h"
extern void func_800058DC(void *, void *);
extern void func_801C2F0C(s32 arg0, void *arg1);
typedef struct func_8024A604_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024A604_Struct;
void func_8024A604(func_8024A604_Struct *arg0, s32 arg1);


typedef struct func_8024A588_Struct {
    s16 unk00;
    s16 pad02;
    s32 unk04;
    f32 unk08;
    s16 unk0C;
    s16 pad0E;
    f32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} func_8024A588_Struct;

typedef struct func_8024A588_Obj {
    u8 pad00[0x3C];
    s16 unk3C;
} func_8024A588_Obj;
extern void func_800179B0(void *);
extern s32 func_801C3B5C(void);
extern u8 D_802534DC[];

void func_8024A588(func_8024A588_Obj *arg0, s32 arg1) {
    func_8024A588_Struct sp18;

    if (func_801C3B5C() == 4) {
        sp18.unk00 = 0;
        sp18.unk04 = 0x0348007A;
        sp18.unk0C = 0x14;
        sp18.unk08 = 10.0f;
        func_801C2F0C(3, &sp18);
        func_800179B0(D_802534DC);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024A604);
    }
}
