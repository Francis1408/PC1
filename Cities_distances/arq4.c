#include<stdio.h>
#include<stdlib.h>

int calcula(FILE *arquivo, int N, int *vis){
int soma=0,total=0,i=0;
int origem, destino, posicao;
N=N-1;
while(i<N){
    origem=vis[i];
    destino=vis[i+1];
    origem--;destino--;
    posicao=(origem*5)+destino;
    fseek(arquivo,sizeof(int)*posicao,SEEK_SET);
    fread(&soma,sizeof(int),1,arquivo);
    total=total+soma;
    i++;

    }
return total;
}


int main(){
FILE *arquivo;
arquivo=fopen("arq2.bin","rb");
int N;
printf("Quantas cidades visitou: ");
scanf("%d",&N);
getchar();
int vis[N];
printf("Digite a sequencia de cidades visitadas: ");
for(int i=0; i<N; i++)
    scanf("%d",&vis[i]);
printf("Foram percorridos: %d km",calcula(arquivo,N,vis));
fclose(arquivo);

}
