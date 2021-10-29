#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("Desplazamiento a la izquierda");
    for(int i=7; i>=0; i--){
        printf("Desplazamiento %d valor b= %d\n", i, n << i);
    }
}