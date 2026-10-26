#include "common.h"

extern void func_80007DE4();
extern void func_800082C4();
extern void func_80008754();
extern void func_80008B9C();
extern void func_80008F30(void);
extern void func_8000919C();
extern void func_8000A06C();
extern void func_8000A828();
extern void func_8000C768();
extern void func_8000D1CC(void);
extern void func_80011958(void);
extern void func_80013828();
struct func_800069A8_Struct {
    u8 pad[0x1C];
    s32 unk1C;
    u8 pad2[0xA];
    u16 unk2A;
};
void func_800069A8(struct func_800069A8_Struct *arg0) {
    arg0->unk1C = 0;
    switch (arg0->unk2A) {
    case 1: func_80007DE4(); break;
    case 2: func_800082C4(); break;
    case 3: func_80008754(); break;
    case 4: func_80008B9C(); break;
    case 5: func_80008F30(); break;
    case 6: func_8000C768(); break;
    case 12: func_8000C768(); break;
    case 7: func_8000D1CC(); break;
    case 13: func_80011958(); break;
    case 8: func_8000A828(); break;
    case 9: func_8000919C(); break;
    case 10: func_8000A06C(); break;
    case 11: func_80013828(); break;
    }
}
