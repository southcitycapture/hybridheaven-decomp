#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/D_8004C460.s")

#define D_8005D050 D_8005D050__func_80006AF0
#define D_80062D20 D_80062D20__func_80006AF0
#define D_800892B0 D_800892B0__func_80006AF0
#define D_801BC03C D_801BC03C__func_80006AF0
#define D_801BC31A D_801BC31A__func_80006AF0
#define D_801BC3D8 D_801BC3D8__func_80006AF0
#define D_801BC6B6 D_801BC6B6__func_80006AF0
#define Inner Inner__func_80006AF0
#define Mid Mid__func_80006AF0
#define Obj Obj__func_80006AF0
#define St St__func_80006AF0
#define Vec3 Vec3__func_80006AF0
#define func_80006AB4 func_80006AB4__func_80006AF0
#define func_80006F8C func_80006F8C__func_80006AF0
#define func_80006F8C_Struct func_80006F8C_Struct__func_80006AF0
#define func_80006F8C_StructB func_80006F8C_StructB__func_80006AF0
#define func_80006F8C_StructE func_80006F8C_StructE__func_80006AF0
#define func_80007328 func_80007328__func_80006AF0
#define func_80007328_StructData func_80007328_StructData__func_80006AF0
#define func_80007328_StructObject func_80007328_StructObject__func_80006AF0
#define func_80007328_StructVec func_80007328_StructVec__func_80006AF0
#define func_8000736C func_8000736C__func_80006AF0
#define func_8000736C_Struct2 func_8000736C_Struct2__func_80006AF0
#define func_8000736C_Struct3 func_8000736C_Struct3__func_80006AF0
#define func_8000736C_Struct4 func_8000736C_Struct4__func_80006AF0
#define func_800073AC func_800073AC__func_80006AF0
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
#undef D_8005D050
#undef D_80062D20
#undef D_800892B0
#undef D_801BC03C
#undef D_801BC31A
#undef D_801BC3D8
#undef D_801BC6B6
#undef Inner
#undef Mid
#undef Obj
#undef St
#undef Vec3
#undef func_80006AB4
#undef func_80006F8C
#undef func_80006F8C_Struct
#undef func_80006F8C_StructB
#undef func_80006F8C_StructE
#undef func_80007328
#undef func_80007328_StructData
#undef func_80007328_StructObject
#undef func_80007328_StructVec
#undef func_8000736C
#undef func_8000736C_Struct2
#undef func_8000736C_Struct3
#undef func_8000736C_Struct4
#undef func_800073AC


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
extern s32 func_80006AB4(void *);
struct func_80006F8C_StructE {
    struct func_80006F8C_Struct *unk0;
    u8 pad[0x80];
};
extern struct func_80006F8C_StructE D_8005D050[][60];
extern u8 D_80062D20[];
extern struct func_80006F8C_Struct *D_8008D5D8[];

#define D_8005D050 D_8005D050__func_80006F8C
#define D_8008D5D8 D_8008D5D8__func_80006F8C
#define func_80006F8C_Struct func_80006F8C_Struct__func_80006F8C
#define func_80006F8C_StructB func_80006F8C_StructB__func_80006F8C
#define func_80006F8C_StructE func_80006F8C_StructE__func_80006F8C

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
extern struct func_80006F8C_Struct *D_8008D5D8[];

void func_80006F8C(u16 arg0, struct func_80006F8C_Struct *arg1) {
    struct func_80006F8C_Struct *s1;
    s32 s2;
    s32 a0;
    s32 v;
    u8 *p;
    s32 t;

    s2 = 0;
    if (arg1 != NULL) {
        do {
            s1 = arg1->unk0;
            if ((arg1->unk28 & arg0) && func_80006AB4(arg1) && arg1->unk2A == 6) {
                v = arg1->unk2C->unk6C;
                if (v & 0xF0) {
                    if (v & 2) {
                        a0 = 0;
                    } else if (v & 4) {
                        a0 = 1;
                    } else {
                        a0 = 2;
                    }
                    D_8005D050[a0][D_80062D20[a0]++].unk0 = arg1;
                }
            }
            if (arg1->unk8 != NULL) {
                if (s1 != NULL) {
                    D_8008D5D8[s2] = s1;
                    s2++;
                }
                arg1 = arg1->unk8;
            } else if (s1 == NULL && (t = s2 - 1, s2 != 0)) {
                arg1 = D_8008D5D8[t];
                s2 = t;
            } else {
                arg1 = s1;
            }
        } while (arg1 != NULL);
    }
}
#undef D_8005D050
#undef D_8008D5D8
#undef func_80006F8C_Struct
#undef func_80006F8C_StructB
#undef func_80006F8C_StructE


typedef struct func_80007114_StructVec {
    f32 x, y, z;
} func_80007114_StructVec;

struct func_80007114_StructData {
    u8 pad0[0x70];
    f32 speed;
    u8 pad74[0x24];
    func_80007114_StructVec pos;
};
struct func_80007114_StructObject {
    u8 pad0[0x2C];
    struct func_80007114_StructData *data;
};
struct func_80007114_Struct {
    struct func_80007114_StructObject *object;
    func_80007114_StructVec points[10];
    f32 distance;
    s8 count;
};

extern f32 D_800075B4(func_80007114_StructVec, func_80007114_StructVec);
#define arg1 org.x
#define arg2 org.y
#define arg3 org.z
void func_80007114(arg0, org)
    struct func_80007114_Struct *arg0;
    func_80007114_StructVec org;
{
    func_80007114_StructVec pos;
    func_80007114_StructVec delta;
    func_80007114_StructVec zero;
    s8 i;

    zero.z = 0.0f;
    zero.y = 0.0f;
    zero.x = 0.0f;
    pos = arg0->object->data->pos;
    delta.x = pos.x - arg1;
    delta.y = pos.y - arg2;
    delta.z = pos.z - arg3;
    arg0->distance = D_800075B4(delta, zero);
    arg0->count = (s32)((f64)(arg0->distance / arg0->object->data->speed) + 0.5) - 1;
    if (arg0->count <= 0) {
        arg0->count = 1;
    } else if (arg0->count >= 11) {
        arg0->count = 10;
    }
    i = 0;
    delta.x /= arg0->count + 1;
    delta.y /= arg0->count + 1;
    delta.z /= arg0->count + 1;
    for (; i < arg0->count; i++) {
        arg0->points[i].x = (f32)(i + 1) * delta.x + arg1;
        arg0->points[i].y = (f32)(i + 1) * delta.y + arg2;
        arg0->points[i].z = (f32)(i + 1) * delta.z + arg3;
    }
}
#undef arg1
#undef arg2
#undef arg3


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

extern void func_80007114();

void func_80007328(s32 arg0, struct func_80007328_StructObject **arg1) {
    func_80007114(arg0, (*arg1)->data->vec);
}


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


void func_8000736C(struct func_8000736C_Struct3 **arg0)
{
  struct func_8000736C_Struct2 *temp_t7;
 temp_t7 = (*arg0)->unk2C; func_80007114(arg0, (*(*arg0)->unk2C).unkA4);
}

#define func_800075B4 func_800075B4__func_800073AC
typedef struct { f32 x, y, z; } Vec3;
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
extern f32 func_800075B4(Vec3, Vec3);

void func_800073AC(Obj *a, Obj *b, St *c) {
    f32 lim = a->in->d->f70 * c->f2EC + b->in->d->f70;
    u8 i, j;
    for (i = 0; i < a->n; i++) {
        for (j = 0; j < b->n; j++) {
            if (func_800075B4(a->pos[i], b->pos[j]) < lim) {
                if (c->b2E8 == 0) {
                    c->b2E8 = 1;
                    c->b2DF = 0;
                }
                if (a->in->d->cnt74 == 0) {
                    a->in->d->cnt74 = 0x201;
                } else {
                    a->in->d->cnt74++;
                }
                if ((a->in->d->cnt74 & 0xFF) < 9) {
                    ((Mid **)((u8 *)a->in->d + (a->in->d->cnt74 & 0xFF) * 4))[0x74 / 4] = b->in;
                    if (c->b2E8 == 1 && c->b2DF < 8) {
                        c->b2E0[c->b2DF] = b->in->d->b68 + 1;
                        c->b2DF++;
                    }
                }
                return;
            }
        }
    }
    if (c->b2E8 == 1) {
        c->b2E8 = 2;
        c->b2DE = 0;
    }
}
#undef func_800075B4


extern f32 func_8002FC20(f32, f32);

void func_800075B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    f32 dx;
    f32 dy;
    f32 dz;

    dx = *(f32 *)&arg0 - *(f32 *)&arg3;
    dy = *(f32 *)&arg1 - arg4;
    dz = *(f32 *)&arg2 - arg5;
    func_8002FC20((dx * dx) + (dy * dy) + (dz * dz), dz);
}


struct func_80007618_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
};

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_80007618(struct func_80007618_Struct *arg0, s16 arg1) {
    f32 sp24;
    f32 sp20;

    sp20 = func_8001EB64(arg1);
    sp24 = (arg0->unk4 * sp20) - (func_8001EAD0(arg1) * arg0->unk8);
    sp20 = func_8001EAD0(arg1);
    arg0->unk8 = (func_8001EB64(arg1) * arg0->unk8) + (arg0->unk4 * sp20);
    arg0->unk4 = sp24;
}


struct func_800076B0_Struct {
    f32 unk0;
    f32 unk4;
};


void func_800076B0(struct func_800076B0_Struct *arg0, s16 arg1) {
    f32 sp24;
    f32 sp20;

    sp20 = func_8001EB64(arg1);
    sp24 = (arg0->unk0 * sp20) - (func_8001EAD0(arg1) * arg0->unk4);
    sp20 = func_8001EAD0(arg1);
    arg0->unk4 = (func_8001EB64(arg1) * arg0->unk4) + (arg0->unk0 * sp20);
    arg0->unk0 = sp24;
}

