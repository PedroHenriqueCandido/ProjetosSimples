#include <stdio.h>
#include <stdlib.h>


int main(void){
    int sec;
    void transformacao(int x);

    printf("Digite os segundos: ");
    scanf("%d",&sec);
    transformacao(sec);

}

void transformacao(int x){
    int h,m,s,r;

    h = x/3600;

    r = x % 3600;

    m = r/60;

    s = r % 60;

    printf("%d:%d:%d",h,m,s);
}