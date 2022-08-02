// exercises using pointers

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void calc(int *v, int num, int *xmin, int *xmax){
int maior=v[0];
int menor=v[0];
int x=0;
while(x<num){
    if(v[x]>maior){
        xmax=&v[x];
        maior=v[x];
        }
    if(v[x]<menor){
        xmin=&v[x];
        menor=v[x];
        }
    x++;
    }
printf("MAX= %d\n",*xmax);
printf("MIN= %d\n",*xmin);

}
int main(){
int v[15];
int i=0,num;
srand(time(0));
while(i<15){
    v[i]=1+rand()%20;
    printf(" %d",v[i]);
    i++;
    }
int *xmax=&v[0];
int *xmin=&v[0];
printf("\n");
scanf("%d",&num);
calc(v,num,xmin,xmax);

}
