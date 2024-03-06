#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j;
    float tabuada;

    for ( i = 1; i <=10; i++)
    {
        printf("Tabuada do %d\n", i);
        for (j = 1 ; j <= 10; j++)
        {
            tabuada = i*j;


            printf("%f\n", tabuada);

        }
        
    }
    
}

