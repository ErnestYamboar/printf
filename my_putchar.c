#include "main.h"

/**
 * my_putchar: is used to print output to the std output
 * @write: is the only function allowed to use to print to s * output.
 */

int my_putchar(char c)
 {
  return (write(1, &c, 1));
 }  
