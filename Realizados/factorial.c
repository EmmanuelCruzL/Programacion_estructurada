#include <stdio.h>

int main()
{
    double n, factorial = 1;
    printf("ingrese un numero :");
    scanf("%lf", &n);
    if (n == 0)printf("El factorial de %lf es 1", n);
    else{for (int i = n; i >= 1; i--){factorial *= i;}}
    printf("El factorial de %lf es %lf", n, factorial);
}