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
char abc = 'a';
while (abc <= 'z')
{
putchar(abc);
putchar('\n');
abc++;
}
return (0);
}
