#include "../dynamic-array/header-files/reallocate_size.h"

char* reallocateSize(char *string, int size)
{
  char *tmp = realloc(string, size * sizeof(char));
  if(tmp == NULL)
  {
    printf("Memory not allocated.");
    free(string);
  }
  string = tmp;
  return string;
  free(string);
}