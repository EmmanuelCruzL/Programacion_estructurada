#include <stdio.h>
#include <math.h>


int main()
{
    int n;
    double suma = 0;
    printf("Ingrese un numero :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        //printf("%f + %lf \n", (1 * pow(10, i)), (1 / (pow(10, i))));
        suma += (1 * pow(10, i)) + (1 / (pow(10, i)));
    }
    printf("La suma es:%.2f", suma);
}