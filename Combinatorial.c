// Análise Combinatória para 3 números

#include <stdio.h>

int main(){
int soma,n1,n2,n3,n4;
printf("Indique a Soma: ");
scanf("%d",&soma);
if(soma<=18 && soma>=3){
 n1=1;
    while(n1<=6){
        n2=1; n3=1;
       while(n2<=6){
        if(n1+n2+n3==soma)
        printf("%d,%d,%d\n",n1,n2,n3);
            while(n3<6){
                n3=n3+1;
                if(n1+n2+n3==soma)
                printf("%d,%d,%d\n",n1,n2,n3);
                }
                n3=1;
                n2=n2+1;
        }
        n1=n1+1;

        }
    }


    }

















