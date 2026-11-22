#include "common.h"

typedef struct func_8024A4FC_Inner {
    u8 pad[0x8];
    f32 unk8;
} func_8024A4FC_Inner;
typedef struct func_8024A4FC_Outer {
    u8 pad[0x2C];
    func_8024A4FC_Inner *unk2C;
} func_8024A4FC_Outer;
extern func_8024A4FC_Outer *D_801BBCD0;
extern const u8 D_8025CCF8[];
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_8024A54C_Pos {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8024A54C_Pos;
typedef struct func_8024A54C_Obj {
    u8 pad[0x2C];
    func_8024A54C_Pos *unk2C;
} func_8024A54C_Obj;
void func_8024A54C(s32 arg0, s32 arg1) {
    func_8011AAF4(D_8025CCF8, 0x2CA, arg0, 0, 1, 0.0f, -243.0f, (-630.0f), -64.0f, 0.0f, ((func_8024A54C_Obj *)D_801BBCD0)->unk2C->unk4, ((func_8024A54C_Obj *)D_801BBCD0)->unk2C->unk8 + 10.0f, ((func_8024A54C_Obj *)D_801BBCD0)->unk2C->unkC, 0.0f, 55.0f, -1, -1);
}
