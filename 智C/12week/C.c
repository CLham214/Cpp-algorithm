
#include <stdio.h>
#include <math.h>

double f(double x)
{
    return 2 * x + 1;
}

double integral(double a, double b, long n, double (*p)(double))
{
    double h = (b - a) / n;
    double sum = 0;

    for (long i = 0; i < n; i++)
    {
        double x1 = a + i * h;
        double x2 = a + (i + 1) * h;

        sum += (p(x1) + p(x2)) * h / 2;
    }

    return sum;
}

int main()
{
    double a, b;
    long n;

    scanf("a=%lf,b=%lf,n=%ld", &a, &b, &n);

    if (n <= 0)
        return 1;

    printf("integral cos: %.6f\n", integral(a, b, n, cos));
    printf("integral sin: %.6f\n", integral(a, b, n, sin));
    printf("integral 2x+1: %.6f\n", integral(a, b, n, f));

    return 0;
}
