#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char tecla1;
    char tecla2;
    int suma = 0;
    scanf("%c %c", &tecla1,&tecla2);
    
    if ((tecla1 >= '0') && (tecla1 <= '9'))
    {
        printf("El digito hexadecimal %c a decimal es = %d\n ", tecla1, (tecla1 - 49 + 1));
        suma += tecla1 - 49 + 1;
    }
    else if ((tolower(tecla1) >= 'a') && (tolower(tecla1) <= 'f'))
    {
        printf("El digito hexadecimal %c a decimal es = %d\n ", tecla1, (tecla1 - 97 + 10));
        suma += tecla1 - 97 + 10;
    }
    if ((tecla2 >= '0') && (tecla2 <= '9'))
    {
        printf("El digito hexadecimal %c a decimal es = %d\n ", tecla2, (tecla2 - 49 + 1));
        suma += (tecla2 - 49 + 1) * 16;

    }
    else if ((tolower(tecla2) >= 'a') && (tolower(tecla2) <= 'f'))
    {
        printf("El digito hexadecimal %c a decimal es = %d\n ", tecla2, (tecla2 - 97 + 10));
        suma += tecla2 - 97 + 10;
    }
    printf("la suma es %d",suma);
}