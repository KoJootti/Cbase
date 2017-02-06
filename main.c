#include <stdio.h>
#include <stdlib.h>

#ifdef __STRUCTS__
#include "structures.h"
#endif //__STRUCTS__

#ifdef __LLIST__
#include "llist.h"

void llistExample();
#endif //__LLIST__

int main(){
  printf("Hello world!\n");

  // Linked list
  #ifdef __LLIST__
  llistExample();
  #endif //__LLIST__

  // Structures size
  #ifdef __STRUCTS__
  printf("Size of the structures containing same elements, but in different order: \n");
  printf("First: %d%c", sizeof(struct_1_t), '\n');
  printf("Second %d%c", sizeof(struct_2_t), '\n');
  #endif //__STRUCTS__

  return 0;
}

#ifdef __LLIST__
void llistExample(){
  Llist_t *head = malloc(sizeof(Llist_t));
  head->prev = NULL;
  head->next = NULL;
  head->msg = "LOL";
  printf("Message: %s%c",head->msg, '\n');
}
#endif //__LLIST__
