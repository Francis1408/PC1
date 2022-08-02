// Finds the lowest and highest value on each column 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 4
#define N 4
void gerar_matriz(int m[M][N]){
srand(time(0));
int j=0,i=0;
while(i<M){
    while(j<N){
        m[i][j]=1+rand()%15;
        printf(" %2d",m[i][j]);
        j++;
        }
   printf("\n");
   j=0;
   i++;
    }

}

int main(){
int m[M][N];
int v1[N],v2[N];
gerar_matriz(m);
int i=0,j=0;
int maior=m[i][j],menor=m[i][j];
v1[j]=maior;
v2[j]=menor;

while(j<N){
    while(i<M){
        if(m[i][j]>maior){
            maior=m[i][j];
            v1[j]=maior;
        }
        if(m[i][j]<menor){
            menor=m[i][j];
            v2[j]=menor;
        }
        i++;
    }
    i=0;
    j++;
    maior=m[i][j];
    menor=m[i][j];
    v1[j]=maior;
    v2[j]=menor;
}
j=0;
printf("\nv1:");
while(j<N){
    printf(" %d",v1[j]);
    j++;

    }
j=0;
printf("\nv2:");
while(j<N){
    printf(" %d",v2[j]);
    j++;

    }
}
