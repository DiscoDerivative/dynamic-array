#include "../dynamic-array/header-files/main.h"
#include "../dynamic-array/header-files/get_string_size.h"
#include "../dynamic-array/header-files/reallocate_size.h"

int main(void)
{ 
  char *string = calloc(ARRAY_DEFAULT_SIZE, sizeof(char)); // char string[30] 

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