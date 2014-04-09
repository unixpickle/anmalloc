#include <anmalloc/anmalloc.h>
#include <stdio.h>
#include <assert.h>

void test_units();

int main(int argc, const char * argv[]) {
  test_units();
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
