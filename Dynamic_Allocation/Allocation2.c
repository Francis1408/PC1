// Exercício Alocação Dinâmica
// Dynamic allocaticon exercise 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int existir(int *Q,int *W, int i, int contador){
int j=0;
while(j<contador){
    if(Q[i]==W[j])
        return 0;
    j++;
    }
return 1;

}
int compara(int *Q,int *R, int i){
int j=0;
while(j<20){
    if(Q[i]==R[j])
        return 1;
    j++;
    }
return 0;
}

void preencher(int *Q, int *R, int *W){
int contador=0;
int i=0;
while(i<12){
    if(compara(Q,R,i)){
        if(existir(Q,W,i,contador)){
            contador++;
            W=realloc(W,contador*sizeof(int));
            W[contador-1]=Q[i];
            }
        }
    i++;
    }
for(i=0; i<contador; i++){
    printf("|%d",W[i]);
    }
}

int main(){
srand(time(0));
int *Q, *R, *W=0;
int j=0, i=0;
Q=malloc(12*sizeof(int));
R=malloc(20*sizeof(int));
for(i=0; i<12; i++){
    Q[i]=1+rand()%30;
    printf("|%d",Q[i]);
    }
printf("\n");
for(j=0;j<20;j++){
    R[j]=1+rand()%30;
    printf("|%d",R[j]);
    }
printf("\n");
preencher(Q,R,W);
}


