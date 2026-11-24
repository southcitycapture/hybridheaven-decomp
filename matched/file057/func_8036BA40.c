#include "common.h"
struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};
struct func_80369C7C_Obj1 {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
};
struct func_80369C7C_Struct {
    u8 pad0[0xDC];
    struct func_80369C7C_Obj1 *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_80369C7C_Obj1 *unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};
extern struct func_80369C7C_Struct D_801BBBF0;
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
typedef struct func_8036BBBC_Cur {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    s16 unk4;
    u8 pad6[2];
    void **unk8;
} func_8036BBBC_Cur;
extern func_8036BBBC_Cur *D_8038CC64;
extern void func_800058DC(s32, void *);                    /* extern */
extern void func_8013B808(void *, s32, s32);
extern void func_802237B0(void *, s32);
void func_8036BBBC(s32 arg0, s32 arg1);


typedef struct func_8036BA40_StructTarget {
    u8 pad[0x7C];
    void **unk7C;
    u16 unk80;
} func_8036BA40_StructTarget;
typedef struct func_8036BA40_StructArg {
    u8 pad[0x5C];
    func_8036BA40_StructTarget *unk5C;
} func_8036BA40_StructArg;
typedef struct func_8036BA40_StructState {
    u8 pad0[8];
    s16 unk8;
    u8 padA[0x32 - 0xA];
    u8 unk32;
    u8 pad33[0x2D8 - 0x33];
    u8 unk2D8;
    u8 pad2D9[4];
    u8 unk2DD;
    u8 pad2DE[0x300 - 0x2DE];
    u16 unk300;
    u16 unk302;
} func_8036BA40_StructState;
typedef struct func_8036BA40_StructGlobal {
    u8 pad[0x1030];
    u8 unk1030;
} func_8036BA40_StructGlobal;
struct func_80369C7C_Obj1__func_8036B854;
extern s32 func_8036B854(struct func_80369C7C_Obj1__func_8036B854 *);
extern s32 func_80231CEC(void *);
extern func_8036BBBC_Cur D_803872D0[];

void func_8036BA40(void *arg0, void *arg1) {
    func_8036BA40_StructTarget *target;
    func_8036BA40_StructState *selected;
    s32 maxValue;
    u16 mode;
    u8 index;
    u16 currentValue;
    void *player;
    func_8036BA40_StructArg *object;
    u32 promoted;
    object = arg0;
    target = object->unk5C;
    player = (void *)D_801BBCCC;
    selected = (object == player) ? (func_8036BA40_StructState *)D_801BC03C : (func_8036BA40_StructState *)D_801BC3D8;
    mode = 0;
    index = func_8036B854((void *)object);
    func_802237B0(object, 1);
    D_8038CC64 = &D_803872D0[index];
    target->unk7C = D_8038CC64->unk8;
    target->unk80 = 2;
    ((func_8036BA40_StructGlobal *)&D_801BBBF0)->unk1030 ^= 1;
    func_80231CEC(&D_801BBBF0);
    selected->unk2DD = 1;
    selected->unk2D8 = 15;
    selected->unk32 = (selected->unk32 & 0xFF1F) | 0x40;
    if (selected->unk300 >= 100) {
        maxValue = selected->unk8;
        currentValue = selected->unk302;
        if (maxValue == currentValue) {
            mode = 4;
        } else if ((f64)maxValue * 0.8 < (f64)(u32)currentValue) {
            mode = 1;
        }
    }
    promoted = mode;
    if ((u32)promoted != 0U) {
        func_8013B808(object, (s32)arg1, promoted);
    }
    func_800058DC((s32)object, func_8036BBBC);
}
