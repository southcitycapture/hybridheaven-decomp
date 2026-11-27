#include "common.h"
extern s32 D_801DED70[];
s32 func_801C1CF0(s32 arg0, s32 arg1, s32 arg2);


typedef char *func_801C1998_VaList;
#define func_801C1998_VaStart(list, last) (list = (func_801C1998_VaList) (&last + 1))
#define func_801C1998_VaArg(list, mode) ((mode *) (list = (char *) ((((s32) list + 3) & ~3) + sizeof(mode))))[-1]

typedef struct {
    s32 first;
    s32 second;
    s32 value;
    s32 active;
} func_801C1998_Struct;

#define func_801C1998_Entries ((func_801C1998_Struct *) D_801DED70)

void func_801C1998(s32 arg0, ...)
{
  func_801C1998_VaList ap;
  s32 i;

  func_801C1998_VaStart(ap, arg0);
  for (i = 0; i < arg0; i++)
  {
    func_801C1CF0(func_801C1998_Entries[i].first, func_801C1998_Entries[i].second,
                  func_801C1998_Entries[i].value = func_801C1998_VaArg(ap, s32));
  }
}
