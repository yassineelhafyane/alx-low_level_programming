#include "main.h"

 /**
 * print_alphabet_x10 - write the the lower-case alphabet on a line.
 *
 */
void print_alphabet_x10(void)

	void print_alphabet_x10(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
	}
