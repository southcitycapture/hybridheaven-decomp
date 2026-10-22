#include "context.h"

typedef struct func_80027814_Struct {
    struct func_80027814_Struct *next;
} func_80027814_Struct;

typedef struct func_80027814_Empty {
    u8 a[0];
} func_80027814_Empty;

void func_80027814(func_80027814_Struct *arg0) {
    func_80027814_Struct *p = arg0->next;
    *(func_80027814_Empty *)arg0 = *(func_80027814_Empty *)p;
    *arg0 = *p;
}
