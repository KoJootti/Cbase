// only works with __LIST also defined
#if defined(__LLIST__) && defined(__STRUCTS__)

typedef struct struct_1
{
  struct Llist_t *first;
  int8_t i8Juttu;
  struct Llist *second;
  int16_t i16Juttu;
  char *msg;
} struct_1_t;

typedef struct struct_2
{
  struct Llist_t *first;
  struct Llist *second;
  int16_t i16Juttu;
  int8_t i8Juttu;
  char *msg;
} struct_2_t;

#endif // __LLIST__ && __STRUCTS__
