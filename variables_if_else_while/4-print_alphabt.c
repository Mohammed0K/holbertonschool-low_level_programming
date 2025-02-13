#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except 'e' and 'q'.
 * Return: Return 0 when done.
 */
int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (ch != 'e' && ch != 'q')
            putchar(ch);
    }
    putchar('\n');
    return (0);
}
