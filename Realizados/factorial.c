#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("ingrese un numero :");
    scanf("%d", &n);
    if (n == 0)printf("El factorial de %d es 1", n);
    else{for (int i = n; i >= 1; i--){factorial *= i;}}
    printf("El factorial de %d es %d", n, factorial);
}