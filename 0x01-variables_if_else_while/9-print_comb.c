#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 48;
while (n < 58)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
