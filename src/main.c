#include <stdio.h>
#include "stat.h"

int main(void)
{
    double x[] = {1.1, 2.2, 3.3};

    printf("mean: %f\n", mean(sizeof(x) / sizeof(x[0]), x));

    return 0;
}