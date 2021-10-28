#include <stdio.h>

int main()
{

    int numero;
    scanf("%d", &numero);
    while (numero < 1 || numero > 50)
    {
        printf("el numero %d no se ecuentra en el rango 1 a 50 \n intente de nuevo \n", numero);
        scanf("%d", &numero);
    }

    for (int j = 2; j < numero / 2; j++)
    {
        for (int i = 2; i <= numero; i++)
        {

            if (!(i % j) && (i > j))
                printf("M");
            printf("%d\t ", i);
            if (!(i % 10))
                printf("\n");
        }
        printf("_____");
    }
}