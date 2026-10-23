#define func_8037ED08 func_8037ED08_ctx_decl
#include "context.h"
#undef func_8037ED08

typedef struct func_8037ED08_StructTable {
    u8 data[4];
} func_8037ED08_StructTable;
typedef struct func_8037ED08_StructObj {
    u8 pad[0x96];
    s8 unk96;
    s8 unk97;
} func_8037ED08_StructObj;
typedef struct func_8037ED08_StructEnt {
    u8 unk0;
    u8 pad[5];
} func_8037ED08_StructEnt;

extern func_8037ED08_StructEnt D_80183CE0[];
extern func_8037ED08_StructTable D_80388CD8;
extern func_8037ED08_StructTable D_80388CDC;
extern u8 D_8038A960[];

u8 func_8037ED08(void *arg0) {
    func_8037ED08_StructTable sp34 = D_80388CD8;
    func_8037ED08_StructTable sp30 = D_80388CDC;
    u8 saved;
    u8 count;
    u8 i;

    count = 0;
    for (i = sp34.data[((func_8037ED08_StructObj *)arg0)->unk97];
         i < sp30.data[((func_8037ED08_StructObj *)arg0)->unk97]; i++) {
        if (D_80183CE0[i].unk0 != 0) {
            D_8038A960[count] = i;
            count++;
        }
    }
    D_8038A960[count] = 0xFF;
    ((func_8037ED08_StructObj *)arg0)->unk96 = 0;
    saved = count;
    func_8037EBB0(arg0);
    return saved;
}
