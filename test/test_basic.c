#include <anmalloc/anmalloc.h>
#include <stdio.h>
#include <assert.h>

void test_units();
void test_breaking();

int main(int argc, const char * argv[]) {
  test_units();
  test_breaking();
  return 0;
}

void test_units() {
  printf("testing unit-sized allocation... ");
  
  void * buff1 = anmalloc_alloc(0x20);
  void * buff2 = anmalloc_alloc(0x20);
  assert(buff2 == buff1 + 0x20);
  anmalloc_free(buff2);
  void * buff3 = anmalloc_alloc(0x20);
  assert(buff2 == buff3);
  anmalloc_free(buff3);
  anmalloc_free(buff1);
  
  printf(" passed!\n");
}

void test_breaking() {
  printf("testing break sizes... ");
  
  assert(__anmalloc_brk_size() == 0);
  void * buff = anmalloc_alloc(0x80000);
  assert(__anmalloc_brk_size() == 0x100000);
  anmalloc_free(buff);
  assert(__anmalloc_brk_size() == 0);
  buff = anmalloc_alloc(0x80001);
  assert(__anmalloc_brk_size() == 0x400000);
  
  void * buff1 = anmalloc_alloc(0x80000);
  void * buff2 = anmalloc_alloc(0x80000);
  assert(__anmalloc_brk_size() == 0x400000);
  
  anmalloc_free(buff1);
  anmalloc_free(buff2);
  assert(__anmalloc_brk_size() == 0x400000);
  
  anmalloc_free(buff);
  assert(__anmalloc_brk_size() == 0);
  
  printf(" passed!\n");
}
