// Generates a random table with values

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int year(int i){
int indice=1,data=2003;
while(indice!=i){
    data++;
    indice++;

}
return data;
}
void maior(int c[8][12]){
int j=0,i=0;
int maior=c[i][j];
int ano, mes;
while(i<8){
    while(j<12){
        if(c[i][j]>maior){
            maior=c[i][j];
            ano=i+1;
            mes=j+1;
            }
        j++;
        }
    j=0;
    i++;
    }
printf("\nO maior consumo ocorreu em %d no mes %d: %d\n",year(ano),mes,maior);


}



void consumo_medio(int c[8][12]){
int j=0,i=0;
float soma=0;
while(j<12){
    while(i<8){
        soma=soma+c[i][j];
        i++;
        }
    printf("\nConsumo medio no mes %d: %.2f\n",j+1,soma/8);
    soma=0;
    i=0;
    j++;
    }
}

void gerar_valores(int c[8][12]){
int j=0,i=0;
int ano=2003;
while(i<8){
    printf("%d ",ano);
    while(j<12){
        printf(" %3d ",c[i][j]);
            j++;
        }
    j=0;
    printf("\n");
    ano++;
    i++;
    }

}




int main(){
int c[8][12];
int i=0, j=0;
srand(time(0));
while(i<8){
    while(j<12){
        c[i][j]=1+rand()%100;
        j++;
        }
    j=0;
    i++;
    }
printf("     Jan  Fev  Mar  Abr  Mai  Jun  Jul  Ago  Set  Out  Nov  Dez\n");
gerar_valores(c);
consumo_medio(c);
maior(c);
}
