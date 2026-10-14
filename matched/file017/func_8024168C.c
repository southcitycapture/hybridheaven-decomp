#include "context.h"

struct func_8024168C_Obj {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_8024168C_Owner {
    u8 pad[0x2C];
    struct func_8024168C_Obj *unk2C;
};

extern s32 func_801C3044(void);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(u16);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern void func_801C2F0C(s32, void *);
extern void func_80020718(s32);
extern void func_800058DC(void *, void *);
extern void func_80241784(s32, s32);

void func_8024168C(void *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_8011AAF4((u8 *)&D_8025C79C - 0x540, 0x1C3, arg0, 2, 1, 0.0f, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk30, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk34, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk38, 0.0f, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk3C, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk40, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        func_80133980(*(u16 *)((u8 *)arg0 + 0xA2));
        func_8012D918(arg0, 0x2F8, 9, 0, 0);
        func_801C2F0C(1, 0);
        func_80020718(0x14E);
        func_800058DC(arg0, (void *)func_80241784);
    }
}
