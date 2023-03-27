#include "main.h"

/* Print a percent sign */
int percent_print(void)
{
    return write(1, "%", 1); /* write a percent sign to stdout */
}