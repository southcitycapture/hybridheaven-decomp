#include "common.h"
extern u16 D_8008EBC2;
extern s16 D_8008EBDE;
extern s16 D_8008EBF0;
typedef struct func_8001800C_Struct {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 pad5;
    s16 unk6;
    s16 unk8;
    u8 unkA;
    u8 padB;
    u16 unkC;
    u16 unkE;
    u8 pad10[0x16];
} func_8001800C_Struct;
extern func_8001800C_Struct D_8008EC18[];
extern u8 D_8008ED28[];
extern s32 D_8008EE78;
extern s32 D_8008EE7C;
extern u8 D_8008EE81;
extern s16 D_8008EE98;
extern s32 func_800058DC(s32, void *);
s32 func_8001800C(u32 arg0);
void func_800183D0(u32 arg0);
void func_80018518(u32 arg0);
s32 func_80018684(u32 arg0);
s32 func_800189BC(u32 arg0);
extern void func_80018C9C(u8);
void func_8001922C(s32 arg0, s32 arg1);
void func_800192F4(s32 arg0, s32 arg1);
void func_80019410(s32 arg0, s32 arg1);
void func_80019E0C(s32 arg0, s32 arg1);
void func_8001A01C(s32 arg0, s32 arg1);


typedef struct func_80017BB8_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 pad3;
    s16 unk4;
    u8 pad6[2];
    s32 unk8;
} func_80017BB8_Struct;

extern func_80017BB8_Struct *D_8008EE84;
extern u16 D_8008EBF2;
extern s16 D_801BBF3E;
extern void func_80019460(s32, s32);
extern void func_80019898(s32, s32);

void func_80017BB8(s32 arg0, s32 arg1)
{
    func_8001800C_Struct *entry;
    s32 active;
    s32 done;
    u32 op;
    u32 value;

    if (D_8008EE78 != 0) {
        if (*(u16 *)&D_8008EBF0 != 0) {
            *(u16 *)&D_8008EBF0 -= 1;
        } else {
            for (done = 0, active = 0; done == 0;) {
            op = *(u32 *)D_8008EE78;
            D_8008EE78 += 4;
            switch (op & 0xF) {
            case 0:
                if (active != 0) {
                    D_8008EE84->unk2 = D_8008EE81;
                    D_8008EE84->unk4 = D_8008EE98;
                }
                do {
                    value = *(u32 *)D_8008EE78;
                    D_8008EE78 += 4;
                    op = func_8001800C(value);
                    switch (op) {
                    case 0:
                        break;
                    case 1:
                        func_800058DC(arg0, func_80019410);
                        done = 1;
                        break;
                    case 2:
                        func_800058DC(arg0, func_80019460);
                        done = 1;
                        break;
                    case 3:
                        func_800058DC(arg0, func_800192F4);
                        done = 1;
                        break;
                    case 4:
                        func_800058DC(arg0, func_800192F4);
                        done = 1;
                        break;
                    case 5:
                        func_800058DC(arg0, func_80019898);
                        done = 1;
                        break;
                    case 6:
                        func_800058DC(arg0, func_80019E0C);
                        done = 1;
                        break;
                    case 7:
                        func_800058DC(arg0, func_8001922C);
                        done = 1;
                        break;
                    case 8:
                        break;
                    }
                } while (op == 0);
                break;
            case 1:
                if (active == 0) {
                    D_8008EE78 = *(s32 *)D_8008EE78;
                } else {
                    D_8008EE84->unk8 = *(s32 *)D_8008EE78;
                    D_8008EE78 += 4;
                    D_8008ED28[0] += 1;
                    D_8008EE84->unk1 += 1;
                    D_8008EE84++;
                    D_8008EE84->unk0 = D_8008EE84[-1].unk1 - 1;
                    D_8008EE84->unk1 = D_8008EE84[-1].unk1;
                }
                break;
            case 2:
                func_800183D0(op);
                break;
            case 3:
                func_80018518(op);
                break;
            case 4:
                if (func_80018684(op) != 0) {
                    D_8008EE78 += 8;
                }
                break;
            case 5:
                D_8008EE84 = (func_80017BB8_Struct *)D_8008ED28;
                D_8008EE84->unk0 = 0;
                D_8008EE84->unk1 = 0;
                active = 1;
                D_8008EC18[D_8008EBC2].unk0 = D_8008EBF2;
                D_8008EC18[D_8008EBC2].unk6 = D_8008EC18[D_8008EBC2].unk0;
                func_80018C9C(D_8008EE81);
                break;
            case 6:
                D_8008ED28[0] -= 1;
                D_8008EE84[-1].unk1 = 0;
                D_8008EC18[D_8008EBC2].unk0 = *(u16 *)&D_8008EBDE;
                active = 0;
                done = 1;
                D_8008EC18[D_8008EBC2].unk6 = D_8008EC18[D_8008EBC2].unk0;
                func_800058DC(arg0, func_8001A01C);
                break;
            case 7:
                value = func_800189BC(op);
                done = 1;
                if (value == 0) {
                    D_8008EE78 = *(s32 *)D_8008EE78;
                }
                if (func_800189BC(op) == 1) {
                    D_8008EE78 -= 8;
                }
                break;
            case 8:
                D_8008EE7C = D_8008EE78 + 4;
                D_8008EE78 = *(s32 *)D_8008EE78;
                break;
            default:
                if (D_8008EE7C == 0) {
                    D_801BBF3E = 0;
                    D_8008EE78 = 0;
                    done = 1;
                } else {
                    D_8008EE78 = D_8008EE7C;
                    D_8008EE7C = 0;
                }
                break;
            }
            }
        }
    }
}
