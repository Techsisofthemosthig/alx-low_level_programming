#include <stdio.h>
/**
 * main - this sdescribes the main function of the code
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("sizeofchar: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("sizeofint: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("sizeoflong int: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("sizeoflong long int: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("sizeoffloat: %lu byte(s)\n",(unsigned long)sizeof(e));
return (0);
}
