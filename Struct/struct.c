// Working with struct

#include<stdio.h>

typedef struct{
    char nome[100];
    int telefone;

}PESSOA;

void compara(char name[], PESSOA p[]){
int i=0, j=0,k=1;
while(j<5){
    while(name[i]!='\0' && p[j].nome[i]!='\0'){
        if(name[i]==p[j].nome[i])
            i++;
        else
            k=0;
        }
    if(k=1){
        printf("%d",p[j].telefone);
        }
    i=0;
    j++;
    k=1;
        }
}





int main(){
PESSOA p[5];
int j=0;
while(j<5){
    gets(p[j].nome);
    scanf(" %d",p[j].telefone);
    getchar();
    j++;
    }
printf("Escreva um nome: ");
char name[100];
gets(name);
compara(name,p);
}
