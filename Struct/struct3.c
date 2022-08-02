#include<stdio.h>
#include<stdlib.h>

typedef struct{int dia, mes, ano;}DATA;

typedef struct{
    char Nome[100];
    char Cpf[100];
    DATA Nasc;

}PESSOA;

void preencher(PESSOA *ptr){
printf("Digite o nome: ");
gets((*ptr).Nome);
printf("Digite o CPF: ");
gets((*ptr).Cpf);
printf("Digite a Data de nascimento: ");
scanf(" %d %d %d",&(*ptr).Nasc.dia,&(*ptr).Nasc.mes,&(*ptr).Nasc.ano);
}

void exibir(PESSOA x){
printf("Nome: %s\n ",x.Nome);
printf("CPF: %s\n",x.Cpf);
printf("Data: %d/%d/%d",x.Nasc.dia, x.Nasc.mes, x.Nasc.ano);
}

int main(){
PESSOA x;
PESSOA *ptr=&x;
preencher(ptr);
printf("\n");
exibir(x);
}
