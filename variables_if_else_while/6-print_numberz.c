#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10 starting from 0.
 * Return: Return 0 when done.
 */
int main(void)
{
    int war;

    for (war = '0'; war <= '9'; war++)
    {
        putchar(war);
    }
    putchar('\n');
    return (0);
}
