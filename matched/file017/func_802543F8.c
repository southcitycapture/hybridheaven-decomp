#include "common.h"

extern void func_802577B4(void *, void *);
extern s32 func_80133A24(s32);
extern void func_80005670(void *, void *);
extern void func_801FBB30(void);
extern void func_80020718(s32);
extern void func_800058DC(void *, void *);
extern u8 D_80259720[];
extern u8 func_80254470[];

typedef struct func_802543F8_Struct_Inner {
    u8 pad[0x22];
    u8 unk22;
} func_802543F8_Struct_Inner;

typedef struct func_802543F8_Struct {
    u8 pad[0x14];
    func_802543F8_Struct_Inner *unk14;
} func_802543F8_Struct;

typedef struct func_802543F8_Obj {
    u8 pad[0x90];
    s16 unk90;
    s16 unk92;
} func_802543F8_Obj;

void func_802543F8(func_802543F8_Obj *arg0, func_802543F8_Struct *arg1) {
    func_802577B4(arg0, arg1);
    if (func_80133A24(0x138) != 0) {
        arg1->unk14->unk22 = 0;
        func_80005670(arg0, D_80259720);
        arg0->unk90 = 0;
        arg0->unk92 = 0;
        func_801FBB30();
        func_80020718(8);
        func_800058DC(arg0, func_80254470);
    }
}
