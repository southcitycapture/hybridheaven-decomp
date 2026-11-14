#include "common.h"
struct func_80006F8C_StructB {
    u8 pad[0x6C];
    u16 unk6C;
};
struct func_80006F8C_Struct {
    struct func_80006F8C_Struct *unk0;
    u8 pad4[4];
    struct func_80006F8C_Struct *unk8;
    u8 padC[0x1C];
    u16 unk28;
    u16 unk2A;
    struct func_80006F8C_StructB *unk2C;
};
struct func_80006F8C_StructE {
    struct func_80006F8C_Struct *unk0;
    u8 pad[0x80];
};
extern struct func_80006F8C_StructE D_8005D050[][60];
extern u8 D_80062D20[];
typedef struct {
    u8 pad0[0x68];
    u8 b68;
    u8 pad69[7];
    f32 f70;
    u16 cnt74;
} Inner;
typedef struct {
    u8 pad[0x2C];
    Inner *d;
} Mid;
typedef struct { f32 x, y, z; } Vec3;
typedef struct {
    Mid *in;
    Vec3 pos[1];
    u8 pad[0x80 - 0x10];
    s8 n;
} Obj;
typedef struct {
    u8 pad[0x2DE];
    u8 b2DE;
    u8 b2DF;
    u8 b2E0[8];
    u8 b2E8;
    u8 pad2E9[3];
    f32 f2EC;
} St;
extern s32 func_80006AB4(void *);
void func_80006F8C(u16 arg0, struct func_80006F8C_Struct *arg1);
struct func_80007328_StructVec {
    s32 x;
    s32 y;
    s32 z;
};
struct func_80007328_StructData {
    u8 pad[0x98];
    struct func_80007328_StructVec vec;
};
struct func_80007328_StructObject {
    u8 pad[0x2C];
    struct func_80007328_StructData *data;
};
void func_80007328(s32 arg0, struct func_80007328_StructObject **arg1);
struct func_8000736C_Struct4 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_8000736C_Struct2 {
    u8 pad0[0xA4];
    struct func_8000736C_Struct4 unkA4;
};
struct func_8000736C_Struct3 {
    u8 pad0[0x2C];
    struct func_8000736C_Struct2 *unk2C;
};
void func_8000736C(struct func_8000736C_Struct3 **arg0);
void func_800073AC(Obj *a, Obj *b, St *c);


struct func_80006AF0_StructData {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[0x5C];
    u16 flags;
    u8 pad6E[6];
    u16 count;
    u8 pad76[0x22];
    f32 x1;
    f32 y1;
    f32 z1;
    f32 x2;
    f32 y2;
    f32 z2;
};

struct func_80006AF0_StructNode {
    struct func_80006AF0_StructNode *next;
    u8 pad4[0x20];
    u32 state;
    u16 mask;
    u16 type;
    struct func_80006AF0_StructData *data;
};

struct func_80006AF0_StructEntry {
    struct func_80006AF0_StructNode *object;
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[0x70];
    u8 active;
    u8 pad81[3];
};

struct func_80006AF0_StructRoot {
    u8 pad[0x17C];
    struct func_80006AF0_StructNode *first;
};

extern struct func_80006AF0_StructRoot D_800892B0[];
extern u8 D_801BC31A;
extern u8 D_801BC6B6;
extern St D_801BC03C[];
extern St D_801BC3D8[];

void func_80006AF0(void) {
    u16 i;
    u16 j;
    u32 pad12, pad13;
    u16 group;
    u16 item;
    u16 mask;
    struct func_80006AF0_StructNode *node;
    struct func_80006AF0_StructNode *object;
    struct func_80006AF0_StructData *data;
    struct func_80006AF0_StructEntry *entry;
    struct func_80006AF0_StructEntry *other;
    St *state;
    u32 pad0, pad1, pad2, pad3, pad4, pad5;
    u32 pad6, pad7, pad8, pad9, pad10, pad11;

    if (D_801BC31A != 0 || D_801BC6B6 != 0) {
        for (i = 0; i < 3; i++) {
            D_80062D20[i] = 0;
        }
        mask = 0x8000;
        for (i = 0; i < 16; i++, mask >>= 1) {
            node = D_800892B0->first;
            while (node != NULL && node->state >= 0xFFFFFFFEU) {
                if (node->type < 6 && (node->mask & mask) && func_80006AB4(node) != 0) {
                    func_80006F8C(mask, (struct func_80006F8C_Struct *)node);
                    break;
                }
                node = node->next;
            }
        }
        for (i = 0; i < 3; i++) {
            for (j = 0; j < D_80062D20[i]; j++) {
                entry = (struct func_80006AF0_StructEntry *)&D_8005D050[i][j];
                object = entry->object;
                data = object->data;
                if (data->flags & 0x300) {
                    switch (data->flags & 0xF0) {
                    case 0x30:
                        entry->active = 1;
                        entry->x = object->data->x1;
                        entry->y = object->data->y1;
                        entry->z = object->data->z1;
                        data = object->data;
                        break;
                    case 0x20:
                        func_80007328((s32)entry, (struct func_80007328_StructObject **)&D_8005D050[i][j + 1]);
                        data = entry->object->data;
                        break;
                    case 0xA0:
                        func_8000736C((struct func_8000736C_Struct3 **)entry);
                        data = entry->object->data;
                        break;
                    case 0x10:
                        entry->active = 1;
                        entry->x = object->data->x;
                        entry->y = object->data->y;
                        entry->z = object->data->z;
                        data = object->data;
                        break;
                    case 0x40:
                    case 0x50:
                    case 0x60:
                    case 0x70:
                    case 0x80:
                    case 0x90:
                        entry->active = 1;
                        data = object->data;
                        entry->x = (data->x2 + data->x1) * 0.5;
                        data = object->data;
                        entry->y = (data->y2 + data->y1) * 0.5;
                        data = object->data;
                        entry->z = (data->z2 + data->z1) * 0.5;
                        data = object->data;
                        break;
                    }
                }
                data->count = 0;
            }
        }
        for (group = 0; group < 2; group++) {
            if (group == 0) {
                state = D_801BC03C;
                if (D_801BC31A != 0) {
                    goto process_group;
                }
            } else {
                state = D_801BC3D8;
                if (D_801BC6B6 != 0) {
process_group:
                    for (item = 0; item < D_80062D20[group]; item++) {
                        entry = (struct func_80006AF0_StructEntry *)&D_8005D050[group][item];
                        if (entry->object->data->flags & 0x200) {
                            for (i = 0; i < 3; i++) {
                                if (i != group) {
                                    for (j = 0; j < D_80062D20[i]; j++) {
                                        other = (struct func_80006AF0_StructEntry *)&D_8005D050[i][j];
                                        if (other->object->data->flags & 0x100) {
                                            func_800073AC((Obj *)entry, (Obj *)other, state);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
