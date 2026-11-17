#include "common.h"
extern u8 D_801BBBF0[];
extern s32 func_80010550(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
void func_801E4F60(u16 arg0);
typedef struct func_801E74DC_Arg2 {
    u8 pad[0x1C];
    func_801E74DC_Sub unk1C;
} func_801E74DC_Arg2;
void func_801ED1F4(s32 arg0, s32 arg1, u8 *arg2);


typedef struct func_801EF6F8_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801EF6F8_StructPos;
typedef union func_801EF6F8_StructSavedPos {
    f32 coords[3];
    u8 padding[16];
} func_801EF6F8_StructSavedPos;
typedef union func_801EF6F8_StructSavedData {
    void *value;
    u8 padding[8];
} func_801EF6F8_StructSavedData;
typedef struct func_801EF6F8_StructSub {
    s32 id;
    s16 part;
    u16 flags;
    f32 value;
} func_801EF6F8_StructSub;
typedef union func_801EF6F8_StructSubView {
    func_801EF6F8_StructSub fields;
    func_801E74DC_Sub all;
} func_801EF6F8_StructSubView;
typedef struct func_801EF6F8_StructOuter {
    u8 pad[0x2C];
    func_801EF6F8_StructPos *pos;
} func_801EF6F8_StructOuter;
typedef struct func_801EF6F8_StructGlobal {
    u8 pad0[0xE0];
    func_801EF6F8_StructOuter *outer;
    u8 pad1[0x190-0xE4];
    u16 state;
    u8 pad2[0xEF0-0x192];
    u16 flags;
    u8 pad3[0xEFE-0xEF2];
    u16 sound;
} func_801EF6F8_StructGlobal;
typedef struct func_801EF6F8_StructArg {
    u8 pad0[0x2C];
    u32 flags;
    u8 pad1[0x40-0x30];
    f32 x;
    u8 pad2[4];
    f32 z;
    u8 pad3[0x68-0x4C];
    void *data;
} func_801EF6F8_StructArg;
extern void func_801BF1A0(s32);
extern void func_801C88BC(void);
extern void func_801E8BD0(void *, s32, void *, u16, void *);
extern void func_801E7C30(void *, s32, void *, u16);
extern void func_801EDF0C(void *, s32, void *, u16);
extern void func_801E95D4(void *, s32, void *, u16, s32);

#define G ((func_801EF6F8_StructGlobal *)&D_801BBBF0)
#define SAVE_POS() cur = G->outer->pos; pos.coords[0] = cur->x; pos.coords[1] = cur->y; pos.coords[2] = cur->z
#define RESTORE_POS() G->outer->pos->x = pos.coords[0]; G->outer->pos->y = pos.coords[1]; G->outer->pos->z = pos.coords[2]

s32 func_801EF6F8(func_801EF6F8_StructArg *arg0, s32 arg1, func_801E74DC_Arg2 *arg2)
{
    func_801EF6F8_StructSavedData data;
    func_801EF6F8_StructSavedPos pos;
    u16 result;
    func_801EF6F8_StructSubView *sub;
    func_801EF6F8_StructPos *cur;
    func_801E74DC_Arg2 **arg2_ptr = &arg2;
    s32 *arg1_ptr = &arg1;

    data.value = arg0->data;
    if (G->state == 5 || G->state == 6) {
        func_801BF1A0(1);
        func_801E4F60(G->sound);
        G->flags &= 0xF0F1;
        func_801C88BC();
        G->flags |= 0x20;
        return 1;
    }
    sub = (func_801EF6F8_StructSubView *)&(*arg2_ptr)->unk1C;
    switch ((u32)sub->fields.id) {
    case 0x168004F:
    case 0x1680050:
        G->flags |= 0x200;
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801E8BD0(arg0, *arg1_ptr, *arg2_ptr, result, data.value);
        break;
    case 0x168004C:
        G->flags |= 0x200;
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801E7C30(arg0, *arg1_ptr, *arg2_ptr, result);
        break;
    case 0x168002A:
    case 0x1680051:
    case 0x1680052:
    case 0x1680053:
        G->flags |= 0x200;
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801EDF0C(arg0, *arg1_ptr, *arg2_ptr, result);
        break;
    case 0x1680015:
    case 0x1680017:
        func_801BF1A0(13);
        sub->all.unk0 = 0x1680016;
        sub->fields.part = 0;
        sub->fields.flags = 0;
        sub->fields.value = 0.5f;
        func_8013A28C(*arg1_ptr, sub->all);
        func_801E4F60(G->sound);
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801E95D4(arg0, *arg1_ptr, *arg2_ptr, result, 0);
        break;
    case 0x1680012:
    case 0x1680013:
    case 0x1680014:
        if (!(sub->fields.flags & 2)) {
            sub->fields.flags |= 2;
            func_8013A28C(*arg1_ptr, sub->all);
        }
        /* fall through */
    case 0x1680016:
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801E95D4(arg0, *arg1_ptr, *arg2_ptr, result, 0);
        break;
    case 0x1680054:
    case 0x1680055:
    case 0x1680056:
    case 0x1680057:
    case 0x1680058:
        sub->all.unk0 = 0x1680041;
        sub->fields.part = 0;
        sub->fields.flags = 0;
        sub->fields.value = 1.0f;
        func_8013A28C(*arg1_ptr, sub->all);
        break;
    default:
        func_801ED1F4((s32)arg0, *arg1_ptr, (u8 *)*arg2_ptr);
        break;
    }
    arg0->z = 0.0f;
    arg0->x = 0.0f;
    if (sub->fields.id == 0x1680041) {
        func_801BF1A0(1);
        func_801E4F60(G->sound);
        G->flags &= 0xF0F1;
        func_801C88BC();
        arg0->flags |= 0xE0;
        if (G->state == 1) {
            func_801E4F60(0x3F);
        }
        G->flags |= 0x20;
        return 1;
    }
    G->flags &= 0xFFDF;
    return 0;
}
