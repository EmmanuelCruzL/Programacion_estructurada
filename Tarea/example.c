#include <stdio.h>


int main(){
    int x;
    scanf("%d",&x);
    for(int j=2; j<x/2; j ++){
        for (int i = 2; i <= x; i++)
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