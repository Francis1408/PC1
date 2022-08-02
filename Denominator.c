#include <stdio.h>
float potencia(float t, int n){
int contador,n1;
float pt;
pt=1;
contador=1;
n1=(1+t);
while(contador<=n){
    pt=pt*n1;
    contador=contador+1;

    }
return pt;

}

float VAL(float x, int n, float t){
int contador,n2;
float total;
contador=1;
total=0;
n2=1;
while(contador<=n){
    total=total + x/potencia(t,n2);
    n2=n2+1;
    contador=contador+1;

}
return total;

}

int main(){
int n;
float x,t;
printf("Digite um numero: ");
scanf("%f",&x);
printf("Digite seu denominador: ");
scanf(" %f",&t);
printf("Digite a repeticao: ");
scanf(" %d",&n);
VAL(x,n,t);
printf("\n%f\n",VAL(x,n,t));


}







