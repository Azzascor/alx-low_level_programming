include <stdio.h>
/**
 * main - a program the sizeof various computer types
 * return 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of the char: %1u byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %1u byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %1u byte(s)\n" (unsigned long)sizeof(c));
printf("size of a long long int: %1u bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %1u bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
