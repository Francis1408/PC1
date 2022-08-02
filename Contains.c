// Calcalutes with a random array contains other random array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int quantidade(int v[],int n,int num){
int contador=0;
int indice=0;
while(indice<n){
    if(v[indice]==num)
        contador++;
    indice++;
    }
return contador;

}

int compara(int v1[],int v2[],int n1,int n2){
int indice=0;
int num;
if (n1>n2){
    while(indice<n2){
        num=v2[indice];
        if(quantidade(v2,n2,num)>quantidade(v1,n1,num))
            return 0;
        else
            indice++;
        }
   return 1;
    }

else if(n1<n2){
    while(indice<n1){
        num=v1[indice];
        if(quantidade(v1,n1,num)>quantidade(v2,n2,num))
            return 0;
        else
            indice++;
    }
   return 1;
   }
else if(n1==n2){
    while(indice<n1){
        num=v1[indice];
        if(quantidade(v1,n1,num)==quantidade(v2,n2,num))
            indice++;
        else
            return 0;
        }
   return 1;
    }
}

int main(){
srand(time(0));
int n1,n2;
int indice=0;
n1=1+rand()%15;
n2=1+rand()%15;
int v1[n1],v2[n2];
while(indice<n1){
    v1[indice]=1+rand()%15;
    printf(" %d",v1[indice]);
    indice++;
}
printf("\n");
indice=0;
while(indice<n2){
    v2[indice]=1+rand()%15;
    printf(" %d",v2[indice]);
    indice++;
}
if(compara(v1,v2,n1,n2))
    printf("\nv1=v2\n");
else
    printf("\nv1!=v2\n");

}


