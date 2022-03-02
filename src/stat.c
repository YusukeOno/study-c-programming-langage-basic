#include <stdlib.h>
#include <math.h>
#include "stat.h"

double mean(int n, double *data)
{
    int i;
    double m = 0;

    if (n <= 0)
        return nan(NULL);

    for (i = 0; i < n; i++)
        m += data[i];

    return m;
}