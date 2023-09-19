#include "main.h"

int _printf(const char *format, ...)
{
	va_list myfunc;
	int num;
	char *my_str;
	unsigned int i, my_printedchar = 0;

	if (format == NULL)
		return (-1);

	va_start(myfunc, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_putchar(format[i]);
		}
		else if (format[i + 1]  == 'c')
		{
			my_putchar(va_arg(myfunc, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			my_str = va_arg(myfunc, char *);
			my_printedchar += my_put(my_str);
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			num = va_arg(myfunc, int);
			my_printedchar += my_printNum(num);
			i++;
		}
		else if (format[i] == '%')
		{
			my_putchar('%');
			i++;
		}
		my_printedchar++;
	}
		va_end(myfunc);
		return (my_printedchar);
}
