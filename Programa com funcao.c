#include<stdio.h>
#include<stdlib.h>

int main()
{
    int res, num;
    int verifica(int x);

    printf("Digite um numero: "); 
    scanf("%d",&num);

    res = verifica(num);

    if ( res == 0)
    {
        printf("Numero positivo");
    }
    else{
        printf("Numero negativo");
    }
    



}

int verifica(int x){
    if(x >= 0){
    return 0;
}
    else{ 
    return 1;
    }

}