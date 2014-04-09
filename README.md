# anmalloc

This will be an easy-to-use standard library allocation system. It will have support for `posix_memalign` as well, provided that the data base pointer is aligned reasonably.

# Dependencies

Here's a list:
 * `unistd.h` - the `brk()` and `sbrk()` system calls
 * `assert.h` - used extensively to ensure safe memory management
 * `pthread.h` - uses `pthread_mutex_lock` and `pthread_mutex_unlock`, as well as `PTHREAD_MUTEX_INITIALIZER`; because *anmalloc* uses basic pthreads, you cannot use *anmalloc* in your basic pthread implementation (although you *may* use it for specific cases of pthread mutexes like recursive locks or robust locks).
 * *analloc* - used for internal allocation

