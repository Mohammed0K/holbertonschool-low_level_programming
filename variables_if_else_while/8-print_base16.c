#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase.
 * Return: Return 0 when done.
 */
int main(void)
{
    int ch;

    for (ch = '0'; ch <= '9'; ch++)
    {
        putchar(ch);
    }
    for (ch = 'a'; ch <= 'f'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
}
