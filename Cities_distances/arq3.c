#include<stdio.h>
#include<time.h>
void exibir(FILE *arquivo){
rewind(arquivo);
int num;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        fread(&num,sizeof(int),1,arquivo);
        printf(" |%2d",num);
        }
    printf("\n");
    }

}


int main(){
int vet[5][5]={{00,15,30,05,12},{15,00,10,17,28},{30,10,00,03,11},{05,17,03,00,80},{12,28,11,80,00}};
FILE *arquivo;
arquivo=fopen("arq2.bin","wb+");
int i=0;
int j=0;
while(i<5){
    while(j<5){
        fwrite(&vet[i][j],sizeof(int), 1,arquivo);
        j++;
        }
    j=0;
    i++;
    }
exibir(arquivo);
rewind(arquivo);
fclose(arquivo);
}


