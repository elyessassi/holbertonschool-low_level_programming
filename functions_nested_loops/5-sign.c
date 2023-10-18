#include "main"

/**
 * print_sign - printing sign
 * @n integer to be tested
 * Return: 0 if zero 1 if positive -1 if negative
 */

int print_sign(int n)
{
    if (n > 0)
    {
        _putchar(43);
        _putchar(1);
        return (1);

    }
    if (n == 0)
    {
        _putchar(48);
        _putchar(0);
        return (0);
    }
    else
    {
        _putchar(45);
        _putchar(-1);
        return (-1);
    }
}
