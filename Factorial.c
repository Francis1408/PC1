#include <stdio.h>
int soma(int n1){
int contador, n2,soma;
n2=3;
contador=1;
soma=0;
while(contador<=n1){
    fatorial(n2);
    soma=soma+fatorial(n2);
    contador=contador+1;
    n2=n2+1;

}

return soma;
}

int fatorial(int n2){
int contador,total,erro;
erro=-1;
contador=1;
total=n2;
if(n2<0)
    return erro;
else{
    while(contador<n2){
        total=total*contador;
        contador=contador+1;
    }
    return total;
}

}

int main(){
int n1;
printf("Digite um numero: ");
scanf("%d",&n1);
soma(n1);
printf("\n%d\n",soma(n1));
}

