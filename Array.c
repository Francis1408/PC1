#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int repetidor(int indice, int v[]){
int n=0;
int contador=0;
while(n<15){
    if(v[indice]==v[n]&& indice!=n)
        return 0;
    n++;
}
return 1;
}

void novo_vetor(int v[]){
int indice=0;
int n=indice+1;
srand(time(0));
while(indice<15){
    if(repetidor(indice,v))
        indice++;
    else
        v[indice]=1+rand()%15;
    }

indice=0;
while(indice<15){
    printf(" %d",v[indice]);
    indice++;
}

}



void gerar_vetor(int v[]){
int indice=0;
srand(time(0));
while(indice<15){
    v[indice]=1+rand()%15;
    printf(" %d",v[indice]);
    indice=indice+1;
    }

}

void terceiro_maior(int v[]){
printf("\nO terceiro maior e: %d",v[12]);
}

void ordem(int v[]){
int indice=0;
int n=indice+1;
int aux;
while(indice<15){
    while(n<15){
        if(v[indice]>v[n]){
            aux=v[indice];
            v[indice]=v[n];
            v[n]=aux;
            }
        n=n+1;
        }
    indice=indice+1;
    n=indice+1;
    }
printf("\n");
indice=0;
while(indice<15){
    printf(" %d",v[indice]);
    indice=indice+1;

    }

}

int maior_vetor(int v[]){
int indice=0;
int vetor=v[indice];
while(indice<15){
    if(v[indice]>vetor)
        vetor=v[indice];
    indice=indice+1;
    }
return vetor;
}

float media(int v[]){
float media=0;
int indice=0;
while(indice<15){
    media=media+v[indice];
    indice=indice+1;
    }
media=media/15;
return media;
}

int maior_media(int v[]){
int indice=0;
int contador=0;
while(indice<15){
    if(v[indice]> media(v))
        contador=contador+1;
    indice=indice+1;
    }
return contador;

}

int soma_impares(int v[]){
int soma=0;
int indice=0;
while(indice<15){
    if(v[indice]%2!=0)
        soma=soma+v[indice];
    indice=indice+1;
    }
return soma;

}

int verificar_par(int v[]){
int contador=0;
int indice=0;
while(indice<15){
    if(v[indice]%2==0)
        contador=contador+1;
    indice=indice+1;
    }
return contador;

}

int main(){
int v[15];
gerar_vetor(v);
ordem(v);
terceiro_maior(v);
printf("\nQuantidade de pares: %d\n",verificar_par(v));
printf("Soma dos impares: %d\n",soma_impares(v));
printf("A media e: %.2f\n",media(v));
printf("Quantidade de numeros acima da media: %d\n",maior_media(v));
printf("O maior vetor e: %d\n",maior_vetor(v));
printf("\n");
novo_vetor(v);

}
