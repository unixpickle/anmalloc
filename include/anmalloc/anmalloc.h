#include <stddef.h>
#include <stdint.h>

void anmalloc_free(void * buf);
void * anmalloc_alloc(size_t size);
void * anmalloc_aligned(size_t alignment, size_t size);
void * anmalloc_realloc(void * ptr, size_t size);

