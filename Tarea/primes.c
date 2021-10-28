/*
Primos 
dividir numero y sumar 1
rango 1 a 50
para x hasta numero con paso 1 hacer
    si numero % x == 0  entoces
        no es primo
    

*/
#include <stdio.h>
#include <math.h>

int main()
{

    int numero, flag;
    flag = 0;
    scanf("%d", &numero);
    while (numero < 1 || numero > 50)
    {
        printf("el numero %d no se ecuentra en el rango 1 a 50 \n intente de nuevo \n", numero);
        scanf("%d", &numero);
    }
    //operacion = numero / 2;
    //printf("%d", operacion);
    for (int i = 2; i <= numero /2 ; i++)
    {

        if ((numero % 2) == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("el numero no es primo");

    }else{
        printf("El numero es primo");
    }

}