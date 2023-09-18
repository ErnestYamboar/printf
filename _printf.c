#include "main.h"

int _printf(const char *format, ...)
{
 va_list myfunc;
 char *my_str;
 int i, my_printedchar = 0;

 if (format == NULL)
  return(-1);

 va_start(myfunc, format);

 for (i = 0; format[i] != '\0'; i++)
 {
  if (format[i] != '%')
  {
   my_printedchar+=my_putchar(format[i]);
   my_printedchar++;
  }
  if(format[i]=='%')
  {
   i++;
   if (format[i] == '\0')
    return(-1);
  }
  if (format[i] == 'c')
  {
   my_putchar(va_arg(myfunc, int));
   my_printedchar++;
  }
  else if (format[i] == 's')
  {
   my_str = va_arg(myfunc, char *);
   if (my_str != NULL)
   {
                      while (*my_str != '\0')
                      {
                          my_printedchar+=my_putchar(*my_str);
                          my_str++;
                          my_printedchar++;
                        }
    }
   }

  else if (format[i] == '%')
  {
   my_putchar('%');
   my_printedchar++;
  }


 }
 va_end(myfunc);
 return (my_printedchar);
}
