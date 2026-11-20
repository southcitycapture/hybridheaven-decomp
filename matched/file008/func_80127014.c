#include "common.h"
typedef struct func_80127014_GlobalStruct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80127014_GlobalStruct;
extern func_80127014_GlobalStruct D_80164E80;
extern s8 D_801BBD76;
extern void (*D_80089470)(void);
extern void func_80005700(void *);
typedef struct func_80126570_Args {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80126570_Args;
struct func_80126F4C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x90 - 0x38];
    s16 unk90;
};
typedef struct func_80126570_Entry {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 pad0[0x16];
    u16 unk1C;
    u16 unk1E;
} func_80126570_Entry;
typedef struct func_80126570_Obj {
    u8 pad0[0x35];
    u8 unk35;
    u16 unk36;
    func_80126570_Entry *unk38;
} func_80126570_Obj;
extern func_80126570_Obj *func_8012C4D0(void *arg0, func_80126570_Args arg1, s32 arg2);

extern void func_8013B208(void *);

void func_80127014(void *arg0, s32 arg1)
{
    struct func_80126F4C_Struct *object = arg0;
    u16 sp2A;

    D_801BBD76 = 1;
    sp2A = object->unk36;
    func_8013B208(object);
    func_80005700(object);
    if (sp2A == 0) {
        goto done;
    }
    object = (struct func_80126F4C_Struct *) func_8012C4D0(object, *(func_80126570_Args *) &D_80164E80, 3);
    if (object == 0) {
        goto done;
    }
    object->unk36 = sp2A;
    object->unk90 = 5;
done:
    return;
}
