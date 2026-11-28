#include "common.h"


typedef struct func_80004310_Struct {
    u8 pad[0x1BD];
    u8 unk1BD;
} func_80004310_Struct;

extern func_80004310_Struct D_800892B0;
extern s32 D_800894F4[];

#define D_800892B0 D_800892B0__func_80004310
extern u8 D_800892B0[];


typedef struct func_80004310_StructState {
    u8 pad[0x1BD];
    u8 count;
    u8 pad2[0x86];
    s32 values[256];
} func_80004310_StructState;

void func_80004310(s32 arg0) {
    s8 *counter = (s8 *) &D_800892B0[0x1BD];
    D_800894F4[*(u8 *) counter] = arg0;
    *counter = (u8) *counter + 1;
}
#undef D_800892B0


typedef struct func_8000433C_Struct {
    u32 unk0;
    s32 unk4;
} func_8000433C_Struct;

s32 func_80004484(s32, s32);
s32 func_800045E8(s32, s32);
#define func_80004ADC func_80004ADC__decl37
void func_80004ADC(u16, s32);
s32 func_80016F90();
s32 func_80017014(s32);

extern s8 D_8008946D;

void func_8000433C(void) {
    s32 *var_s6;
    s32 var_s7;
    func_8000433C_Struct *temp_v0;
    func_8000433C_Struct *var_s1;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_a1;
    s32 var_v0;

    var_s6 = D_800894F4;
    for (var_s7 = 0; var_s7 < 8; var_s7 = (var_s7 + 1) & 0xFF) {
        temp_v0 = (func_8000433C_Struct *) *var_s6;
        if (temp_v0 != NULL) {
            var_s1 = temp_v0;
loop_2:
            if (func_80017014(func_80016F90()) == 0) {
                temp_s0 = var_s1->unk0 & 0x0FFFFFFF;
                temp_s2 = temp_s0 & 0xFFFF;
                if (func_80017064((u16) temp_s2) != -1) {
                    if (!(var_s1->unk0 & 0x40000000)) {
                        var_s1++;
                        goto loop_2;
                    }
                } else {
                    temp_a1 = var_s1->unk4;
                    if (temp_a1 == 0) {
                        goto zero_case;
                    }
                    if (temp_a1 != -1) {
                        goto other_case;
                    }
                    var_v0 = func_80004484(temp_s0, temp_a1);
                    goto join;
zero_case:
                    var_v0 = func_800045E8(temp_s0, temp_a1);
                    goto join;
other_case:
                    var_v0 = func_80004664(temp_s0, temp_a1);
join:
                    func_80004ADC(temp_s2, var_v0);
                    if (!(var_s1->unk0 & 0x40000000)) {
                        var_s1++;
                        goto loop_2;
                    }
                }
            }
            *var_s6 = 0;
        }
        var_s6++;
    }
    D_8008946D = 0;
}
#undef func_80004ADC

extern s32 D_801BBC10;

s32 func_80004484(s32 arg0, s32 arg1) {
    s32 sp18[2];

    arg1 = (D_801BBC10 + 7) & ~7;
    sp18[0] = arg1;
    func_8000469C(arg0, arg1);
    return sp18[0];
}


extern s32 D_80089470;

#define func_8000469C func_8000469C__func_800044BC
extern s32 func_8000469C(s32, s32);



s32 func_800044BC(s32 arg0) {
    s32 new_end;
    s32 temp_a1;

    temp_a1 = (D_80089470 + 7) & ~7;
    new_end = func_8000469C(arg0, temp_a1);
    D_80089470 = new_end;
    return temp_a1;
}
#undef func_8000469C


s32 func_80004838(s32, s32);

s32 func_800044FC(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = *(s32 *)((u8 *)&D_800892B0 + 0x42A8);
    temp_v0 = (D_801BBC10 + 7) & ~7;
    if (var_a1 == 0) {
        *(s32 *)((u8 *)&D_800892B0 + 0x42A8) = temp_v0;
        var_a1 = temp_v0;
    }
    if (func_80004838(arg0, var_a1) == 0) {
        return 0;
    }
    return *(s32 *)((u8 *)&D_800892B0 + 0x42A8);
}

#define D_80037C5C D_80037C5C__func_80004560
#define D_800892B0 D_800892B0__func_80004560
#define D_8008D558 D_8008D558__func_80004560
#define func_80004310_Struct func_80004310_Struct__func_80004560
#define func_8001752C func_8001752C__func_80004560
#define func_8001F290 func_8001F290__func_80004560
extern s32 D_80037C5C[];
typedef struct func_80004310_Struct {
    u8 pad[0x1BD];
    u8 unk1BD;
} func_80004310_Struct;
extern func_80004310_Struct D_800892B0;
extern s32 func_8001F290();


typedef struct func_80004560_StructEntry {
    s32 start;
    s32 end;
} func_80004560_StructEntry;

typedef struct func_80004560_StructState {
    u8 pad[0x42A8];
    s32 data;
} func_80004560_StructState;

extern s32 D_8008D558;
extern void func_8001752C(u16, s32);

s32 func_80004560(s32 arg0) {
    func_80004560_StructEntry *entry;

    if (D_8008D558 == 0) {
        entry = (func_80004560_StructEntry *) ((s32) &D_80037C5C[arg0 * 2] - 8);
        ((func_80004560_StructState *) &D_800892B0)->data =
            func_8001F290(entry->end - entry->start);
        func_8001752C(arg0, ((func_80004560_StructState *) &D_800892B0)->data);
    }
    if (func_80004838(arg0, ((func_80004560_StructState *) &D_800892B0)->data) == 0) {
        return 0;
    }
    return ((func_80004560_StructState *) &D_800892B0)->data;
}
#undef D_80037C5C
#undef D_800892B0
#undef D_8008D558
#undef func_80004310_Struct
#undef func_8001752C
#undef func_8001F290

extern s32 D_80037C5C[];
extern s32 func_8001F290();
extern s32 func_8000469C(s32, s32);
extern void func_80016EAC();

s32 func_800045E8(s32 arg0, s32 arg1) {
    s32 r;
    s32 *p;
    if (arg0 == 0 || (u32)arg0 >= 0x271) {
        return 0;
    }
    p = (s32 *)((s32)&D_80037C5C[arg0 * 2] - 8);
    r = func_8001F290(p[1] - p[0], arg1);
    func_8000469C(arg0, r);
    func_80016EAC(arg0 & 0xFFFF, r, arg0);
    return r;
}



s32 func_80004664(s32 arg0, s32 arg1) {
    func_80016EAC((u16) arg0);
    func_8000469C(arg0, arg1);
    return arg1;
}

#define D_80038FE0 D_80038FE0__func_8000469C
#define D_8008DC18 D_8008DC18__func_8000469C
#define func_80001FE8 func_80001FE8__func_8000469C
#define func_80003824 func_80003824__func_8000469C
#define func_80028A90 func_80028A90__func_8000469C
#define func_80030640 func_80030640__func_8000469C
#define func_800306C0 func_800306C0__func_8000469C
extern s8 D_8008DC18;
extern void func_80001FE8(s32, s32, s32);
extern void func_80028A90(u8 *, s32);
extern void func_80030640(u8 *, s32);
extern void func_800306C0(u8 *, s32);


typedef struct func_8000469C_StructRomTable {
    u8 header[0x10];
    s32 offsets[625];
} func_8000469C_StructRomTable;
extern func_8000469C_StructRomTable D_80038FE0;
extern u8 *func_80003824(u32 rom, u8 *dst, s32 size);

s32 func_8000469C(s32 file, s32 arg1) {
    u32 rom;
    u32 size;
    u8 i = 16;
    u8 *end;
    u8 *p;
    u8 *ram = (u8 *)arg1;

    p = ram;
    if ((u32)file < 1 || (u32)file > 624) {
        return 0;
    }
    rom = D_80038FE0.offsets[(u32)file - 1] & 0x7FFFFFFF;
    size = (D_80038FE0.offsets[(u32)file - 1 + 1] & 0x7FFFFFFF) - rom;
    end = ram + (D_80037C5C[((u32)file - 1) * 2 + 1] - D_80037C5C[((u32)file - 1) * 2]);
    D_8008DC18 = 1;
    if (size != 0) {
        if (D_80038FE0.offsets[(u32)file - 1] & 0x80000000) {
            p = func_80003824(rom, ram, (s32)(D_80038FE0.offsets[(u32)file - 1 + 1] & 0x7FFFFFFF) - (s32)rom);
            func_80028A90(ram, (u32)p - (u32)ram);
            func_80030640(ram, p - ram);
            func_800306C0(ram, p - ram);
        } else {
            func_80001FE8(D_80038FE0.offsets[(u32)file - 1], (s32)ram, (size + 1) & ~1);
            p += (size + 1) & ~1;
        }
    }
    while (i--) {
    }
    D_8008DC18 *= 0;
    while (p < end) {
        *p++ = 0;
    }
    return (s32)end;
}
#undef D_80038FE0
#undef D_8008DC18
#undef func_80001FE8
#undef func_80003824
#undef func_80028A90
#undef func_80030640
#undef func_800306C0

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004838.s")

#define D_80037744 D_80037744__func_80004ADC
#define D_80037A30 D_80037A30__func_80004ADC
#define D_80037A32 D_80037A32__func_80004ADC
#define D_800429B8 D_800429B8__func_80004ADC
#define func_80004D20 func_80004D20__func_80004ADC
#define DPRINT(args) ((void)(args))
extern u16 D_80037A30[];
u8 func_80004D20(s32 arg0, u8 *arg1);


extern u16 D_80037A32[];

typedef struct func_80004ADC_Node {
    s32 unk0;
    u8 *unk4;
} func_80004ADC_Node;

extern func_80004ADC_Node *D_800429B8[];
extern u8 D_80037744[];

/* stripped debug print: the flag test stays in the source, the print itself compiles to nothing */
#define DPRINT(args) ((void)(args))

s32 func_80004ADC(u16 arg0, s32 arg1) {
    s32 i;
    func_80004ADC_Node *p;
    s32 v;
    s32 off;

    i = 0;
    p = D_800429B8[arg0];
    if (D_80037744[0] != 0) {
        DPRINT((arg0, arg1));
    }
    while (arg0 >= D_80037A30[i]) {
        i += 2;
        if (D_80037A30[i] == 0) {
            return 0;
        }
    }
    v = p->unk0;
    off = arg1 - (D_80037A32[i] << 24);
    while (v != 0) {
        func_80004D20(v, p->unk4 + off);
        v = p[1].unk0;
        p++;
    }
    return 1;
}
#undef DPRINT
#undef D_80037744
#undef D_80037A30
#undef D_80037A32
#undef D_800429B8
#undef func_80004D20

#define D_80037744 D_80037744__func_80004BB0
#define D_80037A30 D_80037A30__func_80004BB0
#define D_800429B8 D_800429B8__func_80004BB0
#define D_800892B0 D_800892B0__func_80004BB0
#define func_80004310_Struct func_80004310_Struct__func_80004BB0
#define func_80004D20 func_80004D20__func_80004BB0
#define func_80004EE8 func_80004EE8__func_80004BB0
#define ZQ(p,l) p##_##l
#define ZP(p,l) ZQ(p,l)
#define zA_36 func_80004EE8_ctx36
#define zA_51 func_80004EE8
extern u16 D_80037A30[];
typedef struct func_80004310_Struct {
    u8 pad[0x1BD];
    u8 unk1BD;
} func_80004310_Struct;
extern func_80004310_Struct D_800892B0;
u8 func_80004D20(s32 arg0, u8 *arg1);
extern u8 *func_80004EE8(s32, u8 *);


typedef struct func_80004BB0_StructEntry {
    s32 command;
    s32 address;
} func_80004BB0_StructEntry;

typedef struct func_80004BB0_StructState {
    u8 pad[0x42BC];
    s32 used;
    u8 pad2[0x8];
    u8 active;
    u8 pad3[0x3];
    u32 limit;
    s32 total;
    u8 pad4[0x20];
    func_80004BB0_StructEntry *current;
} func_80004BB0_StructState;

extern func_80004BB0_StructEntry *D_800429B8[];
extern u8 D_80037744[];

#define ST ((func_80004BB0_StructState *)&D_800892B0)
/* stripped debug print: the flag test stays in the source, the print itself compiles to nothing */
#define DPRINT(args) ((void)(args))

s32 func_80004BB0(u16 arg0, s32 arg1) {
    s32 index;
    s32 offset;
    s32 base;
    s32 address;
    s32 command;
    u8 active;
    func_80004BB0_StructEntry *entry;

    index = 0;
    active = ST->active;
    if (active == 0) {
        ST->current = D_800429B8[arg0];
    }
    if (D_80037744[0] != 0) {
        DPRINT((arg0, arg1));
    }
    while (arg0 >= D_80037A30[index]) {
        index += 2;
        if (D_80037A30[index] == 0) {
            return 0;
        }
    }
    offset = arg1 - (D_80037A30[index + 1] << 24);
    if (active == 0) {
        ST->active = 1;
    }
    entry = ST->current;
    command = entry->command;
    base = entry->address + offset;
    while (command != 0) {
        if (D_80037744[0] != 0) {
            DPRINT((command, entry->address + offset));
        }
        if (ST->limit < entry->address + offset - base + ST->used) {
            if (D_80037744[0] != 0) {
                DPRINT((ST->limit, ST->used));
            }
            ST->used = 0;
            return 0;
        }
        func_80004D20(command, (u8 *)(entry->address + offset));
        ST->current++;
        entry = ST->current;
        command = entry->command;
    }
    address = entry->address;
    ST->active = 0;
    ST->total = ST->total + address + offset - base + ST->used;
    return 1;
}
#undef ZQ
#undef ZP
#undef zA_36
#undef zA_51
#undef ST
#undef DPRINT
#undef D_80037744
#undef D_80037A30
#undef D_800429B8
#undef D_800892B0
#undef func_80004310_Struct
#undef func_80004D20
#undef func_80004EE8

typedef struct func_80004D20_Struct { u8 pad[0xC]; s32 unkC; u8 pad2[0x1C]; } func_80004D20_Struct;
extern s32 func_80001060();
#define func_80004EE8 func_80004EE8__decl166
extern u8 *func_80004EE8(s32, u8 *);
extern u32 func_80004F98(s32, s32);
extern void func_80015420(u8 *, func_80004D20_Struct *);
extern void func_80015488(u8 *, u8 *, func_80004D20_Struct *);
extern void func_8001F540(u8 *);
extern void func_80028A90(u8 *, s32);
extern void func_80030640(u8 *, s32);
extern void func_800306C0(u8 *, s32);
extern s16 D_80089350;
extern s16 D_80089354;
extern u8 D_8038F800[];
extern u8 D_80400000[];

#undef func_80004EE8
#define func_80004D20_Struct func_80004D20_Struct__func_80004D20
#define func_80004EE8 func_80004EE8__func_80004D20
#define func_80004F98 func_80004F98__func_80004D20
#define func_80015420 func_80015420__func_80004D20
#define func_80015488 func_80015488__func_80004D20
s32 func_80004EE8(u32 arg0, s32 arg1);
extern s32 func_80004F98(u32, s32 *);


typedef struct func_80004D20_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x1C];
} func_80004D20_Struct;
extern void func_80015420(u8 *, func_80004D20_Struct *);
extern void func_80015488(u8 *, u8 *, func_80004D20_Struct *);

u8 func_80004D20(s32 arg0, u8 *arg1) {
    u8 *s0;
    u8 *e;
    u8 sp67;
    u8 *a2;
    func_80004D20_Struct sp34;
    s16 sp32;
    s32 i;

    a2 = arg1;
    if (func_80004F98(arg0, 0) < 0x2001U) {
        s0 = (u8 *)func_8001F290(0x2000);
        sp67 = 0;
    } else {
        if (func_80001060() != 0) {
            s0 = D_80400000 + (D_80089350 << 20);
        } else {
            s0 = D_8038F800 + D_80089350 * 0x25800;
        }
        sp67 = 1;
        sp32 = D_80089354;
        D_80089354 = 1;
    }
    e = (u8 *)func_80004EE8(arg0, (s32)s0);
    if (s0[0] == 0x50 && s0[1] == 0x49 && s0[2] == 0x43) {
        func_80015420(s0, &sp34);
        func_80015488(s0, arg1, &sp34);
        a2 = arg1 + sp34.unkC;
    } else {
        i = 0;
        if ((u32)(e - s0)) {
            do {
                *a2 = s0[i];
                i++;
                a2++;
            } while ((u32)(e - s0) > (u32)i);
        }
    }
    i = a2 - arg1;
    func_80028A90(arg1, i);
    func_80030640(arg1, i);
    func_800306C0(arg1, i);
    if (sp67 == 0) {
        func_8001F540(s0);
    } else {
        D_80089354 = sp32;
    }
    return sp67;
}
#undef func_80004D20_Struct
#undef func_80004EE8
#undef func_80004F98
#undef func_80015420
#undef func_80015488
#define func_80004EE8 func_80004EE8__decl166
#undef func_80004EE8


extern void func_80001FE8(s32, s32, s32);
extern s8 D_8008DC18;

#define func_80004F98 func_80004F98__func_80004EE8
#define DPRINT(args) ((void)(args))
#define DPRINT(args) ((void)(args))
extern s32 func_80004F98(u32, s32 *);

u8 *func_80004EE8(s32 arg0, u8 *arg1)
{
  s32 sp2C;
  u8 i;
  s32 size;
  s32 end;
  if ((u32)arg0 >= 0x8B8AU)
  {
    return arg1;
  }
  if ((u32)arg0 >= 0x8000U)
  {
    size = func_80004F98(arg0, (s32)&sp2C);
    end = (s32)arg1 + size;
    i = 0x10;
    if (size != 0)
    {
      if (D_8008DC18 != 0) DPRINT(D_8008DC18);
      D_8008DC18 = 1;
      func_80001FE8(sp2C, (s32)arg1, size);
      while (i--)
      {
      }

      D_8008DC18 = 0;
    }
    return (u8 *)end;
  }
  return (u8 *)func_8000469C(arg0, (s32)arg1);
}
#undef DPRINT
#undef func_80004F98

#define D_800399B8 D_800399B8__func_80004F98
#define D_80039A78 D_80039A78__func_80004F98
#define func_8000511C func_8000511C__func_80004F98
#define func_80005144 func_80005144__func_80004F98
#define LQ(p,l) p##_##l
#define LP(p,l) LQ(p,l)
#define func_80004EE8 LP(fA, __LINE__)
extern s32 func_8000511C(u16 arg0);
extern s32 func_80005144(u16 arg0);
#undef func_80004EE8

extern u16 D_800399B8[];
extern s32 D_80039A78[];

/* GGA: fileRomSize */
u32 func_80004F98(s32 arg0, s32 arg1) {
    s32 sp34;
    s32 address;
    s32 end;
    s32 i;

    if ((u32)arg0 >= 0x8B8A) {
        if (arg1 != 0) {
            *(s32 *)arg1 = 0;
        }
        return 0;
    }
    if ((u32)arg0 >= 0x8000) {
        for (i = 0; D_800399B8[i] != 0 && (u32)arg0 >= D_800399B8[i]; i += 2) {
        }
        i -= 2;
#define entry (&D_800399B8[i])
        sp34 = func_8000511C(entry[1]);
        end = func_80005144(entry[1]);
#define data ((s32 *)((u32)arg0 * 4 + 0xFFFE0000 + (u32)D_80039A78))
        address = (data[0] & 0xFFFFFF) + sp34;
        if (data[1] != 0 && (entry[2] == 0 || (u32)(arg0 + 1) < entry[2])) {
            end = data[1] - data[0];
        } else {
            end = end - address;
        }
        if (arg1 != 0) {
            *(s32 *)arg1 = address;
        }
        return end;
    }
    if (arg1 != 0) {
        *(s32 *)arg1 = func_8000511C(arg0);
    }
    {
        u16 id;

        id = arg0;
        return func_80005144(id) - func_8000511C(id);
    }
}
#undef LQ
#undef LP
#undef entry
#undef data
#undef D_800399B8
#undef D_80039A78
#undef func_8000511C
#undef func_80005144


extern u32 D_80038FEC[];

s32 func_8000511C(u16 arg0) {
    return D_80038FEC[arg0] & 0x7FFFFFFF;
}


extern s32 D_80038FF0[];

/* GGA: fileRomEnd */
s32 func_80005144(u16 arg0) {
    return D_80038FF0[arg0] & 0x7FFFFFFF & 0x7FFFFFFF;
}



/* GGA: fileRamSize */
s32 func_80005170(s32 arg0)
{
  unsigned int new_var;
  int new_var2;
  s32 *temp_v1;
  new_var = arg0;
  if (new_var == 0)
  {
    return 0;
  }
  new_var2 = 2 * arg0;
  temp_v1 = (s32 *) (((new_var2 * 4) - 8) + ((s32) D_80037C5C));
  return temp_v1[1] - temp_v1[0];
}


extern u16 D_80037A30[];

/* GGA: fileGroup */
u8 func_800051A4(u32 arg0) {
    s32 i;

    i = 0;
    if (arg0 == 0) {
        return i;
    }
    if (D_80037A30[0] != 0) {
        do {
            if (arg0 < D_80037A30[i]) {
                return ((u8 *)&D_80037A30[i])[3];
            }
            i += 2;
        } while (D_80037A30[i] != 0);
    }
    return 0xFF;
}


extern s32 func_8001703C(s32);
extern s32 func_80017064(s32);

void func_80005204(s32 arg0) {
    func_8001703C(func_80017064(arg0 & 0xFFFF));
}



s32 func_8000522C(s32 arg0, s32 arg1) {
    return func_8001703C(func_80017064(arg0 & 0xFFFF)) + (arg1 & 0xFFFFFF);
}

