#include "common.h"
extern u8 D_80090E50[];
extern u8 D_80090E56[];
void func_8001D69C(s32 arg0, u8 arg1, s8 *arg2);
void func_8001DBC8(s32 arg0, u8 arg1, s8 *arg2);
#define va_arg(ap, type) (*(type *)((ap = (u8 *)(((u32)ap + 3) & ~3) + 4) - 4))


typedef struct func_8001DFFC_StructTable {
    u16 chars[96];
} func_8001DFFC_StructTable;

typedef struct func_8001DFFC_StructRecord {
    u8 flag;
    u8 pad1;
    s16 x;
    s16 y;
    u16 chars[40];
} func_8001DFFC_StructRecord;

extern func_8001DFFC_StructTable D_8004481C;

#define RECORDS ((func_8001DFFC_StructRecord *)D_80090E50)

void func_8001DFFC(u8 arg0, s16 arg1, s16 arg2, u8 *arg3, ...)
{
    u8 low;
    const u8 *src;
    u8 buf[16];
    u8 *ap;
    u8 c;
    u8 index;
    u8 out;
    func_8001DFFC_StructTable table;
    s32 width;

    table = D_8004481C;
    if (*arg3 == 0) {
        RECORDS[arg0].flag = 0;
        RECORDS[arg0].chars[0] = 0xFFFF;
        return;
    }
    RECORDS[arg0].flag = 1;
    RECORDS[arg0].x = arg1;
    RECORDS[arg0].y = arg2;
    c = *arg3;
    ap = (u8 *)(&arg3 + 1);
    index = 0;
    out = 0;
    while (c != 0) {
        if (c != '%') {
            if (c >= 0x20 && c < 0x80) {
                RECORDS[arg0].chars[out++] = table.chars[c - 0x20];
            } else {
                index++;
                low = arg3[index];
                RECORDS[arg0].chars[out++] = (c << 8) + low;
            }
        } else {
            index++;
            c = arg3[index];
            width = 0;
            if (c == 's') {
                src = va_arg(ap, u8 *);
                c = *src++;
                while (c != 0) {
                    if (c >= 0x20 && c < 0x80) {
                        RECORDS[arg0].chars[out++] = table.chars[c - 0x20];
                    } else {
                        low = *src;
                        RECORDS[arg0].chars[out++] = (c << 8) + low;
                        src++;
                    }
                    c = *src++;
                }
            }
            if (c == '0') {
                index++;
                c = arg3[index];
                if (c == '0') width = 0;
                if (c == '1') width = 1;
                if (c == '2') width = 2;
                if (c == '3') width = 3;
                if (c == '4') width = 4;
                if (c == '5') width = 5;
                if (c == '6') width = 6;
                if (c == '7') width = 7;
                if (c == '8') width = 8;
                if (c == '9') width = 9;
                index++;
                c = arg3[index];
            }
            if (c == 'x') {
                func_8001DBC8(va_arg(ap, s32), width, (s8 *)buf);
                c = buf[0];
                src = buf;
                if (c != 0 && (src++, 1)) {
                    do {
                        RECORDS[(u16)arg0].chars[out] = table.chars[c - 0x20];
                        out++;
                        c = *src++;
                    } while (c != 0);
                }
            }
            if (c == 'd') {
                func_8001D69C(va_arg(ap, s32), width, (s8 *)buf);
                c = buf[0];
                src = buf;
                if (c != 0 && (src++, 1)) {
                    do {
                        RECORDS[(u16)arg0].chars[out] = table.chars[c - 0x20];
                        out++;
                        c = *src++;
                    } while (c != 0);
                }
            }
        }
        index++;
        c = arg3[index];
    }
    ((u16 *)(D_80090E56 + arg0 * 0x56))[out] = 0xFFFF;
}
