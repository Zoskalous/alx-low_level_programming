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
int n;
char m;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (m = 'a'; m <= 'f'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
