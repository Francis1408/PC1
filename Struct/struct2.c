// Working with struct

#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[100];
    float preco;
} FRUTA;

float calcula(char *esc, int qtde,int i,FRUTA *tipo){
float valor=0;
int k=1,b=0,c=0;

while(b<i){
    while(tipo[b].nome[c]!='\0'){
    if(tipo[b].nome[c]==esc[c])
        c++;
    else
        k=0;
        }
    if(k==1){
        valor=tipo[b].preco*qtde;
        return valor;

        }
    else{
        c=0;
        k=1;
        b++;
        }
    }
return valor;
}



void escolher(int j, int i, FRUTA *tipo){
int a=0,qtde;
char esc[100];
float total=0;
while(a<j){
    scanf("%s %d",&esc,&qtde);
    getchar();
    total=total+calcula(esc,qtde,i,tipo);
    a++;
    }
printf("%.2f",total);
}



int main(){
int i;
scanf("%d",&i);
FRUTA tipo[i];
int j=0;
while(j<i){
    scanf("%s %f",&tipo[j].nome, &tipo[j].preco);
    getchar();
    j++;
    }
scanf("%d",&j);
getchar();
escolher(j,i,tipo);
}

