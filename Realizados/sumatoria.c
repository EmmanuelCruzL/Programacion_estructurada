#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float suma=0; 
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        suma +=1 /pow(2,i);
    }
    printf("%.1000f",suma);
}