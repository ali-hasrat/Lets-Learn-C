//program in C language to find the size of a given file..
#include <stdlib.h>
#include <stdio.h>
long FileSize(const char *filename)
{
  long size;
  FILE *ptr = fopen("Hasrat4.txt", "rb");
  fseek(ptr, 0, SEEK_END);
  size = ftell(ptr);
  fclose(ptr);
  return size;
}
int main(void)
{
  printf("Size of the said File: %ld bytes.", FileSize("Hasrat4.txt"));
  return 0;
}

