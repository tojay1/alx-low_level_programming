#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
    int n = 402;
    int *p = &n;

    printf("n=%d\n", n);
    *p = 98;
    printf("n=%d\n", n);
    return (0);
}
