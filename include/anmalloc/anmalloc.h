#include <stddef.h>
#include <stdint.h>
#include <anmalloc_lock.h>

// anmalloc_lock.h must define the following functions:
// - anmalloc_sbrk
// - anmalloc_brk
// - anmalloc_lock
// - anmalloc_unlock
// and these other defines
// - ANMALLOC_LOCK_INIT
// - anmalloc_lock_t

void anmalloc_free(void * buf);
void * anmalloc_alloc(size_t size);
void * anmalloc_aligned(size_t alignment, size_t size);
void * anmalloc_realloc(void * ptr, size_t size);

