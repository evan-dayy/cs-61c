#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // TODO: allocate memory to store the string "hello"
  // Hint: how many bytes do we need to store this string?
  char *hello_str = malloc(sizeof(char) * 6);

  // TODO: store the characters one at a time
  // Hint: don't forget the null terminator
  // Note: we use single quotes for characters
  char *ptr = hello_str;
  *ptr++ = 'h';
  *ptr++ = 'e';
  *ptr++ = 'l';
  *ptr++ = 'l';
  *ptr++ = 'o';

  // TODO: store the null terminator
  *ptr = '\0';

  // Prints hello_str
  printf("prints hello: %s\n", hello_str);

  // TODO: print the length of hello_str
  printf("length of hello: %lu\n", strlen(hello_str));

  // TODO: allocate memory to store the string "world"
  char *world_str = malloc(sizeof(char) * 6);

  // TODO: fill in the type
  // Note: this automatically stores the string "world" in static memory
  //       but static memory is immutable, so you may need to copy it
  //       to the stack or the heap
  static char *static_world_str = "world";

  // TODO: use strcpy and static_world_str to store "world" into world_str
  // Hint: strcpy takes two arguments:
  //       first the destination, then the source
  strcpy(world_str, static_world_str);

  // Prints world_str
  printf("prints world: %s\n", world_str);

  // Prints the address of world_str
  printf("address of world_str: %p\n", world_str);

  // TODO: compute the address of the letter r using world_str
  char *ptr_to_r = world_str + 2;
  printf("address of 'r': %p\n", ptr_to_r);

  // TODO: allocate memory to store the string "hello world"
  char *hello_world_str = malloc(strlen(world_str) + strlen(hello_str) + 1);

  // TODO: use strcpy and hello_str to store
  //       the string "hello" into hello_world_str
  strcpy(hello_world_str, hello_str);

  // TODO: store the space character in "hello world" at the correct index
  // Note: a space is not the same as null terminator
  //       a null terminator is represented by '\0'
  *(hello_world_str + strlen(hello_str)) = ' ';

  // TODO: use strcpy, pointer arithmetic, and world_str to store
  //       the string "world" into hello_world_str
  strcpy(hello_world_str + strlen(hello_str) + 1, world_str);

  // Prints hello_world_str
  printf("prints hello world: %s\n", hello_world_str);

  return 0;
}
