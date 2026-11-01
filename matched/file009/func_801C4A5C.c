#include "common.h"
struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};
struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};
extern struct func_801C3D90_StructA D_801BBBF0;


typedef struct func_801C4A5C_StructNode {
    u8 pad[4]; f32 x, y, z; u8 pad10[2]; s16 angle;
} func_801C4A5C_StructNode;
typedef struct func_801C4A5C_StructMid {
    u8 pad[0x2C]; func_801C4A5C_StructNode *a, *b;
} func_801C4A5C_StructMid;
typedef struct func_801C4A5C_StructActor {
    u8 pad[0x24]; func_801C4A5C_StructMid *mid;
    u8 pad28[0x24]; u8 width, height, depth; s8 offset;
    u8 pad50[4]; u32 flags;
} func_801C4A5C_StructActor;
typedef struct func_801C4A5C_StructGlobal {
    u8 pad[0xE0]; func_801C4A5C_StructMid *mid;
    u8 padE4[0xD40 - 0xE4]; f32 x[16], y[16], z[16];
    u8 padE00[0xC0]; u32 flags; u8 padEC4[0x2C]; u16 state;
} func_801C4A5C_StructGlobal;
typedef struct func_801C4A5C_StructEntry { u16 flag, index; } func_801C4A5C_StructEntry;
extern func_801C4A5C_StructEntry D_801E0B30[];
extern u8 D_801E0B74;
extern f32 D_801E4020[6];
extern f32 D_801BC918[];

#define g ((func_801C4A5C_StructGlobal *)&D_801BBBF0)
extern void func_80130C40(s16, f32 *, f32 *);

#define act ((func_801C4A5C_StructActor *)arg0)
void func_801C4A5C(void *arg0, s32 arg1)
{
    s8 i;
    f32 *px, *py, *pz;
    func_801C4A5C_StructMid *mid;
    s16 *angle;
    func_801C4A5C_StructNode *node;
    f32 dx, dy, dz;
    f32 *outx, *outy, *outz;
    func_801C4A5C_StructEntry *entry;
    u32 flag;

    g->flags = act->flags;
    entry = D_801E0B30;
    if (arg1 == 2) {
        g->x[0] = act->mid->a->x;
        g->y[0] = (f32)act->offset + (act->mid->a->y + (f32)(u32)act->height * 0.125);
        g->z[0] = act->mid->a->z;
        for (i = 7; i < 9; i++) {
            g->x[i] = act->mid->a->x;
            g->y[i] = (f32)act->offset + (act->mid->a->y + (f32)(u32)act->height * 0.125);
            g->z[i] = act->mid->a->z;
        }
        for (i = 12; i < 16; i++) {
            g->x[i] = act->mid->a->x;
            g->y[i] = (f32)act->offset + (act->mid->a->y + (f32)(u32)act->height * 0.125);
            g->z[i] = act->mid->a->z;
        }
        return;
    }
    if (arg1 == 1) {
        outx = D_801BC918 + 0x36;
        outy = D_801BC918 + 0x46;
        outz = D_801BC918 + 0x56;
    } else {
        outx = D_801BC918 + 6;
        outy = D_801BC918 + 0x16;
        outz = D_801BC918 + 0x26;
        if (act->mid != NULL) {
            if (D_801E0B74) {
                D_801E4020[3] = D_801E4020[0];
                D_801E4020[4] = D_801E4020[1];
                D_801E4020[5] = D_801E4020[2];
                mid = g->mid;
                D_801E4020[0] = mid->a->x;
                D_801E4020[1] = mid->a->y;
                D_801E4020[2] = mid->a->z;
            } else {
                D_801E4020[0] = D_801E4020[1] = D_801E4020[2] = 0.0f;
                D_801E0B74 = 1;
            }
        } else {
            D_801E4020[0] = D_801E4020[1] = D_801E4020[2] = 0.0f;
            D_801E4020[3] = D_801E4020[4] = D_801E4020[5] = 0.0f;
            D_801E0B74 = 0;
        }
    }
    mid = act->mid;
    if (mid == NULL) return;
    node = mid->a;
    if (node != NULL) {
        px = &node->x; py = &node->y; pz = &node->z;
        angle = &node->angle;
    } else {
        angle = &mid->b->angle; px = &mid->b->x; py = &mid->b->y; pz = &mid->b->z;
    }
    while (entry->flag) {
        if (entry->flag & g->flags) {
            flag = entry->flag;
            switch ((s32)flag) {
            case 1:
                dx = 0.0f; dy = (f32)act->offset; dz = 0.0f;
                break;
            case 2:
                dx = 0.0f;
                if (g->state & 0x1000) dy = (f32)act->offset + (f32)(u32)act->height * 3.0 * 0.125;
                else dy = (f32)act->offset + (f32)(u32)act->height * 5.0 * 0.125;
                dz = (f32)(u32)act->depth;
                break;
            case 4:
                dx = -(f32)(u32)act->width;
                dy = (f32)act->offset + (f32)(u32)act->height * 3.0 * 0.125;
                dz = 0.0f;
                break;
            case 8:
                dx = (f32)(u32)act->width;
                dy = (f32)act->offset + (f32)(u32)act->height * 3.0 * 0.125;
                dz = 0.0f;
                break;
            case 16:
                dx = 0.0f;
                dy = (f32)act->offset + (f32)(u32)act->height * 3.0 * 0.125;
                dz = -(f32)(u32)act->depth;
                break;
            case 32:
                dx = 0.0f; dy = (f32)act->offset + (f32)(u32)act->height; dz = 0.0f;
                break;
            case 64:
                dx = 0.0f; dy = (f32)act->offset + (f32)(u32)act->height * 0.015625;
                dz = (f32)(u32)act->depth;
                break;
            case 128:
                dx = 0.0f; dy = (f32)act->offset + (f32)(u32)act->height * 0.03125;
                dz = (f32)(u32)act->height * 0.5;
                break;
            case 256:
                dx = 0.0f; dy = (f32)act->offset + (f32)(u32)act->height * 0.03125;
                dz = -(f32)(u32)act->height * 0.5;
                break;
            case 512:
                dx = 0.0f; dy = (f32)act->offset + (f32)(u32)act->height * 2.0 * 0.125;
                dz = -(f32)(u32)act->depth;
                break;
            case 1024:
                if (arg1) {
                    dx = -(f32)(u32)act->width;
                    dy = (f32)act->offset + (f32)(u32)act->height * 3.0 * 0.125;
                    dz = (f32)(u32)act->depth * 0.95;
                } else {
                    dx = -(f32)(u32)act->width;
                    dy = (f32)act->offset + (f32)(u32)act->height * 3.0 * 0.125;
                    dz = 0.0f;
                }
                break;
            case 2048:
                if (arg1) {
                    dx = (f32)(u32)act->width;
                    dy = (f32)act->offset + (f32)(u32)act->height * 3.0 * 0.125;
                    dz = (f32)(u32)act->depth * 0.95;
                } else {
                    dx = (f32)(u32)act->width;
                    dy = (f32)act->offset + (f32)(u32)act->height * 3.0 * 0.125;
                    dz = 0.0f;
                }
                break;
            case 4096:
                dx = -(f32)(u32)act->width * 0.8;
                dy = (f32)act->offset + (f32)(u32)act->height * 0.03125;
                dz = (f32)(u32)act->height * 0.25;
                break;
            case 8192:
                dx = (f32)(u32)act->width * 0.8;
                dy = (f32)act->offset + (f32)(u32)act->height * 0.03125;
                dz = (f32)(u32)act->height * 0.25;
                break;
            case 16384:
                dx = -(f32)(u32)act->width * 0.8;
                dy = (f32)act->offset + (f32)(u32)act->height * 0.03125;
                dz = -(f32)(u32)act->height * 0.25;
                break;
            case 32768:
                dx = (f32)(u32)act->width * 0.8;
                dy = (f32)act->offset + (f32)(u32)act->height * 0.03125;
                dz = -(f32)(u32)act->height * 0.25;
                break;
            }
            func_80130C40((s16)-*angle, &dx, &dz);
            if (arg1) {
                outx[entry->index] = *px + dx;
                outy[entry->index] = *py + dy;
                outz[entry->index] = *pz + dz;
            } else {
                switch (entry->flag) {
                case 1:
                case 32:
                    outx[entry->index] = *px;
                    outy[entry->index] = *py + (f32)(u32)((u8 *)arg0)[0x4D] * 0.5;
                    outz[entry->index] = *pz;
                    break;
                case 1024:
                case 2048:
                    outx[entry->index] = *px + dx;
                    outy[entry->index] = *py + dy;
                    outz[entry->index] = *pz + dz;
                    break;
                case 128:
                    outx[0] = *px;
                    outy[0] = *py + (f32)(u32)((u8 *)arg0)[0x4D] * 0.125;
                    outz[0] = *pz;
                default:
                    outx[entry->index] = *px;
                    outy[entry->index] = *py + dy;
                    outz[entry->index] = *pz;
                    break;
                }
            }
        }
        entry++;
    }
}
