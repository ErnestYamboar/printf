#include "main.h"

/**
 * my_put: is  a function used to 
 * @str_count: is used to track the number of characters pri * nted.
 * Char *str: is the argument passed in the function.
 */

int my_put(char *str)
 {

  int str_count = 0;
  
  if (str)
  {
   for (str_count = 0; str[str_count] != '\0'; str_count++)
   {
    my_putchar(str[str_count]);
   }
  }
  return str_count;
}
