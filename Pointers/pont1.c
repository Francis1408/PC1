// exercises using pointers

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gerar(int v[]){
int i=0;
while(i<10){
    v[i]=1+rand()%15;
    i++;
    }
i=0;
while(i<10){
    printf(" %d",v[i]);
    i++;
    }
}
void repetir(int v[]){
int i=0,j=0;
while(i<10){
    while(j<10){
        if(v[i]==v[j] && j!=i)
            v[i]=1+rand()%15;
        else
            j++;
        }
    i++;
    j=0;
    }
i=0;
while(i<10){
    printf(" %d",v[i]);
    i++;
    }

}
void ordem(int *p[],int v[]){
int aux, i=0, j=0;
while(i<10){
    while(j<10){
        if(v[i]<v[j] && i!=j){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
            }
        else
            j++;
        }
        j=0;
        i++;
    }
i=0;
j=0;
while(i<10){
    p[j]=&v[i];
    j++;
    i++;
    }
i=0;
while(i<10){
    printf(" %p",p[i]);
    i++;
    }

}


int main(){
srand(time(0));
int *p[10];
int v[10];
int i=0;
gerar(v);
printf("\n");
repetir(v);
printf("\n");
ordem(p,v);
}




