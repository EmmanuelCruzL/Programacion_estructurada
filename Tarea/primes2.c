/*
Primos 
dividir numero y sumar 1
rango 1 a 50
para x hasta numero con paso 1 hacer
    si numero % x == 0  entoces
        no es primo

for(inicializacion de variable;expression;incremento){
    sentencias
}

*/
#include <stdio.h>
#include <math.h>

int main()
{

    int numero, isPrime;
    isPrime = 0;
    printf("Rango debe ser entre [1,50]\n");
    do{
        printf("Numero: \n");
        scanf("%d", &numero);
    }while (numero < 1 || numero > 50);
    //operacion = numero / 2;
    //printf("%d", operacion);
    for (int i = 2; i <= numero / 2 ; i++)
    {

        if ((numero % 2) == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 1)
    {
        printf("el numero no es primo");
    }
    else
    {
        printf("El numero es primo");
    }
}