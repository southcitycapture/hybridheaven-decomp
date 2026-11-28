#include "common.h"
/* All six parameters are floats; context.h still declares arg2/arg3 as s32, so its prototype is renamed here. */
struct func_80108280_StructA {
    struct func_80108280_StructA *next;
    u8 pad4[0x20];
    s32 f24;
    u8 pad28[4];
    s32 f2C;
    u8 pad30[0x44];
    u8 *f74;
};
struct func_80108280_StructB { u8 pad0[8]; struct func_80108280_StructA *head; };
struct func_80108280_StructC {
    u8 pad0[4];
    u16 f4;
    u8 pad6[0x4A];
    struct func_80108280_StructB *f50;
};
extern struct func_80108280_StructC D_801BBBF0;
typedef struct func_8010ACF8_StructNode {
    u8 type;
    u8 pad1[3];
    s16 next;
    u8 pad6[2];
    s16 min[3];
    s16 max[3];
} func_8010ACF8_StructNode;
typedef struct func_8010ACF8_StructArg {
    func_8010ACF8_StructNode *node;
    f32 a[3];
    f32 b[3];
    u8 pad1C[4];
    f32 distance;
} func_8010ACF8_StructArg;
s32 func_8010ACF8(func_8010ACF8_StructArg *arg0);
typedef struct {
    u8 pad0[4];
    f32 f4, f8, fC, f10, f14, f18;
    u8 pad1c[8];
    f32 f24, f28, f2C, f30;
} func_8010B4D8_Struct;
extern void (*D_801BBAD4)(void);
void func_8010B4D8(func_8010B4D8_Struct *arg0, f32 *arg1, f32 *arg2, f32 *arg3);
typedef struct {
    u8 pad0[0x10];
    f32 x10, x14, x18;
    u8 pad1c[8];
    f32 x24, x28, x2C, x30;
} func_8010B634_Struct;
void func_8010B634(func_8010B634_Struct *arg0, f32 *arg1, f32 *arg2, f32 *arg3);


typedef struct func_80108868_StructTransform {
    u8 pad[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14;
} func_80108868_StructTransform;
typedef struct func_80108868_StructObject {
    u8 pad[0x2C];
    func_80108868_StructTransform *unk2C, *unk30;
} func_80108868_StructObject;
typedef struct func_80108868_StructState {
    u8 pad0[0x50];
    struct func_80108280_StructB *f50;
    u8 pad[0x35A - 0x54];
    u8 unk35A, unk35B;
    f32 unk35C, unk360, unk364, unk368, unk36C, unk370;
    f32 unk374, unk378, unk37C, unk380, unk384, unk388;
    struct func_80108280_StructA *unk38C;
} func_80108868_StructState;
typedef struct func_80108868_StructQuery {
    u8 *node;
    f32 a[3], b[3];
    u8 type, pad[3];
    f32 t, n0, n1, n2;
    u8 tail[4];
} func_80108868_StructQuery;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 D_801BBF68;
extern f32 D_801BBF6C;
/* D_801BBBF0 with its full layout (context.h only declares the first 0x54 bytes). */
extern func_80108868_StructState B_801BBBF0;
#define G B_801BBBF0
#define obj ((func_80108868_StructObject *)item->f24)

s32 func_80108868(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    s32 hit;
    struct func_80108280_StructA *item;
    func_80108868_StructQuery q;
    f32 x, y, z;
    f32 tx, ty, tz;
    f32 px, py, pz;
    s16 angle, rx, ry, rz;
    f32 sx, sy, sz, cx, cy, cz;
    f32 nearest;
    f32 outx, outy, outz;
    u8 type;
    f32 nx, ny, nz;
    /* rotation terms; the hit block reuses them for the forward (transposed) matrix */
    f32 m00, m22, m01, m12, m10, m21, m20, m11;

    G.unk35A = 0;
    G.unk35B = 0;
    G.unk38C = NULL;
    hit = 0;
    G.unk35C = 0.0f;
    G.unk360 = 0.0f;
    G.unk364 = 0.0f;
    G.unk368 = 0.0f;
    G.unk36C = 0.0f;
    G.unk370 = 0.0f;
    G.unk374 = 0.0f;
    G.unk378 = 0.0f;
    G.unk37C = 0.0f;
    G.unk380 = 0.0f;
    G.unk384 = 0.0f;
    G.unk388 = 0.0f;
    nearest = (f32)0x80000000u;
    item = G.f50->head;
    if (item != NULL) {
        do {
            if (obj != NULL) {
                if ((item->f74 != NULL) && (item->f2C & 0x800)) {
                    if (obj->unk30 != NULL) {
                        px = obj->unk30->unk4;
                        py = obj->unk30->unk8;
                        pz = obj->unk30->unkC;
                        rx = obj->unk30->unk10;
                        ry = obj->unk30->unk12;
                        rz = obj->unk30->unk14;
                    } else {
                        px = obj->unk2C->unk4;
                        py = obj->unk2C->unk8;
                        pz = obj->unk2C->unkC;
                        rx = obj->unk2C->unk10;
                        ry = obj->unk2C->unk12;
                        rz = obj->unk2C->unk14;
                    }
                    if ((rx == 0) && (ry == 0) && (rz == 0)) {
                        q.node = item->f74;
                        q.a[0] = arg0 - px;
                        q.a[1] = arg1 - py;
                        q.a[2] = arg2 - pz;
                        q.b[0] = arg3 - px;
                        q.b[1] = arg4 - py;
                        q.b[2] = arg5 - pz;
                        if (func_8010ACF8((func_8010ACF8_StructArg *)&q) != 0) {
                            hit = 1;
                            if (q.t < nearest) {
                                nearest = q.t;
                                func_8010B634((func_8010B634_Struct *)&q, &x, &y, &z);
                                G.unk374 = x + px;
                                G.unk378 = y + py;
                                G.unk37C = z + pz;
                                func_8010B4D8((func_8010B4D8_Struct *)&q, &x, &y, &z);
                                outx = x + px;
                                outy = y + py;
                                outz = z + pz;
                                G.unk38C = item;
                                nx = q.n0;
                                ny = q.n1;
                                nz = q.n2;
                                type = q.type;
                            }
                        }
                    } else {

                        angle = -rx;
                        q.node = item->f74;
                        sx = func_8001EAD0(angle);
                        cx = func_8001EB64(angle);
                        angle = -ry;
                        sy = func_8001EAD0(angle);
                        cy = func_8001EB64(angle);
                        angle = -rz;
                        sz = func_8001EAD0(angle);
                        cz = func_8001EB64(angle);
                        m00 = cz * cy;
                        m22 = cy * cx;
                        m01 = -sz * cy;
                        m12 = -cy * sx;
                        m10 = sz * cx + cz * sy * sx;
                        m21 = cz * sx + sz * sy * cx;
                        m20 = sz * sx - cz * sy * cx;
                        m11 = cz * cx - sz * sy * sx;
                        tx = (-px * m00 - py * m01) - pz * sy;
                        ty = (-px * m10 - py * m11) - pz * m12;
                        tz = (-px * m20 - py * m21) - pz * m22;
                        q.a[0] = m00 * arg0 + m01 * arg1 + sy * arg2 + tx;
                        q.a[1] = m10 * arg0 + m11 * arg1 + m12 * arg2 + ty;
                        q.a[2] = m20 * arg0 + m21 * arg1 + m22 * arg2 + tz;
                        q.b[0] = m00 * arg3 + m01 * arg4 + sy * arg5 + tx;
                        q.b[1] = m10 * arg3 + m11 * arg4 + m12 * arg5 + ty;
                        q.b[2] = m20 * arg3 + m21 * arg4 + m22 * arg5 + tz;
                        if (func_8010ACF8((func_8010ACF8_StructArg *)&q) != 0) {
                            hit = 1;
                            if (q.t < nearest) {

                                nearest = q.t;
                                sx = func_8001EAD0(rx);
                                cx = func_8001EB64(rx);
                                sy = func_8001EAD0(ry);
                                cy = func_8001EB64(ry);
                                sz = func_8001EAD0(rz);
                                cz = func_8001EB64(rz);
                                m00 = sx * cy;
                                m22 = cy * cx;
                                m01 = cy * cz;
                                m12 = cy * sz;
                                m10 = sx * sy * sz + cx * cz;
                                m21 = cx * sy * cz + sx * sz;
                                m20 = sx * sy * cz - cx * sz;
                                m11 = cx * sy * sz - sx * cz;
                                func_8010B634((func_8010B634_Struct *)&q, &x, &y, &z);
                                G.unk374 = m01 * x + m20 * y + m21 * z + px;
                                D_801BBF68 = m12 * x + m10 * y + m11 * z + py;
                                D_801BBF6C = -sy * x + m00 * y + m22 * z + pz;
                                func_8010B4D8((func_8010B4D8_Struct *)&q, &x, &y, &z);
                                outx = m01 * x + m20 * y + m21 * z + px;
                                outy = m12 * x + m10 * y + m11 * z + py;
                                outz = -sy * x + m00 * y + m22 * z + pz;
                                nx = m01 * q.n0 + m20 * q.n1 + m21 * q.n2;
                                ny = m12 * q.n0 + m10 * q.n1 + m11 * q.n2;
                                nz = -sy * q.n0 + m00 * q.n1 + m22 * q.n2;
                                G.unk38C = item;
                                type = q.type;
                            }
                        }
                    }
                }
            }
            item = item->next;
        } while (item != NULL);
    }
    if (hit != 0) {
        item = G.f50->head;
        if (item != NULL) {
            do {
                if (obj != NULL) {
                    if ((item->f74 != NULL) && (item->f2C & 0x800)) {
                        if (obj->unk30 != NULL) {
                            px = obj->unk30->unk4;
                            py = obj->unk30->unk8;
                            pz = obj->unk30->unkC;
                            rx = obj->unk30->unk10;
                            ry = obj->unk30->unk12;
                            rz = obj->unk30->unk14;
                        } else {
                            px = obj->unk2C->unk4;
                            py = obj->unk2C->unk8;
                            pz = obj->unk2C->unkC;
                            rx = obj->unk2C->unk10;
                            ry = obj->unk2C->unk12;
                            rz = obj->unk2C->unk14;
                        }
                        if ((rx == 0) && (ry == 0) && (rz == 0)) {
                            q.node = item->f74;
                            q.a[0] = arg0 - px;
                            q.a[1] = arg1 - py;
                            q.a[2] = arg2 - pz;
                            q.b[0] = G.unk374 - px;
                            q.b[1] = G.unk378 - py;
                            q.b[2] = G.unk37C - pz;
                        } else {

                            angle = -rx;
                            q.node = item->f74;
                            sx = func_8001EAD0(angle);
                            cx = func_8001EB64(angle);
                            angle = -ry;
                            sy = func_8001EAD0(angle);
                            cy = func_8001EB64(angle);
                            angle = -rz;
                            sz = func_8001EAD0(angle);
                            cz = func_8001EB64(angle);
                            m00 = cz * cy;
                            m22 = cy * cx;
                            m01 = -sz * cy;
                            m12 = -cy * sx;
                            m10 = sz * cx + cz * sy * sx;
                            m21 = cz * sx + sz * sy * cx;
                            m20 = sz * sx - cz * sy * cx;
                            m11 = cz * cx - sz * sy * sx;
                            tx = (-px * m00 - py * m01) - pz * sy;
                            ty = (-px * m10 - py * m11) - pz * m12;
                            tz = (-px * m20 - py * m21) - pz * m22;
                            q.a[0] = m00 * arg0 + m01 * arg1 + sy * arg2 + tx;
                            q.a[1] = m10 * arg0 + m11 * arg1 + m12 * arg2 + ty;
                            q.a[2] = m20 * arg0 + m21 * arg1 + m22 * arg2 + tz;
                            q.b[0] = m00 * G.unk374 + m01 * G.unk378 + sy * G.unk37C + tx;
                            q.b[1] = m10 * G.unk374 + m11 * G.unk378 + m12 * G.unk37C + ty;
                            q.b[2] = m20 * G.unk374 + m21 * G.unk378 + m22 * G.unk37C + tz;
                        }
                        if (func_8010ACF8((func_8010ACF8_StructArg *)&q) != 0) {
                            G.unk374 = outx;
                            G.unk378 = outy;
                            G.unk37C = outz;
                        }
                    }
                }
                item = item->next;
            } while (item != NULL);
        }
        G.unk368 = G.unk374 - arg3;
        G.unk36C = G.unk378 - arg4;
        G.unk370 = G.unk37C - arg5;
        G.unk35C = nx;
        G.unk360 = ny;
        G.unk364 = nz;
        G.unk35A = type & 0x3F;
        G.unk35B = type >> 6;
        G.unk380 = outx;
        G.unk384 = outy;
        G.unk388 = outz;
    }
    return hit;
}
