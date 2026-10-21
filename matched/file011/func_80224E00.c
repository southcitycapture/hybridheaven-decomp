#include "context.h"

typedef struct func_80224E00_Struct {
    u8 pad0[0xB0];
    f32 unkB0;
    u8 padB4[4];
    f32 unkB8;
    f32 unkBC;
    u8 padC0[4];
    f32 unkC4;
    f32 unkC8;
    u8 padCC[4];
    f32 unkD0;
    f32 unkD4;
    u8 padD8[4];
    f32 unkDC;
} func_80224E00_Struct;

typedef struct func_80224E00_Arg {
    u8 pad0[0x5C];
    func_80224E00_Struct *unk5C;
} func_80224E00_Arg;

struct func_80224F5C_Arg0;

extern void func_8001EAD0(s16, s32);
extern void func_8001EB64(s16);

void func_80224E00(struct func_80224F5C_Arg0 *arg0, s16 arg1) {
    func_80224E00_Struct *p;
    f32 b0, bc, c8, d4, b8, c4, d0, dc;
    s16 a;

    p = ((func_80224E00_Arg *)arg0)->unk5C;
    func_8001EAD0(arg1, arg1);
    func_8001EB64(arg1);
    b0 = p->unkB0;
    bc = p->unkBC;
    b8 = p->unkB8;
    c4 = p->unkC4;
    c8 = p->unkC8;
    d4 = p->unkD4;
    d0 = p->unkD0;
    dc = p->unkDC;
    arg1 &= 0x1FFF;
    if (arg1 != 0) {
        if (arg1 == 0x1000) {
            p->unkC8 = -d4;
            p->unkD4 = -c8;
            p->unkD0 = -dc;
            p->unkDC = -d0;
        } else if (arg1 == 0x800) {
            p->unkB0 = b8;
            p->unkBC = c4;
            p->unkB8 = b0;
            p->unkC4 = bc;
            p->unkC8 = d0;
            p->unkD4 = dc;
            p->unkD0 = c8;
            p->unkDC = d4;
            func_802260C8((struct func_802260C8_Struct *)arg0);
        } else if (arg1 == 0x1800) {
            p->unkB0 = -c4;
            p->unkBC = -b8;
            p->unkB8 = -bc;
            p->unkC4 = -b0;
            p->unkC8 = -dc;
            p->unkD4 = -d0;
            p->unkD0 = -d4;
            p->unkDC = -c8;
            func_802260C8((struct func_802260C8_Struct *)arg0);
        }
    }
}
