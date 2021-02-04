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
char ABC = 'A';
while (ABC <= 'Z', abc <= 'z')
{
putchar(abc);
putchar(ABC);
putchar('\n');
abc++;
ABC++;
}
return (0);
}
