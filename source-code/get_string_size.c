#include "../dynamic-array/header-files/get_string_size.h"

int getStringSize(char *string) {
  int size = DEFAULT_INITIALIZE_SIZE;
  
  for(int i = DEFAULT_INITIALIZE_SIZE; i < strlen(string); i++){
    size += INCREMENT_SIZE;
  }
  return size;
}