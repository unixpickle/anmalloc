#include <anmalloc/anmalloc.h>
#include <pthread.h>
#include <assert.h>

static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

static void 

void anmalloc_free(void * buf) {
  pthread_mutex_lock(&mutex);
  phtread_mutex_unlock(&mutex);
}

void * anmalloc_alloc(size_t size) {
  pthread_mutex_lock(&mutex);
  phtread_mutex_unlock(&mutex);
}

void * anmalloc_aligned(size_t alignment, size_t size) {
  pthread_mutex_lock(&mutex);
  phtread_mutex_unlock(&mutex);
}

void * anmalloc_realloc(void * ptr, size_t size) {
  pthread_mutex_lock(&mutex);
  phtread_mutex_unlock(&mutex);
}

