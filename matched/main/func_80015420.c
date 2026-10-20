#include "context.h"
struct func_80015B50_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 pad18[4];
    s32 unk1C;
    s32 unk20;
};
void func_80015B50(struct func_80015B50_Struct *arg0);
void func_80016CB4(s32 arg0);

typedef struct func_80015420_Struct {
    u8 pad[0x18];
    u8 *unk18;
} func_80015420_Struct;

extern void func_800163BC(void);
extern s32 D_8008DC90;
extern u8 *D_8008DCA0;
extern u8 D_8008DCA4;

func_80015420_Struct *func_80015420(u8 *arg0, func_80015420_Struct *arg1) {
    func_80016CB4((s32)arg0);
    arg1->unk18 = arg0;
    D_8008DC90 = 8;
    D_8008DCA0 = arg1->unk18;
    D_8008DCA4 = *D_8008DCA0;
    func_800163BC();
    func_80015B50((struct func_80015B50_Struct *)arg1);
    return arg1;
}
