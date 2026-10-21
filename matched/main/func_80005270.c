#include "context.h"
extern s32 D_8008D5D0;
struct func_80005A04_Struct {
    struct func_80005A04_Struct *unk0;
    struct func_80005A04_Struct *unk4;
    struct func_80005A04_Struct *unk8;
    struct func_80005A04_Struct *unkC;
    u8 pad10[4];
    u32 unk14;
};
extern struct func_80005A04_Struct *D_8008D5D4;
extern struct func_80005CDC_Struct D_800892B0;
struct func_80005CDC_Struct {
    u8 pad0[0xB6];
    u16 unkB6;
    u8 padB8[0x4];
    s32 unkBC;
    u8 padC0[0x4];
    u8 *unkC4;
};
extern void *D_8008DA88;
struct func_80006214_Struct {
    u8 pad0[0x10];
    struct func_80006214_Struct *unk10;
};
s32 func_80006214(struct func_80006214_Struct *arg0);

extern s32 func_8001F718();
extern s32 func_8001F76C(void *);
extern u32 D_8008D5D8[];

typedef struct func_80005270_Struct {
    struct func_80005270_Struct *unk0;
    u8 pad4[4];
    struct func_80005270_Struct *unk8;
    u8 pad[0xC];
    u32 unk18;
    u32 unk1C;
    u32 unk20;
} func_80005270_Struct;

#define G8 ((u8 *)&D_800892B0)

void func_80005270(void) {
    func_80005270_Struct *s0;
    func_80005270_Struct *s3;
    func_80005270_Struct *v1;
    s32 i;
    u32 f;

    s0 = *(func_80005270_Struct **)(G8 + 0xC8);
    i = 0;
    G8[0x1BC] = 0;
    D_8008D5D4 = (void *)s0;
    if (s0 != NULL && !(G8[0x1BC] & 0xFF)) {
        do {
            D_8008D5D0 = (s32)s0->unk0;
            func_80006214((void *)s0);
            s3 = (func_80005270_Struct *)D_8008D5D4;
            if (func_8001F718() == 0 || func_8001F76C(D_8008D5D4) == 0) {
                s0 = (func_80005270_Struct *)D_8008D5D4;
                f = s0->unk18;
                if (f != 0 && !(f & 0x800000)) {
                    ((void (*)(void *, void *))f)(s0, &D_8008DA88);
                    s0 = (func_80005270_Struct *)D_8008D5D4;
                }
                v1 = s0;
                if (s3 == v1) {
                    f = s0->unk1C;
                    if (f != 0 && !(f & 0x800000)) {
                        ((void (*)(void *, void *))f)(s0, &D_8008DA88);
                        v1 = (func_80005270_Struct *)D_8008D5D4;
                        s0 = (func_80005270_Struct *)D_8008D5D4;
                    }
                }
                if (s3 == v1) {
                    f = s0->unk20;
                    if (f != 0 && !(f & 0x800000)) {
                        ((void (*)(void *, void *))f)(s0, &D_8008DA88);
                    }
                    s0 = (func_80005270_Struct *)D_8008D5D4;
                }
            }
            s0 = (func_80005270_Struct *)D_8008D5D4;
            if (s0 != NULL && s0->unk8 != NULL) {
                if (D_8008D5D0 != 0) {
                    D_8008D5D8[i] = D_8008D5D0;
                    i++;
                }
                D_8008D5D4 = (void *)s0->unk8;
            } else if (D_8008D5D0 == 0 && i != 0) {
                D_8008D5D4 = (void *)D_8008D5D8[--i];
            } else {
                D_8008D5D4 = (void *)D_8008D5D0;
            }
            s0 = (func_80005270_Struct *)D_8008D5D4;
        } while (s0 != NULL && G8[0x1BC] == 0);
    }
}
