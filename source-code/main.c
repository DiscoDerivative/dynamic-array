#include "header-files\main.h"
#include "header-files\get_string_size.h"
#include "header-files\reallocate_size.h"

int main(void)
{
  char *string = calloc(ARRAY_DEFAULT_SIZE, sizeof(char));

  if(string == NULL)
  {
    printf("Memory not allocated.");
    return ERROR_VALUE;
  }
  else
  {
    printf("Enter a string: ");
    scanf("%s", string);
  }

  int size = collectArraySize(string);
  reallocateArray(string, size);
  return 0;
}