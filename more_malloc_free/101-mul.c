#include <unistd.h>
#include <stdlib.h>
#include <alloca.h>

int _digit(char *str);
int _strlen(char *str);
void _errors(void);
int _putchar(char c);

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Description: If the number of arguments is not 3 or if any argument
 *              contains a non-digit, the program prints "Error" followed
 *              by a new line and exits with status 98.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int len1, len2, len;
    int *result;
    int i, j, digit1, digit2, carry, printed;
    char c;
    char *s1, *s2;

    printed = 0;
    if (argc != 3 || !_digit(argv[1]) || !_digit(argv[2]))
        _errors();
    s1 = argv[1];
    s2 = argv[2];
    len1 = _strlen(s1);
    len2 = _strlen(s2);
    len = len1 + len2 + 1;
    /* Allocate memory on the stack using alloca */
    result = (int *)alloca(sizeof(int) * len);
    for (i = 0; i < len; i++)
        result[i] = 0;
    for (i = len1 - 1; i >= 0; i--)
    {
        digit1 = s1[i] - '0';
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            digit2 = s2[j] - '0';
            carry += result[i + j + 1] + (digit1 * digit2);
            result[i + j + 1] = carry % 10;
            carry /= 10;
        }
        result[i + j + 1] += carry;
    }
    for (i = 0; i < len - 1; i++)
    {
        if (result[i])
            printed = 1;
        if (printed)
        {
            c = result[i] + '0';
            write(1, &c, 1);
        }
    }
    if (!printed)
        write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}

/**
 * _digit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int _digit(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

/**
 * _errors - Prints "Error" to stdout and exits with status 98.
 */
void _errors(void)
{
    char *err = "Error\n";
    int i = 0;

    while (err[i])
    {
        _putchar(err[i]);
        i++;
    }
    exit(98);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

