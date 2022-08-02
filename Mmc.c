#include<stdio.h>

int main(){
int vet[10];
for(int i=0;i<10;i++)
    vet[i]=0;

int maior;
int menor;
scanf("%d %d",&menor,&maior);
int resultado,indice;
while(menor<=maior){
    resultado=menor;
    do{
        indice=resultado%10;
        vet[indice]++;
        resultado=resultado/10;
        }while(resultado!=0);
    menor++;
    }
for(int i=0;i<10;i++)
    printf("%d ",vet[i]);
}



