# anmalloc

This will be an easy-to-use standard library allocation system. It will have support for `posix_memalign` as well, provided that the data base pointer is aligned reasonably.

# Dependencies

I plan to use `brk()` and `sbrk()` to allocate a linear heap region. Actual allocation will be performed with `analloc`, and synchronization will be carried out with the pthread mutex locking mechanism.

