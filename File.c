// Exercício de arquivo

#include<stdio.h>
#include<time.h>

void elimina(FILE *arquivo){
int i=0,j=0;
int aux, aux2;
while(i<20){
    fseek(arquivo,sizeof(int)*i,SEEK_SET);
    fread(&aux,sizeof(int),1,arquivo);
        while(j<20){
            fseek(arquivo,sizeof(int)*j,SEEK_SET);
            fread(&aux2,sizeof(int),1,arquivo);
                if(aux==aux2 && i!=j){
                    aux2=1+rand()%20;
                    fseek(arquivo,sizeof(int)*j,SEEK_SET);
                    fwrite(&aux2,sizeof(int),1,arquivo);
                }
                else
                    j++;
        }
        j=0;
        i++;
    }
}

void ler(FILE *arquivo){
int num;
int i=0;
while(i<20){
    fread(&num,sizeof(int),1,arquivo);
    printf(" %d",num);
    i++;
    }

}

void preencher(int *vet){
int i=0;
while(i<20){
    vet[i]=1+rand()%20;
    i++;
    }

}


int main(){
srand(time(0));
FILE *arquivo;
char nome_arquivo[30];
gets(nome_arquivo);
arquivo=fopen(nome_arquivo,"wb");
int vet[20];
preencher(vet);
int aux=0;
while(aux<20){
    fwrite(&vet[aux],sizeof(int),1,arquivo);
    aux++;
    }
fclose(arquivo);
arquivo=fopen(nome_arquivo,"r+b");
ler(arquivo);
printf("\n");
rewind(arquivo);
elimina(arquivo);
rewind(arquivo);
ler(arquivo);


}









