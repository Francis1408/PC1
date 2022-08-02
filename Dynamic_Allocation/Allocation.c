// Exercício de Alocação Dinâmica
// Dynamic allocaticon exercise 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void criar_vetor(int *v, int n){
int i=0;
while(i<n){
    v[i]=1+rand()%20;
    i++;
    }
}
void exibir_vetor(int *v, int n){
int i=0;
while(i<n){
    printf(" %d",v[i]);
    i++;
    }
}

int main(){
srand(time(0));
int *v=NULL;
int n;
scanf("%d",&n);
v=malloc(n*sizeof(int));
criar_vetor(v,n);
exibir_vetor(v,n);
free(v);
}
