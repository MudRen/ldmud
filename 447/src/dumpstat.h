#ifndef DUMPSTAT_H__
#define DUMPSTAT_H__ 1

#include "driver.h"
#include "typedefs.h"

extern mp_int data_size (object_t *ob, mp_int * pTotal);
extern mp_int program_string_size (program_t *prog, mp_int * pOverhead, mp_int * pData);
extern Bool dumpstat(char *name);
extern Bool dumpstat_dest(char *name);

#endif /* DUMPSTAT_H__ */
