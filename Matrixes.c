// Operações com matrizes
// Operations with matrixes 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int repeticao(int m[4][5],int i,int j){
int a=0;
int b=0;

while(a<4){
    while(b<5){
        if(m[i][j]==m[a][b] && (i!=a || j!=b) )
            return 0;
        else
            b++;
        }
        b=0;
        a++;
    }
return 1;
}


void novo_vetor(int m[4][5]){

int j=0,i=0;
srand(time(0));
    while(i<4){
        while(j<5){
            if(repeticao(m,i,j))
                j++;
            else
                m[i][j]=1+rand()%20;
            }
         j=0;
         i++;
    }
j=0,i=0;
while(i<4){
    while(j<5){
        printf(" %d",m[i][j]);
        j++;
        }
    printf("\n");
    j=0;
    i++;
    }

}


int maior_valor(int m[4][5]){

int j=0,i=0;
int maior=m[0][0];
while(i<4){
    while(j<5){
        if(m[i][j]>maior)
            maior=m[i][j];
        j++;

    }
    j=0;
    i++;

}
return maior;
}

int repetidor(int m[4][5]){

int contador=0;
int i=0, j=0;
while(i<4){
    while(j<5){
        if(m[i][j]==maior_valor(m))
            contador++;
        j++;
        }
    j=0;
    i++;
    }
return contador;
}
int segundo_valor(int m[4][5]){

int j=0,i=0;
int segundo=0;
if(repetidor(m)>=2)
    return maior_valor(m);
else
    while(i<4){
        while(j<5){
            if(m[i][j]>segundo && m[i][j]!=maior_valor(m))
                segundo=m[i][j];
            j++;
        }
      j=0;
      i++;
    }
return segundo;
}

int media(int m[4][5]){

int soma=0;
int j=0,i=0;
while(i<4){
    while(j<5){
      soma=soma+m[i][j];
      j++;
        }
    j=0;
    i++;
    }
soma=soma/20;
return soma;
}

int maiores(int m[4][5]){

int i=0,j=0;
int contador=0;
while(i<4){
    while(j<5){
        if(m[i][j]>media(m))
            contador++;
        j++;
        }
    j=0;
    i++;
    }
return contador;
}

int impares(int m[4][5]){

int soma=0;
int i=0,j=0;
while(i<4){
    while(j<5){
        if(m[i][j]%2==!0)
            soma=soma+m[i][j];
        j++;
        }
       j=0;
       i++;
    }
soma=soma;
return soma;
}

int pares(int m[4][5]){
int i=0,j=0;
int contador=0;
while(i<4){
    while(j<5){
        if(m[i][j]%2==0)
            contador++;
        j++;
        }
     j=0;
     i++;
}
return contador;

}

int main(){
int m[4][5];
int i=0,j=0;
srand(time(0));
while(i<4){
    while(j<5){
        m[i][j]=1+rand()%20;
        printf(" %d",m[i][j]);
        j++;
        }
    printf("\n");
    j=0;
    i++;
}
printf("\nQtde numeros pares: %d",pares(m));
printf("\nSoma dos impares: %d",impares(m));
printf("\nMedia: %d",media(m));
printf("\nNum maiores que a media: %d",maiores(m));
printf("\nMaior num: %d",maior_valor(m));
printf("\nSegundo maior: %d\n",segundo_valor(m));
novo_vetor(m);
}






