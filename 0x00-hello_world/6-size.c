#include <stdio.h>
/**
 * main - A program that prints the size of various types on computer
 * Return: 0 (Pass)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char:%lu\n", (unsigned long)sizeof(a));
printf("Size of an int:%lu\n", (unsigned long)sizeof(b));
printf("Size of a long int:%lu\n", (unsigned long)sizeof(c));
printf("Size of a long long:%lu\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu\n", (unsigned long)sizeof(f));
retur:(0);
}
