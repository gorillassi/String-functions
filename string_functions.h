#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

size_t my_strlen (const char *str);

char *my_strcpy (char *destination, const char *source); 

char *my_strncpy (char *destination, const char *source, size_t n);

char *my_strncat (char *destination, const char *append, size_t n); 

int   my_puts (const char *s); 

char *my_strchr (const char *str, int ch); 

int   my_strcmp (const char *str1, const char *str2); 

char *my_fgets (char *str, int n, FILE *stream);

char *my_strdup(const char *str);