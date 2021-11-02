#include <stdio.h>

int main()
{

    int n;
    long double suma = 0, factorial = 1;
    printf("Ingrese un numero :");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
            factorial = 1;
        else
            for (int j = i; j >= 1; j--)
            {
                factorial *= j;
            }

        //printf("\nfactorial %LE\n",factorial);
        suma += 1 / factorial;
        factorial = 1;
    }
    printf("La sumatoria de %d es %LE", n, suma);
}
